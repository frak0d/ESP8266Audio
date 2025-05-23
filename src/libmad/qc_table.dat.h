/*
    libmad - MPEG audio decoder library
    Copyright (C) 2000-2004 Underbit Technologies, Inc.

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

    $Id: qc_table.dat,v 1.7 2004/01/23 09:41:32 rob Exp $
*/

/*
    These are the Layer II classes of quantization.
    The table is derived from Table B.4 of ISO/IEC 11172-3.
*/

{
    3, 2,  5,
    MAD_F(0x15555555) /* 1.33333333333 => 1.33333333209, e  0.00000000124 */,
    MAD_F(0x08000000) /* 0.50000000000 => 0.50000000000, e  0.00000000000 */
}, {
    5, 3,  7,
    MAD_F(0x1999999a) /* 1.60000000000 => 1.60000000149, e -0.00000000149 */,
    MAD_F(0x08000000) /* 0.50000000000 => 0.50000000000, e  0.00000000000 */
}, {
    7, 0,  3,
    MAD_F(0x12492492) /* 1.14285714286 => 1.14285714179, e  0.00000000107 */,
    MAD_F(0x04000000) /* 0.25000000000 => 0.25000000000, e  0.00000000000 */
}, {
    9, 4, 10,
    MAD_F(0x1c71c71c) /* 1.77777777777 => 1.77777777612, e  0.00000000165 */,
    MAD_F(0x08000000) /* 0.50000000000 => 0.50000000000, e  0.00000000000 */
}, {
    15, 0,  4,
    MAD_F(0x11111111) /* 1.06666666666 => 1.06666666642, e  0.00000000024 */,
    MAD_F(0x02000000) /* 0.12500000000 => 0.12500000000, e  0.00000000000 */
}, {
    31, 0,  5,
    MAD_F(0x10842108) /* 1.03225806452 => 1.03225806355, e  0.00000000097 */,
    MAD_F(0x01000000) /* 0.06250000000 => 0.06250000000, e  0.00000000000 */
}, {
    63, 0,  6,
    MAD_F(0x10410410) /* 1.01587301587 => 1.01587301493, e  0.00000000094 */,
    MAD_F(0x00800000) /* 0.03125000000 => 0.03125000000, e  0.00000000000 */
}, {
    127, 0,  7,
    MAD_F(0x10204081) /* 1.00787401575 => 1.00787401572, e  0.00000000003 */,
    MAD_F(0x00400000) /* 0.01562500000 => 0.01562500000, e  0.00000000000 */
}, {
    255, 0,  8,
    MAD_F(0x10101010) /* 1.00392156863 => 1.00392156839, e  0.00000000024 */,
    MAD_F(0x00200000) /* 0.00781250000 => 0.00781250000, e  0.00000000000 */
}, {
    511, 0,  9,
    MAD_F(0x10080402) /* 1.00195694716 => 1.00195694715, e  0.00000000001 */,
    MAD_F(0x00100000) /* 0.00390625000 => 0.00390625000, e  0.00000000000 */
}, {
    1023, 0, 10,
    MAD_F(0x10040100) /* 1.00097751711 => 1.00097751617, e  0.00000000094 */,
    MAD_F(0x00080000) /* 0.00195312500 => 0.00195312500, e  0.00000000000 */
}, {
    2047, 0, 11,
    MAD_F(0x10020040) /* 1.00048851979 => 1.00048851967, e  0.00000000012 */,
    MAD_F(0x00040000) /* 0.00097656250 => 0.00097656250, e  0.00000000000 */
}, {
    4095, 0, 12,
    MAD_F(0x10010010) /* 1.00024420024 => 1.00024420023, e  0.00000000001 */,
    MAD_F(0x00020000) /* 0.00048828125 => 0.00048828125, e  0.00000000000 */
}, {
    8191, 0, 13,
    MAD_F(0x10008004) /* 1.00012208522 => 1.00012208521, e  0.00000000001 */,
    MAD_F(0x00010000) /* 0.00024414063 => 0.00024414062, e  0.00000000000 */
}, {
    16383, 0, 14,
    MAD_F(0x10004001) /* 1.00006103888 => 1.00006103888, e -0.00000000000 */,
    MAD_F(0x00008000) /* 0.00012207031 => 0.00012207031, e -0.00000000000 */
}, {
    32767, 0, 15,
    MAD_F(0x10002000) /* 1.00003051851 => 1.00003051758, e  0.00000000093 */,
    MAD_F(0x00004000) /* 0.00006103516 => 0.00006103516, e  0.00000000000 */
}, {
    65535, 0, 16,
    MAD_F(0x10001000) /* 1.00001525902 => 1.00001525879, e  0.00000000023 */,
    MAD_F(0x00002000) /* 0.00003051758 => 0.00003051758, e  0.00000000000 */
}
