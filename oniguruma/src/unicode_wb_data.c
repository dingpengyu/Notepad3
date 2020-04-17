/* unicode_wb_data.c: Generated by make_unicode_wb_data.py. */
/*-
 * Copyright (c) 2019-2020  K.Kosako
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#define WORD_BREAK_PROPERTY_VERSION  130000

/*
ALetter
CR
Double_Quote
Extend
ExtendNumLet
Format
Hebrew_Letter
Katakana
LF
MidLetter
MidNum
MidNumLet
Newline
Numeric
Regional_Indicator
Single_Quote
WSegSpace
ZWJ
*/

static int WB_RANGE_NUM = 993;
static WB_RANGE_TYPE WB_RANGES[] = {
 {0x00000a, 0x00000a, WB_LF },
 {0x00000b, 0x00000c, WB_Newline },
 {0x00000d, 0x00000d, WB_CR },
 {0x000020, 0x000020, WB_WSegSpace },
 {0x000022, 0x000022, WB_Double_Quote },
 {0x000027, 0x000027, WB_Single_Quote },
 {0x00002c, 0x00002c, WB_MidNum },
 {0x00002e, 0x00002e, WB_MidNumLet },
 {0x000030, 0x000039, WB_Numeric },
 {0x00003a, 0x00003a, WB_MidLetter },
 {0x00003b, 0x00003b, WB_MidNum },
 {0x000041, 0x00005a, WB_ALetter },
 {0x00005f, 0x00005f, WB_ExtendNumLet },
 {0x000061, 0x00007a, WB_ALetter },
 {0x000085, 0x000085, WB_Newline },
 {0x0000aa, 0x0000aa, WB_ALetter },
 {0x0000ad, 0x0000ad, WB_Format },
 {0x0000b5, 0x0000b5, WB_ALetter },
 {0x0000b7, 0x0000b7, WB_MidLetter },
 {0x0000ba, 0x0000ba, WB_ALetter },
 {0x0000c0, 0x0000d6, WB_ALetter },
 {0x0000d8, 0x0000f6, WB_ALetter },
 {0x0000f8, 0x0002d7, WB_ALetter },
 {0x0002de, 0x0002ff, WB_ALetter },
 {0x000300, 0x00036f, WB_Extend },
 {0x000370, 0x000374, WB_ALetter },
 {0x000376, 0x000377, WB_ALetter },
 {0x00037a, 0x00037d, WB_ALetter },
 {0x00037e, 0x00037e, WB_MidNum },
 {0x00037f, 0x00037f, WB_ALetter },
 {0x000386, 0x000386, WB_ALetter },
 {0x000387, 0x000387, WB_MidLetter },
 {0x000388, 0x00038a, WB_ALetter },
 {0x00038c, 0x00038c, WB_ALetter },
 {0x00038e, 0x0003a1, WB_ALetter },
 {0x0003a3, 0x0003f5, WB_ALetter },
 {0x0003f7, 0x000481, WB_ALetter },
 {0x000483, 0x000489, WB_Extend },
 {0x00048a, 0x00052f, WB_ALetter },
 {0x000531, 0x000556, WB_ALetter },
 {0x000559, 0x00055c, WB_ALetter },
 {0x00055e, 0x00055e, WB_ALetter },
 {0x00055f, 0x00055f, WB_MidLetter },
 {0x000560, 0x000588, WB_ALetter },
 {0x000589, 0x000589, WB_MidNum },
 {0x00058a, 0x00058a, WB_ALetter },
 {0x000591, 0x0005bd, WB_Extend },
 {0x0005bf, 0x0005bf, WB_Extend },
 {0x0005c1, 0x0005c2, WB_Extend },
 {0x0005c4, 0x0005c5, WB_Extend },
 {0x0005c7, 0x0005c7, WB_Extend },
 {0x0005d0, 0x0005ea, WB_Hebrew_Letter },
 {0x0005ef, 0x0005f2, WB_Hebrew_Letter },
 {0x0005f3, 0x0005f3, WB_ALetter },
 {0x0005f4, 0x0005f4, WB_MidLetter },
 {0x000600, 0x000605, WB_Format },
 {0x00060c, 0x00060d, WB_MidNum },
 {0x000610, 0x00061a, WB_Extend },
 {0x00061c, 0x00061c, WB_Format },
 {0x000620, 0x00064a, WB_ALetter },
 {0x00064b, 0x00065f, WB_Extend },
 {0x000660, 0x000669, WB_Numeric },
 {0x00066b, 0x00066b, WB_Numeric },
 {0x00066c, 0x00066c, WB_MidNum },
 {0x00066e, 0x00066f, WB_ALetter },
 {0x000670, 0x000670, WB_Extend },
 {0x000671, 0x0006d3, WB_ALetter },
 {0x0006d5, 0x0006d5, WB_ALetter },
 {0x0006d6, 0x0006dc, WB_Extend },
 {0x0006dd, 0x0006dd, WB_Format },
 {0x0006df, 0x0006e4, WB_Extend },
 {0x0006e5, 0x0006e6, WB_ALetter },
 {0x0006e7, 0x0006e8, WB_Extend },
 {0x0006ea, 0x0006ed, WB_Extend },
 {0x0006ee, 0x0006ef, WB_ALetter },
 {0x0006f0, 0x0006f9, WB_Numeric },
 {0x0006fa, 0x0006fc, WB_ALetter },
 {0x0006ff, 0x0006ff, WB_ALetter },
 {0x00070f, 0x00070f, WB_Format },
 {0x000710, 0x000710, WB_ALetter },
 {0x000711, 0x000711, WB_Extend },
 {0x000712, 0x00072f, WB_ALetter },
 {0x000730, 0x00074a, WB_Extend },
 {0x00074d, 0x0007a5, WB_ALetter },
 {0x0007a6, 0x0007b0, WB_Extend },
 {0x0007b1, 0x0007b1, WB_ALetter },
 {0x0007c0, 0x0007c9, WB_Numeric },
 {0x0007ca, 0x0007ea, WB_ALetter },
 {0x0007eb, 0x0007f3, WB_Extend },
 {0x0007f4, 0x0007f5, WB_ALetter },
 {0x0007f8, 0x0007f8, WB_MidNum },
 {0x0007fa, 0x0007fa, WB_ALetter },
 {0x0007fd, 0x0007fd, WB_Extend },
 {0x000800, 0x000815, WB_ALetter },
 {0x000816, 0x000819, WB_Extend },
 {0x00081a, 0x00081a, WB_ALetter },
 {0x00081b, 0x000823, WB_Extend },
 {0x000824, 0x000824, WB_ALetter },
 {0x000825, 0x000827, WB_Extend },
 {0x000828, 0x000828, WB_ALetter },
 {0x000829, 0x00082d, WB_Extend },
 {0x000840, 0x000858, WB_ALetter },
 {0x000859, 0x00085b, WB_Extend },
 {0x000860, 0x00086a, WB_ALetter },
 {0x0008a0, 0x0008b4, WB_ALetter },
 {0x0008b6, 0x0008c7, WB_ALetter },
 {0x0008d3, 0x0008e1, WB_Extend },
 {0x0008e2, 0x0008e2, WB_Format },
 {0x0008e3, 0x000903, WB_Extend },
 {0x000904, 0x000939, WB_ALetter },
 {0x00093a, 0x00093c, WB_Extend },
 {0x00093d, 0x00093d, WB_ALetter },
 {0x00093e, 0x00094f, WB_Extend },
 {0x000950, 0x000950, WB_ALetter },
 {0x000951, 0x000957, WB_Extend },
 {0x000958, 0x000961, WB_ALetter },
 {0x000962, 0x000963, WB_Extend },
 {0x000966, 0x00096f, WB_Numeric },
 {0x000971, 0x000980, WB_ALetter },
 {0x000981, 0x000983, WB_Extend },
 {0x000985, 0x00098c, WB_ALetter },
 {0x00098f, 0x000990, WB_ALetter },
 {0x000993, 0x0009a8, WB_ALetter },
 {0x0009aa, 0x0009b0, WB_ALetter },
 {0x0009b2, 0x0009b2, WB_ALetter },
 {0x0009b6, 0x0009b9, WB_ALetter },
 {0x0009bc, 0x0009bc, WB_Extend },
 {0x0009bd, 0x0009bd, WB_ALetter },
 {0x0009be, 0x0009c4, WB_Extend },
 {0x0009c7, 0x0009c8, WB_Extend },
 {0x0009cb, 0x0009cd, WB_Extend },
 {0x0009ce, 0x0009ce, WB_ALetter },
 {0x0009d7, 0x0009d7, WB_Extend },
 {0x0009dc, 0x0009dd, WB_ALetter },
 {0x0009df, 0x0009e1, WB_ALetter },
 {0x0009e2, 0x0009e3, WB_Extend },
 {0x0009e6, 0x0009ef, WB_Numeric },
 {0x0009f0, 0x0009f1, WB_ALetter },
 {0x0009fc, 0x0009fc, WB_ALetter },
 {0x0009fe, 0x0009fe, WB_Extend },
 {0x000a01, 0x000a03, WB_Extend },
 {0x000a05, 0x000a0a, WB_ALetter },
 {0x000a0f, 0x000a10, WB_ALetter },
 {0x000a13, 0x000a28, WB_ALetter },
 {0x000a2a, 0x000a30, WB_ALetter },
 {0x000a32, 0x000a33, WB_ALetter },
 {0x000a35, 0x000a36, WB_ALetter },
 {0x000a38, 0x000a39, WB_ALetter },
 {0x000a3c, 0x000a3c, WB_Extend },
 {0x000a3e, 0x000a42, WB_Extend },
 {0x000a47, 0x000a48, WB_Extend },
 {0x000a4b, 0x000a4d, WB_Extend },
 {0x000a51, 0x000a51, WB_Extend },
 {0x000a59, 0x000a5c, WB_ALetter },
 {0x000a5e, 0x000a5e, WB_ALetter },
 {0x000a66, 0x000a6f, WB_Numeric },
 {0x000a70, 0x000a71, WB_Extend },
 {0x000a72, 0x000a74, WB_ALetter },
 {0x000a75, 0x000a75, WB_Extend },
 {0x000a81, 0x000a83, WB_Extend },
 {0x000a85, 0x000a8d, WB_ALetter },
 {0x000a8f, 0x000a91, WB_ALetter },
 {0x000a93, 0x000aa8, WB_ALetter },
 {0x000aaa, 0x000ab0, WB_ALetter },
 {0x000ab2, 0x000ab3, WB_ALetter },
 {0x000ab5, 0x000ab9, WB_ALetter },
 {0x000abc, 0x000abc, WB_Extend },
 {0x000abd, 0x000abd, WB_ALetter },
 {0x000abe, 0x000ac5, WB_Extend },
 {0x000ac7, 0x000ac9, WB_Extend },
 {0x000acb, 0x000acd, WB_Extend },
 {0x000ad0, 0x000ad0, WB_ALetter },
 {0x000ae0, 0x000ae1, WB_ALetter },
 {0x000ae2, 0x000ae3, WB_Extend },
 {0x000ae6, 0x000aef, WB_Numeric },
 {0x000af9, 0x000af9, WB_ALetter },
 {0x000afa, 0x000aff, WB_Extend },
 {0x000b01, 0x000b03, WB_Extend },
 {0x000b05, 0x000b0c, WB_ALetter },
 {0x000b0f, 0x000b10, WB_ALetter },
 {0x000b13, 0x000b28, WB_ALetter },
 {0x000b2a, 0x000b30, WB_ALetter },
 {0x000b32, 0x000b33, WB_ALetter },
 {0x000b35, 0x000b39, WB_ALetter },
 {0x000b3c, 0x000b3c, WB_Extend },
 {0x000b3d, 0x000b3d, WB_ALetter },
 {0x000b3e, 0x000b44, WB_Extend },
 {0x000b47, 0x000b48, WB_Extend },
 {0x000b4b, 0x000b4d, WB_Extend },
 {0x000b55, 0x000b57, WB_Extend },
 {0x000b5c, 0x000b5d, WB_ALetter },
 {0x000b5f, 0x000b61, WB_ALetter },
 {0x000b62, 0x000b63, WB_Extend },
 {0x000b66, 0x000b6f, WB_Numeric },
 {0x000b71, 0x000b71, WB_ALetter },
 {0x000b82, 0x000b82, WB_Extend },
 {0x000b83, 0x000b83, WB_ALetter },
 {0x000b85, 0x000b8a, WB_ALetter },
 {0x000b8e, 0x000b90, WB_ALetter },
 {0x000b92, 0x000b95, WB_ALetter },
 {0x000b99, 0x000b9a, WB_ALetter },
 {0x000b9c, 0x000b9c, WB_ALetter },
 {0x000b9e, 0x000b9f, WB_ALetter },
 {0x000ba3, 0x000ba4, WB_ALetter },
 {0x000ba8, 0x000baa, WB_ALetter },
 {0x000bae, 0x000bb9, WB_ALetter },
 {0x000bbe, 0x000bc2, WB_Extend },
 {0x000bc6, 0x000bc8, WB_Extend },
 {0x000bca, 0x000bcd, WB_Extend },
 {0x000bd0, 0x000bd0, WB_ALetter },
 {0x000bd7, 0x000bd7, WB_Extend },
 {0x000be6, 0x000bef, WB_Numeric },
 {0x000c00, 0x000c04, WB_Extend },
 {0x000c05, 0x000c0c, WB_ALetter },
 {0x000c0e, 0x000c10, WB_ALetter },
 {0x000c12, 0x000c28, WB_ALetter },
 {0x000c2a, 0x000c39, WB_ALetter },
 {0x000c3d, 0x000c3d, WB_ALetter },
 {0x000c3e, 0x000c44, WB_Extend },
 {0x000c46, 0x000c48, WB_Extend },
 {0x000c4a, 0x000c4d, WB_Extend },
 {0x000c55, 0x000c56, WB_Extend },
 {0x000c58, 0x000c5a, WB_ALetter },
 {0x000c60, 0x000c61, WB_ALetter },
 {0x000c62, 0x000c63, WB_Extend },
 {0x000c66, 0x000c6f, WB_Numeric },
 {0x000c80, 0x000c80, WB_ALetter },
 {0x000c81, 0x000c83, WB_Extend },
 {0x000c85, 0x000c8c, WB_ALetter },
 {0x000c8e, 0x000c90, WB_ALetter },
 {0x000c92, 0x000ca8, WB_ALetter },
 {0x000caa, 0x000cb3, WB_ALetter },
 {0x000cb5, 0x000cb9, WB_ALetter },
 {0x000cbc, 0x000cbc, WB_Extend },
 {0x000cbd, 0x000cbd, WB_ALetter },
 {0x000cbe, 0x000cc4, WB_Extend },
 {0x000cc6, 0x000cc8, WB_Extend },
 {0x000cca, 0x000ccd, WB_Extend },
 {0x000cd5, 0x000cd6, WB_Extend },
 {0x000cde, 0x000cde, WB_ALetter },
 {0x000ce0, 0x000ce1, WB_ALetter },
 {0x000ce2, 0x000ce3, WB_Extend },
 {0x000ce6, 0x000cef, WB_Numeric },
 {0x000cf1, 0x000cf2, WB_ALetter },
 {0x000d00, 0x000d03, WB_Extend },
 {0x000d04, 0x000d0c, WB_ALetter },
 {0x000d0e, 0x000d10, WB_ALetter },
 {0x000d12, 0x000d3a, WB_ALetter },
 {0x000d3b, 0x000d3c, WB_Extend },
 {0x000d3d, 0x000d3d, WB_ALetter },
 {0x000d3e, 0x000d44, WB_Extend },
 {0x000d46, 0x000d48, WB_Extend },
 {0x000d4a, 0x000d4d, WB_Extend },
 {0x000d4e, 0x000d4e, WB_ALetter },
 {0x000d54, 0x000d56, WB_ALetter },
 {0x000d57, 0x000d57, WB_Extend },
 {0x000d5f, 0x000d61, WB_ALetter },
 {0x000d62, 0x000d63, WB_Extend },
 {0x000d66, 0x000d6f, WB_Numeric },
 {0x000d7a, 0x000d7f, WB_ALetter },
 {0x000d81, 0x000d83, WB_Extend },
 {0x000d85, 0x000d96, WB_ALetter },
 {0x000d9a, 0x000db1, WB_ALetter },
 {0x000db3, 0x000dbb, WB_ALetter },
 {0x000dbd, 0x000dbd, WB_ALetter },
 {0x000dc0, 0x000dc6, WB_ALetter },
 {0x000dca, 0x000dca, WB_Extend },
 {0x000dcf, 0x000dd4, WB_Extend },
 {0x000dd6, 0x000dd6, WB_Extend },
 {0x000dd8, 0x000ddf, WB_Extend },
 {0x000de6, 0x000def, WB_Numeric },
 {0x000df2, 0x000df3, WB_Extend },
 {0x000e31, 0x000e31, WB_Extend },
 {0x000e34, 0x000e3a, WB_Extend },
 {0x000e47, 0x000e4e, WB_Extend },
 {0x000e50, 0x000e59, WB_Numeric },
 {0x000eb1, 0x000eb1, WB_Extend },
 {0x000eb4, 0x000ebc, WB_Extend },
 {0x000ec8, 0x000ecd, WB_Extend },
 {0x000ed0, 0x000ed9, WB_Numeric },
 {0x000f00, 0x000f00, WB_ALetter },
 {0x000f18, 0x000f19, WB_Extend },
 {0x000f20, 0x000f29, WB_Numeric },
 {0x000f35, 0x000f35, WB_Extend },
 {0x000f37, 0x000f37, WB_Extend },
 {0x000f39, 0x000f39, WB_Extend },
 {0x000f3e, 0x000f3f, WB_Extend },
 {0x000f40, 0x000f47, WB_ALetter },
 {0x000f49, 0x000f6c, WB_ALetter },
 {0x000f71, 0x000f84, WB_Extend },
 {0x000f86, 0x000f87, WB_Extend },
 {0x000f88, 0x000f8c, WB_ALetter },
 {0x000f8d, 0x000f97, WB_Extend },
 {0x000f99, 0x000fbc, WB_Extend },
 {0x000fc6, 0x000fc6, WB_Extend },
 {0x00102b, 0x00103e, WB_Extend },
 {0x001040, 0x001049, WB_Numeric },
 {0x001056, 0x001059, WB_Extend },
 {0x00105e, 0x001060, WB_Extend },
 {0x001062, 0x001064, WB_Extend },
 {0x001067, 0x00106d, WB_Extend },
 {0x001071, 0x001074, WB_Extend },
 {0x001082, 0x00108d, WB_Extend },
 {0x00108f, 0x00108f, WB_Extend },
 {0x001090, 0x001099, WB_Numeric },
 {0x00109a, 0x00109d, WB_Extend },
 {0x0010a0, 0x0010c5, WB_ALetter },
 {0x0010c7, 0x0010c7, WB_ALetter },
 {0x0010cd, 0x0010cd, WB_ALetter },
 {0x0010d0, 0x0010fa, WB_ALetter },
 {0x0010fc, 0x001248, WB_ALetter },
 {0x00124a, 0x00124d, WB_ALetter },
 {0x001250, 0x001256, WB_ALetter },
 {0x001258, 0x001258, WB_ALetter },
 {0x00125a, 0x00125d, WB_ALetter },
 {0x001260, 0x001288, WB_ALetter },
 {0x00128a, 0x00128d, WB_ALetter },
 {0x001290, 0x0012b0, WB_ALetter },
 {0x0012b2, 0x0012b5, WB_ALetter },
 {0x0012b8, 0x0012be, WB_ALetter },
 {0x0012c0, 0x0012c0, WB_ALetter },
 {0x0012c2, 0x0012c5, WB_ALetter },
 {0x0012c8, 0x0012d6, WB_ALetter },
 {0x0012d8, 0x001310, WB_ALetter },
 {0x001312, 0x001315, WB_ALetter },
 {0x001318, 0x00135a, WB_ALetter },
 {0x00135d, 0x00135f, WB_Extend },
 {0x001380, 0x00138f, WB_ALetter },
 {0x0013a0, 0x0013f5, WB_ALetter },
 {0x0013f8, 0x0013fd, WB_ALetter },
 {0x001401, 0x00166c, WB_ALetter },
 {0x00166f, 0x00167f, WB_ALetter },
 {0x001680, 0x001680, WB_WSegSpace },
 {0x001681, 0x00169a, WB_ALetter },
 {0x0016a0, 0x0016ea, WB_ALetter },
 {0x0016ee, 0x0016f8, WB_ALetter },
 {0x001700, 0x00170c, WB_ALetter },
 {0x00170e, 0x001711, WB_ALetter },
 {0x001712, 0x001714, WB_Extend },
 {0x001720, 0x001731, WB_ALetter },
 {0x001732, 0x001734, WB_Extend },
 {0x001740, 0x001751, WB_ALetter },
 {0x001752, 0x001753, WB_Extend },
 {0x001760, 0x00176c, WB_ALetter },
 {0x00176e, 0x001770, WB_ALetter },
 {0x001772, 0x001773, WB_Extend },
 {0x0017b4, 0x0017d3, WB_Extend },
 {0x0017dd, 0x0017dd, WB_Extend },
 {0x0017e0, 0x0017e9, WB_Numeric },
 {0x00180b, 0x00180d, WB_Extend },
 {0x00180e, 0x00180e, WB_Format },
 {0x001810, 0x001819, WB_Numeric },
 {0x001820, 0x001878, WB_ALetter },
 {0x001880, 0x001884, WB_ALetter },
 {0x001885, 0x001886, WB_Extend },
 {0x001887, 0x0018a8, WB_ALetter },
 {0x0018a9, 0x0018a9, WB_Extend },
 {0x0018aa, 0x0018aa, WB_ALetter },
 {0x0018b0, 0x0018f5, WB_ALetter },
 {0x001900, 0x00191e, WB_ALetter },
 {0x001920, 0x00192b, WB_Extend },
 {0x001930, 0x00193b, WB_Extend },
 {0x001946, 0x00194f, WB_Numeric },
 {0x0019d0, 0x0019d9, WB_Numeric },
 {0x001a00, 0x001a16, WB_ALetter },
 {0x001a17, 0x001a1b, WB_Extend },
 {0x001a55, 0x001a5e, WB_Extend },
 {0x001a60, 0x001a7c, WB_Extend },
 {0x001a7f, 0x001a7f, WB_Extend },
 {0x001a80, 0x001a89, WB_Numeric },
 {0x001a90, 0x001a99, WB_Numeric },
 {0x001ab0, 0x001ac0, WB_Extend },
 {0x001b00, 0x001b04, WB_Extend },
 {0x001b05, 0x001b33, WB_ALetter },
 {0x001b34, 0x001b44, WB_Extend },
 {0x001b45, 0x001b4b, WB_ALetter },
 {0x001b50, 0x001b59, WB_Numeric },
 {0x001b6b, 0x001b73, WB_Extend },
 {0x001b80, 0x001b82, WB_Extend },
 {0x001b83, 0x001ba0, WB_ALetter },
 {0x001ba1, 0x001bad, WB_Extend },
 {0x001bae, 0x001baf, WB_ALetter },
 {0x001bb0, 0x001bb9, WB_Numeric },
 {0x001bba, 0x001be5, WB_ALetter },
 {0x001be6, 0x001bf3, WB_Extend },
 {0x001c00, 0x001c23, WB_ALetter },
 {0x001c24, 0x001c37, WB_Extend },
 {0x001c40, 0x001c49, WB_Numeric },
 {0x001c4d, 0x001c4f, WB_ALetter },
 {0x001c50, 0x001c59, WB_Numeric },
 {0x001c5a, 0x001c7d, WB_ALetter },
 {0x001c80, 0x001c88, WB_ALetter },
 {0x001c90, 0x001cba, WB_ALetter },
 {0x001cbd, 0x001cbf, WB_ALetter },
 {0x001cd0, 0x001cd2, WB_Extend },
 {0x001cd4, 0x001ce8, WB_Extend },
 {0x001ce9, 0x001cec, WB_ALetter },
 {0x001ced, 0x001ced, WB_Extend },
 {0x001cee, 0x001cf3, WB_ALetter },
 {0x001cf4, 0x001cf4, WB_Extend },
 {0x001cf5, 0x001cf6, WB_ALetter },
 {0x001cf7, 0x001cf9, WB_Extend },
 {0x001cfa, 0x001cfa, WB_ALetter },
 {0x001d00, 0x001dbf, WB_ALetter },
 {0x001dc0, 0x001df9, WB_Extend },
 {0x001dfb, 0x001dff, WB_Extend },
 {0x001e00, 0x001f15, WB_ALetter },
 {0x001f18, 0x001f1d, WB_ALetter },
 {0x001f20, 0x001f45, WB_ALetter },
 {0x001f48, 0x001f4d, WB_ALetter },
 {0x001f50, 0x001f57, WB_ALetter },
 {0x001f59, 0x001f59, WB_ALetter },
 {0x001f5b, 0x001f5b, WB_ALetter },
 {0x001f5d, 0x001f5d, WB_ALetter },
 {0x001f5f, 0x001f7d, WB_ALetter },
 {0x001f80, 0x001fb4, WB_ALetter },
 {0x001fb6, 0x001fbc, WB_ALetter },
 {0x001fbe, 0x001fbe, WB_ALetter },
 {0x001fc2, 0x001fc4, WB_ALetter },
 {0x001fc6, 0x001fcc, WB_ALetter },
 {0x001fd0, 0x001fd3, WB_ALetter },
 {0x001fd6, 0x001fdb, WB_ALetter },
 {0x001fe0, 0x001fec, WB_ALetter },
 {0x001ff2, 0x001ff4, WB_ALetter },
 {0x001ff6, 0x001ffc, WB_ALetter },
 {0x002000, 0x002006, WB_WSegSpace },
 {0x002008, 0x00200a, WB_WSegSpace },
 {0x00200c, 0x00200c, WB_Extend },
 {0x00200d, 0x00200d, WB_ZWJ },
 {0x00200e, 0x00200f, WB_Format },
 {0x002018, 0x002019, WB_MidNumLet },
 {0x002024, 0x002024, WB_MidNumLet },
 {0x002027, 0x002027, WB_MidLetter },
 {0x002028, 0x002029, WB_Newline },
 {0x00202a, 0x00202e, WB_Format },
 {0x00202f, 0x00202f, WB_ExtendNumLet },
 {0x00203f, 0x002040, WB_ExtendNumLet },
 {0x002044, 0x002044, WB_MidNum },
 {0x002054, 0x002054, WB_ExtendNumLet },
 {0x00205f, 0x00205f, WB_WSegSpace },
 {0x002060, 0x002064, WB_Format },
 {0x002066, 0x00206f, WB_Format },
 {0x002071, 0x002071, WB_ALetter },
 {0x00207f, 0x00207f, WB_ALetter },
 {0x002090, 0x00209c, WB_ALetter },
 {0x0020d0, 0x0020f0, WB_Extend },
 {0x002102, 0x002102, WB_ALetter },
 {0x002107, 0x002107, WB_ALetter },
 {0x00210a, 0x002113, WB_ALetter },
 {0x002115, 0x002115, WB_ALetter },
 {0x002119, 0x00211d, WB_ALetter },
 {0x002124, 0x002124, WB_ALetter },
 {0x002126, 0x002126, WB_ALetter },
 {0x002128, 0x002128, WB_ALetter },
 {0x00212a, 0x00212d, WB_ALetter },
 {0x00212f, 0x002139, WB_ALetter },
 {0x00213c, 0x00213f, WB_ALetter },
 {0x002145, 0x002149, WB_ALetter },
 {0x00214e, 0x00214e, WB_ALetter },
 {0x002160, 0x002188, WB_ALetter },
 {0x0024b6, 0x0024e9, WB_ALetter },
 {0x002c00, 0x002c2e, WB_ALetter },
 {0x002c30, 0x002c5e, WB_ALetter },
 {0x002c60, 0x002ce4, WB_ALetter },
 {0x002ceb, 0x002cee, WB_ALetter },
 {0x002cef, 0x002cf1, WB_Extend },
 {0x002cf2, 0x002cf3, WB_ALetter },
 {0x002d00, 0x002d25, WB_ALetter },
 {0x002d27, 0x002d27, WB_ALetter },
 {0x002d2d, 0x002d2d, WB_ALetter },
 {0x002d30, 0x002d67, WB_ALetter },
 {0x002d6f, 0x002d6f, WB_ALetter },
 {0x002d7f, 0x002d7f, WB_Extend },
 {0x002d80, 0x002d96, WB_ALetter },
 {0x002da0, 0x002da6, WB_ALetter },
 {0x002da8, 0x002dae, WB_ALetter },
 {0x002db0, 0x002db6, WB_ALetter },
 {0x002db8, 0x002dbe, WB_ALetter },
 {0x002dc0, 0x002dc6, WB_ALetter },
 {0x002dc8, 0x002dce, WB_ALetter },
 {0x002dd0, 0x002dd6, WB_ALetter },
 {0x002dd8, 0x002dde, WB_ALetter },
 {0x002de0, 0x002dff, WB_Extend },
 {0x002e2f, 0x002e2f, WB_ALetter },
 {0x003000, 0x003000, WB_WSegSpace },
 {0x003005, 0x003005, WB_ALetter },
 {0x00302a, 0x00302f, WB_Extend },
 {0x003031, 0x003035, WB_Katakana },
 {0x00303b, 0x00303c, WB_ALetter },
 {0x003099, 0x00309a, WB_Extend },
 {0x00309b, 0x00309c, WB_Katakana },
 {0x0030a0, 0x0030fa, WB_Katakana },
 {0x0030fc, 0x0030ff, WB_Katakana },
 {0x003105, 0x00312f, WB_ALetter },
 {0x003131, 0x00318e, WB_ALetter },
 {0x0031a0, 0x0031bf, WB_ALetter },
 {0x0031f0, 0x0031ff, WB_Katakana },
 {0x0032d0, 0x0032fe, WB_Katakana },
 {0x003300, 0x003357, WB_Katakana },
 {0x00a000, 0x00a48c, WB_ALetter },
 {0x00a4d0, 0x00a4fd, WB_ALetter },
 {0x00a500, 0x00a60c, WB_ALetter },
 {0x00a610, 0x00a61f, WB_ALetter },
 {0x00a620, 0x00a629, WB_Numeric },
 {0x00a62a, 0x00a62b, WB_ALetter },
 {0x00a640, 0x00a66e, WB_ALetter },
 {0x00a66f, 0x00a672, WB_Extend },
 {0x00a674, 0x00a67d, WB_Extend },
 {0x00a67f, 0x00a69d, WB_ALetter },
 {0x00a69e, 0x00a69f, WB_Extend },
 {0x00a6a0, 0x00a6ef, WB_ALetter },
 {0x00a6f0, 0x00a6f1, WB_Extend },
 {0x00a708, 0x00a7bf, WB_ALetter },
 {0x00a7c2, 0x00a7ca, WB_ALetter },
 {0x00a7f5, 0x00a801, WB_ALetter },
 {0x00a802, 0x00a802, WB_Extend },
 {0x00a803, 0x00a805, WB_ALetter },
 {0x00a806, 0x00a806, WB_Extend },
 {0x00a807, 0x00a80a, WB_ALetter },
 {0x00a80b, 0x00a80b, WB_Extend },
 {0x00a80c, 0x00a822, WB_ALetter },
 {0x00a823, 0x00a827, WB_Extend },
 {0x00a82c, 0x00a82c, WB_Extend },
 {0x00a840, 0x00a873, WB_ALetter },
 {0x00a880, 0x00a881, WB_Extend },
 {0x00a882, 0x00a8b3, WB_ALetter },
 {0x00a8b4, 0x00a8c5, WB_Extend },
 {0x00a8d0, 0x00a8d9, WB_Numeric },
 {0x00a8e0, 0x00a8f1, WB_Extend },
 {0x00a8f2, 0x00a8f7, WB_ALetter },
 {0x00a8fb, 0x00a8fb, WB_ALetter },
 {0x00a8fd, 0x00a8fe, WB_ALetter },
 {0x00a8ff, 0x00a8ff, WB_Extend },
 {0x00a900, 0x00a909, WB_Numeric },
 {0x00a90a, 0x00a925, WB_ALetter },
 {0x00a926, 0x00a92d, WB_Extend },
 {0x00a930, 0x00a946, WB_ALetter },
 {0x00a947, 0x00a953, WB_Extend },
 {0x00a960, 0x00a97c, WB_ALetter },
 {0x00a980, 0x00a983, WB_Extend },
 {0x00a984, 0x00a9b2, WB_ALetter },
 {0x00a9b3, 0x00a9c0, WB_Extend },
 {0x00a9cf, 0x00a9cf, WB_ALetter },
 {0x00a9d0, 0x00a9d9, WB_Numeric },
 {0x00a9e5, 0x00a9e5, WB_Extend },
 {0x00a9f0, 0x00a9f9, WB_Numeric },
 {0x00aa00, 0x00aa28, WB_ALetter },
 {0x00aa29, 0x00aa36, WB_Extend },
 {0x00aa40, 0x00aa42, WB_ALetter },
 {0x00aa43, 0x00aa43, WB_Extend },
 {0x00aa44, 0x00aa4b, WB_ALetter },
 {0x00aa4c, 0x00aa4d, WB_Extend },
 {0x00aa50, 0x00aa59, WB_Numeric },
 {0x00aa7b, 0x00aa7d, WB_Extend },
 {0x00aab0, 0x00aab0, WB_Extend },
 {0x00aab2, 0x00aab4, WB_Extend },
 {0x00aab7, 0x00aab8, WB_Extend },
 {0x00aabe, 0x00aabf, WB_Extend },
 {0x00aac1, 0x00aac1, WB_Extend },
 {0x00aae0, 0x00aaea, WB_ALetter },
 {0x00aaeb, 0x00aaef, WB_Extend },
 {0x00aaf2, 0x00aaf4, WB_ALetter },
 {0x00aaf5, 0x00aaf6, WB_Extend },
 {0x00ab01, 0x00ab06, WB_ALetter },
 {0x00ab09, 0x00ab0e, WB_ALetter },
 {0x00ab11, 0x00ab16, WB_ALetter },
 {0x00ab20, 0x00ab26, WB_ALetter },
 {0x00ab28, 0x00ab2e, WB_ALetter },
 {0x00ab30, 0x00ab69, WB_ALetter },
 {0x00ab70, 0x00abe2, WB_ALetter },
 {0x00abe3, 0x00abea, WB_Extend },
 {0x00abec, 0x00abed, WB_Extend },
 {0x00abf0, 0x00abf9, WB_Numeric },
 {0x00ac00, 0x00d7a3, WB_ALetter },
 {0x00d7b0, 0x00d7c6, WB_ALetter },
 {0x00d7cb, 0x00d7fb, WB_ALetter },
 {0x00fb00, 0x00fb06, WB_ALetter },
 {0x00fb13, 0x00fb17, WB_ALetter },
 {0x00fb1d, 0x00fb1d, WB_Hebrew_Letter },
 {0x00fb1e, 0x00fb1e, WB_Extend },
 {0x00fb1f, 0x00fb28, WB_Hebrew_Letter },
 {0x00fb2a, 0x00fb36, WB_Hebrew_Letter },
 {0x00fb38, 0x00fb3c, WB_Hebrew_Letter },
 {0x00fb3e, 0x00fb3e, WB_Hebrew_Letter },
 {0x00fb40, 0x00fb41, WB_Hebrew_Letter },
 {0x00fb43, 0x00fb44, WB_Hebrew_Letter },
 {0x00fb46, 0x00fb4f, WB_Hebrew_Letter },
 {0x00fb50, 0x00fbb1, WB_ALetter },
 {0x00fbd3, 0x00fd3d, WB_ALetter },
 {0x00fd50, 0x00fd8f, WB_ALetter },
 {0x00fd92, 0x00fdc7, WB_ALetter },
 {0x00fdf0, 0x00fdfb, WB_ALetter },
 {0x00fe00, 0x00fe0f, WB_Extend },
 {0x00fe10, 0x00fe10, WB_MidNum },
 {0x00fe13, 0x00fe13, WB_MidLetter },
 {0x00fe14, 0x00fe14, WB_MidNum },
 {0x00fe20, 0x00fe2f, WB_Extend },
 {0x00fe33, 0x00fe34, WB_ExtendNumLet },
 {0x00fe4d, 0x00fe4f, WB_ExtendNumLet },
 {0x00fe50, 0x00fe50, WB_MidNum },
 {0x00fe52, 0x00fe52, WB_MidNumLet },
 {0x00fe54, 0x00fe54, WB_MidNum },
 {0x00fe55, 0x00fe55, WB_MidLetter },
 {0x00fe70, 0x00fe74, WB_ALetter },
 {0x00fe76, 0x00fefc, WB_ALetter },
 {0x00feff, 0x00feff, WB_Format },
 {0x00ff07, 0x00ff07, WB_MidNumLet },
 {0x00ff0c, 0x00ff0c, WB_MidNum },
 {0x00ff0e, 0x00ff0e, WB_MidNumLet },
 {0x00ff10, 0x00ff19, WB_Numeric },
 {0x00ff1a, 0x00ff1a, WB_MidLetter },
 {0x00ff1b, 0x00ff1b, WB_MidNum },
 {0x00ff21, 0x00ff3a, WB_ALetter },
 {0x00ff3f, 0x00ff3f, WB_ExtendNumLet },
 {0x00ff41, 0x00ff5a, WB_ALetter },
 {0x00ff66, 0x00ff9d, WB_Katakana },
 {0x00ff9e, 0x00ff9f, WB_Extend },
 {0x00ffa0, 0x00ffbe, WB_ALetter },
 {0x00ffc2, 0x00ffc7, WB_ALetter },
 {0x00ffca, 0x00ffcf, WB_ALetter },
 {0x00ffd2, 0x00ffd7, WB_ALetter },
 {0x00ffda, 0x00ffdc, WB_ALetter },
 {0x00fff9, 0x00fffb, WB_Format },
 {0x010000, 0x01000b, WB_ALetter },
 {0x01000d, 0x010026, WB_ALetter },
 {0x010028, 0x01003a, WB_ALetter },
 {0x01003c, 0x01003d, WB_ALetter },
 {0x01003f, 0x01004d, WB_ALetter },
 {0x010050, 0x01005d, WB_ALetter },
 {0x010080, 0x0100fa, WB_ALetter },
 {0x010140, 0x010174, WB_ALetter },
 {0x0101fd, 0x0101fd, WB_Extend },
 {0x010280, 0x01029c, WB_ALetter },
 {0x0102a0, 0x0102d0, WB_ALetter },
 {0x0102e0, 0x0102e0, WB_Extend },
 {0x010300, 0x01031f, WB_ALetter },
 {0x01032d, 0x01034a, WB_ALetter },
 {0x010350, 0x010375, WB_ALetter },
 {0x010376, 0x01037a, WB_Extend },
 {0x010380, 0x01039d, WB_ALetter },
 {0x0103a0, 0x0103c3, WB_ALetter },
 {0x0103c8, 0x0103cf, WB_ALetter },
 {0x0103d1, 0x0103d5, WB_ALetter },
 {0x010400, 0x01049d, WB_ALetter },
 {0x0104a0, 0x0104a9, WB_Numeric },
 {0x0104b0, 0x0104d3, WB_ALetter },
 {0x0104d8, 0x0104fb, WB_ALetter },
 {0x010500, 0x010527, WB_ALetter },
 {0x010530, 0x010563, WB_ALetter },
 {0x010600, 0x010736, WB_ALetter },
 {0x010740, 0x010755, WB_ALetter },
 {0x010760, 0x010767, WB_ALetter },
 {0x010800, 0x010805, WB_ALetter },
 {0x010808, 0x010808, WB_ALetter },
 {0x01080a, 0x010835, WB_ALetter },
 {0x010837, 0x010838, WB_ALetter },
 {0x01083c, 0x01083c, WB_ALetter },
 {0x01083f, 0x010855, WB_ALetter },
 {0x010860, 0x010876, WB_ALetter },
 {0x010880, 0x01089e, WB_ALetter },
 {0x0108e0, 0x0108f2, WB_ALetter },
 {0x0108f4, 0x0108f5, WB_ALetter },
 {0x010900, 0x010915, WB_ALetter },
 {0x010920, 0x010939, WB_ALetter },
 {0x010980, 0x0109b7, WB_ALetter },
 {0x0109be, 0x0109bf, WB_ALetter },
 {0x010a00, 0x010a00, WB_ALetter },
 {0x010a01, 0x010a03, WB_Extend },
 {0x010a05, 0x010a06, WB_Extend },
 {0x010a0c, 0x010a0f, WB_Extend },
 {0x010a10, 0x010a13, WB_ALetter },
 {0x010a15, 0x010a17, WB_ALetter },
 {0x010a19, 0x010a35, WB_ALetter },
 {0x010a38, 0x010a3a, WB_Extend },
 {0x010a3f, 0x010a3f, WB_Extend },
 {0x010a60, 0x010a7c, WB_ALetter },
 {0x010a80, 0x010a9c, WB_ALetter },
 {0x010ac0, 0x010ac7, WB_ALetter },
 {0x010ac9, 0x010ae4, WB_ALetter },
 {0x010ae5, 0x010ae6, WB_Extend },
 {0x010b00, 0x010b35, WB_ALetter },
 {0x010b40, 0x010b55, WB_ALetter },
 {0x010b60, 0x010b72, WB_ALetter },
 {0x010b80, 0x010b91, WB_ALetter },
 {0x010c00, 0x010c48, WB_ALetter },
 {0x010c80, 0x010cb2, WB_ALetter },
 {0x010cc0, 0x010cf2, WB_ALetter },
 {0x010d00, 0x010d23, WB_ALetter },
 {0x010d24, 0x010d27, WB_Extend },
 {0x010d30, 0x010d39, WB_Numeric },
 {0x010e80, 0x010ea9, WB_ALetter },
 {0x010eab, 0x010eac, WB_Extend },
 {0x010eb0, 0x010eb1, WB_ALetter },
 {0x010f00, 0x010f1c, WB_ALetter },
 {0x010f27, 0x010f27, WB_ALetter },
 {0x010f30, 0x010f45, WB_ALetter },
 {0x010f46, 0x010f50, WB_Extend },
 {0x010fb0, 0x010fc4, WB_ALetter },
 {0x010fe0, 0x010ff6, WB_ALetter },
 {0x011000, 0x011002, WB_Extend },
 {0x011003, 0x011037, WB_ALetter },
 {0x011038, 0x011046, WB_Extend },
 {0x011066, 0x01106f, WB_Numeric },
 {0x01107f, 0x011082, WB_Extend },
 {0x011083, 0x0110af, WB_ALetter },
 {0x0110b0, 0x0110ba, WB_Extend },
 {0x0110bd, 0x0110bd, WB_Format },
 {0x0110cd, 0x0110cd, WB_Format },
 {0x0110d0, 0x0110e8, WB_ALetter },
 {0x0110f0, 0x0110f9, WB_Numeric },
 {0x011100, 0x011102, WB_Extend },
 {0x011103, 0x011126, WB_ALetter },
 {0x011127, 0x011134, WB_Extend },
 {0x011136, 0x01113f, WB_Numeric },
 {0x011144, 0x011144, WB_ALetter },
 {0x011145, 0x011146, WB_Extend },
 {0x011147, 0x011147, WB_ALetter },
 {0x011150, 0x011172, WB_ALetter },
 {0x011173, 0x011173, WB_Extend },
 {0x011176, 0x011176, WB_ALetter },
 {0x011180, 0x011182, WB_Extend },
 {0x011183, 0x0111b2, WB_ALetter },
 {0x0111b3, 0x0111c0, WB_Extend },
 {0x0111c1, 0x0111c4, WB_ALetter },
 {0x0111c9, 0x0111cc, WB_Extend },
 {0x0111ce, 0x0111cf, WB_Extend },
 {0x0111d0, 0x0111d9, WB_Numeric },
 {0x0111da, 0x0111da, WB_ALetter },
 {0x0111dc, 0x0111dc, WB_ALetter },
 {0x011200, 0x011211, WB_ALetter },
 {0x011213, 0x01122b, WB_ALetter },
 {0x01122c, 0x011237, WB_Extend },
 {0x01123e, 0x01123e, WB_Extend },
 {0x011280, 0x011286, WB_ALetter },
 {0x011288, 0x011288, WB_ALetter },
 {0x01128a, 0x01128d, WB_ALetter },
 {0x01128f, 0x01129d, WB_ALetter },
 {0x01129f, 0x0112a8, WB_ALetter },
 {0x0112b0, 0x0112de, WB_ALetter },
 {0x0112df, 0x0112ea, WB_Extend },
 {0x0112f0, 0x0112f9, WB_Numeric },
 {0x011300, 0x011303, WB_Extend },
 {0x011305, 0x01130c, WB_ALetter },
 {0x01130f, 0x011310, WB_ALetter },
 {0x011313, 0x011328, WB_ALetter },
 {0x01132a, 0x011330, WB_ALetter },
 {0x011332, 0x011333, WB_ALetter },
 {0x011335, 0x011339, WB_ALetter },
 {0x01133b, 0x01133c, WB_Extend },
 {0x01133d, 0x01133d, WB_ALetter },
 {0x01133e, 0x011344, WB_Extend },
 {0x011347, 0x011348, WB_Extend },
 {0x01134b, 0x01134d, WB_Extend },
 {0x011350, 0x011350, WB_ALetter },
 {0x011357, 0x011357, WB_Extend },
 {0x01135d, 0x011361, WB_ALetter },
 {0x011362, 0x011363, WB_Extend },
 {0x011366, 0x01136c, WB_Extend },
 {0x011370, 0x011374, WB_Extend },
 {0x011400, 0x011434, WB_ALetter },
 {0x011435, 0x011446, WB_Extend },
 {0x011447, 0x01144a, WB_ALetter },
 {0x011450, 0x011459, WB_Numeric },
 {0x01145e, 0x01145e, WB_Extend },
 {0x01145f, 0x011461, WB_ALetter },
 {0x011480, 0x0114af, WB_ALetter },
 {0x0114b0, 0x0114c3, WB_Extend },
 {0x0114c4, 0x0114c5, WB_ALetter },
 {0x0114c7, 0x0114c7, WB_ALetter },
 {0x0114d0, 0x0114d9, WB_Numeric },
 {0x011580, 0x0115ae, WB_ALetter },
 {0x0115af, 0x0115b5, WB_Extend },
 {0x0115b8, 0x0115c0, WB_Extend },
 {0x0115d8, 0x0115db, WB_ALetter },
 {0x0115dc, 0x0115dd, WB_Extend },
 {0x011600, 0x01162f, WB_ALetter },
 {0x011630, 0x011640, WB_Extend },
 {0x011644, 0x011644, WB_ALetter },
 {0x011650, 0x011659, WB_Numeric },
 {0x011680, 0x0116aa, WB_ALetter },
 {0x0116ab, 0x0116b7, WB_Extend },
 {0x0116b8, 0x0116b8, WB_ALetter },
 {0x0116c0, 0x0116c9, WB_Numeric },
 {0x01171d, 0x01172b, WB_Extend },
 {0x011730, 0x011739, WB_Numeric },
 {0x011800, 0x01182b, WB_ALetter },
 {0x01182c, 0x01183a, WB_Extend },
 {0x0118a0, 0x0118df, WB_ALetter },
 {0x0118e0, 0x0118e9, WB_Numeric },
 {0x0118ff, 0x011906, WB_ALetter },
 {0x011909, 0x011909, WB_ALetter },
 {0x01190c, 0x011913, WB_ALetter },
 {0x011915, 0x011916, WB_ALetter },
 {0x011918, 0x01192f, WB_ALetter },
 {0x011930, 0x011935, WB_Extend },
 {0x011937, 0x011938, WB_Extend },
 {0x01193b, 0x01193e, WB_Extend },
 {0x01193f, 0x01193f, WB_ALetter },
 {0x011940, 0x011940, WB_Extend },
 {0x011941, 0x011941, WB_ALetter },
 {0x011942, 0x011943, WB_Extend },
 {0x011950, 0x011959, WB_Numeric },
 {0x0119a0, 0x0119a7, WB_ALetter },
 {0x0119aa, 0x0119d0, WB_ALetter },
 {0x0119d1, 0x0119d7, WB_Extend },
 {0x0119da, 0x0119e0, WB_Extend },
 {0x0119e1, 0x0119e1, WB_ALetter },
 {0x0119e3, 0x0119e3, WB_ALetter },
 {0x0119e4, 0x0119e4, WB_Extend },
 {0x011a00, 0x011a00, WB_ALetter },
 {0x011a01, 0x011a0a, WB_Extend },
 {0x011a0b, 0x011a32, WB_ALetter },
 {0x011a33, 0x011a39, WB_Extend },
 {0x011a3a, 0x011a3a, WB_ALetter },
 {0x011a3b, 0x011a3e, WB_Extend },
 {0x011a47, 0x011a47, WB_Extend },
 {0x011a50, 0x011a50, WB_ALetter },
 {0x011a51, 0x011a5b, WB_Extend },
 {0x011a5c, 0x011a89, WB_ALetter },
 {0x011a8a, 0x011a99, WB_Extend },
 {0x011a9d, 0x011a9d, WB_ALetter },
 {0x011ac0, 0x011af8, WB_ALetter },
 {0x011c00, 0x011c08, WB_ALetter },
 {0x011c0a, 0x011c2e, WB_ALetter },
 {0x011c2f, 0x011c36, WB_Extend },
 {0x011c38, 0x011c3f, WB_Extend },
 {0x011c40, 0x011c40, WB_ALetter },
 {0x011c50, 0x011c59, WB_Numeric },
 {0x011c72, 0x011c8f, WB_ALetter },
 {0x011c92, 0x011ca7, WB_Extend },
 {0x011ca9, 0x011cb6, WB_Extend },
 {0x011d00, 0x011d06, WB_ALetter },
 {0x011d08, 0x011d09, WB_ALetter },
 {0x011d0b, 0x011d30, WB_ALetter },
 {0x011d31, 0x011d36, WB_Extend },
 {0x011d3a, 0x011d3a, WB_Extend },
 {0x011d3c, 0x011d3d, WB_Extend },
 {0x011d3f, 0x011d45, WB_Extend },
 {0x011d46, 0x011d46, WB_ALetter },
 {0x011d47, 0x011d47, WB_Extend },
 {0x011d50, 0x011d59, WB_Numeric },
 {0x011d60, 0x011d65, WB_ALetter },
 {0x011d67, 0x011d68, WB_ALetter },
 {0x011d6a, 0x011d89, WB_ALetter },
 {0x011d8a, 0x011d8e, WB_Extend },
 {0x011d90, 0x011d91, WB_Extend },
 {0x011d93, 0x011d97, WB_Extend },
 {0x011d98, 0x011d98, WB_ALetter },
 {0x011da0, 0x011da9, WB_Numeric },
 {0x011ee0, 0x011ef2, WB_ALetter },
 {0x011ef3, 0x011ef6, WB_Extend },
 {0x011fb0, 0x011fb0, WB_ALetter },
 {0x012000, 0x012399, WB_ALetter },
 {0x012400, 0x01246e, WB_ALetter },
 {0x012480, 0x012543, WB_ALetter },
 {0x013000, 0x01342e, WB_ALetter },
 {0x013430, 0x013438, WB_Format },
 {0x014400, 0x014646, WB_ALetter },
 {0x016800, 0x016a38, WB_ALetter },
 {0x016a40, 0x016a5e, WB_ALetter },
 {0x016a60, 0x016a69, WB_Numeric },
 {0x016ad0, 0x016aed, WB_ALetter },
 {0x016af0, 0x016af4, WB_Extend },
 {0x016b00, 0x016b2f, WB_ALetter },
 {0x016b30, 0x016b36, WB_Extend },
 {0x016b40, 0x016b43, WB_ALetter },
 {0x016b50, 0x016b59, WB_Numeric },
 {0x016b63, 0x016b77, WB_ALetter },
 {0x016b7d, 0x016b8f, WB_ALetter },
 {0x016e40, 0x016e7f, WB_ALetter },
 {0x016f00, 0x016f4a, WB_ALetter },
 {0x016f4f, 0x016f4f, WB_Extend },
 {0x016f50, 0x016f50, WB_ALetter },
 {0x016f51, 0x016f87, WB_Extend },
 {0x016f8f, 0x016f92, WB_Extend },
 {0x016f93, 0x016f9f, WB_ALetter },
 {0x016fe0, 0x016fe1, WB_ALetter },
 {0x016fe3, 0x016fe3, WB_ALetter },
 {0x016fe4, 0x016fe4, WB_Extend },
 {0x016ff0, 0x016ff1, WB_Extend },
 {0x01b000, 0x01b000, WB_Katakana },
 {0x01b164, 0x01b167, WB_Katakana },
 {0x01bc00, 0x01bc6a, WB_ALetter },
 {0x01bc70, 0x01bc7c, WB_ALetter },
 {0x01bc80, 0x01bc88, WB_ALetter },
 {0x01bc90, 0x01bc99, WB_ALetter },
 {0x01bc9d, 0x01bc9e, WB_Extend },
 {0x01bca0, 0x01bca3, WB_Format },
 {0x01d165, 0x01d169, WB_Extend },
 {0x01d16d, 0x01d172, WB_Extend },
 {0x01d173, 0x01d17a, WB_Format },
 {0x01d17b, 0x01d182, WB_Extend },
 {0x01d185, 0x01d18b, WB_Extend },
 {0x01d1aa, 0x01d1ad, WB_Extend },
 {0x01d242, 0x01d244, WB_Extend },
 {0x01d400, 0x01d454, WB_ALetter },
 {0x01d456, 0x01d49c, WB_ALetter },
 {0x01d49e, 0x01d49f, WB_ALetter },
 {0x01d4a2, 0x01d4a2, WB_ALetter },
 {0x01d4a5, 0x01d4a6, WB_ALetter },
 {0x01d4a9, 0x01d4ac, WB_ALetter },
 {0x01d4ae, 0x01d4b9, WB_ALetter },
 {0x01d4bb, 0x01d4bb, WB_ALetter },
 {0x01d4bd, 0x01d4c3, WB_ALetter },
 {0x01d4c5, 0x01d505, WB_ALetter },
 {0x01d507, 0x01d50a, WB_ALetter },
 {0x01d50d, 0x01d514, WB_ALetter },
 {0x01d516, 0x01d51c, WB_ALetter },
 {0x01d51e, 0x01d539, WB_ALetter },
 {0x01d53b, 0x01d53e, WB_ALetter },
 {0x01d540, 0x01d544, WB_ALetter },
 {0x01d546, 0x01d546, WB_ALetter },
 {0x01d54a, 0x01d550, WB_ALetter },
 {0x01d552, 0x01d6a5, WB_ALetter },
 {0x01d6a8, 0x01d6c0, WB_ALetter },
 {0x01d6c2, 0x01d6da, WB_ALetter },
 {0x01d6dc, 0x01d6fa, WB_ALetter },
 {0x01d6fc, 0x01d714, WB_ALetter },
 {0x01d716, 0x01d734, WB_ALetter },
 {0x01d736, 0x01d74e, WB_ALetter },
 {0x01d750, 0x01d76e, WB_ALetter },
 {0x01d770, 0x01d788, WB_ALetter },
 {0x01d78a, 0x01d7a8, WB_ALetter },
 {0x01d7aa, 0x01d7c2, WB_ALetter },
 {0x01d7c4, 0x01d7cb, WB_ALetter },
 {0x01d7ce, 0x01d7ff, WB_Numeric },
 {0x01da00, 0x01da36, WB_Extend },
 {0x01da3b, 0x01da6c, WB_Extend },
 {0x01da75, 0x01da75, WB_Extend },
 {0x01da84, 0x01da84, WB_Extend },
 {0x01da9b, 0x01da9f, WB_Extend },
 {0x01daa1, 0x01daaf, WB_Extend },
 {0x01e000, 0x01e006, WB_Extend },
 {0x01e008, 0x01e018, WB_Extend },
 {0x01e01b, 0x01e021, WB_Extend },
 {0x01e023, 0x01e024, WB_Extend },
 {0x01e026, 0x01e02a, WB_Extend },
 {0x01e100, 0x01e12c, WB_ALetter },
 {0x01e130, 0x01e136, WB_Extend },
 {0x01e137, 0x01e13d, WB_ALetter },
 {0x01e140, 0x01e149, WB_Numeric },
 {0x01e14e, 0x01e14e, WB_ALetter },
 {0x01e2c0, 0x01e2eb, WB_ALetter },
 {0x01e2ec, 0x01e2ef, WB_Extend },
 {0x01e2f0, 0x01e2f9, WB_Numeric },
 {0x01e800, 0x01e8c4, WB_ALetter },
 {0x01e8d0, 0x01e8d6, WB_Extend },
 {0x01e900, 0x01e943, WB_ALetter },
 {0x01e944, 0x01e94a, WB_Extend },
 {0x01e94b, 0x01e94b, WB_ALetter },
 {0x01e950, 0x01e959, WB_Numeric },
 {0x01ee00, 0x01ee03, WB_ALetter },
 {0x01ee05, 0x01ee1f, WB_ALetter },
 {0x01ee21, 0x01ee22, WB_ALetter },
 {0x01ee24, 0x01ee24, WB_ALetter },
 {0x01ee27, 0x01ee27, WB_ALetter },
 {0x01ee29, 0x01ee32, WB_ALetter },
 {0x01ee34, 0x01ee37, WB_ALetter },
 {0x01ee39, 0x01ee39, WB_ALetter },
 {0x01ee3b, 0x01ee3b, WB_ALetter },
 {0x01ee42, 0x01ee42, WB_ALetter },
 {0x01ee47, 0x01ee47, WB_ALetter },
 {0x01ee49, 0x01ee49, WB_ALetter },
 {0x01ee4b, 0x01ee4b, WB_ALetter },
 {0x01ee4d, 0x01ee4f, WB_ALetter },
 {0x01ee51, 0x01ee52, WB_ALetter },
 {0x01ee54, 0x01ee54, WB_ALetter },
 {0x01ee57, 0x01ee57, WB_ALetter },
 {0x01ee59, 0x01ee59, WB_ALetter },
 {0x01ee5b, 0x01ee5b, WB_ALetter },
 {0x01ee5d, 0x01ee5d, WB_ALetter },
 {0x01ee5f, 0x01ee5f, WB_ALetter },
 {0x01ee61, 0x01ee62, WB_ALetter },
 {0x01ee64, 0x01ee64, WB_ALetter },
 {0x01ee67, 0x01ee6a, WB_ALetter },
 {0x01ee6c, 0x01ee72, WB_ALetter },
 {0x01ee74, 0x01ee77, WB_ALetter },
 {0x01ee79, 0x01ee7c, WB_ALetter },
 {0x01ee7e, 0x01ee7e, WB_ALetter },
 {0x01ee80, 0x01ee89, WB_ALetter },
 {0x01ee8b, 0x01ee9b, WB_ALetter },
 {0x01eea1, 0x01eea3, WB_ALetter },
 {0x01eea5, 0x01eea9, WB_ALetter },
 {0x01eeab, 0x01eebb, WB_ALetter },
 {0x01f130, 0x01f149, WB_ALetter },
 {0x01f150, 0x01f169, WB_ALetter },
 {0x01f170, 0x01f189, WB_ALetter },
 {0x01f1e6, 0x01f1ff, WB_Regional_Indicator },
 {0x01f3fb, 0x01f3ff, WB_Extend },
 {0x01fbf0, 0x01fbf9, WB_Numeric },
 {0x0e0001, 0x0e0001, WB_Format },
 {0x0e0020, 0x0e007f, WB_Extend },
 {0x0e0100, 0x0e01ef, WB_Extend }
};
