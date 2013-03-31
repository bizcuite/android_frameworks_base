/* ------------------------------------------------------------------
 * Copyright (C) 1998-2009 PacketVideo
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied.
 * See the License for the specific language governing permissions
 * and limitations under the License.
 * -------------------------------------------------------------------
 */
/****************************************************************************************
Portions of this file are derived from the following 3GPP standard:

    3GPP TS 26.073
    ANSI-C code for the Adaptive Multi-Rate (AMR) speech codec
    Available from http://www.3gpp.org

(C) 2004, 3GPP Organizational Partners (ARIB, ATIS, CCSA, ETSI, TTA, TTC)
Permission to distribute, modify and use this file under the standard license
terms listed above has been obtained from the copyright holder.
****************************************************************************************/
/*

 Filename: /audio/gsm_amr/c/src/q_plsf_5_tbl.c

------------------------------------------------------------------------------
 REVISION HISTORY

 Description: Created this file from the reference, q_plsf_5_tbl.tab

 Description: Changed #defines of DICO_SIZE to DICO_5_SIZE, to avoid name
 conflicts.

 Description: Added #ifdef __cplusplus and removed "extern" from table
              definition.

 Description: Put "extern" back.

 Who:                       Date:
 Description:

------------------------------------------------------------------------------
 MODULE DESCRIPTION

------------------------------------------------------------------------------
*/

/*----------------------------------------------------------------------------
; INCLUDES
----------------------------------------------------------------------------*/
#include "typedef.h"

/*--------------------------------------------------------------------------*/
#ifdef __cplusplus
extern "C"
{
#endif

    /*----------------------------------------------------------------------------
    ; MACROS
    ; [Define module specific macros here]
    ----------------------------------------------------------------------------*/

    /*----------------------------------------------------------------------------
    ; DEFINES
    ; [Include all pre-processor statements here. Include conditional
    ; compile variables also.]
    ----------------------------------------------------------------------------*/
#define NB_QUA_PITCH 16
#define NB_QUA_CODE 32


#define DICO1_5_SIZE  128
#define DICO2_5_SIZE  256
#define DICO3_5_SIZE  256
#define DICO4_5_SIZE  256
#define DICO5_5_SIZE  64

    /*----------------------------------------------------------------------------
    ; LOCAL FUNCTION DEFINITIONS
    ; [List function prototypes here]
    ----------------------------------------------------------------------------*/

    /*----------------------------------------------------------------------------
    ; LOCAL VARIABLE DEFINITIONS
    ; [Variable declaration - defined here and used outside this module]
    ----------------------------------------------------------------------------*/
    /* LSF means ->normalize frequency domain */

    extern const Word16 mean_lsf_5[10] =
    {
        1384,
        2077,
        3420,
        5108,
        6742,
        8122,
        9863,
        11092,
        12714,
        13701
    };

    extern const Word16 dico1_lsf_5[DICO1_5_SIZE * 4] =
    {
        -451, -1065, -529, -1305,
        -450, -756, -497, -863,
        -384, -619, -413, -669,
        -317, -538, -331, -556,
        -414, -508, -424, -378,
        -274, -324, -434, -614,
        -226, -500, -232, -514,
        -263, -377, -298, -410,
        -151, -710, -174, -818,
        -149, -412, -156, -429,
        -288, -462, -186, -203,
        -170, -302, -191, -321,
        -131, -147, -297, -395,
        -228, -214, -245, -192,
        -67, -316, -71, -327,
        -104, -205, -94, -183,
        -143, -38, -193, -95,
        16, -76, -124, -248,
        23, -237, 24, -244,
        18, -136, 44, -111,
        -33, -24, -25, 0,
        149, 19, 23, -143,
        158, -169, 174, -181,
        133, -55, 165, -26,
        111, 84, 98, 75,
        87, 183, -115, -11,
        -8, 130, 11, 170,
        254, 77, 205, 17,
        183, 112, 262, 194,
        202, 287, 95, 189,
        -42, -105, 234, 179,
        39, 186, 163, 345,
        332, 199, 299, 161,
        -54, 285, -78, 281,
        -133, 141, -182, 111,
        249, 341, 271, 364,
        93, 403, 75, 391,
        92, 510, -138, 220,
        -185, -29, -34, 361,
        -115, 320, 3, 554,
        99, 286, 218, 591,
        -245, 406, -268, 453,
        0, 580, 25, 606,
        275, 532, 148, 450,
        -73, 739, -285, 518,
        -288, 94, -203, 674,
        -140, -74, 205, 714,
        -114, 299, 176, 923,
        182, 557, 240, 705,
        -16, 513, 485, 593,
        293, 384, 451, 617,
        -38, 50, 563, 529,
        303, 209, 459, 363,
        433, 452, 450, 454,
        367, 606, 477, 741,
        432, 353, 368, 267,
        361, 716, 273, 583,
        453, 166, 510, 172,
        201, 629, 274, 191,
        568, 639, 302, 298,
        634, 387, 643, 350,
        587, 560, 612, 565,
        600, 788, 487, 672,
        512, 1015, 321, 333,
        357, 854, -125, 413,
        474, 712, 17, -151,
        564, 285, 270, -241,
        971, 889, 489, 220,
        510, 896, 549, 924,
        327, 825, 290, 911,
        540, 1108, 158, 805,
        199, 957, 511, 730,
        100, 874, 13, 791,
        435, 632, 676, 972,
        249, 900, 467, 1218,
        781, 1074, 585, 785,
        -23, 669, 267, 1043,
        619, 1084, 615, 1145,
        622, 905, 916, 1049,
        80, 331, 584, 1075,
        89, 639, 988, 961,
        770, 720, 798, 699,
        492, 447, 899, 627,
        271, 1188, 725, 1333,
        87, 603, 832, 1603,
        616, 1127, 890, 1505,
        1000, 1156, 866, 1009,
        995, 827, 1149, 858,
        817, 1450, 773, 1320,
        500, 1389, 312, 1153,
        -20, 1084, 64, 1283,
        2, 1172, 399, 1869,
        514, 1706, 502, 1636,
        886, 1522, 416, 600,
        1131, 1350, 1275, 1390,
        889, 1795, 914, 1766,
        227, 1183, 1250, 1826,
        505, 1854, 919, 2353,
        -199, 431, 152, 1735,
        -213, -28, 392, 1334,
        -153, -52, 978, 1151,
        -323, -400, 813, 1703,
        -136, 84, 1449, 2015,
        -331, -143, -137, 1192,
        -256, 534, -157, 1031,
        -307, -439, 542, 731,
        -329, -420, -97, 616,
        -362, -168, -322, 366,
        -247, -110, -211, 89,
        -196, -309, 20, 59,
        -364, -463, -286, 89,
        -336, 175, -432, 141,
        -379, -190, -434, -196,
        -79, 150, -278, -227,
        -280, 166, -555, -422,
        -155, 541, -366, 54,
        -29, -83, -301, -774,
        186, 628, -397, -264,
        242, 293, -197, -585,
        124, 410, 53, -133,
        10, 340, -570, -1065,
        65, -446, 68, -493,
        383, 937, -357, -711,
        -359, -250, -677, -1068,
        292, -26, 363, 6,
        607, 1313, -127, -10,
        1513, 1886, 713, 972,
        1469, 2181, 1443, 2016
    };

    extern const Word16 dico2_lsf_5[DICO2_5_SIZE * 4] =
    {
        -1631, -1600, -1796, -2290,
        -1027, -1770, -1100, -2025,
        -1277, -1388, -1367, -1534,
        -947, -1461, -972, -1524,
        -999, -1222, -1020, -1172,
        -815, -987, -992, -1371,
        -1216, -1006, -1289, -1094,
        -744, -1268, -755, -1293,
        -862, -923, -905, -984,
        -678, -1051, -685, -1050,
        -1087, -985, -1062, -679,
        -989, -641, -1127, -976,
        -762, -654, -890, -806,
        -833, -1091, -706, -629,
        -621, -806, -640, -812,
        -775, -634, -779, -543,
        -996, -565, -1075, -580,
        -546, -611, -572, -619,
        -760, -290, -879, -526,
        -823, -462, -795, -253,
        -553, -415, -589, -439,
        -533, -340, -692, -935,
        -505, -772, -702, -1131,
        -263, -306, -971, -483,
        -445, -74, -555, -548,
        -614, -129, -693, -234,
        -396, -246, -475, -250,
        -265, -404, -376, -514,
        -417, -510, -300, -313,
        -334, -664, -463, -814,
        -386, -704, -337, -615,
        -234, -201, -233, -239,
        -167, -567, -203, -619,
        -147, -415, -115, -352,
        -166, -750, -171, -761,
        -270, -879, -264, -903,
        -367, -744, 43, -475,
        14, -653, 43, -670,
        11, -448, -59, -521,
        -126, -119, -155, -613,
        -42, -863, -27, -931,
        136, -483, 183, -468,
        55, -298, 55, -304,
        313, -609, 313, -720,
        322, -167, 100, -541,
        -3, -119, -111, -187,
        233, -236, 260, -234,
        26, -165, 134, -45,
        -40, -549, 360, -203,
        378, -388, 450, -383,
        275, 20, 182, -103,
        246, -111, 431, 37,
        462, -146, 487, -157,
        -284, -59, 503, -184,
        24, 53, -3, 54,
        122, 259, 333, 66,
        484, 104, 436, 68,
        195, 116, 190, 206,
        269, -9, 482, 352,
        382, 285, 399, 277,
        452, 256, 69, 186,
        13, 297, -13, 259,
        -95, 30, 56, 394,
        196, 425, 205, 456,
        281, 577, 15, 191,
        375, 290, 407, 576,
        -56, 227, 544, 405,
        0, 549, -92, 528,
        -229, 351, -245, 338,
        -362, 435, 167, 527,
        -75, 302, 91, 824,
        129, 599, 496, 679,
        186, 749, 153, 737,
        -281, 600, -348, 615,
        -236, 769, 41, 881,
        38, 890, -220, 841,
        -357, 883, -393, 903,
        -634, 474, -444, 850,
        -175, 678, -493, 242,
        -519, 785, -714, 582,
        -541, 366, -543, 434,
        -597, 500, -765, 222,
        -702, 917, -743, 962,
        -869, 501, -899, 548,
        -379, 200, -435, 157,
        -819, 214, -861, 157,
        -614, 40, -632, 94,
        -883, -54, -741, 516,
        -501, 298, -614, -171,
        -870, -161, -865, -23,
        -818, 93, -1015, -267,
        -662, -359, -549, 2,
        -442, -121, -377, 0,
        -227, 33, -414, -126,
        -129, 212, -934, 34,
        -1082, -282, -1119, -268,
        -710, -825, -420, -191,
        -1076, -928, -917, -93,
        -628, -358, 97, 7,
        -206, -393, -101, 24,
        -203, 38, -168, 83,
        -599, -423, -279, 426,
        -700, 118, -75, 206,
        -981, -673, -680, 417,
        -367, 37, -279, 474,
        -129, -318, 319, 296,
        -626, -39, 343, 602,
        -696, -39, -303, 940,
        104, 233, -380, 137,
        -36, 269, -75, -214,
        120, 43, -529, -477,
        459, 164, -202, -229,
        -49, -167, 609, 792,
        98, -220, 915, 148,
        293, 283, 869, 91,
        575, 394, 326, -78,
        717, 67, 365, -323,
        616, -36, 731, 27,
        619, 238, 632, 273,
        448, 99, 801, 476,
        869, 273, 685, 64,
        789, 72, 1021, 217,
        793, 459, 734, 360,
        646, 480, 360, 322,
        429, 464, 638, 430,
        756, 363, 1000, 404,
        683, 528, 602, 615,
        655, 413, 946, 687,
        937, 602, 904, 604,
        555, 737, 786, 662,
        467, 654, 362, 589,
        929, 710, 498, 478,
        415, 420, 693, 883,
        813, 683, 781, 925,
        913, 939, 726, 732,
        491, 853, 531, 948,
        734, 963, 315, 808,
        761, 755, 1144, 760,
        655, 1076, 826, 1057,
        1091, 838, 1003, 808,
        1047, 1133, 659, 1101,
        992, 1050, 1074, 1075,
        971, 694, 1226, 1054,
        571, 841, 884, 1404,
        1379, 1096, 1080, 861,
        1231, 735, 1284, 760,
        1272, 991, 1367, 1053,
        1257, 700, 1050, 534,
        988, 453, 1264, 599,
        1140, 679, 1621, 815,
        1384, 521, 1317, 393,
        1564, 805, 1448, 686,
        1068, 648, 875, 307,
        1083, 361, 1047, 317,
        1417, 964, 675, 571,
        1152, 79, 1114, -47,
        1530, 311, 1721, 314,
        1166, 689, 514, -94,
        349, 282, 1412, 328,
        1025, 487, -65, 57,
        805, 970, 36, 62,
        769, -263, 791, -346,
        637, 699, -137, 620,
        534, 541, -735, 194,
        711, 300, -268, -863,
        926, 769, -708, -428,
        506, 174, -892, -630,
        435, 547, -1435, -258,
        621, 471, -1018, -1368,
        -393, 521, -920, -686,
        -25, 20, -982, -1156,
        340, 9, -1558, -1135,
        -352, 48, -1579, -402,
        -887, 6, -1156, -888,
        -548, -352, -1643, -1168,
        -159, 610, -2024, -963,
        -225, 193, -1656, -1960,
        -245, -493, -964, -1680,
        -936, -635, -1299, -1744,
        -1388, -604, -1540, -835,
        -1397, -135, -1588, -290,
        -1670, -712, -2011, -1632,
        -1663, -27, -2258, -811,
        -1157, 184, -1265, 189,
        -1367, 586, -2011, 201,
        -790, 712, -1210, 3,
        -1033, 808, -1251, 830,
        -111, 635, -1636, 447,
        -463, -949, -445, -928,
        -504, -1162, -501, -1211,
        144, -351, -372, -1052,
        -283, -1059, -279, -1123,
        -575, -1438, -587, -1614,
        -935, -984, 229, 690,
        -921, -719, -403, 1362,
        -685, -465, 874, 397,
        -509, -46, 317, 1334,
        -485, 456, 813, 439,
        -411, 339, 898, 1067,
        -425, 46, 1441, 497,
        -909, -800, 1465, 1046,
        -254, -321, 1430, 1165,
        68, 350, 1034, 666,
        370, 11, 1311, 790,
        143, 232, 1041, 1562,
        -114, 663, 1616, 1078,
        454, 579, 1275, 1040,
        -76, 909, 752, 1067,
        153, 512, 348, 1214,
        614, 385, 1843, 808,
        269, 1034, 203, 1086,
        652, 1017, 1783, 1130,
        429, 1327, 387, 1384,
        -49, 1183, -72, 1215,
        -416, 1001, 544, 1749,
        -352, 1223, -502, 1199,
        -589, 569, -227, 1630,
        -142, 1578, -230, 1715,
        -714, 1288, -838, 1398,
        1131, 1357, -208, 1232,
        437, 965, -929, 818,
        811, 1410, 859, 1507,
        164, 1212, 1387, 1793,
        484, 1874, 456, 2063,
        996, 1170, 1326, 1402,
        1316, 1360, 1135, 1262,
        1234, 1618, 1361, 1768,
        1421, 1227, 1584, 1347,
        854, 672, 1685, 1566,
        1139, 1270, 2016, 1825,
        1773, 1581, 1532, 1460,
        1487, 946, 1659, 1021,
        1744, 1212, 1392, 977,
        1772, 1161, 1826, 1164,
        1718, 1429, 1973, 1591,
        1185, 864, 2132, 1061,
        1799, 814, 1838, 757,
        2104, 1315, 2054, 1258,
        2113, 915, 2331, 930,
        1467, 1147, 2590, 1439,
        2245, 1744, 2090, 1620,
        2358, 1454, 2666, 1506,
        1876, 1837, 2070, 1975,
        1739, 1577, 682, 1289,
        1584, 2045, 1454, 2098,
        2498, 2004, 2711, 2066,
        726, 1588, 2756, 2336,
        228, 847, 2456, 1659,
        36, 301, 1942, 1957,
        -446, -96, 2154, 1396,
        1533, 1101, 14, 608,
        -923, -732, 1383, 1982,
        1345, 952, -680, 321,
        1281, 1268, -1594, 365,
        941, 946, -1737, -822,
        2374, 2787, 1821, 2788
    };

    extern const Word16 dico3_lsf_5[DICO3_5_SIZE * 4] =
    {
        -1812, -2275, -1879, -2537,
        -1640, -1848, -1695, -2004,
        -1220, -1912, -1221, -2106,
        -1559, -1588, -1573, -1556,
        -1195, -1615, -1224, -1727,
        -1359, -1151, -1616, -1948,
        -1274, -1391, -1305, -1403,
        -1607, -1179, -1676, -1311,
        -1443, -1478, -1367, -898,
        -1256, -1059, -1331, -1134,
        -982, -1133, -1149, -1504,
        -1080, -1308, -1020, -1183,
        -980, -1486, -967, -1495,
        -988, -922, -1047, -1077,
        -838, -1179, -858, -1222,
        -1131, -1041, -1064, -767,
        -872, -1157, -701, -880,
        -706, -906, -774, -1016,
        -578, -1080, -801, -1478,
        -591, -1111, -592, -1146,
        -713, -1388, -640, -1376,
        -597, -1059, -416, -903,
        -686, -832, -661, -708,
        -444, -868, -490, -921,
        -374, -776, -619, -1170,
        -585, -549, -769, -795,
        -435, -659, -530, -741,
        -498, -837, -357, -597,
        -279, -871, -243, -887,
        -282, -665, -280, -667,
        -165, -560, -394, -903,
        -362, -410, -448, -583,
        -409, -574, -313, -357,
        -637, -548, -570, -436,
        -896, -504, -382, -757,
        -58, -481, -165, -618,
        -191, -374, -234, -382,
        -222, -683, -25, -480,
        -418, -359, -730, -353,
        -324, -157, -432, -322,
        -394, -303, -284, -104,
        -601, -289, -556, -196,
        -588, -150, -659, -608,
        -473, -24, -68, -448,
        -474, -8, -506, -45,
        -748, -184, -844, -252,
        -901, -91, -584, -97,
        -652, 138, -764, -131,
        -678, -12, -670, 165,
        -259, -3, -840, -107,
        -909, 37, -992, 44,
        -854, -415, -839, 13,
        -1001, -271, -1026, -309,
        -798, -478, -832, -488,
        -943, 168, -1112, -387,
        -1185, -101, -1183, -40,
        -941, -316, -1030, -770,
        -1044, -625, -1081, -538,
        -1224, -299, -1312, -436,
        -1197, -663, -1167, -161,
        -1216, -690, -1237, -831,
        -1432, -720, -1403, -493,
        -898, -740, -922, -801,
        -1102, -402, -1579, -964,
        -1061, -638, -1269, -1438,
        -1499, -934, -1502, -895,
        -1598, -564, -1723, -717,
        -606, -597, -1166, -1085,
        -1369, -468, -1946, -1493,
        -1838, -953, -1932, -931,
        -1499, -188, -1635, -421,
        -1457, -338, -1448, -22,
        -1942, -422, -2006, -249,
        -496, -114, -1910, -755,
        -1289, 174, -1451, -109,
        -482, -257, -1221, -508,
        -1617, 151, -1694, 208,
        -654, 107, -1651, 29,
        -1141, 279, -1215, 306,
        -1228, -506, -730, -175,
        -1236, -101, -969, 551,
        -870, 278, -823, 315,
        -563, 376, -1051, 228,
        -507, 280, -599, 281,
        -758, 253, -305, 379,
        -755, -134, -611, 660,
        -824, 536, -817, 646,
        -413, 49, -341, 177,
        -453, 526, -482, 589,
        -71, 339, -657, 264,
        -244, 295, -237, 315,
        -387, 569, -506, -9,
        -377, 14, -160, 661,
        -216, 40, -308, -46,
        95, 214, -242, 167,
        -86, 192, -56, 27,
        -76, 31, 36, 309,
        -106, -182, -113, 74,
        -441, -22, 23, 139,
        81, -11, 44, 15,
        -87, -137, -118, -207,
        -158, -58, 272, -92,
        -156, -441, 8, -136,
        128, -221, 101, -218,
        40, -197, -76, -456,
        9, -445, 33, -423,
        226, 60, 73, -222,
        156, -399, 280, -318,
        245, -341, 166, -499,
        339, -190, 327, -219,
        325, -137, -89, -596,
        100, -627, 144, -677,
        487, 28, 252, -391,
        214, -41, 282, -28,
        99, -286, 331, 49,
        459, -388, 565, -369,
        436, 28, 336, -9,
        397, -167, 618, 34,
        596, -17, 561, -140,
        299, 79, 522, 125,
        203, 2, 244, 288,
        255, 211, 175, 82,
        596, 187, 517, 108,
        381, 255, 365, 297,
        497, 352, 327, -82,
        25, 210, 371, 245,
        261, 3, 545, 449,
        140, 294, 44, 295,
        212, 347, 244, 494,
        331, 528, 201, 307,
        349, 411, 613, 284,
        614, 413, 464, 322,
        624, 397, 97, 200,
        -160, 384, 149, 362,
        495, 525, 269, 585,
        33, 491, -121, 433,
        427, 611, 498, 516,
        171, 443, 497, 666,
        440, 275, 566, 575,
        146, 639, 155, 670,
        -33, 173, 212, 696,
        -166, 601, -191, 695,
        -489, 503, 175, 742,
        214, 476, 372, 1083,
        578, 530, 586, 777,
        425, 874, 315, 841,
        374, 848, -165, 565,
        35, 991, -39, 1062,
        329, 712, 786, 840,
        645, 795, 661, 676,
        571, 918, 632, 1079,
        673, 817, 318, 388,
        874, 1012, 564, 848,
        880, 620, 557, 479,
        671, 453, 692, 468,
        840, 642, 844, 645,
        506, 428, 897, 567,
        837, 387, 962, 499,
        691, 561, 939, 926,
        783, 296, 790, 268,
        1028, 530, 874, 329,
        548, 143, 675, 291,
        503, 66, 1041, 359,
        786, 97, 805, 33,
        837, 470, 511, 49,
        1092, 327, 1174, 323,
        3, 242, 872, 474,
        689, 429, 1329, 678,
        1042, 620, 1109, 664,
        321, 193, 889, 950,
        1153, 874, 893, 635,
        877, 862, 948, 913,
        1293, 665, 1320, 639,
        997, 793, 1402, 1030,
        1176, 1012, 1110, 959,
        1410, 925, 1403, 915,
        543, 862, 1116, 1222,
        835, 1190, 835, 1190,
        959, 1148, 1147, 1376,
        1300, 1193, 1415, 1231,
        1335, 1341, 746, 1092,
        1711, 1283, 1389, 1073,
        1334, 1566, 1153, 1475,
        1645, 1137, 1825, 1220,
        1056, 1382, 1521, 1730,
        1632, 1545, 1620, 1542,
        855, 1596, 865, 1667,
        693, 885, 1716, 1519,
        1167, 1296, 2209, 1760,
        1952, 1493, 2020, 1482,
        1534, 1866, 1694, 2008,
        1566, 748, 1761, 825,
        294, 1392, 1084, 2058,
        621, 1315, 365, 1287,
        198, 1028, 488, 1408,
        249, 403, 1014, 1561,
        324, 363, 1645, 1044,
        193, 367, 2034, 1859,
        -251, 579, 750, 994,
        -243, 30, 1325, 879,
        -28, -169, 624, 917,
        -453, 159, 186, 1370,
        -614, 6, 537, 392,
        -94, -291, 781, 229,
        -128, -298, 245, 491,
        -701, -648, 972, 789,
        -501, -640, 178, 255,
        -365, -390, -255, 317,
        -958, -294, -191, 228,
        -775, -447, 157, -237,
        -657, -720, -407, 92,
        -117, -611, 334, -230,
        -679, -1084, -144, -317,
        -901, -861, -738, -360,
        -85, -727, -90, -787,
        100, -22, -391, -263,
        -56, -73, -337, -754,
        5, -189, -706, -624,
        89, -344, -135, -1113,
        -353, -237, -684, -1135,
        -275, -1102, -269, -1203,
        152, 145, -722, -1232,
        49, 80, -1248, -776,
        -248, 391, -732, -547,
        469, 218, -255, -864,
        69, 366, -166, -485,
        -688, 191, -1212, -1196,
        -170, -169, -1308, -1631,
        321, 470, -1419, -1243,
        -64, 272, -1361, -248,
        492, 565, -721, -609,
        195, 485, -573, -133,
        427, 202, -171, -118,
        199, 575, 2, -31,
        694, 755, -1366, -39,
        552, 557, -489, 271,
        680, 537, 13, -453,
        855, 954, -133, -52,
        -81, 738, -1169, 637,
        1055, 1059, -95, 676,
        1259, 1081, 489, 305,
        -449, 954, -534, 996,
        -969, 866, -1058, 1059,
        -1294, 618, -1416, 617,
        -458, 1366, -159, 1821,
        -774, -528, -14, 1110,
        -1202, -901, -772, 433,
        -1256, -1255, -1011, -302,
        -602, -585, -759, -1618,
        -760, -1549, -840, -1921,
        -816, -539, -1769, -2235,
        -227, -36, -2034, -1831,
        -2107, -1126, -2471, -1816,
        -1470, 252, -2701, -415,
        -571, -467, 1509, 1554,
        2180, 1975, 2326, 2020
    };

    extern const Word16 dico4_lsf_5[DICO4_5_SIZE * 4] =
    {
        -1857, -1681, -1857, -1755,
        -2056, -1150, -2134, -1654,
        -1619, -1099, -1704, -1131,
        -1345, -1608, -1359, -1638,
        -1338, -1293, -1325, -1265,
        -1664, -1649, -1487, -851,
        -1346, -1832, -1413, -2188,
        -1282, -681, -1785, -1649,
        -966, -1082, -1183, -1676,
        -1054, -1073, -1142, -1158,
        -1207, -744, -1274, -997,
        -934, -1383, -927, -1416,
        -1010, -1305, -783, -955,
        -1049, -900, -993, -817,
        -737, -823, -972, -1189,
        -738, -1094, -738, -1154,
        -784, -801, -810, -786,
        -892, -520, -1000, -818,
        -644, -965, -577, -882,
        -541, -694, -671, -917,
        -595, -642, -646, -615,
        -956, -621, -925, -515,
        -727, -483, -815, -485,
        -840, -578, -440, -713,
        -578, -325, -657, -670,
        -386, -570, -441, -666,
        -514, -787, -392, -529,
        -522, -453, -487, -423,
        -616, -585, -617, -157,
        -662, -268, -680, -348,
        -322, -323, -632, -444,
        -304, -430, -332, -458,
        -277, -468, -659, -793,
        -319, -636, -227, -554,
        -373, -347, -334, -210,
        -456, -192, -530, -242,
        -216, -198, -366, -370,
        -338, -161, -409, -748,
        -107, -380, -294, -643,
        -223, -665, -234, -741,
        -141, -496, -130, -510,
        -139, -327, -172, -305,
        -306, -580, -164, -263,
        -262, -172, -67, -402,
        31, -366, -10, -436,
        -86, -527, 71, -377,
        -22, -609, -12, -678,
        -67, -319, 63, -191,
        35, -181, -39, -242,
        126, -167, -140, -544,
        155, -297, 174, -297,
        38, -8, 117, -380,
        197, -452, 240, -522,
        223, -103, 110, -187,
        87, -155, 169, -47,
        157, 26, -83, -100,
        128, 80, 209, -62,
        6, 7, 22, 5,
        318, -20, 248, -45,
        -200, -63, 156, -69,
        250, -183, 369, -126,
        -113, -76, -142, -122,
        -64, -254, -31, 35,
        -177, -71, -7, 171,
        93, 27, 108, 212,
        -330, -209, -123, -70,
        -279, 95, -96, 20,
        -188, -61, -314, 87,
        -300, -78, -354, -134,
        11, 122, -140, 122,
        -275, 152, -293, 140,
        -82, 138, -321, -111,
        -480, -156, -359, 76,
        -254, -40, -635, -96,
        -522, 79, -507, 8,
        -268, 303, -539, 68,
        -446, 61, -522, 306,
        111, 189, -435, 122,
        -379, 166, -571, -398,
        -632, -74, -747, -95,
        -455, 194, -952, 83,
        -798, 192, -755, 192,
        -781, -162, -619, 234,
        -663, -297, -488, -109,
        -964, -132, -838, -68,
        -843, 58, -1112, -86,
        -805, -299, -944, -253,
        -778, -50, -965, -549,
        -352, -98, -992, -343,
        -1117, -315, -1117, -307,
        -1155, -374, -637, -230,
        -1166, -43, -1299, -100,
        -925, -393, -1274, -600,
        -689, -130, -1479, -312,
        -1321, -254, -1464, -442,
        -1292, -613, -1261, -503,
        -1501, -368, -1322, 26,
        -1432, -66, -1743, -161,
        -1644, -467, -1760, -548,
        -1393, -568, -1556, -871,
        -1495, -1034, -1387, -571,
        -1917, -528, -1783, -123,
        -1897, -231, -2054, -323,
        -2052, -906, -1976, -567,
        -1917, -620, -2047, -989,
        -1077, -370, -2031, -704,
        -2355, -749, -2740, -1089,
        -1909, 159, -2012, 248,
        -626, -123, -2339, -962,
        -669, -408, -1379, -1174,
        -452, -364, -1044, -735,
        -132, 183, -1620, -752,
        -547, -307, -777, -1261,
        -98, 41, -880, -1091,
        -257, 97, -1602, -1833,
        31, -26, -644, -561,
        -180, -546, -385, -1095,
        -410, -802, -414, -827,
        -457, -970, -490, -1109,
        -215, -916, -144, -937,
        -493, -1269, -517, -1507,
        181, 101, -332, -889,
        -836, -937, -559, -429,
        -629, -547, -183, -337,
        -545, -82, -250, -286,
        5, -132, -348, -252,
        -293, -472, -158, 100,
        -29, 197, -236, -424,
        -861, -213, -140, -7,
        -427, -443, 187, -97,
        -684, -736, -293, 258,
        -368, -152, -150, 392,
        -609, 175, -142, 299,
        -138, 152, -119, 329,
        -486, -52, 293, 198,
        -183, 117, 175, 331,
        -58, -274, 231, 300,
        -288, 330, -305, 372,
        -111, 409, -9, 423,
        83, 256, 67, 367,
        -19, 248, 91, 113,
        -35, 406, -191, 154,
        238, 296, 5, 197,
        141, 221, 313, 198,
        211, 421, 244, 334,
        88, 426, -243, 454,
        202, 552, -5, 403,
        291, 185, 219, 301,
        251, 138, 128, 69,
        197, 288, -140, -61,
        188, 361, 197, 598,
        442, 273, 290, 143,
        472, 482, 157, 370,
        415, 321, 372, 385,
        402, 552, 155, 24,
        550, 263, -11, 21,
        360, 227, 147, -254,
        424, 97, 366, -13,
        375, 141, 449, 232,
        396, 507, 474, 272,
        701, 324, 362, -47,
        587, 148, 543, 69,
        400, -51, 561, 59,
        220, -10, 352, 147,
        206, 211, 653, 185,
        563, 297, 565, 284,
        594, 121, 766, 192,
        398, 118, 642, 434,
        233, 264, 481, 467,
        129, -165, 699, 239,
        90, 26, 342, 474,
        -55, 27, 388, 94,
        -172, 0, 725, 379,
        -60, 337, 370, 465,
        95, 319, 806, 595,
        78, 260, 497, 851,
        210, 560, 458, 574,
        -464, 202, 497, 625,
        -202, 152, 48, 712,
        -20, 566, 100, 715,
        455, 468, 411, 605,
        319, 646, 195, 615,
        401, 538, 680, 739,
        201, 667, 434, 954,
        454, 425, 646, 491,
        606, 681, 416, 508,
        497, 822, 426, 815,
        660, 647, 628, 716,
        697, 466, 618, 457,
        685, 460, 365, 309,
        721, 567, 836, 601,
        609, 300, 825, 459,
        943, 687, 681, 533,
        915, 598, 591, 243,
        876, 451, 874, 420,
        786, 317, 732, 220,
        922, 317, 1108, 367,
        531, 466, 1028, 649,
        1053, 615, 1034, 553,
        829, 602, 1021, 799,
        927, 803, 878, 763,
        799, 496, 1373, 773,
        585, 770, 803, 930,
        1099, 793, 1222, 862,
        1209, 895, 1025, 727,
        772, 845, 1172, 1115,
        867, 1021, 830, 1013,
        841, 910, 506, 703,
        1239, 1077, 620, 819,
        1196, 1083, 1155, 1081,
        1142, 907, 1547, 1121,
        1309, 648, 1343, 612,
        1484, 988, 1479, 937,
        985, 1328, 955, 1341,
        429, 910, 841, 1338,
        564, 1179, 412, 1156,
        1427, 1320, 1434, 1330,
        640, 760, 1726, 1410,
        190, 555, 1073, 1005,
        426, 257, 839, 980,
        235, 231, 1520, 1167,
        109, 293, 1014, 1569,
        305, 142, 1148, 539,
        -291, -108, 1213, 972,
        22, -216, 667, 828,
        -482, 438, 453, 1431,
        -581, -422, 789, 387,
        -358, -454, 174, 780,
        -36, -372, 390, -134,
        -629, 160, -306, 751,
        -1258, -331, 177, 522,
        -248, 574, -251, 639,
        -531, 407, -596, 394,
        -419, 789, -617, 801,
        -986, 399, -857, 727,
        -7, 518, -703, 310,
        -1143, -24, -1002, 287,
        -960, 363, -1299, 312,
        -1534, 245, -1557, 305,
        28, 153, -859, -175,
        -33, 332, -1398, -154,
        212, 410, -593, -197,
        -1092, -704, -904, -65,
        282, 367, -918, -686,
        345, 93, -258, -357,
        696, 644, -693, -28,
        448, 493, -273, 193,
        527, 546, -243, -513,
        384, -136, 273, -353,
        512, -142, 537, -198,
        941, 750, 83, 248,
        578, 861, -56, 592,
        842, 44, 892, 24,
        33, 890, -16, 982,
        831, 1398, 1535, 1898,
        1716, 1376, 1948, 1465
    };

    extern const Word16 dico5_lsf_5[DICO5_5_SIZE * 4] =
    {
        -1002, -929, -1096, -1203,
        -641, -931, -604, -961,
        -779, -673, -835, -788,
        -416, -664, -458, -766,
        -652, -521, -662, -495,
        -1023, -509, -1023, -428,
        -444, -552, -368, -449,
        -479, -211, -1054, -903,
        -316, -249, -569, -591,
        -569, -275, -541, -191,
        -716, -188, -842, -264,
        -333, -248, -318, -228,
        -275, 1, -567, -228,
        -115, -221, -238, -374,
        -197, -507, -222, -579,
        -258, -432, -61, -244,
        -345, 2, -338, 39,
        -215, -169, -58, 0,
        -56, -6, -203, -131,
        1, -186, -5, -211,
        6, -380, 11, -418,
        -116, 131, -134, 113,
        89, -4, 71, -2,
        -19, -192, 262, 24,
        189, 151, -133, -109,
        186, -153, 166, -219,
        37, 139, 193, 171,
        337, 124, 158, -61,
        141, 226, -13, 190,
        231, 34, 354, 109,
        316, 201, 244, 164,
        330, -85, 390, -84,
        254, 327, 257, 335,
        491, 147, 476, 105,
        54, 77, 437, 370,
        421, 314, 449, 342,
        329, 126, 673, 292,
        571, 388, 243, 193,
        653, 320, 621, 280,
        194, 380, 517, 581,
        45, 323, 111, 422,
        489, 395, 734, 534,
        622, 546, 486, 502,
        318, 572, 189, 550,
        385, 422, -157, 153,
        -125, 382, -197, 386,
        -263, 334, 228, 697,
        -188, 1, 51, 297,
        -507, 213, -376, 397,
        -24, 255, -547, 89,
        -502, -94, 387, 179,
        -620, 68, -684, 112,
        -642, -350, -260, 172,
        -438, -324, 264, 648,
        -964, -4, -1121, 7,
        -134, 134, -1133, -306,
        143, 96, -420, -497,
        -1221, -350, -1527, -685,
        -161, 72, 873, 691,
        732, 283, 921, 353,
        334, 475, 1095, 821,
        864, 524, 843, 497,
        714, 711, 788, 750,
        1076, 714, 1204, 753
    };

    /*--------------------------------------------------------------------------*/
#ifdef __cplusplus
}
#endif

/*
------------------------------------------------------------------------------
 FUNCTION NAME:
------------------------------------------------------------------------------
 INPUT AND OUTPUT DEFINITIONS

 Inputs:
    None

 Outputs:
    None

 Returns:
    None

 Global Variables Used:
    None

 Local Variables Needed:
    None

------------------------------------------------------------------------------
 FUNCTION DESCRIPTION

 None

------------------------------------------------------------------------------
 REQUIREMENTS

 None

------------------------------------------------------------------------------
 REFERENCES

 [1] q_plsf_5.tab,  UMTS GSM AMR speech codec, R99 - Version 3.2.0, March 2, 2001

------------------------------------------------------------------------------
 PSEUDO-CODE


------------------------------------------------------------------------------
 RESOURCES USED [optional]

 When the code is written for a specific target processor the
 the resources used should be documented below.

 HEAP MEMORY USED: x bytes

 STACK MEMORY USED: x bytes

 CLOCK CYCLES: (cycle count equation for this function) + (variable
                used to represent cycle count for each subroutine
                called)
     where: (cycle count variable) = cycle count for [subroutine
                                     name]

------------------------------------------------------------------------------
 CAUTION [optional]
 [State any special notes, constraints or cautions for users of this function]

------------------------------------------------------------------------------
*/

/*----------------------------------------------------------------------------
; FUNCTION CODE
----------------------------------------------------------------------------*/


