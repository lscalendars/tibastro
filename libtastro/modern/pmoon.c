// Longitude data, from "Lunar Tables and Programs from 4000 BC to AD 8000",
// pp 43,etc

#include "sunmon.h"

// double __far SvP[218][6] = {
double SvP[218][6] = {
 6.28877383, 134.9634114,   477198.8676313,   89.970,  14.348,  -6.797, // 1
 1.27401064, 100.7369970,   413335.3554022, -122.571, -10.684,   5.028, // 2
 0.65830943, 235.7004084,   890534.2230335,  -32.601,   3.664,  -1.769, // 3
 0.21361825, 269.9268228,   954397.7352627,  179.941,  28.695, -13.594, // 4
-0.18511586, 357.5291092,    35999.0502909,   -1.536,   0.041,   0.0,   // 5
-0.11433213, 186.5441986,   966404.0350546,  -68.058,  -0.567,   0.232, // 6
 0.05879321, 325.7735856,   -63863.5122292, -212.541, -25.031,  11.826, // 7
 0.05706551, 103.2078878,   377336.3051112, -121.035, -10.724,   5.028, // 8
 0.05332117,  10.6638198,  1367733.0906648,   57.370,  18.011,  -8.566, // 9
 0.04575792, 238.1712992,   854535.1727426,  -31.065,   3.623,  -1.769, // 10
-0.04092258, 222.5656978,  -441199.8173404,  -91.506, -14.307,   6.797, // 11
-0.03471892, 297.8502042,   445267.1115168,  -16.300,   1.832,  -0.884, // 12
-0.03038341, 132.4925206,   513197.9179223,   88.434,  14.388,  -6.797, // 13
 0.01532696,  49.1562098,   -75869.8120211,   35.458,   4.231,  -2.001, // 14
-0.01252767, 321.5076100,  1443602.9026859,   21.912,  13.780,  -6.566, // 15
 0.01098147, 308.4192127,  -489205.1674233,  158.029,  14.915,  -7.029, // 16
 0.01067495, 336.4374054,  1303869.5784357, -155.171,  -7.020,   3.259, // 17
 0.01003439,  44.8902341,  1431596.6028940,  269.911,  43.043, -20.392, // 18
 0.00854794, 201.4739940,   826670.7108043, -245.142, -21.367,  10.057, // 19
-0.00788808,  98.2661062,   449334.4056931, -124.107, -10.643,   5.028, // 20
-0.00676617, 233.2295176,   926533.2733244,  -34.136,   3.705,  -1.769, // 21
-0.00516242, 162.8867928,   -31931.7561146, -106.271, -12.516,   5.913, // 22
 0.00498735, 295.3793134,   481266.1618077,  -17.836,   1.873,  -0.884, // 23
 0.00403619,  13.1347106,  1331734.0403739,   58.906,  17.971,  -8.566, // 24
 0.00399436, 145.6272312,  1844931.9582962,  147.340,  32.359, -15.363, // 25
 0.00386085, 111.4008168,  1781068.4460670,  -65.201,   7.328,  -3.538, // 26
 0.00366502, 190.8101743,  -541062.3798605, -302.511, -39.379,  18.623, // 27
-0.00268863,  87.6022864,  -918398.6849717, -181.476, -28.654,  13.594, // 28
-0.00260163, 287.2811957,  1379739.3904568, -190.629, -11.251,   5.260, // 29
 0.00239043, 328.2444765,   -99862.5625201, -211.005, -25.072,  11.826, // 30
-0.00234808,  72.8136156,   922465.9791481,   73.670,  16.179,  -7.682, // 31
 0.00223616, 240.6421900,   818536.1224516,  -29.529,   3.582,  -1.769, // 32
-0.00211949, 267.4559319,   990396.7855536,  178.405,  28.736, -13.594, // 33
-0.00206875, 355.0582184,    71998.1005819,   -3.072,   0.082,   0.0,   // 34
 0.00204755, 105.6787787,   341337.2548203, -119.499, -10.765,   5.028, // 35
-0.00177310, 184.1196211,   401329.0556102,  125.428,  18.579,  -8.798, // 36
-0.00159489,  62.2446070,  1856938.2580881, -100.659,   3.097,  -1.537, // 37
 0.00121500, 338.9082962,  1267870.5281447, -153.636,  -7.061,   3.259, // 38
-0.00111045,  96.4710214,  1920801.7703173,  111.882,  28.128, -13.363, // 39
-0.00089158,  38.5872012,   858602.4669189, -138.871,  -8.852,   4.144, // 40
-0.00080959,   8.1929290,  1403732.1409558,   55.834,  18.052,  -8.566, // 41
 0.00075886, 203.9448849,   790671.6605134, -243.606, -21.408,  10.057, // 42
-0.00071332, 220.0948070,  -405200.7670494,  -93.042, -14.266,   6.797, // 43
-0.00070033,  95.7952154,   485333.4559841, -125.643, -10.602,   5.028, // 44
 0.00069136, 323.3026948,   -27864.4619382, -214.077, -24.990,  11.826, // 45
 0.00059613,  51.6271006,  -111868.8623121,   36.994,   4.190,  -2.001, // 46
 0.00054937, 246.3642282,  2258267.3136983,   24.769,  21.675, -10.335, // 47
 0.00053713, 179.8536455,  1908795.4705253,  359.881,  57.390, -27.189, // 48
 0.00051966, 113.8717076,  1745069.3957761,  -63.665,   7.287,  -3.538, // 49
-0.00048694,  27.9233814,  -509130.6237459, -196.241, -26.863,  12.710, // 50
-0.00039921,  46.6853189,   -39870.7617302,   33.922,   4.272,  -2.001, // 51
-0.00038127,  83.3826241,   -12006.2997919,  247.999,  29.262, -13.826, // 52
 0.00035051,  70.3427248,   958465.0294390,   72.134,  16.220,  -7.682, // 53
-0.00034003, 263.6237898,   381403.5992876, -228.841, -23.199,  10.941, // 54
 0.00032968,  66.5105872,   349471.8431730, -335.112, -35.715,  16.854, // 55
 0.00032694, 148.0981220,  1808932.9080052,  148.876,  32.318, -15.363, // 56
-0.00032269, 130.0216297,   549196.9682132,   86.899,  14.429,  -6.797, // 57
 0.00029936, 160.4159020,     4067.2941764, -107.806, -12.475,   5.913, // 58
 0.00029431, 280.5906425,  2322130.8259275,  237.310,  46.706, -22.161, // 59
-0.00027506, 197.2080184,  2334137.1257194,  -10.689,  17.444,  -8.334, // 60
 0.00026341,  55.8467629, -1018261.2474918, -392.482, -53.726,  25.420, // 61
 0.00020880,  15.6056014,  1295734.9900829,   60.441,  17.930,  -8.566, // 62
-0.00018594, 312.6388751, -1395597.5526031, -271.447, -43.002,  20.392, // 63
-0.00017645, 333.9665146,  1339868.6287266, -156.707,  -6.979,   3.259, // 64
-0.00016222, 207.7770270,  1399664.8467794,  163.640,  30.527, -14.479, // 65
-0.00016203, 111.3060056,  -521136.9235379,   51.758,   2.399,  -1.116, // 66
 0.00015877,  77.1744024,  1717204.9338378, -277.742, -17.703,   8.288, // 67
-0.00015573, 139.2293870, -1030267.5472838, -144.483, -24.464,  11.594, // 68
-0.00015470, 300.3210950,   409268.0612258,  -14.764,   1.791,  -0.884, // 69
-0.00015164,  42.4193433,  1467595.6531849,  268.375,  43.083, -20.392, // 70
-0.00014881, 152.3177843,   902540.5228254, -280.599, -25.598,  12.057, // 71
 0.00013289, 193.2810651,  -577061.4301514, -300.976, -39.419,  18.623, // 72
-0.00012605, 319.0830325,   878527.9232416,  215.398,  32.926, -15.595, // 73
-0.00011839, 289.7520865,  1343740.3401658, -189.093, -11.292,   5.260, // 74
 0.00011676,  13.0883973,  1932808.0701092, -136.117,  -1.134,   0.463, // 75
 0.00011483, 184.0733078,  1002403.0853456,  -69.594,  -0.526,   0.232, // 76
 0.00011229, 173.5506126,  1335801.3345503,  -48.901,   5.496,  -2.653, // 77
 0.00010959, 212.1378138,  2194403.8014692, -187.772,  -3.356,   1.491, // 78
-0.00010615,  64.7154979,  1820939.2077972,  -99.123,   3.056,  -1.537, // 79
-0.00010403, 186.5905120,   365330.0053193,  126.964,  18.538,  -8.798, // 80
-0.00009933, 199.0031032,   862669.7610953, -246.678, -21.326,  10.057, // 81
 0.00009713,  25.4524906,  -473131.5734550, -197.777, -26.822,  12.710, // 82
 0.00009439, 243.1130809,   782537.0721607,  -27.993,   3.541,  -1.769, // 83
-0.00009129, 231.4344328,  2398000.6379486,  201.853,  42.475, -20.160, // 84
 0.00008576, 341.3791871,  1231871.4778538, -152.100,  -7.101,   3.259, // 85
 0.00008376,  36.0214992, -1407603.8523950,  -23.448, -13.739,   6.566, // 86
 0.00008357, 149.8932068,   337465.5433811,  -87.113,  -6.453,   3.028, // 87
 0.00008172, 330.7153673,  -135861.6128111, -209.469, -25.113,  11.826, // 88
 0.00008126, 302.2109911,  1240006.0662065, -367.713, -32.051,  15.085, // 89
-0.00008062, 143.1563403,  1880931.0085871,  145.804,  32.400, -15.363, // 90
-0.00008031, 108.9299260,  1817067.4963579,  -66.737,   7.369,  -3.538, // 91
 0.00007847, 248.8351190,  2222268.2634074,   26.305,  21.634, -10.335, // 92
 0.00007604,  36.1163104,   894601.5172099, -140.407,  -8.811,   4.144, // 93
 0.00007316, 319.0367192,  1479601.9529769,   20.376,  13.821,  -6.566, // 94
 0.00007064, 124.3944028,  1411671.1465714,  -84.359,   1.265,  -0.653, // 95
-0.00007029, 347.0064140,   369397.2994956,   19.158,   6.063,  -2.885, // 96
-0.00006941, 320.8318040,     8134.5883527, -215.613, -24.949,  11.826, // 97
 0.00006859, 108.1496695,   305338.2045293, -117.963, -10.806,   5.028, // 98
-0.00006428,  41.0580920,   822603.4166280, -137.335,  -8.893,   4.144, // 99
 0.00006070,  21.3276396,  2735466.1813297,  114.739,  36.023, -17.132, // 100
-0.00005593, 162.9816041,  2270273.6134903, -223.230,  -7.587,   3.491, // 101
-0.00005364,  85.1313956,  -882399.6346808, -183.012, -28.613,  13.594, // 102
-0.00005160, 230.7586268,   962532.3236154,  -35.672,   3.746,  -1.769, // 103
 0.00004973, 274.1927984,  -553068.6796524,  -54.513, -10.116,   4.797, // 104
 0.00004895, 188.3392834,  -505063.3295696, -304.047, -39.338,  18.623, // 105
-0.00004716,  28.0181927,  1793074.7458589, -313.200, -21.934,  10.288, // 106
 0.00004383, 206.4157757,   754672.6102224, -242.070, -21.449,  10.057, // 107
 0.00004229, 116.3425984,  1709070.3454851,  -62.129,   7.246,  -3.538, // 108
 0.00004164, 171.0797218,  1371800.3848412,  -50.437,   5.537,  -2.653, // 109
-0.00003788, 165.3576836,   -67930.8064055, -104.735, -12.556,   5.913, // 110
-0.00003559, 252.9599701,  -986329.4913773, -286.211, -41.211,  19.507, // 111
 0.00003504, 347.1012252,  2671602.6691005,  -97.802,  10.992,  -5.307, // 112
-0.00003441, 332.1714298,  2811335.9933508,   79.282,  31.792, -15.132, // 113
-0.00003354,  75.2845064,   886466.9288571,   75.206,  16.139,  -7.682, // 114
 0.00003083, 314.8170569,  2385994.3381567,  449.851,  71.738, -33.986, // 115
-0.00002815, 352.5873276,   107997.1508728,   -4.608,   0.123,   0.0,   // 116
 0.00002773,  68.9814735,   313472.7928821, -333.576, -35.756,  16.854, // 117
 0.00002589, 283.0615334,  2286131.7756366,  238.846,  46.666, -22.161, // 118
 0.00002557, 205.3061361,  1435663.8970704,  162.104,  30.568, -14.479, // 119
-0.00002543,   4.2659756, -1507466.4149151, -234.453, -38.811,  18.391, // 120
 0.00002526, 148.0518087,  2410006.9377406,  -46.146,  13.213,  -6.334, // 121
 0.00002509,  79.6452933,  1681205.8835469, -276.206, -17.744,   8.288, // 122
-0.00002361, 297.9450154,  2747472.4811216, -133.259,   6.761,  -3.306, // 123
 0.00002353, 181.6487303,   437328.1059012,  123.892,  18.619,  -8.798, // 124
-0.00002309, 266.0946807,   345404.5489966, -227.306, -23.240,  10.941, // 125
-0.00002301, 305.9483219,  -453206.1171323,  156.493,  14.956,  -7.029, // 126
-0.00002236,  49.1098964,   525204.2177142, -159.564, -14.874,   7.029, // 127
-0.00002228, 121.8750141, -1455609.2024779,  226.087,  15.482,  -7.261, // 128
 0.00002157,  55.5540539,  2799329.6935588,  327.281,  61.054, -28.958, // 129
-0.00002088, 222.6120111, -1042273.8470757,  103.516,   4.798,  -2.232, // 130
 0.00002084, 170.9849105,  -930404.9847637,   66.523,   0.608,  -0.232, // 131
-0.00002048, 199.6789092,  2298138.0754285,   -9.153,  17.403,  -8.334, // 132
 0.00001984, 214.6087046,  2158404.7511782, -186.236,  -3.397,   1.491, // 133
 0.00001903, 280.8833515, -1495460.1151232, -482.452, -68.074,  32.217, // 134
 0.00001873, 284.8103048,  1415738.4407477, -192.165, -11.210,   5.260, // 135
-0.00001834,  59.8200295,  1291863.2786437,   92.828,  22.243, -10.567, // 136
 0.00001817,  59.7737162,  1892937.3083791, -102.195,   3.138,  -1.537, // 137
-0.00001809, 264.9850411,  1026395.8358446,  176.869,  28.777, -13.594, // 138
 0.00001808, 176.0215034,  1299802.2842593,  -47.365,   5.455,  -2.653, // 139
 0.00001789, 150.5690128,  1772933.8577143,  150.412,  32.277, -15.363, // 140
 0.00001754,  54.0979914,  -147867.9126030,   38.529,   4.149,  -2.001, // 141
-0.00001695, 276.6636892,  -589067.7299434,  -52.977, -10.157,   4.797, // 142
-0.00001590, 139.3241982,  1271937.8223211, -261.442, -19.535,   9.172, // 143
-0.00001579, 218.3460355,   465192.5678394,  337.969,  43.610, -20.623, // 144
 0.00001435, 261.0580878, -1884802.7200263, -113.418, -28.087,  13.363, // 145
-0.00001428, 217.6239162,  -369201.7167585,  -94.578, -14.225,   6.797, // 146
-0.00001408, 243.8933374,  2294266.3639893,   23.233,  21.716, -10.335, // 147
-0.00001306, 177.6754637, -1872796.4202344, -361.417, -57.349,  27.189, // 148
 0.00001236, 259.3578142,  1888870.0142027,    5.612,  15.612,  -7.450, // 149
-0.00001234, 128.6603785,   -95795.2683438, -318.812, -37.547,  17.738, // 150
 0.00001205,  94.0001306,  1956800.8206082,  110.346,  28.169, -13.363, // 151
 0.00001196, 302.7919858,   373269.0109349,  -13.229,   1.750,  -0.884, // 152
-0.00001164, 261.1528990,   417402.6495785, -230.377, -23.158,  10.941, // 153
-0.00001132, 342.7404383,  1876863.7144108,  253.611,  44.874, -21.276, // 154
-0.00001114, 246.2694169,   -43938.0559065,  141.728,  16.747,  -7.913, // 155
-0.00001102, 292.9084226,   517265.2120986,  -19.372,   1.914,  -0.884, // 156
-0.00001096, 177.3827547,  1944794.5208163,  358.345,  57.431, -27.189, // 157
 0.00001083, 304.6818819,  1204007.0159156, -366.177, -32.092,  15.085, // 158
-0.00000996, 121.9235120,  1447670.1968623,  -85.894,   1.306,  -0.653, // 159
-0.00000976, 196.5322124,   898668.8113862, -248.213, -21.286,  10.057, // 160
-0.00000927,  94.0464439,  1355726.7908729,  305.369,  47.274, -22.392, // 161
 0.00000917,  18.0764922,  1259735.9397920,   61.977,  17.889,  -8.566, // 162
 0.00000909,  23.7985304,  2699467.1310387,  116.275,  35.982, -17.132, // 163
-0.00000828, 212.0430026,  -107801.5681357,  -70.813,  -8.284,   3.912, // 164
 0.00000819,  58.3176537, -1054260.2977828, -390.946, -53.767,  25.420, // 165
-0.00000802, 321.5539233,   842528.8729506,  216.934,  32.885, -15.595, // 166
-0.00000779, 141.7002778, -1066266.5975747, -142.947, -24.505,  11.594, // 167
 0.00000745,  64.0396919,   385470.8934639, -336.648, -35.674,  16.854, // 168
 0.00000744,  80.9117333,    23992.7504990,  246.463,  29.303, -13.826, // 169
-0.00000743, 278.1197517,  2358129.8762184,  235.774,  46.747, -22.161, // 170
-0.00000723,   6.3978442,  2875199.5055799,  291.823,  56.823, -26.957, // 171
 0.00000697, 349.5721160,  2635603.6188096,  -96.266,  10.951,  -5.307, // 172
 0.00000675, 274.1464851,    48005.3500829, -249.535, -29.221,  13.826, // 173
 0.00000670, 251.3060098,  2186269.2131164,   27.841,  21.594, -10.335, // 174
-0.00000664, 284.8566182,   814664.4110124,    2.857,   7.895,  -3.769, // 175
-0.00000661, 336.3425942,  -998335.7911692,  -38.212, -11.948,   5.681, // 176
-0.00000653,  44.2144281,    -3871.7114392,   32.386,   4.313,  -2.001, // 177
 0.00000638, 250.4890792,  -950330.4410863, -287.747, -41.170,  19.507, // 178
 0.00000636, 152.3640976,   301466.4930901,  -85.577,  -6.493,   3.028, // 179
 0.00000635, 122.0646366,  3148801.5367318,   -7.831,  25.339, -12.104, // 180
-0.00000631, 165.4524949,  2234274.5631993, -221.694,  -7.628,   3.491, // 181
 0.00000623, 306.0431332,  1848999.2524725,   39.534,  19.884,  -9.451, // 182
-0.00000603, 331.4956238,  1375867.6790176, -158.243,  -6.938,   3.259, // 183
-0.00000599, 154.7886751,   866541.4725345, -279.064, -25.639,  12.057, // 184
 0.00000597, 156.2910509,  3212665.0489610,  204.710,  50.370, -23.929, // 185
 0.00000554, 113.8253943,  2346143.4255114, -258.688, -11.818,   5.492, // 186
-0.00000541, 349.4773048,   333398.2492047,   20.693,   6.022,  -2.885, // 187
-0.00000521, 147.4223160,   373464.5936720,  -88.649,  -6.412,   3.028, // 188
 0.00000505,  53.3758721,  -982262.1972009, -394.018, -53.685,  25.420, // 189
-0.00000504,  67.1863887,  1784940.1575062,  -97.587,   3.015,  -1.537, // 190
-0.00000499, 127.5507389,   585196.0185042,   85.363,  14.470,  -6.797, // 191
-0.00000495,  72.9084268,  3224671.3487529,  -43.289,  21.108, -10.103, // 192
 0.00000484, 343.8500779,  1195872.4275628, -150.564,  -7.142,   3.259, // 193
-0.00000468,   4.3607869,   794738.9546898, -351.412, -33.883,  15.969, // 194
-0.00000457, 189.0614028,   329330.9550283,  128.500,  18.497,  -8.798, // 195
 0.00000446, 194.7371276,  2370136.1760104,  -12.224,  17.485,  -8.334, // 196
 0.00000444, 349.4309915,   934472.2789400, -174.329, -13.083,   6.144, // 197
 0.00000429, 195.7519559,  -613060.4804424, -299.440, -39.460,  18.623, // 198
-0.00000428, 292.2229773,  1307741.2898749, -187.558, -11.333,   5.260, // 199
-0.00000426,  30.4890835,  1757075.6955680, -311.664, -21.975,  10.288, // 200
-0.00000421, 310.1679842, -1359598.5023121, -272.983, -42.961,  20.392, // 201
-0.00000412, 210.2479178,  1363665.7964885,  165.176,  30.486, -14.479, // 202
 0.00000382, 167.2475797,   762807.1985752, -457.683, -46.398,  21.882, // 203
 0.00000381, 248.7888057,  2823342.2931427, -168.717,   2.529,  -1.306, // 204
-0.00000375, 274.2876096,  1749136.6899524, -171.472,  -5.188,   2.375, // 205
-0.00000373,   5.7220381,  1439731.1912467,   54.298,  18.093,  -8.566, // 206
-0.00000370, 107.1348412,  3288534.8609821,  169.252,  46.139, -21.929, // 207
 0.00000370, 245.5839717,   746538.0218697,  -26.457,   3.501,  -1.769, // 208
 0.00000360, 283.015220,   2887205.8053719,   43.824,  27.561, -13.131, // 209
-0.00000356,  74.7035116,  1753203.9841288, -279.278, -17.663,   8.288, // 210
-0.00000356, 113.7768964,  -557135.9738288,   53.294,   2.358,  -1.116, // 211
 0.00000338, 225.1313999,  1825006.5019735, -206.929,  -9.419,   4.376, // 212
-0.00000328,  43.5289829,   786604.3663370, -135.799,  -8.933,   4.144, // 213
-0.00000309, 300.4159063,  2711473.4308307, -131.724,   6.720,  -3.306, // 214
-0.00000299, 229.3025643, -1984665.2825464, -324.423, -53.159,  25.188, // 215
-0.00000296, 209.6669230,  2230402.8517601, -189.308,  -3.315,   1.491, // 216
-0.00000295, 121.9698253,   846596.1671270,  109.128,  20.411,  -9.682, // 217
-0.00000280, 334.6423206,  2775336.9430598,   80.817,  31.751, -15.132 // 218
}; // SvP

double SivP[244][3] = {
 3.95801, 119.7524,      131.8489, // 1
 1.96196, 125.0455,    -1934.1362, // 2
-0.31752, 233.0867,   479264.2898, // 3
 0.25032, 107.4411,      -20.1862, // 4
-0.22821,  81.5232,    22518.4428, // 5
 0.21892, 344.7896,  -477067.0188, // 6
 0.20536, 254.7188,   477330.7165, // 7
-0.17881, 345.2585,   480890.6839, // 8
 0.17744,  67.3439,    32964.4672, // 9
 0.15650, 276.7408,      -18.8294, // 10
 0.13703, 260.0092,   475264.7314, // 11
 0.13650, 350.0824,  -479133.0038, // 12
 0.12370, 208.6855,   476229.3841, // 13
 0.10017, 311.5895,   964469.8989, // 14
-0.09543, 152.5142,     9037.5128, // 15
 0.09015,  67.7377,    -2281.2258, // 16
 0.08376, 163.2312,    45036.8856, // 17
-0.08038, 220.1798,    -1935.5332, // 18
 0.07856,  73.6904,     -969.4835, // 19
 0.06810,  98.0899,     2065.4221, // 20
-0.06292, 205.5247,      150.6783, // 21
 0.05866, 327.1213,  -380370.8882, // 22
 0.05401, 209.8312,    33718.1470, // 23
-0.05127, 132.6660,    65928.9344, // 24
 0.05071, 357.2510,  -411269.9333, // 25
 0.04864,  55.0668,    31555.9556, // 26
 0.04745, 331.4784,  -477219.0538, // 27
 0.04745, 241.4051,   477178.6814, // 28
 0.04642,  19.0127,  -413203.5065, // 29
 0.04583, 192.2174,  -857569.7559, // 30
 0.04567, 244.0516,  -890402.3742, // 31
 0.04563, 332.7695,    29929.5615, // 32
 0.04549, 166.0821,      -40.7576, // 33
 0.04528, 355.4532,   890666.0719, // 34
 0.04469,  62.6015,  -368298.4698, // 35
 0.04364, 220.4891,   413467.2043, // 36
-0.04264, 306.5588,  -454680.4248, // 37
 0.03985, 292.3874,  -444234.4005, // 38
 0.03881, 209.3049,   413315.1692, // 39
 0.03878,   7.8292,  -413355.5416, // 40
 0.03776, 263.7613,   458372.2410, // 41
 0.03731, 287.6929,  -845497.3374, // 42
-0.03645, 340.7607,  -390816.9126, // 43
-0.03534, 216.4919,   499717.3105, // 44
 0.03483, 109.6971,  -409643.5392, // 45
 0.03054, 202.1901,   510163.3348, // 46
 0.02959, 260.8658,     1034.1282, // 47
 0.02914, 317.9851,      282.5272, // 48
 0.02885, 217.3033,     -375.8005, // 49
-0.02756, 205.7945,  -868015.7802, // 50
 0.02678,   0.7459,   888600.0868, // 51
-0.02644, 333.0947,  -414304.8389, // 52
 0.02549, 159.3389,    -4562.4516, // 53
 0.02503, 343.8472,   890514.0368, // 54
 0.02501, 232.4432,  -890554.4092, // 55
-0.02475,  32.3540,  -347406.4210, // 56
 0.02398, 321.0478,     3034.9057, // 57
-0.02336, 257.4887,  -824605.2887, // 58
 0.02299,  28.1371,    -4443.4172, // 59
-0.02288,  66.8002,   503409.1267, // 60
-0.02130,  16.1068,   476447.2666, // 61
 0.02000, 210.3553,     3691.8162, // 62
-0.01906,   8.0621,   956463.1574, // 63
 0.01896, 299.7687,   477158.1100, // 64
 0.01896,  29.8392,  -477239.6253, // 65
-0.01864,   4.6743,   478231.5787, // 66
 0.01825, 249.3451,  -892468.3592, // 67
 0.01809, 352.2098,   476823.0671, // 68
 0.01793, 225.7820,   411401.2192, // 69
 0.01779, 198.0425,   474917.6418, // 70
-0.01769, 179.1666,      345.6927, // 71
 0.01756, 287.9400,  -479480.0934, // 72
-0.01735, 355.1425,   475263.3345, // 73
 0.01719, 233.3895,  -404297.8426, // 74
-0.01715,  85.2157,  -479134.4008, // 75
-0.01709,  46.7210,   964468.5019, // 76
-0.01675,  16.2933,  -468161.3548, // 77
-0.01652, 241.0476,     -751.6010, // 78
 0.01648, 100.8137,   413335.3554, // 79
 0.01640, 108.1981,  -379617.2084, // 80
 0.01599, 293.4239,  -410300.4497, // 81
 0.01565,  28.4618,  -432161.9820, // 82
-0.01539, 286.0924,   486236.3804, // 83
 0.01487, 209.8262,  -954265.8864, // 84
 0.01465, 131.2257,   416370.2611, // 85
 0.01464, 268.5523,      723.0292, // 86
-0.01435, 108.3144,    62894.0287, // 87
 0.01419, 167.4312,   446299.8226, // 88
 0.01409, 298.1469,   522235.7533, // 89
 0.01399, 176.6259,   487271.0312, // 90
 0.01395,  29.6822,   954529.5841, // 91
 0.01378,  24.3078,  -415269.4916, // 92
 0.01318,  75.8891,    73935.6758, // 93
 0.01296, 289.7534,    31436.9212, // 94
 0.01295, 313.9430,  -381779.3998, // 95
-0.01285, 326.1242,    90073.7713, // 96
 0.01281, 332.9457,  -856816.0760, // 97
 0.01269, 237.0206,  -383405.7939, // 98
-0.01244, 264.7626,   -13480.9300, // 99
-0.01206, 243.6398,    67555.3285, // 100
-0.01189, 242.2020,   478490.4237, // 101
-0.01189, 308.1364,     -901.4050, // 102
 0.01171,  98.2408,  -881496.7102, // 103
 0.01170,  74.6193,  -443480.7206, // 104
 0.01124, 194.3722,  -474163.9620, // 105
 0.01122, 102.9860,   480233.7733, // 106
 0.01115, 184.9200,    14577.8477, // 107
 0.01096, 280.2841,  -445642.9120, // 108
 0.01083,  50.8219,    34777.2591, // 109
-0.01077,  68.2574,  -477048.1893, // 110
-0.01077, 107.0457,  -413184.6771, // 111
-0.01076, 338.1832,   477349.5459, // 112
-0.01069, 308.4809,   413486.0337, // 113
 0.01066,  86.5529,  1441668.7665, // 114
 0.01050, 197.8017,  -447269.3061, // 115
-0.01044, 148.3767,   525927.5695, // 116
 0.01019, 178.9306,  -858978.2674, // 117
-0.01011, 250.0891,    -3868.2724, // 118
 0.00987,  38.7138,   935571.1087, // 119
 0.00986, 172.2981,   411054.1296, // 120
-0.00969, 247.7974,      883.4499, // 121
 0.00965, 102.0911,  -860604.6615, // 122
 0.00959,  74.3154,   422372.8682, // 123
 0.00945,  34.9726,   952463.5991, // 124
-0.00927, 267.6026,   543127.8020, // 125
 0.00921, 322.4130,   476209.1979, // 126
 0.00919, 153.7856,  -887499.3174, // 127
-0.00918,  47.5953,   112592.2141, // 128
 0.00911, 215.1190,  -956331.8714, // 129
 0.00905, 345.1009,   510917.0147, // 130
-0.00901, 152.6384,      119.0344, // 131
-0.00899, 136.7609,    -4311.5684, // 132
 0.00887, 329.7828,  -415616.5812, // 133
 0.00882, 343.6647,   953428.2517, // 134
 0.00864, 302.2493,   923498.6902, // 135
 0.00864,  51.4327,   477180.0382, // 136
 0.00859, 141.5781,  -477217.6971, // 137
-0.00842, 120.1832,   958089.5515, // 138
-0.00820, 237.7231,   467409.7538, // 139
-0.00812, 112.1146,     -916.7043, // 140
 0.00809, 190.1237,   508754.8232, // 141
 0.00802, 108.2246,   507128.4291, // 142
 0.00791, 256.3206,   893569.1287, // 143
-0.00781, 306.2968,   966535.8839, // 144
-0.00781, 293.2084,  -966272.1862, // 145
-0.00725, 127.5416,      890.4929, // 146
 0.00719, 108.3337,    18075.0256, // 147
 0.00706,  54.8679,     1099.3725, // 148
 0.00698, 269.2193,    -3559.9674, // 149
 0.00698, 305.4979,   888252.9972, // 150
-0.00672, 331.4909,  -890383.5447, // 151
-0.00665,  82.6978,   890684.9013, // 152
 0.00649, 229.6991,     1032.7111, // 153
 0.00643, 302.0190,    26894.6558, // 154
 0.00639, 192.1289,  -892815.4488, // 155
 0.00639, 131.2943,   408891.9382, // 156
 0.00638, 176.4029,     4594.0955, // 157
 0.00630, 319.7186,   489928.1967, // 158
-0.00629, 129.1018,   135110.6569, // 159
-0.00611, 317.2284,   913052.6659, // 160
-0.00603,  28.2471,   899571.7358, // 161
-0.00602, 292.7999,   512228.7569, // 162
-0.00588, 229.8628,   548446.0123, // 163
 0.00562, 187.4625,     -989.6698, // 164
 0.00558, 265.0368,    12296.6219, // 165
-0.00558, 162.7825,   480771.6495, // 166
 0.00555, 109.0887, -1367601.2418, // 167
 0.00541, 130.4185,  1367864.9395, // 168
 0.00533, 288.7530,  -417778.7726, // 169
-0.00528, 130.2916,     1222.1138, // 170
-0.00520, 201.5485,   482889.8735, // 171
-0.00511, 232.3856,  -827640.1943, // 172
 0.00505,  74.2115,   443264.9169, // 173
-0.00504,   7.4393,  -350441.3267, // 174
-0.00503,  40.4796,     2658.5624, // 175
-0.00502, 176.6101,      -55.3705, // 176
 0.00492, 292.2040,   472636.4160, // 177
 0.00476,  22.0617,  -481761.3192, // 178
-0.00475, 358.0099,   413335.7406, // 179
-0.00475, 156.5359,  -413334.9702, // 180
-0.00472,  15.8504,    35999.3729, // 181
 0.00471, 344.4315,    35958.6152, // 182
 0.00467, 107.1891,     1291.5561, // 183
 0.00465, 240.1422,    -6843.6774, // 184
-0.00457,  15.2599,  -821570.3830, // 185
 0.00441,  76.7419,    68963.8400, // 186
 0.00440, 235.8003,   890534.2230, // 187
-0.00430, 210.5793,   157629.0998, // 188
-0.00427, 150.6765,  -344371.5154, // 189
 0.00417,  11.6614,  -822978.8946, // 190
 0.00416, 157.2343,   472755.4504, // 191
-0.00414, 298.5012,  -968338.1712, // 192
 0.00413, 146.4690,  -345780.0269, // 193
-0.00408,  65.9504,      507.6494, // 194
 0.00405, 264.2128,    58517.8157, // 195
 0.00404,  57.4162, -1334768.6235, // 196
-0.00404, 317.7457,    50577.2206, // 197
 0.00400, 140.3136,  -414086.9564, // 198
 0.00398, 222.2885,  -888468.8009, // 199
 0.00398, 187.6050,  -381898.4342, // 200
 0.00396,  93.8066,     -494.8349, // 201
 0.00396, 265.8063,   886090.8058, // 202
 0.00395, 246.7109,  -481642.2849, // 203
 0.00392,  10.4835,    29155.6954, // 204
-0.00391, 277.6611,   413294.5978, // 205
-0.00389,  76.2913,  -413376.1130, // 206
-0.00374, 104.8851,  -809497.9645, // 207
 0.00365, 311.2549,   447053.5024, // 208
 0.00364, 184.0244,   473194.4784, // 209
 0.00361, 214.5674,   482299.1954, // 210
-0.00359, 182.1301,   435853.7982, // 211
-0.00358, 311.3820,   570964.4552, // 212
 0.00357, 263.3480,   408772.9038, // 213
-0.00347, 284.2064,      658.3277, // 214
 0.00343, 135.7094,  1365798.9545, // 215
-0.00341, 333.8327,   892599.6452, // 216
-0.00338,  19.3837,   467785.5543, // 217
 0.00336, 310.3369,  -378558.0963, // 218
-0.00334, 239.8963,  -332299.0969, // 219
-0.00334, 148.1926,   478985.2586, // 220
-0.00333, 116.5731,  -413711.1559, // 221
-0.00329, 156.8717,    -8005.3445, // 222
 0.00323,  16.3707,   954377.5491, // 223
 0.00323, 196.5165,  -954417.9215, // 224
 0.00317, 241.5814,  -854403.0013, // 225
-0.00316, 177.8587,   854666.6990, // 226
 0.00313, 228.7494,   476704.0328, // 227
-0.00313, 115.0271,      252.6303, // 228
 0.00311, 110.7851,   -36019.5591, // 229
 0.00311, 152.8097, -1322696.2050, // 230
 0.00305, 345.2793,    10015.3961, // 231
 0.00305,  52.2577,  -859097.3018, // 232
 0.00304, 285.8675,    33555.1453, // 233
-0.00304,  44.2281,  -476853.1750, // 234
-0.00303, 289.2042,    35979.1866, // 235
-0.00303, 314.1579,   477544.5603, // 236
 0.00301,  84.8200,  -398757.5077, // 237
-0.00297, 292.0729,   180147.5426, // 238
 0.00297, 151.9110,  -894977.6403, // 239
 0.00292, 105.9171,    16859.0735, // 240
-0.00288, 108.7936,  1369798.5128, // 241
 0.00284,  61.0203,  -417897.8070, // 242
-0.00283, 171.5956,  -931879.2924, // 243
-0.00283, 346.5619,     -619.7521 // 244
}; // SivP

double SiivP[200][3] = {
 0.46578, 357.529,     35999.050, // 1
-0.14345, 103.208,    377336.305, // 2
-0.11495, 238.171,    854535.173, // 3
 0.10310, 222.566,   -441199.817, // 4
 0.07656, 132.493,    513197.918, // 5
-0.07062,  27.775,       131.849, // 6
 0.01977,  98.266,    449334.406, // 7
 0.01702, 233.230,    926533.273, // 8
-0.01254, 295.379,    481266.162, // 9
-0.01124, 240.642,    818536.122, // 10
 0.01041, 355.058,     71998.101, // 11
-0.01030, 105.679,    341337.255, // 12
-0.01014,  13.135,   1331734.040, // 13
 0.00677,  87.602,   -918398.685, // 14
-0.00601, 328.244,    -99862.563, // 15
 0.00534, 267.456,    990396.786, // 16
 0.00401,   4.098,       -18.829, // 17
-0.00392, 252.800,   -477067.019, // 18
-0.00368, 162.969,    477330.716, // 19
 0.00359, 220.095,   -405200.767, // 20
 0.00353,  95.795,    485333.456, // 21
-0.00305, 338.908,   1267870.528, // 22
 0.00298, 235.700,    890534.223, // 23
 0.00293, 183.729,       -20.186, // 24
 0.00233, 100.737,    413335.355, // 25
 0.00204,   8.193,   1403732.141, // 26
-0.00191, 203.945,    790671.661, // 27
-0.00175, 323.303,    -27864.462, // 28
 0.00163, 130.022,    549196.968, // 29
-0.00150,  51.627,   -111868.862, // 30
-0.00130, 113.872,   1745069.396, // 31
-0.00105,  15.606,   1295734.990, // 32
 0.00101,  46.685,    -39870.762, // 33
 0.00098,  80.028,      9037.513, // 34
-0.00089,  63.057,       150.678, // 35
-0.00088,  70.343,    958465.029, // 36
-0.00083, 125.045,     -1934.136, // 37
-0.00083, 287.032,   -413203.507, // 38
-0.00082, 148.098,   1808932.908, // 39
 0.00081, 254.014,       -40.758, // 40
-0.00081, 152.061,   -890402.374, // 41
-0.00081, 263.490,    890666.072, // 42
-0.00078, 128.524,    413467.204, // 43
-0.00075, 160.416,      4067.294, // 44
-0.00071, 243.113,    782537.072, // 45
-0.00069, 319.858,     -1935.533, // 46
 0.00068, 257.953,    476229.384, // 47
 0.00065, 167.245,     -2281.226, // 48
 0.00056,  47.818,   -477219.054, // 49
 0.00056, 317.745,    477178.681, // 50
-0.00052, 108.150,    305338.205, // 51
 0.00047, 312.639,  -1395597.553, // 52
 0.00047, 284.319,    413315.169, // 53
 0.00046,  82.844,   -413355.542, // 54
 0.00044, 333.967,   1339868.629, // 55
 0.00044, 162.159,     31555.956, // 56
 0.00044, 122.967,      -969.484, // 57
-0.00043, 341.379,   1231871.478, // 58
 0.00043, 134.963,    477198.868, // 59
-0.00041, 330.715,   -135861.613, // 60
 0.00040, 247.088,     -4562.452, // 61
-0.00040, 213.092,       890.493, // 62
 0.00039, 300.321,    409268.061, // 63
 0.00038,  42.419,   1467595.653, // 64
 0.00036,  32.981,    477158.110, // 65
 0.00036, 123.055,   -477239.625, // 66
 0.00036,  10.664,   1367733.091, // 67
 0.00035, 320.832,      8134.588, // 68
 0.00034, 160.404,       883.450, // 69
-0.00033, 193.281,   -577061.430, // 70
 0.00033,   7.248,      1034.128, // 71
 0.00030,  74.973,     29929.562, // 72
 0.00030,  59.126,    890514.037, // 73
 0.00030, 289.752,   1343740.340, // 74
 0.00030, 307.724,   -890554.409, // 75
-0.00029, 184.073,   1002403.085, // 76
 0.00027,  85.131,   -882399.635, // 77
 0.00027,  64.715,   1820939.208, // 78
-0.00027, 117.837,   -954265.886, // 79
 0.00026, 230.759,    962532.324, // 80
 0.00026, 186.591,    365330.005, // 81
 0.00025, 199.003,    862669.761, // 82
-0.00025, 297.932,    954529.584, // 83
-0.00024,  25.452,   -473131.573, // 84
-0.00022, 206.416,    754672.610, // 85
 0.00022, 228.080,   -477217.697, // 86
-0.00022, 301.381,       282.527, // 87
-0.00021,  36.021,  -1407603.852, // 88
-0.00021, 116.343,   1709070.345, // 89
 0.00021, 352.587,    107997.151, // 90
 0.00020, 108.930,   1817067.496, // 91
 0.00020, 143.156,   1880931.009, // 92
-0.00020, 248.835,   2222268.263, // 93
 0.00020, 231.465,      -901.405, // 94
-0.00019,  36.116,    894601.517, // 95
-0.00018, 319.037,   1479601.953, // 96
 0.00018, 138.579,    477180.038, // 97
 0.00018,   8.600,      3034.906, // 98
 0.00017, 306.673,   -468161.355, // 99
 0.00016, 287.969,    474917.642, // 100
 0.00016,  41.058,    822603.417, // 101
 0.00016, 321.163,      -375.801, // 102
-0.00016,  44.565,       -99.177, // 103
 0.00016,  17.745,   -479480.093, // 104
 0.00015,   9.166,    477349.546, // 105
 0.00015,  99.182,   -477048.189, // 106
-0.00015, 184.894,   -479134.401, // 107
-0.00015,  94.821,    475263.334, // 108
 0.00015,  64.700,    476209.198, // 109
-0.00014, 146.402,    964468.502, // 110
-0.00014, 171.225,     -3559.967, // 111
-0.00014,  22.598,   -414304.839, // 112
 0.00014, 332.651,   -404297.843, // 113
 0.00014, 214.319,    966535.884, // 114
 0.00014, 201.231,   -966272.186, // 115
 0.00014,  45.575,    476447.267, // 116
 0.00014, 217.293,    486236.380, // 117
-0.00014, 166.528,    413486.034, // 118
-0.00014,  32.740,     -4443.417, // 119
-0.00013, 325.703,   -413184.677, // 120
-0.00013, 188.339,   -505063.330, // 121
 0.00013, 326.794,     -6843.677, // 122
 0.00012,  12.627,       723.029, // 123
 0.00012, 253.402,      -751.601, // 124
 0.00011, 336.437,   1303869.578, // 125
-0.00011, 336.935,    478490.424, // 126
 0.00011, 217.624,   -369201.717, // 127
-0.00011, 171.080,   1371800.385, // 128
 0.00011,  22.925,   -445642.912, // 129
 0.00011,  93.089,    476823.067, // 130
-0.00010, 261.243,     35958.615, // 131
 0.00010, 335.121,   -383405.794, // 132
 0.00010, 269.927,    954397.735, // 133
-0.00010,  17.111,  -1367601.242, // 134
-0.00010,  38.439,   1367864.940, // 135
 0.00010, 303.404,   -858978.267, // 136
 0.00010, 268.330,    411054.130, // 137
 0.00010, 240.825,   -410300.450, // 138
 0.00009, 165.358,    -67930.806, // 139
 0.00009, 280.672,      -989.670, // 140
 0.00009, 180.064,    422372.868, // 141
 0.00009, 264.985,   1026395.836, // 142
 0.00009, 316.645,      3171.719, // 143
-0.00009,  54.098,   -147867.913, // 144
-0.00009, 150.569,   1772933.858, // 145
 0.00009, 195.620,    413294.598, // 146
 0.00009, 354.297,   -413376.113, // 147
 0.00009,  82.788,    416370.261, // 148
 0.00009, 210.356,   -881496.710, // 149
-0.00009, 325.774,    -63863.512, // 150
 0.00009,  43.697,   -381779.400, // 151
 0.00009, 276.828,     14577.848, // 152
-0.00009, 298.459,    890684.901, // 153
 0.00008,  75.285,    886466.929 // 154
}; // SiivP

double SiiivP[200][3] = {
 13.53, 357.5,  35999.1, // 1
-4.17, 103.2,  377336.3, // 2
-3.33, 238.2,  854535.2, // 3
 3.00, 222.6, -441199.8, // 4
 2.22, 132.5,  513197.9, // 5
 0.58,  98.3,  449334.4, // 6
 0.50, 233.2,  926533.3, // 7
-0.36, 295.4,  481266.2, // 8
-0.33, 240.6,  818536.1, // 9
-0.31,  13.1, 1331734.0, // 10
-0.31, 105.7,  341337.3, // 11
 0.31, 355.1,   71998.1, // 12
 0.19,  87.6, -918398.7, // 13
-0.17, 328.2,  -99862.6, // 14
 0.17, 267.5,  990396.8, // 15
 0.11,  95.8,  485333.5, // 16
 0.11, 220.1, -405200.8, // 17
-0.08, 338.9, 1267870.5, // 18
 0.08, 235.7,  890534.2, // 19
-0.06, 203.9,  790671.7, // 20
-0.06, 323.3,  -27864.5, // 21
-0.06,  51.6, -111868.9, // 22
 0.06,   8.2, 1403732.1, // 23
 0.06, 100.7,  413335.4, // 24
 0.06, 130.0,  549197.0  // 25
}; // SiiivP

