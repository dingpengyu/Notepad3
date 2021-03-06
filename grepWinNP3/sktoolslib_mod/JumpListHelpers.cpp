﻿// sktoolslib - common files for SK tools

// Copyright (C) 2018, 2020-2021 - Stefan Kueng

// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software Foundation,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
//
#include "stdafx.h"
#include "SmartHandle.h"
#include "JumpListHelpers.h"
#include <shellapi.h>
#include <Shlobj.h>
#include <propvarutil.h>
#include <propsys.h>
#include <propkey.h>
#include <wrl.h>
using Microsoft::WRL::ComPtr;

HRESULT SetAppID(LPCWSTR appID)
{
    // set the AppID
    using SetCurrentProcessExplicitAppUserModelIdfn = HRESULT STDAPICALLTYPE(PCWSTR appId);
    CAutoLibrary                   hShell = LoadLibraryExW(L"Shell32.dll", nullptr, LOAD_LIBRARY_SEARCH_SYSTEM32);
    if (hShell)
    {
        SetCurrentProcessExplicitAppUserModelIdfn *pfnSetCurrentProcessExplicitAppUserModelID = reinterpret_cast<SetCurrentProcessExplicitAppUserModelIdfn *>(GetProcAddress(hShell, "SetCurrentProcessExplicitAppUserModelID"));
        if (pfnSetCurrentProcessExplicitAppUserModelID)
        {
            return pfnSetCurrentProcessExplicitAppUserModelID(appID);
        }
    }
    return E_FAIL;
}

HRESULT CreateShellLink(PCWSTR pszArguments, PCWSTR pszTitle, int iconIndex, bool asAdmin, ComPtr<IShellLink> *ppsl)
{
    ComPtr<IShellLink> psl;
    HRESULT            hr = CoCreateInstance(CLSID_ShellLink, nullptr, CLSCTX_INPROC_SERVER, IID_PPV_ARGS(psl.GetAddressOf()));
    if (FAILED(hr))
        return hr;

    WCHAR szAppPath[MAX_PATH] = {0};
    if (GetModuleFileName(nullptr, szAppPath, _countof(szAppPath)) == 0)
    {
        hr = HRESULT_FROM_WIN32(GetLastError());
        return hr;
    }
    hr = psl->SetPath(szAppPath);
    if (FAILED(hr))
        return hr;

    hr = psl->SetArguments(pszArguments);
    if (FAILED(hr))
        return hr;

    hr = psl->SetIconLocation(szAppPath, iconIndex);
    if (FAILED(hr))
        return hr;

    ComPtr<IPropertyStore> pps;
    hr = psl.As(&pps);
    if (FAILED(hr))
        return hr;

    if (asAdmin)
    {
        ComPtr<IShellLinkDataList> pdl;
        hr = psl.As(&pdl);
        if (SUCCEEDED(hr))
        {
            DWORD dwFlags = 0;
            hr            = pdl->GetFlags(&dwFlags);
            if (SUCCEEDED(hr))
            {
                hr = pdl->SetFlags(dwFlags | SLDF_RUNAS_USER | SLDF_ALLOW_LINK_TO_LINK);
            }
        }
    }

    PROPVARIANT propVar;
    hr = InitPropVariantFromString(pszTitle, &propVar);
    if (SUCCEEDED(hr))
    {
        hr = pps->SetValue(PKEY_Title, propVar);
        if (SUCCEEDED(hr))
        {
            hr = pps->Commit();
            if (SUCCEEDED(hr))
            {
                hr = psl.As(ppsl);
            }
        }
        PropVariantClear(&propVar);
    }
    return hr;
}

HRESULT CreateSeparatorLink(ComPtr<IShellLink> *ppsl)
{
    ComPtr<IPropertyStore> pps;
    HRESULT                hr = CoCreateInstance(CLSID_ShellLink, nullptr, CLSCTX_INPROC_SERVER, IID_PPV_ARGS(pps.GetAddressOf()));
    if (FAILED(hr))
        return hr;

    PROPVARIANT propVar;
    hr = InitPropVariantFromBoolean(TRUE, &propVar);
    if (FAILED(hr))
        return hr;

    hr = pps->SetValue(PKEY_AppUserModel_IsDestListSeparator, propVar);
    if (SUCCEEDED(hr))
    {
        hr = pps->Commit();
        if (SUCCEEDED(hr))
        {
            hr = pps.As(ppsl);
        }
    }
    PropVariantClear(&propVar);
    return hr;
}

bool IsItemInArray(IShellItem *psi, IObjectArray *poaRemoved)
{
    UINT cItems;
    if (FAILED(poaRemoved->GetCount(&cItems)))
        return false;

    bool fRet = false;
    for (UINT i = 0; !fRet && i < cItems; i++)
    {
        ComPtr<IShellItem> psiCompare;
        if (FAILED(poaRemoved->GetAt(i, IID_PPV_ARGS(&psiCompare))))
            continue;
        int iOrder;
        fRet = SUCCEEDED(psiCompare->Compare(psi, SICHINT_CANONICAL, &iOrder)) && (0 == iOrder);
    }
    return fRet;
}

HRESULT DeleteJumpList(LPCWSTR appID)
{
    ComPtr<ICustomDestinationList> pcdl;
    HRESULT                        hr = CoCreateInstance(CLSID_DestinationList, nullptr, CLSCTX_INPROC_SERVER, IID_PPV_ARGS(pcdl.GetAddressOf()));
    if (SUCCEEDED(hr))
    {
        hr = pcdl->DeleteList(appID);
    }
    return hr;
}

HRESULT SetRelaunchCommand(HWND hWnd, LPCWSTR appID, LPCWSTR commandLine, LPCWSTR dispName, LPCWSTR icon)
{
    CoInitializeEx(nullptr, COINIT_APARTMENTTHREADED);
    // hWnd must be a top-level window
    while (GetParent(hWnd))
        hWnd = GetParent(hWnd);

    ComPtr<IPropertyStore> pps;
    auto                   hRes = SHGetPropertyStoreForWindow(hWnd, IID_PPV_ARGS(&pps));
    if (SUCCEEDED(hRes))
    {
        PROPVARIANT pvId, pvRelaunchCmd, pvDispName, pvIcon;

        hRes = InitPropVariantFromString(appID, &pvId);
        if (SUCCEEDED(hRes))
        {
            hRes = pps->SetValue(PKEY_AppUserModel_ID, pvId);
            if (SUCCEEDED(hRes))
            {
                hRes = InitPropVariantFromString(commandLine, &pvRelaunchCmd);
                if (SUCCEEDED(hRes))
                {
                    hRes = pps->SetValue(PKEY_AppUserModel_RelaunchCommand, pvRelaunchCmd);
                    if (SUCCEEDED(hRes))
                    {
                        hRes = InitPropVariantFromString(dispName, &pvDispName);
                        if (SUCCEEDED(hRes))
                        {
                            hRes = pps->SetValue(PKEY_AppUserModel_RelaunchDisplayNameResource, pvDispName);
                            if (icon)
                            {
                                hRes = InitPropVariantFromString(icon, &pvIcon);
                                if (SUCCEEDED(hRes))
                                {
                                    hRes = pps->SetValue(PKEY_AppUserModel_RelaunchIconResource, pvIcon);
                                }
                            }
                            hRes = pps->Commit();
                            hRes = PropVariantClear(&pvDispName);
                        }
                    }
                    hRes = PropVariantClear(&pvRelaunchCmd);
                }
            }
            hRes = PropVariantClear(&pvId);
        }
    }
    CoUninitialize();

    return hRes;
}