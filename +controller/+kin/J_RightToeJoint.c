/*
 * Automatically Generated from Mathematica.
 * Tue 11 Jul 2017 19:12:47 GMT-04:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t660;
  double t928;
  double t943;
  double t930;
  double t948;
  double t692;
  double t698;
  double t1011;
  double t1030;
  double t1035;
  double t1039;
  double t1121;
  double t1093;
  double t1097;
  double t1099;
  double t1059;
  double t1138;
  double t1141;
  double t1145;
  double t809;
  double t828;
  double t860;
  double t887;
  double t936;
  double t976;
  double t984;
  double t1253;
  double t1264;
  double t1280;
  double t1154;
  double t1156;
  double t1162;
  double t1180;
  double t1228;
  double t1232;
  double t1239;
  double t1338;
  double t1340;
  double t1342;
  double t1350;
  double t1353;
  double t1354;
  double t1367;
  double t1372;
  double t1378;
  double t1384;
  double t1404;
  double t1413;
  double t1418;
  double t1430;
  double t1436;
  double t1438;
  double t1443;
  double t1463;
  double t1466;
  double t1480;
  double t1492;
  double t1493;
  double t1495;
  double t1513;
  double t1515;
  double t1521;
  double t1528;
  double t1545;
  double t1548;
  double t1554;
  double t1579;
  double t1580;
  double t1581;
  double t717;
  double t746;
  double t883;
  double t900;
  double t919;
  double t1021;
  double t1023;
  double t1025;
  double t1028;
  double t1063;
  double t1069;
  double t1084;
  double t1091;
  double t1649;
  double t1650;
  double t1658;
  double t1132;
  double t1137;
  double t1165;
  double t1200;
  double t1217;
  double t1667;
  double t1669;
  double t1676;
  double t1689;
  double t1692;
  double t1695;
  double t1246;
  double t1247;
  double t1252;
  double t1639;
  double t1640;
  double t1643;
  double t1717;
  double t1723;
  double t1726;
  double t1321;
  double t1332;
  double t1337;
  double t1360;
  double t1368;
  double t1371;
  double t1697;
  double t1701;
  double t1713;
  double t1743;
  double t1744;
  double t1748;
  double t1391;
  double t1396;
  double t1397;
  double t1439;
  double t1448;
  double t1456;
  double t1752;
  double t1756;
  double t1761;
  double t1771;
  double t1774;
  double t1775;
  double t1485;
  double t1487;
  double t1491;
  double t1522;
  double t1536;
  double t1541;
  double t1779;
  double t1780;
  double t1781;
  double t1784;
  double t1785;
  double t1786;
  double t1564;
  double t1572;
  double t1575;
  double t1789;
  double t1791;
  double t1792;
  double t1798;
  double t1799;
  double t1800;
  double t1833;
  double t1834;
  double t1836;
  double t1842;
  double t1843;
  double t1844;
  double t1862;
  double t1864;
  double t1867;
  double t1851;
  double t1856;
  double t1858;
  double t1880;
  double t1881;
  double t1885;
  double t1892;
  double t1897;
  double t1898;
  double t1901;
  double t1902;
  double t1904;
  double t1907;
  double t1910;
  double t1911;
  double t1918;
  double t1922;
  double t1924;
  double t1928;
  double t1930;
  double t1931;
  double t1935;
  double t1938;
  double t1940;
  double t1970;
  double t1971;
  double t1972;
  double t1979;
  double t1982;
  double t1989;
  double t2004;
  double t2007;
  double t2008;
  double t1994;
  double t1996;
  double t1999;
  double t2019;
  double t2023;
  double t2024;
  double t2029;
  double t2032;
  double t2034;
  double t2038;
  double t2042;
  double t2044;
  double t2049;
  double t2052;
  double t2053;
  double t2055;
  double t2056;
  double t2057;
  double t2059;
  double t2062;
  double t2063;
  double t2067;
  double t2068;
  double t2070;
  double t2102;
  double t2107;
  double t2108;
  double t2114;
  double t2116;
  double t2117;
  double t2127;
  double t2130;
  double t2131;
  double t2119;
  double t2120;
  double t2123;
  double t2148;
  double t2150;
  double t2151;
  double t2154;
  double t2156;
  double t2157;
  double t2161;
  double t2163;
  double t2165;
  double t2171;
  double t2174;
  double t2176;
  double t2178;
  double t2179;
  double t2180;
  double t2185;
  double t2186;
  double t2190;
  double t2194;
  double t2197;
  double t2198;
  double t2231;
  double t2232;
  double t2234;
  double t2239;
  double t2240;
  double t2242;
  double t2249;
  double t2250;
  double t2253;
  double t2264;
  double t2265;
  double t2266;
  double t2271;
  double t2276;
  double t2277;
  double t2282;
  double t2283;
  double t2285;
  double t2289;
  double t2291;
  double t2292;
  double t2296;
  double t2299;
  double t2300;
  double t2303;
  double t2305;
  double t2306;
  double t2329;
  double t2331;
  double t2332;
  double t2348;
  double t2349;
  double t2351;
  double t2343;
  double t2345;
  double t2346;
  double t2360;
  double t2362;
  double t2365;
  double t2367;
  double t2370;
  double t2371;
  double t2374;
  double t2375;
  double t2377;
  double t2381;
  double t2382;
  double t2383;
  double t2386;
  double t2387;
  double t2390;
  double t2395;
  double t2396;
  double t2398;
  double t2400;
  double t2401;
  double t2402;
  double t2426;
  double t2427;
  double t2429;
  double t2441;
  double t2442;
  double t2443;
  double t2433;
  double t2435;
  double t2438;
  double t2456;
  double t2459;
  double t2460;
  double t2463;
  double t2465;
  double t2467;
  double t2469;
  double t2472;
  double t2473;
  double t2480;
  double t2481;
  double t2482;
  double t2484;
  double t2485;
  double t2486;
  double t2488;
  double t2489;
  double t2490;
  double t2492;
  double t2493;
  double t2495;
  double t2521;
  double t2522;
  double t2525;
  double t2527;
  double t2529;
  double t2530;
  double t2535;
  double t2537;
  double t2538;
  double t2543;
  double t2544;
  double t2546;
  double t2550;
  double t2551;
  double t2552;
  double t2554;
  double t2555;
  double t2556;
  double t2560;
  double t2561;
  double t2563;
  double t2570;
  double t2572;
  double t2574;
  double t2579;
  double t2580;
  double t2582;
  double t2586;
  double t2587;
  double t2588;
  double t2608;
  double t2611;
  double t2612;
  double t2620;
  double t2621;
  double t2628;
  double t2629;
  double t2633;
  double t2635;
  double t2637;
  double t2638;
  double t2642;
  double t2643;
  double t2644;
  double t2646;
  double t2647;
  double t2648;
  double t2650;
  double t2651;
  double t2652;
  double t2657;
  double t2662;
  double t2663;
  double t2670;
  double t2671;
  double t2672;
  double t2694;
  double t2696;
  double t2698;
  double t2700;
  double t2701;
  double t2703;
  double t2706;
  double t2708;
  double t2714;
  double t2716;
  double t2717;
  double t2722;
  double t2725;
  double t2727;
  double t2731;
  double t2732;
  double t2734;
  double t2736;
  double t2737;
  double t2738;
  double t2740;
  double t2741;
  double t2742;
  double t2745;
  double t2749;
  double t2750;
  double t2754;
  double t2755;
  double t2756;
  double t2773;
  double t2774;
  double t2775;
  double t2778;
  double t2779;
  double t2783;
  double t2784;
  double t2787;
  double t2788;
  double t2789;
  double t2793;
  double t2795;
  double t2796;
  double t2800;
  double t2801;
  double t2802;
  double t2805;
  double t2806;
  double t2807;
  double t2809;
  double t2810;
  double t2811;
  double t2813;
  double t2814;
  double t2815;
  double t2835;
  double t2836;
  double t2839;
  double t2840;
  double t2843;
  double t2846;
  double t2848;
  double t2850;
  double t2852;
  double t2854;
  double t2855;
  double t2857;
  double t2858;
  double t2859;
  double t2861;
  double t2862;
  double t2863;
  double t2865;
  double t2866;
  double t2867;
  double t2883;
  double t2884;
  double t2886;
  double t2889;
  double t2890;
  double t2895;
  double t2896;
  double t2898;
  double t2900;
  double t2901;
  double t2903;
  double t2904;
  double t2905;
  double t2909;
  double t2910;
  double t2913;
  double t2916;
  double t2917;
  double t2918;
  double t2921;
  double t2922;
  double t2923;
  double t2925;
  double t2926;
  double t2927;
  double t2945;
  double t2946;
  double t2947;
  double t2950;
  double t2951;
  double t2952;
  double t2960;
  double t2961;
  double t2962;
  double t2964;
  double t2965;
  double t2966;
  double t2968;
  double t2969;
  double t2970;
  double t2972;
  double t2973;
  double t2974;
  double t2939;
  double t2940;
  double t2941;
  double t2943;
  double t2944;
  double t1732;
  double t1736;
  double t1739;
  double t2994;
  double t2995;
  double t2996;
  double t2998;
  double t2999;
  double t3000;
  double t3002;
  double t3003;
  double t3004;
  double t3006;
  double t3007;
  double t3008;
  double t3019;
  double t3020;
  double t3021;
  double t3023;
  double t3024;
  double t3025;
  double t3027;
  double t3028;
  double t3029;
  double t3037;
  double t3038;
  double t3039;
  double t3041;
  double t3042;
  double t3043;
  double t3045;
  double t3046;
  double t3047;
  double t3049;
  double t3050;
  double t3051;
  double t3068;
  double t3069;
  double t3070;
  double t3072;
  double t3073;
  double t3074;
  double t3076;
  double t3077;
  double t3078;
  double t3080;
  double t3081;
  double t3082;
  double t3084;
  double t3085;
  double t3086;
  double t3088;
  double t3089;
  double t3090;
  double t3092;
  double t3093;
  double t3094;
  double t3062;
  double t3063;
  double t3065;
  double t3066;
  double t3067;
  double t3107;
  double t3108;
  double t3109;
  double t3112;
  double t3113;
  double t3115;
  double t3116;
  double t3117;
  double t3119;
  double t3120;
  double t3121;
  double t3123;
  double t3124;
  double t3125;
  double t3137;
  double t3138;
  double t3139;
  double t3141;
  double t3142;
  double t3143;
  double t3145;
  double t3146;
  double t3147;
  double t3149;
  double t3150;
  double t3151;
  double t3153;
  double t3154;
  double t3155;
  double t3157;
  double t3158;
  double t3159;
  double t3161;
  double t3162;
  double t3163;
  double t3177;
  double t3178;
  double t3179;
  double t3184;
  double t3185;
  double t3187;
  double t3188;
  double t3190;
  double t3191;
  double t3192;
  double t3194;
  double t3195;
  double t3196;
  double t3174;
  double t3175;
  double t3176;
  double t3181;
  double t3182;
  double t3210;
  double t3211;
  double t3213;
  double t3214;
  double t3215;
  double t3217;
  double t3218;
  double t3229;
  double t3230;
  double t3231;
  double t3234;
  double t3235;
  double t3237;
  double t3238;
  double t3240;
  double t3241;
  double t3242;
  double t3244;
  double t3245;
  double t3246;
  double t3263;
  double t3264;
  double t3265;
  double t3267;
  double t3268;
  double t3270;
  double t3271;
  double t3257;
  double t3258;
  double t3260;
  double t3261;
  double t3262;
  double t3284;
  double t3285;
  double t1807;
  double t3297;
  double t3298;
  double t3299;
  double t3301;
  double t3302;
  double t3304;
  double t3305;
  double t3319;
  double t3320;
  double t3321;
  double t3274;
  double t3278;
  double t3316;
  double t3317;
  double t3318;
  double t3323;
  double t3324;
  double t1805;
  double t1810;
  double t3292;
  double t3340;
  double t3341;
  double t3342;
  double t3308;
  double t3312;
  t660 = Cos(var1[3]);
  t928 = Cos(var1[5]);
  t943 = Sin(var1[3]);
  t930 = Sin(var1[4]);
  t948 = Sin(var1[5]);
  t692 = Cos(var1[4]);
  t698 = Sin(var1[14]);
  t1011 = Cos(var1[14]);
  t1030 = -1.*t928*t943;
  t1035 = -1.*t660*t930*t948;
  t1039 = t1030 + t1035;
  t1121 = Sin(var1[15]);
  t1093 = -1.*t660*t692*t698;
  t1097 = t1011*t1039;
  t1099 = t1093 + t1097;
  t1059 = Cos(var1[15]);
  t1138 = -1.*t1011*t660*t692;
  t1141 = -1.*t698*t1039;
  t1145 = t1138 + t1141;
  t809 = Cos(var1[16]);
  t828 = -1.*t809;
  t860 = 1. + t828;
  t887 = Sin(var1[16]);
  t936 = t660*t928*t930;
  t976 = -1.*t943*t948;
  t984 = t936 + t976;
  t1253 = t1059*t1099;
  t1264 = t1121*t1145;
  t1280 = t1253 + t1264;
  t1154 = Cos(var1[17]);
  t1156 = -1.*t1154;
  t1162 = 1. + t1156;
  t1180 = Sin(var1[17]);
  t1228 = -1.*t1121*t1099;
  t1232 = t1059*t1145;
  t1239 = t1228 + t1232;
  t1338 = t809*t984;
  t1340 = t887*t1280;
  t1342 = t1338 + t1340;
  t1350 = Cos(var1[18]);
  t1353 = -1.*t1350;
  t1354 = 1. + t1353;
  t1367 = Sin(var1[18]);
  t1372 = t1180*t1239;
  t1378 = t1154*t1342;
  t1384 = t1372 + t1378;
  t1404 = t1154*t1239;
  t1413 = -1.*t1180*t1342;
  t1418 = t1404 + t1413;
  t1430 = Cos(var1[19]);
  t1436 = -1.*t1430;
  t1438 = 1. + t1436;
  t1443 = Sin(var1[19]);
  t1463 = -1.*t1367*t1384;
  t1466 = t1350*t1418;
  t1480 = t1463 + t1466;
  t1492 = t1350*t1384;
  t1493 = t1367*t1418;
  t1495 = t1492 + t1493;
  t1513 = Cos(var1[20]);
  t1515 = -1.*t1513;
  t1521 = 1. + t1515;
  t1528 = Sin(var1[20]);
  t1545 = t1443*t1480;
  t1548 = t1430*t1495;
  t1554 = t1545 + t1548;
  t1579 = t1430*t1480;
  t1580 = -1.*t1443*t1495;
  t1581 = t1579 + t1580;
  t717 = 0.135*t698;
  t746 = 0. + t717;
  t883 = -0.049*t860;
  t900 = -0.135*t887;
  t919 = 0. + t883 + t900;
  t1021 = -1.*t1011;
  t1023 = 1. + t1021;
  t1025 = -0.135*t1023;
  t1028 = 0. + t1025;
  t1063 = -1.*t1059;
  t1069 = 1. + t1063;
  t1084 = -0.135*t1069;
  t1091 = 0. + t1084;
  t1649 = t660*t928;
  t1650 = -1.*t943*t930*t948;
  t1658 = t1649 + t1650;
  t1132 = 0.135*t1121;
  t1137 = 0. + t1132;
  t1165 = -0.09*t1162;
  t1200 = 0.049*t1180;
  t1217 = 0. + t1165 + t1200;
  t1667 = -1.*t692*t698*t943;
  t1669 = t1011*t1658;
  t1676 = t1667 + t1669;
  t1689 = -1.*t1011*t692*t943;
  t1692 = -1.*t698*t1658;
  t1695 = t1689 + t1692;
  t1246 = -0.135*t860;
  t1247 = 0.049*t887;
  t1252 = 0. + t1246 + t1247;
  t1639 = t928*t943*t930;
  t1640 = t660*t948;
  t1643 = t1639 + t1640;
  t1717 = t1059*t1676;
  t1723 = t1121*t1695;
  t1726 = t1717 + t1723;
  t1321 = -0.049*t1162;
  t1332 = -0.09*t1180;
  t1337 = 0. + t1321 + t1332;
  t1360 = -0.049*t1354;
  t1368 = -0.21*t1367;
  t1371 = 0. + t1360 + t1368;
  t1697 = -1.*t1121*t1676;
  t1701 = t1059*t1695;
  t1713 = t1697 + t1701;
  t1743 = t809*t1643;
  t1744 = t887*t1726;
  t1748 = t1743 + t1744;
  t1391 = -0.21*t1354;
  t1396 = 0.049*t1367;
  t1397 = 0. + t1391 + t1396;
  t1439 = -0.2707*t1438;
  t1448 = 0.0016*t1443;
  t1456 = 0. + t1439 + t1448;
  t1752 = t1180*t1713;
  t1756 = t1154*t1748;
  t1761 = t1752 + t1756;
  t1771 = t1154*t1713;
  t1774 = -1.*t1180*t1748;
  t1775 = t1771 + t1774;
  t1485 = -0.0016*t1438;
  t1487 = -0.2707*t1443;
  t1491 = 0. + t1485 + t1487;
  t1522 = 0.0184*t1521;
  t1536 = -0.7055*t1528;
  t1541 = 0. + t1522 + t1536;
  t1779 = -1.*t1367*t1761;
  t1780 = t1350*t1775;
  t1781 = t1779 + t1780;
  t1784 = t1350*t1761;
  t1785 = t1367*t1775;
  t1786 = t1784 + t1785;
  t1564 = -0.7055*t1521;
  t1572 = -0.0184*t1528;
  t1575 = 0. + t1564 + t1572;
  t1789 = t1443*t1781;
  t1791 = t1430*t1786;
  t1792 = t1789 + t1791;
  t1798 = t1430*t1781;
  t1799 = -1.*t1443*t1786;
  t1800 = t1798 + t1799;
  t1833 = t692*t698;
  t1834 = t1011*t930*t948;
  t1836 = t1833 + t1834;
  t1842 = t1011*t692;
  t1843 = -1.*t698*t930*t948;
  t1844 = t1842 + t1843;
  t1862 = t1059*t1836;
  t1864 = t1121*t1844;
  t1867 = t1862 + t1864;
  t1851 = -1.*t1121*t1836;
  t1856 = t1059*t1844;
  t1858 = t1851 + t1856;
  t1880 = -1.*t809*t928*t930;
  t1881 = t887*t1867;
  t1885 = t1880 + t1881;
  t1892 = t1180*t1858;
  t1897 = t1154*t1885;
  t1898 = t1892 + t1897;
  t1901 = t1154*t1858;
  t1902 = -1.*t1180*t1885;
  t1904 = t1901 + t1902;
  t1907 = -1.*t1367*t1898;
  t1910 = t1350*t1904;
  t1911 = t1907 + t1910;
  t1918 = t1350*t1898;
  t1922 = t1367*t1904;
  t1924 = t1918 + t1922;
  t1928 = t1443*t1911;
  t1930 = t1430*t1924;
  t1931 = t1928 + t1930;
  t1935 = t1430*t1911;
  t1938 = -1.*t1443*t1924;
  t1940 = t1935 + t1938;
  t1970 = t698*t943*t930;
  t1971 = -1.*t1011*t692*t943*t948;
  t1972 = t1970 + t1971;
  t1979 = t1011*t943*t930;
  t1982 = t692*t698*t943*t948;
  t1989 = t1979 + t1982;
  t2004 = t1059*t1972;
  t2007 = t1121*t1989;
  t2008 = t2004 + t2007;
  t1994 = -1.*t1121*t1972;
  t1996 = t1059*t1989;
  t1999 = t1994 + t1996;
  t2019 = t809*t692*t928*t943;
  t2023 = t887*t2008;
  t2024 = t2019 + t2023;
  t2029 = t1180*t1999;
  t2032 = t1154*t2024;
  t2034 = t2029 + t2032;
  t2038 = t1154*t1999;
  t2042 = -1.*t1180*t2024;
  t2044 = t2038 + t2042;
  t2049 = -1.*t1367*t2034;
  t2052 = t1350*t2044;
  t2053 = t2049 + t2052;
  t2055 = t1350*t2034;
  t2056 = t1367*t2044;
  t2057 = t2055 + t2056;
  t2059 = t1443*t2053;
  t2062 = t1430*t2057;
  t2063 = t2059 + t2062;
  t2067 = t1430*t2053;
  t2068 = -1.*t1443*t2057;
  t2070 = t2067 + t2068;
  t2102 = -1.*t660*t698*t930;
  t2107 = t1011*t660*t692*t948;
  t2108 = t2102 + t2107;
  t2114 = -1.*t1011*t660*t930;
  t2116 = -1.*t660*t692*t698*t948;
  t2117 = t2114 + t2116;
  t2127 = t1059*t2108;
  t2130 = t1121*t2117;
  t2131 = t2127 + t2130;
  t2119 = -1.*t1121*t2108;
  t2120 = t1059*t2117;
  t2123 = t2119 + t2120;
  t2148 = -1.*t809*t660*t692*t928;
  t2150 = t887*t2131;
  t2151 = t2148 + t2150;
  t2154 = t1180*t2123;
  t2156 = t1154*t2151;
  t2157 = t2154 + t2156;
  t2161 = t1154*t2123;
  t2163 = -1.*t1180*t2151;
  t2165 = t2161 + t2163;
  t2171 = -1.*t1367*t2157;
  t2174 = t1350*t2165;
  t2176 = t2171 + t2174;
  t2178 = t1350*t2157;
  t2179 = t1367*t2165;
  t2180 = t2178 + t2179;
  t2185 = t1443*t2176;
  t2186 = t1430*t2180;
  t2190 = t2185 + t2186;
  t2194 = t1430*t2176;
  t2197 = -1.*t1443*t2180;
  t2198 = t2194 + t2197;
  t2231 = -1.*t1011*t1059*t692*t928;
  t2232 = t692*t928*t698*t1121;
  t2234 = t2231 + t2232;
  t2239 = t1059*t692*t928*t698;
  t2240 = t1011*t692*t928*t1121;
  t2242 = t2239 + t2240;
  t2249 = t2234*t887;
  t2250 = -1.*t809*t692*t948;
  t2253 = t2249 + t2250;
  t2264 = t2242*t1180;
  t2265 = t1154*t2253;
  t2266 = t2264 + t2265;
  t2271 = t1154*t2242;
  t2276 = -1.*t1180*t2253;
  t2277 = t2271 + t2276;
  t2282 = -1.*t1367*t2266;
  t2283 = t1350*t2277;
  t2285 = t2282 + t2283;
  t2289 = t1350*t2266;
  t2291 = t1367*t2277;
  t2292 = t2289 + t2291;
  t2296 = t1443*t2285;
  t2299 = t1430*t2292;
  t2300 = t2296 + t2299;
  t2303 = t1430*t2285;
  t2305 = -1.*t1443*t2292;
  t2306 = t2303 + t2305;
  t2329 = -1.*t928*t943*t930;
  t2331 = -1.*t660*t948;
  t2332 = t2329 + t2331;
  t2348 = t1011*t1059*t2332;
  t2349 = -1.*t698*t1121*t2332;
  t2351 = t2348 + t2349;
  t2343 = -1.*t1059*t698*t2332;
  t2345 = -1.*t1011*t1121*t2332;
  t2346 = t2343 + t2345;
  t2360 = t809*t1658;
  t2362 = t887*t2351;
  t2365 = t2360 + t2362;
  t2367 = t1180*t2346;
  t2370 = t1154*t2365;
  t2371 = t2367 + t2370;
  t2374 = t1154*t2346;
  t2375 = -1.*t1180*t2365;
  t2377 = t2374 + t2375;
  t2381 = -1.*t1367*t2371;
  t2382 = t1350*t2377;
  t2383 = t2381 + t2382;
  t2386 = t1350*t2371;
  t2387 = t1367*t2377;
  t2390 = t2386 + t2387;
  t2395 = t1443*t2383;
  t2396 = t1430*t2390;
  t2398 = t2395 + t2396;
  t2400 = t1430*t2383;
  t2401 = -1.*t1443*t2390;
  t2402 = t2400 + t2401;
  t2426 = t928*t943;
  t2427 = t660*t930*t948;
  t2429 = t2426 + t2427;
  t2441 = t1011*t1059*t984;
  t2442 = -1.*t698*t1121*t984;
  t2443 = t2441 + t2442;
  t2433 = -1.*t1059*t698*t984;
  t2435 = -1.*t1011*t1121*t984;
  t2438 = t2433 + t2435;
  t2456 = t809*t2429;
  t2459 = t887*t2443;
  t2460 = t2456 + t2459;
  t2463 = t1180*t2438;
  t2465 = t1154*t2460;
  t2467 = t2463 + t2465;
  t2469 = t1154*t2438;
  t2472 = -1.*t1180*t2460;
  t2473 = t2469 + t2472;
  t2480 = -1.*t1367*t2467;
  t2481 = t1350*t2473;
  t2482 = t2480 + t2481;
  t2484 = t1350*t2467;
  t2485 = t1367*t2473;
  t2486 = t2484 + t2485;
  t2488 = t1443*t2482;
  t2489 = t1430*t2486;
  t2490 = t2488 + t2489;
  t2492 = t1430*t2482;
  t2493 = -1.*t1443*t2486;
  t2495 = t2492 + t2493;
  t2521 = -1.*t698*t930;
  t2522 = t1011*t692*t948;
  t2525 = t2521 + t2522;
  t2527 = t1011*t930;
  t2529 = t692*t698*t948;
  t2530 = t2527 + t2529;
  t2535 = t1121*t2525;
  t2537 = t1059*t2530;
  t2538 = t2535 + t2537;
  t2543 = t1059*t2525;
  t2544 = -1.*t1121*t2530;
  t2546 = t2543 + t2544;
  t2550 = -1.*t887*t1180*t2538;
  t2551 = t1154*t2546;
  t2552 = t2550 + t2551;
  t2554 = t1154*t887*t2538;
  t2555 = t1180*t2546;
  t2556 = t2554 + t2555;
  t2560 = t1367*t2552;
  t2561 = t1350*t2556;
  t2563 = t2560 + t2561;
  t2570 = t1350*t2552;
  t2572 = -1.*t1367*t2556;
  t2574 = t2570 + t2572;
  t2579 = -1.*t1443*t2563;
  t2580 = t1430*t2574;
  t2582 = t2579 + t2580;
  t2586 = t1430*t2563;
  t2587 = t1443*t2574;
  t2588 = t2586 + t2587;
  t2608 = t692*t698*t943;
  t2611 = -1.*t1011*t1658;
  t2612 = t2608 + t2611;
  t2620 = t1121*t2612;
  t2621 = t2620 + t1701;
  t2628 = t1059*t2612;
  t2629 = -1.*t1121*t1695;
  t2633 = t2628 + t2629;
  t2635 = -1.*t887*t1180*t2621;
  t2637 = t1154*t2633;
  t2638 = t2635 + t2637;
  t2642 = t1154*t887*t2621;
  t2643 = t1180*t2633;
  t2644 = t2642 + t2643;
  t2646 = t1367*t2638;
  t2647 = t1350*t2644;
  t2648 = t2646 + t2647;
  t2650 = t1350*t2638;
  t2651 = -1.*t1367*t2644;
  t2652 = t2650 + t2651;
  t2657 = -1.*t1443*t2648;
  t2662 = t1430*t2652;
  t2663 = t2657 + t2662;
  t2670 = t1430*t2648;
  t2671 = t1443*t2652;
  t2672 = t2670 + t2671;
  t2694 = -1.*t1011*t2429;
  t2696 = t1093 + t2694;
  t2698 = t1011*t660*t692;
  t2700 = -1.*t698*t2429;
  t2701 = t2698 + t2700;
  t2703 = t1121*t2696;
  t2706 = t1059*t2701;
  t2708 = t2703 + t2706;
  t2714 = t1059*t2696;
  t2716 = -1.*t1121*t2701;
  t2717 = t2714 + t2716;
  t2722 = -1.*t887*t1180*t2708;
  t2725 = t1154*t2717;
  t2727 = t2722 + t2725;
  t2731 = t1154*t887*t2708;
  t2732 = t1180*t2717;
  t2734 = t2731 + t2732;
  t2736 = t1367*t2727;
  t2737 = t1350*t2734;
  t2738 = t2736 + t2737;
  t2740 = t1350*t2727;
  t2741 = -1.*t1367*t2734;
  t2742 = t2740 + t2741;
  t2745 = -1.*t1443*t2738;
  t2749 = t1430*t2742;
  t2750 = t2745 + t2749;
  t2754 = t1430*t2738;
  t2755 = t1443*t2742;
  t2756 = t2754 + t2755;
  t2773 = t698*t930;
  t2774 = -1.*t1011*t692*t948;
  t2775 = t2773 + t2774;
  t2778 = -1.*t1121*t2775;
  t2779 = t2778 + t2537;
  t2783 = -1.*t1059*t2775;
  t2784 = t2783 + t2544;
  t2787 = -1.*t887*t1180*t2779;
  t2788 = t1154*t2784;
  t2789 = t2787 + t2788;
  t2793 = t1154*t887*t2779;
  t2795 = t1180*t2784;
  t2796 = t2793 + t2795;
  t2800 = t1367*t2789;
  t2801 = t1350*t2796;
  t2802 = t2800 + t2801;
  t2805 = t1350*t2789;
  t2806 = -1.*t1367*t2796;
  t2807 = t2805 + t2806;
  t2809 = -1.*t1443*t2802;
  t2810 = t1430*t2807;
  t2811 = t2809 + t2810;
  t2813 = t1430*t2802;
  t2814 = t1443*t2807;
  t2815 = t2813 + t2814;
  t2835 = -1.*t1059*t1676;
  t2836 = t2835 + t2629;
  t2839 = -1.*t887*t1180*t1713;
  t2840 = t1154*t2836;
  t2843 = t2839 + t2840;
  t2846 = t1154*t887*t1713;
  t2848 = t1180*t2836;
  t2850 = t2846 + t2848;
  t2852 = t1367*t2843;
  t2854 = t1350*t2850;
  t2855 = t2852 + t2854;
  t2857 = t1350*t2843;
  t2858 = -1.*t1367*t2850;
  t2859 = t2857 + t2858;
  t2861 = -1.*t1443*t2855;
  t2862 = t1430*t2859;
  t2863 = t2861 + t2862;
  t2865 = t1430*t2855;
  t2866 = t1443*t2859;
  t2867 = t2865 + t2866;
  t2883 = t660*t692*t698;
  t2884 = t1011*t2429;
  t2886 = t2883 + t2884;
  t2889 = -1.*t1121*t2886;
  t2890 = t2889 + t2706;
  t2895 = -1.*t1059*t2886;
  t2896 = t2895 + t2716;
  t2898 = -1.*t887*t1180*t2890;
  t2900 = t1154*t2896;
  t2901 = t2898 + t2900;
  t2903 = t1154*t887*t2890;
  t2904 = t1180*t2896;
  t2905 = t2903 + t2904;
  t2909 = t1367*t2901;
  t2910 = t1350*t2905;
  t2913 = t2909 + t2910;
  t2916 = t1350*t2901;
  t2917 = -1.*t1367*t2905;
  t2918 = t2916 + t2917;
  t2921 = -1.*t1443*t2913;
  t2922 = t1430*t2918;
  t2923 = t2921 + t2922;
  t2925 = t1430*t2913;
  t2926 = t1443*t2918;
  t2927 = t2925 + t2926;
  t2945 = t1059*t2775;
  t2946 = t1121*t2530;
  t2947 = t2945 + t2946;
  t2950 = -1.*t692*t928*t887;
  t2951 = t809*t2947;
  t2952 = t2950 + t2951;
  t2960 = -1.*t1350*t1180*t2952;
  t2961 = -1.*t1154*t1367*t2952;
  t2962 = t2960 + t2961;
  t2964 = t1154*t1350*t2952;
  t2965 = -1.*t1180*t1367*t2952;
  t2966 = t2964 + t2965;
  t2968 = t1443*t2962;
  t2969 = t1430*t2966;
  t2970 = t2968 + t2969;
  t2972 = t1430*t2962;
  t2973 = -1.*t1443*t2966;
  t2974 = t2972 + t2973;
  t2939 = -0.135*t809;
  t2940 = -0.049*t887;
  t2941 = t2939 + t2940;
  t2943 = 0.049*t809;
  t2944 = t2943 + t900;
  t1732 = -1.*t887*t1643;
  t1736 = t809*t1726;
  t1739 = t1732 + t1736;
  t2994 = -1.*t1350*t1180*t1739;
  t2995 = -1.*t1154*t1367*t1739;
  t2996 = t2994 + t2995;
  t2998 = t1154*t1350*t1739;
  t2999 = -1.*t1180*t1367*t1739;
  t3000 = t2998 + t2999;
  t3002 = t1443*t2996;
  t3003 = t1430*t3000;
  t3004 = t3002 + t3003;
  t3006 = t1430*t2996;
  t3007 = -1.*t1443*t3000;
  t3008 = t3006 + t3007;
  t3019 = -1.*t660*t928*t930;
  t3020 = t943*t948;
  t3021 = t3019 + t3020;
  t3023 = t1059*t2886;
  t3024 = t1121*t2701;
  t3025 = t3023 + t3024;
  t3027 = -1.*t887*t3021;
  t3028 = t809*t3025;
  t3029 = t3027 + t3028;
  t3037 = -1.*t1350*t1180*t3029;
  t3038 = -1.*t1154*t1367*t3029;
  t3039 = t3037 + t3038;
  t3041 = t1154*t1350*t3029;
  t3042 = -1.*t1180*t1367*t3029;
  t3043 = t3041 + t3042;
  t3045 = t1443*t3039;
  t3046 = t1430*t3043;
  t3047 = t3045 + t3046;
  t3049 = t1430*t3039;
  t3050 = -1.*t1443*t3043;
  t3051 = t3049 + t3050;
  t3068 = t809*t692*t928;
  t3069 = t887*t2947;
  t3070 = t3068 + t3069;
  t3072 = -1.*t1180*t2779;
  t3073 = -1.*t1154*t3070;
  t3074 = t3072 + t3073;
  t3076 = t1154*t2779;
  t3077 = -1.*t1180*t3070;
  t3078 = t3076 + t3077;
  t3080 = t1367*t3074;
  t3081 = t1350*t3078;
  t3082 = t3080 + t3081;
  t3084 = t1350*t3074;
  t3085 = -1.*t1367*t3078;
  t3086 = t3084 + t3085;
  t3088 = -1.*t1443*t3082;
  t3089 = t1430*t3086;
  t3090 = t3088 + t3089;
  t3092 = t1430*t3082;
  t3093 = t1443*t3086;
  t3094 = t3092 + t3093;
  t3062 = 0.049*t1154;
  t3063 = t3062 + t1332;
  t3065 = -0.09*t1154;
  t3066 = -0.049*t1180;
  t3067 = t3065 + t3066;
  t3107 = -1.*t1180*t1713;
  t3108 = -1.*t1154*t1748;
  t3109 = t3107 + t3108;
  t3112 = t1367*t3109;
  t3113 = t3112 + t1780;
  t3115 = t1350*t3109;
  t3116 = -1.*t1367*t1775;
  t3117 = t3115 + t3116;
  t3119 = -1.*t1443*t3113;
  t3120 = t1430*t3117;
  t3121 = t3119 + t3120;
  t3123 = t1430*t3113;
  t3124 = t1443*t3117;
  t3125 = t3123 + t3124;
  t3137 = t809*t3021;
  t3138 = t887*t3025;
  t3139 = t3137 + t3138;
  t3141 = -1.*t1180*t2890;
  t3142 = -1.*t1154*t3139;
  t3143 = t3141 + t3142;
  t3145 = t1154*t2890;
  t3146 = -1.*t1180*t3139;
  t3147 = t3145 + t3146;
  t3149 = t1367*t3143;
  t3150 = t1350*t3147;
  t3151 = t3149 + t3150;
  t3153 = t1350*t3143;
  t3154 = -1.*t1367*t3147;
  t3155 = t3153 + t3154;
  t3157 = -1.*t1443*t3151;
  t3158 = t1430*t3155;
  t3159 = t3157 + t3158;
  t3161 = t1430*t3151;
  t3162 = t1443*t3155;
  t3163 = t3161 + t3162;
  t3177 = t1180*t2779;
  t3178 = t1154*t3070;
  t3179 = t3177 + t3178;
  t3184 = -1.*t1367*t3179;
  t3185 = t3184 + t3081;
  t3187 = -1.*t1350*t3179;
  t3188 = t3187 + t3085;
  t3190 = -1.*t1443*t3185;
  t3191 = t1430*t3188;
  t3192 = t3190 + t3191;
  t3194 = t1430*t3185;
  t3195 = t1443*t3188;
  t3196 = t3194 + t3195;
  t3174 = -0.21*t1350;
  t3175 = -0.049*t1367;
  t3176 = t3174 + t3175;
  t3181 = 0.049*t1350;
  t3182 = t3181 + t1368;
  t3210 = -1.*t1350*t1761;
  t3211 = t3210 + t3116;
  t3213 = -1.*t1443*t1781;
  t3214 = t1430*t3211;
  t3215 = t3213 + t3214;
  t3217 = t1443*t3211;
  t3218 = t1798 + t3217;
  t3229 = t1180*t2890;
  t3230 = t1154*t3139;
  t3231 = t3229 + t3230;
  t3234 = -1.*t1367*t3231;
  t3235 = t3234 + t3150;
  t3237 = -1.*t1350*t3231;
  t3238 = t3237 + t3154;
  t3240 = -1.*t1443*t3235;
  t3241 = t1430*t3238;
  t3242 = t3240 + t3241;
  t3244 = t1430*t3235;
  t3245 = t1443*t3238;
  t3246 = t3244 + t3245;
  t3263 = t1350*t3179;
  t3264 = t1367*t3078;
  t3265 = t3263 + t3264;
  t3267 = -1.*t1430*t3265;
  t3268 = t3190 + t3267;
  t3270 = -1.*t1443*t3265;
  t3271 = t3194 + t3270;
  t3257 = 0.0016*t1430;
  t3258 = t3257 + t1487;
  t3260 = -0.2707*t1430;
  t3261 = -0.0016*t1443;
  t3262 = t3260 + t3261;
  t3284 = -1.*t1430*t1786;
  t3285 = t3213 + t3284;
  t1807 = t1513*t1800;
  t3297 = t1350*t3231;
  t3298 = t1367*t3147;
  t3299 = t3297 + t3298;
  t3301 = -1.*t1430*t3299;
  t3302 = t3240 + t3301;
  t3304 = -1.*t1443*t3299;
  t3305 = t3244 + t3304;
  t3319 = t1443*t3185;
  t3320 = t1430*t3265;
  t3321 = t3319 + t3320;
  t3274 = t1513*t3271;
  t3278 = -1.*t1528*t3271;
  t3316 = -0.7055*t1513;
  t3317 = 0.0184*t1528;
  t3318 = t3316 + t3317;
  t3323 = -0.0184*t1513;
  t3324 = t3323 + t1536;
  t1805 = -1.*t1528*t1792;
  t1810 = t1805 + t1807;
  t3292 = -1.*t1528*t1800;
  t3340 = t1443*t3235;
  t3341 = t1430*t3299;
  t3342 = t3340 + t3341;
  t3308 = t1513*t3305;
  t3312 = -1.*t1528*t3305;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=0;
  p_output1[10]=t1028*t1039 + t1091*t1099 + t1137*t1145 + t1217*t1239 + t1252*t1280 + t1337*t1342 + t1371*t1384 + t1397*t1418 + t1456*t1480 + t1491*t1495 + t1541*t1554 + t1575*t1581 - 1.1135*(-1.*t1528*t1554 + t1513*t1581) - 0.0216*(t1513*t1554 + t1528*t1581) - 1.*t660*t692*t746 + t919*t984 - 0.1305*(t1280*t809 - 1.*t887*t984);
  p_output1[11]=t1028*t1658 + t1091*t1676 + t1137*t1695 + t1217*t1713 + t1252*t1726 - 0.1305*t1739 + t1337*t1748 + t1371*t1761 + t1397*t1775 + t1456*t1781 + t1491*t1786 + t1541*t1792 + t1575*t1800 - 0.0216*(t1513*t1792 + t1528*t1800) - 1.1135*t1810 + t1643*t919 - 1.*t692*t746*t943;
  p_output1[12]=t1091*t1836 + t1137*t1844 + t1217*t1858 + t1252*t1867 + t1337*t1885 + t1371*t1898 + t1397*t1904 + t1456*t1911 + t1491*t1924 + t1541*t1931 + t1575*t1940 - 1.1135*(-1.*t1528*t1931 + t1513*t1940) - 0.0216*(t1513*t1931 + t1528*t1940) + t692*t746 - 1.*t919*t928*t930 - 0.1305*(t1867*t809 + t887*t928*t930) + t1028*t930*t948;
  p_output1[13]=t1091*t1972 + t1137*t1989 + t1217*t1999 + t1252*t2008 + t1337*t2024 + t1371*t2034 + t1397*t2044 + t1456*t2053 + t1491*t2057 + t1541*t2063 + t1575*t2070 - 1.1135*(-1.*t1528*t2063 + t1513*t2070) - 0.0216*(t1513*t2063 + t1528*t2070) + t692*t919*t928*t943 + t746*t930*t943 - 0.1305*(t2008*t809 - 1.*t692*t887*t928*t943) - 1.*t1028*t692*t943*t948;
  p_output1[14]=t1091*t2108 + t1137*t2117 + t1217*t2123 + t1252*t2131 + t1337*t2151 + t1371*t2157 + t1397*t2165 + t1456*t2176 + t1491*t2180 + t1541*t2190 + t1575*t2198 - 1.1135*(-1.*t1528*t2190 + t1513*t2198) - 0.0216*(t1513*t2190 + t1528*t2198) - 1.*t660*t692*t919*t928 - 0.1305*(t2131*t809 + t660*t692*t887*t928) - 1.*t660*t746*t930 + t1028*t660*t692*t948;
  p_output1[15]=t1252*t2234 + t1217*t2242 + t1337*t2253 + t1371*t2266 + t1397*t2277 + t1456*t2285 + t1491*t2292 + t1541*t2300 + t1575*t2306 - 1.1135*(-1.*t1528*t2300 + t1513*t2306) - 0.0216*(t1513*t2300 + t1528*t2306) - 1.*t1028*t692*t928 - 1.*t1011*t1091*t692*t928 + t1137*t692*t698*t928 - 1.*t692*t919*t948 - 0.1305*(t2234*t809 + t692*t887*t948);
  p_output1[16]=t1028*t2332 + t1011*t1091*t2332 + t1217*t2346 + t1252*t2351 + t1337*t2365 + t1371*t2371 + t1397*t2377 + t1456*t2383 + t1491*t2390 + t1541*t2398 + t1575*t2402 - 1.1135*(-1.*t1528*t2398 + t1513*t2402) - 0.0216*(t1513*t2398 + t1528*t2402) - 1.*t1137*t2332*t698 - 0.1305*(t2351*t809 - 1.*t1658*t887) + t1658*t919;
  p_output1[17]=t1217*t2438 + t1252*t2443 + t1337*t2460 + t1371*t2467 + t1397*t2473 + t1456*t2482 + t1491*t2486 + t1541*t2490 + t1575*t2495 - 1.1135*(-1.*t1528*t2490 + t1513*t2495) - 0.0216*(t1513*t2490 + t1528*t2495) - 0.1305*(t2443*t809 - 1.*t2429*t887) + t2429*t919 + t1028*t984 + t1011*t1091*t984 - 1.*t1137*t698*t984;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=t1137*t2525 + t1091*t2530 + t1252*t2538 + t1217*t2546 + t1397*t2552 + t1371*t2556 + t1491*t2563 + t1456*t2574 + t1575*t2582 + t1541*t2588 - 0.0216*(t1528*t2582 + t1513*t2588) - 1.1135*(t1513*t2582 - 1.*t1528*t2588) - 0.1305*t2538*t809 + t1337*t2538*t887 + 0.135*t1011*t930 + 0.135*t692*t698*t948;
  p_output1[43]=t1091*t1695 + t1137*t2612 + t1252*t2621 + t1217*t2633 + t1397*t2638 + t1371*t2644 + t1491*t2648 + t1456*t2652 + t1575*t2663 + t1541*t2672 - 0.0216*(t1528*t2663 + t1513*t2672) - 1.1135*(t1513*t2663 - 1.*t1528*t2672) - 0.135*t1658*t698 - 0.1305*t2621*t809 + t1337*t2621*t887 - 0.135*t1011*t692*t943;
  p_output1[44]=t1137*t2696 + t1091*t2701 + t1252*t2708 + t1217*t2717 + t1397*t2727 + t1371*t2734 + t1491*t2738 + t1456*t2742 + t1575*t2750 + t1541*t2756 - 0.0216*(t1528*t2750 + t1513*t2756) - 1.1135*(t1513*t2750 - 1.*t1528*t2756) + 0.135*t1011*t660*t692 - 0.135*t2429*t698 - 0.1305*t2708*t809 + t1337*t2708*t887;
  p_output1[45]=0.135*t1059*t2530 - 0.135*t1121*t2775 + t1252*t2779 + t1217*t2784 + t1397*t2789 + t1371*t2796 + t1491*t2802 + t1456*t2807 + t1575*t2811 + t1541*t2815 - 0.0216*(t1528*t2811 + t1513*t2815) - 1.1135*(t1513*t2811 - 1.*t1528*t2815) - 0.1305*t2779*t809 + t1337*t2779*t887;
  p_output1[46]=-0.135*t1121*t1676 + 0.135*t1059*t1695 + t1252*t1713 + t1217*t2836 + t1397*t2843 + t1371*t2850 + t1491*t2855 + t1456*t2859 + t1575*t2863 + t1541*t2867 - 0.0216*(t1528*t2863 + t1513*t2867) - 1.1135*(t1513*t2863 - 1.*t1528*t2867) - 0.1305*t1713*t809 + t1337*t1713*t887;
  p_output1[47]=0.135*t1059*t2701 - 0.135*t1121*t2886 + t1252*t2890 + t1217*t2896 + t1397*t2901 + t1371*t2905 + t1491*t2913 + t1456*t2918 + t1575*t2923 + t1541*t2927 - 0.0216*(t1528*t2923 + t1513*t2927) - 1.1135*(t1513*t2923 - 1.*t1528*t2927) - 0.1305*t2890*t809 + t1337*t2890*t887;
  p_output1[48]=t2944*t2947 + t1337*t2952 + t1154*t1371*t2952 - 1.*t1180*t1397*t2952 + t1456*t2962 + t1491*t2966 + t1541*t2970 + t1575*t2974 - 1.1135*(-1.*t1528*t2970 + t1513*t2974) - 0.0216*(t1513*t2970 + t1528*t2974) + t2941*t692*t928 - 0.1305*(-1.*t2947*t887 - 1.*t692*t809*t928);
  p_output1[49]=t1337*t1739 + t1154*t1371*t1739 - 1.*t1180*t1397*t1739 + t1643*t2941 + t1726*t2944 + t1456*t2996 + t1491*t3000 + t1541*t3004 + t1575*t3008 - 1.1135*(-1.*t1528*t3004 + t1513*t3008) - 0.0216*(t1513*t3004 + t1528*t3008) - 0.1305*(-1.*t1643*t809 - 1.*t1726*t887);
  p_output1[50]=t2941*t3021 + t2944*t3025 + t1337*t3029 + t1154*t1371*t3029 - 1.*t1180*t1397*t3029 + t1456*t3039 + t1491*t3043 + t1541*t3047 + t1575*t3051 - 1.1135*(-1.*t1528*t3047 + t1513*t3051) - 0.0216*(t1513*t3047 + t1528*t3051) - 0.1305*(-1.*t3021*t809 - 1.*t3025*t887);
  p_output1[51]=t2779*t3063 + t3067*t3070 + t1397*t3074 + t1371*t3078 + t1491*t3082 + t1456*t3086 + t1575*t3090 + t1541*t3094 - 0.0216*(t1528*t3090 + t1513*t3094) - 1.1135*(t1513*t3090 - 1.*t1528*t3094);
  p_output1[52]=t1371*t1775 + t1713*t3063 + t1748*t3067 + t1397*t3109 + t1491*t3113 + t1456*t3117 + t1575*t3121 + t1541*t3125 - 0.0216*(t1528*t3121 + t1513*t3125) - 1.1135*(t1513*t3121 - 1.*t1528*t3125);
  p_output1[53]=t2890*t3063 + t3067*t3139 + t1397*t3143 + t1371*t3147 + t1491*t3151 + t1456*t3155 + t1575*t3159 + t1541*t3163 - 0.0216*(t1528*t3159 + t1513*t3163) - 1.1135*(t1513*t3159 - 1.*t1528*t3163);
  p_output1[54]=t3176*t3179 + t3078*t3182 + t1491*t3185 + t1456*t3188 + t1575*t3192 + t1541*t3196 - 0.0216*(t1528*t3192 + t1513*t3196) - 1.1135*(t1513*t3192 - 1.*t1528*t3196);
  p_output1[55]=t1491*t1781 + t1761*t3176 + t1775*t3182 + t1456*t3211 + t1575*t3215 + t1541*t3218 - 0.0216*(t1528*t3215 + t1513*t3218) - 1.1135*(t1513*t3215 - 1.*t1528*t3218);
  p_output1[56]=t3147*t3182 + t3176*t3231 + t1491*t3235 + t1456*t3238 + t1575*t3242 + t1541*t3246 - 0.0216*(t1528*t3242 + t1513*t3246) - 1.1135*(t1513*t3242 - 1.*t1528*t3246);
  p_output1[57]=t3185*t3258 + t3262*t3265 + t1575*t3268 + t1541*t3271 - 0.0216*(t1528*t3268 + t3274) - 1.1135*(t1513*t3268 + t3278);
  p_output1[58]=t1541*t1800 + t1781*t3258 + t1786*t3262 + t1575*t3285 - 0.0216*(t1807 + t1528*t3285) - 1.1135*(t1513*t3285 + t3292);
  p_output1[59]=t3235*t3258 + t3262*t3299 + t1575*t3302 + t1541*t3305 - 0.0216*(t1528*t3302 + t3308) - 1.1135*(t1513*t3302 + t3312);
  p_output1[60]=t3318*t3321 - 1.1135*(t3278 - 1.*t1513*t3321) - 0.0216*(t3274 - 1.*t1528*t3321) + t3271*t3324;
  p_output1[61]=-0.0216*t1810 - 1.1135*(-1.*t1513*t1792 + t3292) + t1792*t3318 + t1800*t3324;
  p_output1[62]=t3305*t3324 + t3318*t3342 - 1.1135*(t3312 - 1.*t1513*t3342) - 0.0216*(t3308 - 1.*t1528*t3342);
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 22, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_RightToeJoint.hh"

namespace SymFunction
{

void J_RightToeJoint_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
