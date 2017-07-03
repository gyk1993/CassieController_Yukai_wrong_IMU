/*
 * Automatically Generated from Mathematica.
 * Mon 3 Jul 2017 14:27:49 GMT-04:00
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
  double t737;
  double t804;
  double t940;
  double t1141;
  double t1156;
  double t1208;
  double t1318;
  double t1289;
  double t1291;
  double t1311;
  double t1271;
  double t1326;
  double t1327;
  double t1350;
  double t1148;
  double t1184;
  double t1198;
  double t1239;
  double t1279;
  double t1287;
  double t1316;
  double t1362;
  double t1365;
  double t1367;
  double t1373;
  double t1428;
  double t1431;
  double t1445;
  double t1453;
  double t1389;
  double t1395;
  double t1406;
  double t1451;
  double t1471;
  double t1489;
  double t1500;
  double t1519;
  double t1535;
  double t1539;
  double t1540;
  double t1548;
  double t1552;
  double t1560;
  double t1617;
  double t1620;
  double t1627;
  double t1645;
  double t1566;
  double t1577;
  double t1583;
  double t1641;
  double t1648;
  double t1653;
  double t1661;
  double t1663;
  double t1664;
  double t1670;
  double t1676;
  double t1684;
  double t1685;
  double t1694;
  double t1746;
  double t1758;
  double t1770;
  double t1779;
  double t1704;
  double t1707;
  double t1711;
  double t1773;
  double t1782;
  double t1787;
  double t1790;
  double t1791;
  double t1797;
  double t1798;
  double t1799;
  double t1813;
  double t1818;
  double t1821;
  double t1856;
  double t1876;
  double t1828;
  double t1832;
  double t1837;
  double t1859;
  double t1867;
  double t1869;
  double t1880;
  double t1882;
  double t1883;
  double t1884;
  double t1885;
  double t1887;
  double t1890;
  double t1891;
  double t1930;
  double t1931;
  double t1934;
  double t1940;
  double t1909;
  double t1912;
  double t1913;
  double t1951;
  double t1962;
  double t1963;
  double t1939;
  double t1948;
  double t1949;
  double t1964;
  double t1969;
  double t1971;
  double t1978;
  double t1981;
  double t1985;
  double t1986;
  double t1989;
  double t2015;
  double t2018;
  double t2019;
  double t2024;
  double t1993;
  double t1998;
  double t2007;
  double t1099;
  double t2079;
  double t2085;
  double t2088;
  double t2115;
  double t2118;
  double t2119;
  double t2102;
  double t2106;
  double t2107;
  double t2120;
  double t2081;
  double t2082;
  double t2084;
  double t2086;
  double t2099;
  double t2100;
  double t2113;
  double t2122;
  double t2124;
  double t2128;
  double t2129;
  double t2139;
  double t2142;
  double t2147;
  double t2157;
  double t2159;
  double t2162;
  double t2165;
  double t2164;
  double t2168;
  double t2169;
  double t2173;
  double t2175;
  double t2180;
  double t2190;
  double t2192;
  double t2197;
  double t2198;
  double t2200;
  double t2221;
  double t2223;
  double t2224;
  double t2235;
  double t2204;
  double t2206;
  double t2207;
  double t2227;
  double t2238;
  double t2241;
  double t2246;
  double t2254;
  double t2255;
  double t2258;
  double t2263;
  double t2265;
  double t2268;
  double t2274;
  double t2288;
  double t2289;
  double t2295;
  double t2300;
  double t2278;
  double t2279;
  double t2280;
  double t2299;
  double t2301;
  double t2306;
  double t2311;
  double t2312;
  double t2313;
  double t2315;
  double t2316;
  double t2319;
  double t2323;
  double t2326;
  double t2352;
  double t2360;
  double t2329;
  double t2330;
  double t2332;
  double t2355;
  double t2357;
  double t2358;
  double t2362;
  double t2364;
  double t2366;
  double t2368;
  double t2373;
  double t2375;
  double t2378;
  double t2379;
  double t2407;
  double t2415;
  double t2416;
  double t2420;
  double t2390;
  double t2392;
  double t2394;
  double t2423;
  double t2424;
  double t2425;
  double t2417;
  double t2421;
  double t2422;
  double t2431;
  double t2433;
  double t2434;
  double t2440;
  double t2441;
  double t2443;
  double t2446;
  double t2449;
  double t2468;
  double t2473;
  double t2474;
  double t2477;
  double t2453;
  double t2455;
  double t2456;
  double t2521;
  double t2529;
  double t2530;
  double t2531;
  double t2534;
  double t2545;
  double t2546;
  double t2547;
  double t2555;
  double t2556;
  double t2561;
  double t2572;
  double t2573;
  double t2574;
  double t2542;
  double t2554;
  double t2567;
  double t2576;
  double t2577;
  double t2581;
  double t2584;
  double t2587;
  double t2589;
  double t2590;
  double t2596;
  double t2604;
  double t2606;
  double t2607;
  double t2610;
  double t2615;
  double t2616;
  double t2617;
  double t2629;
  double t2632;
  double t2636;
  double t2638;
  double t2639;
  double t2644;
  double t2645;
  double t2652;
  double t2666;
  double t2670;
  double t2672;
  double t2675;
  double t2678;
  double t2683;
  double t2686;
  double t2687;
  double t2692;
  double t2694;
  double t2700;
  double t2704;
  double t2705;
  double t2719;
  double t2721;
  double t2725;
  double t2729;
  double t2730;
  double t2023;
  double t2031;
  double t2033;
  double t2732;
  double t2734;
  double t2735;
  double t2035;
  double t2039;
  double t2041;
  double t2739;
  double t2744;
  double t2747;
  double t2543;
  double t2787;
  double t2790;
  double t2792;
  double t2779;
  double t2780;
  double t2785;
  double t2775;
  double t2778;
  double t2786;
  double t2794;
  double t2795;
  double t2797;
  double t2798;
  double t2803;
  double t2806;
  double t2807;
  double t2814;
  double t2816;
  double t2818;
  double t2819;
  double t2820;
  double t2824;
  double t2825;
  double t2828;
  double t2835;
  double t2837;
  double t2839;
  double t2842;
  double t2843;
  double t2847;
  double t2848;
  double t2850;
  double t2858;
  double t2861;
  double t2863;
  double t2864;
  double t2865;
  double t2868;
  double t2870;
  double t2871;
  double t2885;
  double t2886;
  double t2892;
  double t2893;
  double t2894;
  double t2899;
  double t2900;
  double t2902;
  double t2903;
  double t2904;
  double t2476;
  double t2479;
  double t2480;
  double t2905;
  double t2906;
  double t2908;
  double t2484;
  double t2488;
  double t2490;
  double t2915;
  double t2917;
  double t2918;
  double t2951;
  double t2953;
  double t2955;
  double t2965;
  double t2966;
  double t2967;
  double t2970;
  double t2972;
  double t2973;
  double t2976;
  double t2977;
  double t2979;
  double t2962;
  double t2968;
  double t2974;
  double t2980;
  double t2982;
  double t2985;
  double t2986;
  double t2989;
  double t2990;
  double t2991;
  double t2995;
  double t2997;
  double t2998;
  double t2999;
  double t3000;
  double t3002;
  double t3003;
  double t3004;
  double t3012;
  double t3014;
  double t3015;
  double t3018;
  double t3021;
  double t3023;
  double t3026;
  double t3027;
  double t3035;
  double t3036;
  double t3037;
  double t3038;
  double t3039;
  double t3041;
  double t3042;
  double t3043;
  double t3051;
  double t3052;
  double t3061;
  double t3062;
  double t3064;
  double t3071;
  double t3072;
  double t3073;
  double t3074;
  double t3075;
  double t3076;
  double t3077;
  double t3079;
  double t3082;
  double t3083;
  double t3085;
  double t2964;
  double t3120;
  double t3121;
  double t3122;
  double t3116;
  double t3117;
  double t3118;
  double t3114;
  double t3115;
  double t3119;
  double t3123;
  double t3124;
  double t3125;
  double t3126;
  double t3130;
  double t3131;
  double t3132;
  double t3140;
  double t3142;
  double t3143;
  double t3145;
  double t3147;
  double t3149;
  double t3151;
  double t3152;
  double t3156;
  double t3158;
  double t3159;
  double t3160;
  double t3161;
  double t3165;
  double t3166;
  double t3167;
  double t3174;
  double t3176;
  double t3178;
  double t3179;
  double t3180;
  double t3183;
  double t3184;
  double t3185;
  double t3190;
  double t3191;
  double t3198;
  double t3201;
  double t3202;
  double t3209;
  double t3211;
  double t3213;
  double t3214;
  double t3215;
  double t3217;
  double t3218;
  double t3219;
  double t3221;
  double t3222;
  double t3223;
  t737 = Cos(var1[4]);
  t804 = Cos(var1[5]);
  t940 = Sin(var1[4]);
  t1141 = Sin(var1[14]);
  t1156 = Cos(var1[14]);
  t1208 = Sin(var1[5]);
  t1318 = Sin(var1[15]);
  t1289 = t1141*t940;
  t1291 = -1.*t1156*t737*t1208;
  t1311 = t1289 + t1291;
  t1271 = Cos(var1[15]);
  t1326 = t1156*t940;
  t1327 = t737*t1141*t1208;
  t1350 = t1326 + t1327;
  t1148 = 0.135*t1141*t940;
  t1184 = -1.*t1156;
  t1198 = 1. + t1184;
  t1239 = 0.135*t1198*t737*t1208;
  t1279 = -1.*t1271;
  t1287 = 1. + t1279;
  t1316 = -0.135*t1287*t1311;
  t1362 = 0.135*t1318*t1350;
  t1365 = -1.*t1318*t1311;
  t1367 = t1271*t1350;
  t1373 = t1365 + t1367;
  t1428 = Cos(var1[16]);
  t1431 = -1.*t1428;
  t1445 = 1. + t1431;
  t1453 = Sin(var1[16]);
  t1389 = t1271*t1311;
  t1395 = t1318*t1350;
  t1406 = t1389 + t1395;
  t1451 = -0.049*t1445;
  t1471 = 0.135*t1453;
  t1489 = t1451 + t1471;
  t1500 = t737*t804*t1489;
  t1519 = -0.135*t1445;
  t1535 = -0.049*t1453;
  t1539 = t1519 + t1535;
  t1540 = t1539*t1406;
  t1548 = t737*t804*t1453;
  t1552 = t1428*t1406;
  t1560 = t1548 + t1552;
  t1617 = Cos(var1[17]);
  t1620 = -1.*t1617;
  t1627 = 1. + t1620;
  t1645 = Sin(var1[17]);
  t1566 = t1428*t737*t804;
  t1577 = -1.*t1453*t1406;
  t1583 = t1566 + t1577;
  t1641 = -0.09*t1627;
  t1648 = 0.049*t1645;
  t1653 = t1641 + t1648;
  t1661 = t1653*t1373;
  t1663 = -0.049*t1627;
  t1664 = -0.09*t1645;
  t1670 = t1663 + t1664;
  t1676 = t1670*t1583;
  t1684 = t1645*t1373;
  t1685 = t1617*t1583;
  t1694 = t1684 + t1685;
  t1746 = Cos(var1[18]);
  t1758 = -1.*t1746;
  t1770 = 1. + t1758;
  t1779 = Sin(var1[18]);
  t1704 = t1617*t1373;
  t1707 = -1.*t1645*t1583;
  t1711 = t1704 + t1707;
  t1773 = -0.049*t1770;
  t1782 = -0.21*t1779;
  t1787 = t1773 + t1782;
  t1790 = t1787*t1694;
  t1791 = -0.21*t1770;
  t1797 = 0.049*t1779;
  t1798 = t1791 + t1797;
  t1799 = t1798*t1711;
  t1813 = -1.*t1779*t1694;
  t1818 = t1746*t1711;
  t1821 = t1813 + t1818;
  t1856 = Cos(var1[19]);
  t1876 = Sin(var1[19]);
  t1828 = t1746*t1694;
  t1832 = t1779*t1711;
  t1837 = t1828 + t1832;
  t1859 = -1.*t1856;
  t1867 = 1. + t1859;
  t1869 = -0.2707*t1867;
  t1880 = 0.0016*t1876;
  t1882 = t1869 + t1880;
  t1883 = t1882*t1821;
  t1884 = -1. + t1856;
  t1885 = 0.0016*t1884;
  t1887 = -0.2707*t1876;
  t1890 = t1885 + t1887;
  t1891 = t1890*t1837;
  t1930 = Cos(var1[20]);
  t1931 = -1.*t1930;
  t1934 = 1. + t1931;
  t1940 = Sin(var1[20]);
  t1909 = t1856*t1821;
  t1912 = -1.*t1876*t1837;
  t1913 = t1909 + t1912;
  t1951 = t1876*t1821;
  t1962 = t1856*t1837;
  t1963 = t1951 + t1962;
  t1939 = 0.0184*t1934;
  t1948 = -0.7055*t1940;
  t1949 = t1939 + t1948;
  t1964 = t1949*t1963;
  t1969 = -0.7055*t1934;
  t1971 = -0.0184*t1940;
  t1978 = t1969 + t1971;
  t1981 = t1978*t1913;
  t1985 = -1.*t1940*t1963;
  t1986 = t1930*t1913;
  t1989 = t1985 + t1986;
  t2015 = Cos(var1[21]);
  t2018 = -1.*t2015;
  t2019 = 1. + t2018;
  t2024 = Sin(var1[21]);
  t1993 = t1930*t1963;
  t1998 = t1940*t1913;
  t2007 = t1993 + t1998;
  t1099 = -0.0233*t737*t804;
  t2079 = Cos(var1[6]);
  t2085 = Sin(var1[6]);
  t2088 = Cos(var1[7]);
  t2115 = t2079*t940;
  t2118 = t737*t1208*t2085;
  t2119 = t2115 + t2118;
  t2102 = -1.*t737*t2079*t1208;
  t2106 = t940*t2085;
  t2107 = t2102 + t2106;
  t2120 = Sin(var1[7]);
  t2081 = -1.*t2079;
  t2082 = 1. + t2081;
  t2084 = -0.135*t737*t2082*t1208;
  t2086 = -0.135*t940*t2085;
  t2099 = -1.*t2088;
  t2100 = 1. + t2099;
  t2113 = 0.135*t2100*t2107;
  t2122 = -0.135*t2119*t2120;
  t2124 = t2088*t2119;
  t2128 = -1.*t2107*t2120;
  t2129 = t2124 + t2128;
  t2139 = t2088*t2107;
  t2142 = t2119*t2120;
  t2147 = t2139 + t2142;
  t2157 = Cos(var1[8]);
  t2159 = -1.*t2157;
  t2162 = 1. + t2159;
  t2165 = Sin(var1[8]);
  t2164 = -0.049*t2162;
  t2168 = -0.135*t2165;
  t2169 = t2164 + t2168;
  t2173 = t737*t804*t2169;
  t2175 = 0.135*t2162;
  t2180 = -0.049*t2165;
  t2190 = t2175 + t2180;
  t2192 = t2147*t2190;
  t2197 = t2157*t2147;
  t2198 = t737*t804*t2165;
  t2200 = t2197 + t2198;
  t2221 = Cos(var1[9]);
  t2223 = -1.*t2221;
  t2224 = 1. + t2223;
  t2235 = Sin(var1[9]);
  t2204 = t737*t804*t2157;
  t2206 = -1.*t2147*t2165;
  t2207 = t2204 + t2206;
  t2227 = -0.09*t2224;
  t2238 = 0.049*t2235;
  t2241 = t2227 + t2238;
  t2246 = t2241*t2129;
  t2254 = -0.049*t2224;
  t2255 = -0.09*t2235;
  t2258 = t2254 + t2255;
  t2263 = t2258*t2207;
  t2265 = t2235*t2129;
  t2268 = t2221*t2207;
  t2274 = t2265 + t2268;
  t2288 = Cos(var1[10]);
  t2289 = -1.*t2288;
  t2295 = 1. + t2289;
  t2300 = Sin(var1[10]);
  t2278 = t2221*t2129;
  t2279 = -1.*t2235*t2207;
  t2280 = t2278 + t2279;
  t2299 = -0.049*t2295;
  t2301 = -0.21*t2300;
  t2306 = t2299 + t2301;
  t2311 = t2306*t2274;
  t2312 = -0.21*t2295;
  t2313 = 0.049*t2300;
  t2315 = t2312 + t2313;
  t2316 = t2315*t2280;
  t2319 = -1.*t2300*t2274;
  t2323 = t2288*t2280;
  t2326 = t2319 + t2323;
  t2352 = Cos(var1[11]);
  t2360 = Sin(var1[11]);
  t2329 = t2288*t2274;
  t2330 = t2300*t2280;
  t2332 = t2329 + t2330;
  t2355 = -1.*t2352;
  t2357 = 1. + t2355;
  t2358 = -0.2707*t2357;
  t2362 = 0.0016*t2360;
  t2364 = t2358 + t2362;
  t2366 = t2364*t2326;
  t2368 = -1. + t2352;
  t2373 = 0.0016*t2368;
  t2375 = -0.2707*t2360;
  t2378 = t2373 + t2375;
  t2379 = t2378*t2332;
  t2407 = Cos(var1[12]);
  t2415 = -1.*t2407;
  t2416 = 1. + t2415;
  t2420 = Sin(var1[12]);
  t2390 = t2352*t2326;
  t2392 = -1.*t2360*t2332;
  t2394 = t2390 + t2392;
  t2423 = t2360*t2326;
  t2424 = t2352*t2332;
  t2425 = t2423 + t2424;
  t2417 = 0.0184*t2416;
  t2421 = -0.7055*t2420;
  t2422 = t2417 + t2421;
  t2431 = t2422*t2425;
  t2433 = -0.7055*t2416;
  t2434 = -0.0184*t2420;
  t2440 = t2433 + t2434;
  t2441 = t2440*t2394;
  t2443 = -1.*t2420*t2425;
  t2446 = t2407*t2394;
  t2449 = t2443 + t2446;
  t2468 = Cos(var1[13]);
  t2473 = -1.*t2468;
  t2474 = 1. + t2473;
  t2477 = Sin(var1[13]);
  t2453 = t2407*t2425;
  t2455 = t2420*t2394;
  t2456 = t2453 + t2455;
  t2521 = Sin(var1[3]);
  t2529 = t804*t2521*t940;
  t2530 = Cos(var1[3]);
  t2531 = t2530*t1208;
  t2534 = t2529 + t2531;
  t2545 = t2530*t804;
  t2546 = -1.*t2521*t940*t1208;
  t2547 = t2545 + t2546;
  t2555 = -1.*t737*t1141*t2521;
  t2556 = t1156*t2547;
  t2561 = t2555 + t2556;
  t2572 = -1.*t1156*t737*t2521;
  t2573 = -1.*t1141*t2547;
  t2574 = t2572 + t2573;
  t2542 = -0.135*t737*t1141*t2521;
  t2554 = -0.135*t1198*t2547;
  t2567 = -0.135*t1287*t2561;
  t2576 = 0.135*t1318*t2574;
  t2577 = -1.*t1318*t2561;
  t2581 = t1271*t2574;
  t2584 = t2577 + t2581;
  t2587 = t1271*t2561;
  t2589 = t1318*t2574;
  t2590 = t2587 + t2589;
  t2596 = t1489*t2534;
  t2604 = t1539*t2590;
  t2606 = t1453*t2534;
  t2607 = t1428*t2590;
  t2610 = t2606 + t2607;
  t2615 = t1428*t2534;
  t2616 = -1.*t1453*t2590;
  t2617 = t2615 + t2616;
  t2629 = t1653*t2584;
  t2632 = t1670*t2617;
  t2636 = t1645*t2584;
  t2638 = t1617*t2617;
  t2639 = t2636 + t2638;
  t2644 = t1617*t2584;
  t2645 = -1.*t1645*t2617;
  t2652 = t2644 + t2645;
  t2666 = t1787*t2639;
  t2670 = t1798*t2652;
  t2672 = -1.*t1779*t2639;
  t2675 = t1746*t2652;
  t2678 = t2672 + t2675;
  t2683 = t1746*t2639;
  t2686 = t1779*t2652;
  t2687 = t2683 + t2686;
  t2692 = t1882*t2678;
  t2694 = t1890*t2687;
  t2700 = t1856*t2678;
  t2704 = -1.*t1876*t2687;
  t2705 = t2700 + t2704;
  t2719 = t1876*t2678;
  t2721 = t1856*t2687;
  t2725 = t2719 + t2721;
  t2729 = t1949*t2725;
  t2730 = t1978*t2705;
  t2023 = -1.1135*t2019;
  t2031 = 0.0216*t2024;
  t2033 = t2023 + t2031;
  t2732 = -1.*t1940*t2725;
  t2734 = t1930*t2705;
  t2735 = t2732 + t2734;
  t2035 = -0.0216*t2019;
  t2039 = -1.1135*t2024;
  t2041 = t2035 + t2039;
  t2739 = t1930*t2725;
  t2744 = t1940*t2705;
  t2747 = t2739 + t2744;
  t2543 = -0.0233*t2534;
  t2787 = -1.*t737*t2079*t2521;
  t2790 = -1.*t2547*t2085;
  t2792 = t2787 + t2790;
  t2779 = t2079*t2547;
  t2780 = -1.*t737*t2521*t2085;
  t2785 = t2779 + t2780;
  t2775 = 0.135*t2082*t2547;
  t2778 = 0.135*t737*t2521*t2085;
  t2786 = 0.135*t2100*t2785;
  t2794 = -0.135*t2792*t2120;
  t2795 = t2088*t2792;
  t2797 = -1.*t2785*t2120;
  t2798 = t2795 + t2797;
  t2803 = t2088*t2785;
  t2806 = t2792*t2120;
  t2807 = t2803 + t2806;
  t2814 = t2534*t2169;
  t2816 = t2807*t2190;
  t2818 = t2157*t2807;
  t2819 = t2534*t2165;
  t2820 = t2818 + t2819;
  t2824 = t2157*t2534;
  t2825 = -1.*t2807*t2165;
  t2828 = t2824 + t2825;
  t2835 = t2241*t2798;
  t2837 = t2258*t2828;
  t2839 = t2235*t2798;
  t2842 = t2221*t2828;
  t2843 = t2839 + t2842;
  t2847 = t2221*t2798;
  t2848 = -1.*t2235*t2828;
  t2850 = t2847 + t2848;
  t2858 = t2306*t2843;
  t2861 = t2315*t2850;
  t2863 = -1.*t2300*t2843;
  t2864 = t2288*t2850;
  t2865 = t2863 + t2864;
  t2868 = t2288*t2843;
  t2870 = t2300*t2850;
  t2871 = t2868 + t2870;
  t2885 = t2364*t2865;
  t2886 = t2378*t2871;
  t2892 = t2352*t2865;
  t2893 = -1.*t2360*t2871;
  t2894 = t2892 + t2893;
  t2899 = t2360*t2865;
  t2900 = t2352*t2871;
  t2902 = t2899 + t2900;
  t2903 = t2422*t2902;
  t2904 = t2440*t2894;
  t2476 = -1.1135*t2474;
  t2479 = 0.0216*t2477;
  t2480 = t2476 + t2479;
  t2905 = -1.*t2420*t2902;
  t2906 = t2407*t2894;
  t2908 = t2905 + t2906;
  t2484 = -0.0216*t2474;
  t2488 = -1.1135*t2477;
  t2490 = t2484 + t2488;
  t2915 = t2407*t2902;
  t2917 = t2420*t2894;
  t2918 = t2915 + t2917;
  t2951 = -1.*t2530*t804*t940;
  t2953 = t2521*t1208;
  t2955 = t2951 + t2953;
  t2965 = t804*t2521;
  t2966 = t2530*t940*t1208;
  t2967 = t2965 + t2966;
  t2970 = t2530*t737*t1141;
  t2972 = t1156*t2967;
  t2973 = t2970 + t2972;
  t2976 = t1156*t2530*t737;
  t2977 = -1.*t1141*t2967;
  t2979 = t2976 + t2977;
  t2962 = 0.135*t2530*t737*t1141;
  t2968 = -0.135*t1198*t2967;
  t2974 = -0.135*t1287*t2973;
  t2980 = 0.135*t1318*t2979;
  t2982 = -1.*t1318*t2973;
  t2985 = t1271*t2979;
  t2986 = t2982 + t2985;
  t2989 = t1271*t2973;
  t2990 = t1318*t2979;
  t2991 = t2989 + t2990;
  t2995 = t1489*t2955;
  t2997 = t1539*t2991;
  t2998 = t1453*t2955;
  t2999 = t1428*t2991;
  t3000 = t2998 + t2999;
  t3002 = t1428*t2955;
  t3003 = -1.*t1453*t2991;
  t3004 = t3002 + t3003;
  t3012 = t1653*t2986;
  t3014 = t1670*t3004;
  t3015 = t1645*t2986;
  t3018 = t1617*t3004;
  t3021 = t3015 + t3018;
  t3023 = t1617*t2986;
  t3026 = -1.*t1645*t3004;
  t3027 = t3023 + t3026;
  t3035 = t1787*t3021;
  t3036 = t1798*t3027;
  t3037 = -1.*t1779*t3021;
  t3038 = t1746*t3027;
  t3039 = t3037 + t3038;
  t3041 = t1746*t3021;
  t3042 = t1779*t3027;
  t3043 = t3041 + t3042;
  t3051 = t1882*t3039;
  t3052 = t1890*t3043;
  t3061 = t1856*t3039;
  t3062 = -1.*t1876*t3043;
  t3064 = t3061 + t3062;
  t3071 = t1876*t3039;
  t3072 = t1856*t3043;
  t3073 = t3071 + t3072;
  t3074 = t1949*t3073;
  t3075 = t1978*t3064;
  t3076 = -1.*t1940*t3073;
  t3077 = t1930*t3064;
  t3079 = t3076 + t3077;
  t3082 = t1930*t3073;
  t3083 = t1940*t3064;
  t3085 = t3082 + t3083;
  t2964 = -0.0233*t2955;
  t3120 = t2530*t737*t2079;
  t3121 = -1.*t2967*t2085;
  t3122 = t3120 + t3121;
  t3116 = t2079*t2967;
  t3117 = t2530*t737*t2085;
  t3118 = t3116 + t3117;
  t3114 = 0.135*t2082*t2967;
  t3115 = -0.135*t2530*t737*t2085;
  t3119 = 0.135*t2100*t3118;
  t3123 = -0.135*t3122*t2120;
  t3124 = t2088*t3122;
  t3125 = -1.*t3118*t2120;
  t3126 = t3124 + t3125;
  t3130 = t2088*t3118;
  t3131 = t3122*t2120;
  t3132 = t3130 + t3131;
  t3140 = t2955*t2169;
  t3142 = t3132*t2190;
  t3143 = t2157*t3132;
  t3145 = t2955*t2165;
  t3147 = t3143 + t3145;
  t3149 = t2157*t2955;
  t3151 = -1.*t3132*t2165;
  t3152 = t3149 + t3151;
  t3156 = t2241*t3126;
  t3158 = t2258*t3152;
  t3159 = t2235*t3126;
  t3160 = t2221*t3152;
  t3161 = t3159 + t3160;
  t3165 = t2221*t3126;
  t3166 = -1.*t2235*t3152;
  t3167 = t3165 + t3166;
  t3174 = t2306*t3161;
  t3176 = t2315*t3167;
  t3178 = -1.*t2300*t3161;
  t3179 = t2288*t3167;
  t3180 = t3178 + t3179;
  t3183 = t2288*t3161;
  t3184 = t2300*t3167;
  t3185 = t3183 + t3184;
  t3190 = t2364*t3180;
  t3191 = t2378*t3185;
  t3198 = t2352*t3180;
  t3201 = -1.*t2360*t3185;
  t3202 = t3198 + t3201;
  t3209 = t2360*t3180;
  t3211 = t2352*t3185;
  t3213 = t3209 + t3211;
  t3214 = t2422*t3213;
  t3215 = t2440*t3202;
  t3217 = -1.*t2420*t3213;
  t3218 = t2407*t3202;
  t3219 = t3217 + t3218;
  t3221 = t2407*t3213;
  t3222 = t2420*t3202;
  t3223 = t3221 + t3222;
  p_output1[0]=0.0313636933885334*(1.82*(t1099 + t1148 + t1239 + t1316 + t1362 + 0.0179*t1373 - 0.1351*t1406 + var1[0]) + 1.17*(t1148 + t1239 + t1316 + t1362 - 0.0343*t1373 + t1500 + t1540 - 0.135*t1560 - 0.049*t1583 + var1[0]) + 5.52*(t1148 + t1239 + t1316 + t1362 + t1500 + t1540 - 0.1708*t1560 + t1661 + t1676 - 0.0489*t1694 - 0.1498*t1711 + var1[0]) + 0.758*(t1148 + t1239 + t1316 + t1362 + t1500 + t1540 - 0.1327*t1560 + t1661 + t1676 + t1790 + t1799 - 0.233*t1821 - 0.0169*t1837 + var1[0]) + 0.577*(t1148 + t1239 + t1316 + t1362 + t1500 + t1540 - 0.1303*t1560 + t1661 + t1676 + t1790 + t1799 + 0.0004*(-1.*t1837*t1856 - 1.*t1821*t1876) + t1883 + t1891 - 0.4541*t1913 + var1[0]) + 0.782*(t1148 + t1239 + t1316 + t1362 + t1500 + t1540 - 0.1318*t1560 + t1661 + t1676 + t1790 + t1799 + t1883 + t1891 + t1964 + t1981 - 0.816*t1989 - 0.0122*t2007 + var1[0]) + 0.15*(t1148 + t1239 + t1316 + t1362 + t1500 + t1540 - 0.1306*t1560 + t1661 + t1676 + t1790 + t1799 + t1883 + t1891 + t1964 + t1981 + 0.0059*(t2007*t2015 + t1989*t2024) - 1.1182*(t1989*t2015 - 1.*t2007*t2024) + t1989*t2033 + t2007*t2041 + var1[0]) + 1.82*(t1099 + t2084 + t2086 + t2113 + t2122 + 0.0179*t2129 + 0.1351*t2147 + var1[0]) + 1.17*(t2084 + t2086 + t2113 + t2122 - 0.0343*t2129 + t2173 + t2192 + 0.135*t2200 - 0.049*t2207 + var1[0]) + 5.52*(t2084 + t2086 + t2113 + t2122 + t2173 + t2192 + 0.1708*t2200 + t2246 + t2263 - 0.0489*t2274 - 0.1498*t2280 + var1[0]) + 0.758*(t2084 + t2086 + t2113 + t2122 + t2173 + t2192 + 0.1327*t2200 + t2246 + t2263 + t2311 + t2316 - 0.233*t2326 - 0.0169*t2332 + var1[0]) + 0.577*(t2084 + t2086 + t2113 + t2122 + t2173 + t2192 + 0.1303*t2200 + t2246 + t2263 + t2311 + t2316 + 0.0004*(-1.*t2332*t2352 - 1.*t2326*t2360) + t2366 + t2379 - 0.4541*t2394 + var1[0]) + 0.782*(t2084 + t2086 + t2113 + t2122 + t2173 + t2192 + 0.1318*t2200 + t2246 + t2263 + t2311 + t2316 + t2366 + t2379 + t2431 + t2441 - 0.816*t2449 - 0.0122*t2456 + var1[0]) + 0.15*(t2084 + t2086 + t2113 + t2122 + t2173 + t2192 + 0.1306*t2200 + t2246 + t2263 + t2311 + t2316 + t2366 + t2379 + t2431 + t2441 + 0.0059*(t2456*t2468 + t2449*t2477) - 1.1182*(t2449*t2468 - 1.*t2456*t2477) + t2449*t2480 + t2456*t2490 + var1[0]) + 10.33*(0.0507*t737*t804 + 0.0284*t940 + var1[0]));
  p_output1[1]=0.0313636933885334*(1.82*(t2542 + t2543 + t2554 + t2567 + t2576 + 0.0179*t2584 - 0.1351*t2590 + var1[1]) + 1.17*(t2542 + t2554 + t2567 + t2576 - 0.0343*t2584 + t2596 + t2604 - 0.135*t2610 - 0.049*t2617 + var1[1]) + 5.52*(t2542 + t2554 + t2567 + t2576 + t2596 + t2604 - 0.1708*t2610 + t2629 + t2632 - 0.0489*t2639 - 0.1498*t2652 + var1[1]) + 0.758*(t2542 + t2554 + t2567 + t2576 + t2596 + t2604 - 0.1327*t2610 + t2629 + t2632 + t2666 + t2670 - 0.233*t2678 - 0.0169*t2687 + var1[1]) + 0.577*(t2542 + t2554 + t2567 + t2576 + t2596 + t2604 - 0.1303*t2610 + t2629 + t2632 + t2666 + t2670 + 0.0004*(-1.*t1876*t2678 - 1.*t1856*t2687) + t2692 + t2694 - 0.4541*t2705 + var1[1]) + 0.782*(t2542 + t2554 + t2567 + t2576 + t2596 + t2604 - 0.1318*t2610 + t2629 + t2632 + t2666 + t2670 + t2692 + t2694 + t2729 + t2730 - 0.816*t2735 - 0.0122*t2747 + var1[1]) + 0.15*(t2542 + t2554 + t2567 + t2576 + t2596 + t2604 - 0.1306*t2610 + t2629 + t2632 + t2666 + t2670 + t2692 + t2694 + t2729 + t2730 + t2033*t2735 + t2041*t2747 + 0.0059*(t2024*t2735 + t2015*t2747) - 1.1182*(t2015*t2735 - 1.*t2024*t2747) + var1[1]) + 1.82*(t2543 + t2775 + t2778 + t2786 + t2794 + 0.0179*t2798 + 0.1351*t2807 + var1[1]) + 1.17*(t2775 + t2778 + t2786 + t2794 - 0.0343*t2798 + t2814 + t2816 + 0.135*t2820 - 0.049*t2828 + var1[1]) + 5.52*(t2775 + t2778 + t2786 + t2794 + t2814 + t2816 + 0.1708*t2820 + t2835 + t2837 - 0.0489*t2843 - 0.1498*t2850 + var1[1]) + 0.758*(t2775 + t2778 + t2786 + t2794 + t2814 + t2816 + 0.1327*t2820 + t2835 + t2837 + t2858 + t2861 - 0.233*t2865 - 0.0169*t2871 + var1[1]) + 0.577*(t2775 + t2778 + t2786 + t2794 + t2814 + t2816 + 0.1303*t2820 + t2835 + t2837 + t2858 + t2861 + 0.0004*(-1.*t2360*t2865 - 1.*t2352*t2871) + t2885 + t2886 - 0.4541*t2894 + var1[1]) + 0.782*(t2775 + t2778 + t2786 + t2794 + t2814 + t2816 + 0.1318*t2820 + t2835 + t2837 + t2858 + t2861 + t2885 + t2886 + t2903 + t2904 - 0.816*t2908 - 0.0122*t2918 + var1[1]) + 0.15*(t2775 + t2778 + t2786 + t2794 + t2814 + t2816 + 0.1306*t2820 + t2835 + t2837 + t2858 + t2861 + t2885 + t2886 + t2903 + t2904 + t2480*t2908 + t2490*t2918 + 0.0059*(t2477*t2908 + t2468*t2918) - 1.1182*(t2468*t2908 - 1.*t2477*t2918) + var1[1]) + 10.33*(0.0507*t2534 - 0.0284*t2521*t737 + var1[1]));
  p_output1[2]=0.0313636933885334*(1.82*(t2962 + t2964 + t2968 + t2974 + t2980 + 0.0179*t2986 - 0.1351*t2991 + var1[2]) + 1.17*(t2962 + t2968 + t2974 + t2980 - 0.0343*t2986 + t2995 + t2997 - 0.135*t3000 - 0.049*t3004 + var1[2]) + 5.52*(t2962 + t2968 + t2974 + t2980 + t2995 + t2997 - 0.1708*t3000 + t3012 + t3014 - 0.0489*t3021 - 0.1498*t3027 + var1[2]) + 0.758*(t2962 + t2968 + t2974 + t2980 + t2995 + t2997 - 0.1327*t3000 + t3012 + t3014 + t3035 + t3036 - 0.233*t3039 - 0.0169*t3043 + var1[2]) + 0.577*(t2962 + t2968 + t2974 + t2980 + t2995 + t2997 - 0.1303*t3000 + t3012 + t3014 + t3035 + t3036 + 0.0004*(-1.*t1876*t3039 - 1.*t1856*t3043) + t3051 + t3052 - 0.4541*t3064 + var1[2]) + 0.782*(t2962 + t2968 + t2974 + t2980 + t2995 + t2997 - 0.1318*t3000 + t3012 + t3014 + t3035 + t3036 + t3051 + t3052 + t3074 + t3075 - 0.816*t3079 - 0.0122*t3085 + var1[2]) + 0.15*(t2962 + t2968 + t2974 + t2980 + t2995 + t2997 - 0.1306*t3000 + t3012 + t3014 + t3035 + t3036 + t3051 + t3052 + t3074 + t3075 + t2033*t3079 + t2041*t3085 + 0.0059*(t2024*t3079 + t2015*t3085) - 1.1182*(t2015*t3079 - 1.*t2024*t3085) + var1[2]) + 1.82*(t2964 + t3114 + t3115 + t3119 + t3123 + 0.0179*t3126 + 0.1351*t3132 + var1[2]) + 1.17*(t3114 + t3115 + t3119 + t3123 - 0.0343*t3126 + t3140 + t3142 + 0.135*t3147 - 0.049*t3152 + var1[2]) + 5.52*(t3114 + t3115 + t3119 + t3123 + t3140 + t3142 + 0.1708*t3147 + t3156 + t3158 - 0.0489*t3161 - 0.1498*t3167 + var1[2]) + 0.758*(t3114 + t3115 + t3119 + t3123 + t3140 + t3142 + 0.1327*t3147 + t3156 + t3158 + t3174 + t3176 - 0.233*t3180 - 0.0169*t3185 + var1[2]) + 0.577*(t3114 + t3115 + t3119 + t3123 + t3140 + t3142 + 0.1303*t3147 + t3156 + t3158 + t3174 + t3176 + 0.0004*(-1.*t2360*t3180 - 1.*t2352*t3185) + t3190 + t3191 - 0.4541*t3202 + var1[2]) + 0.782*(t3114 + t3115 + t3119 + t3123 + t3140 + t3142 + 0.1318*t3147 + t3156 + t3158 + t3174 + t3176 + t3190 + t3191 + t3214 + t3215 - 0.816*t3219 - 0.0122*t3223 + var1[2]) + 0.15*(t3114 + t3115 + t3119 + t3123 + t3140 + t3142 + 0.1306*t3147 + t3156 + t3158 + t3174 + t3176 + t3190 + t3191 + t3214 + t3215 + t2480*t3219 + t2490*t3223 + 0.0059*(t2477*t3219 + t2468*t3223) - 1.1182*(t2468*t3219 - 1.*t2477*t3223) + var1[2]) + 10.33*(0.0507*t2955 + 0.0284*t2530*t737 + var1[2]));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "ComPosition.hh"

namespace SymFunction
{

void ComPosition_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
