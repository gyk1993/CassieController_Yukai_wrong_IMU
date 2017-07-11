/*
 * Automatically Generated from Mathematica.
 * Tue 11 Jul 2017 19:12:49 GMT-04:00
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
  double t900;
  double t1153;
  double t1314;
  double t1337;
  double t1340;
  double t1391;
  double t1493;
  double t1536;
  double t1541;
  double t1484;
  double t1487;
  double t1491;
  double t1548;
  double t1696;
  double t1715;
  double t1723;
  double t1744;
  double t1649;
  double t1669;
  double t1687;
  double t1778;
  double t1575;
  double t1579;
  double t1584;
  double t1589;
  double t1624;
  double t1639;
  double t1640;
  double t1821;
  double t1823;
  double t1826;
  double t1830;
  double t1833;
  double t1834;
  double t1844;
  double t1867;
  double t1871;
  double t1874;
  double t1897;
  double t1901;
  double t1904;
  double t1910;
  double t1911;
  double t1915;
  double t1922;
  double t1930;
  double t1941;
  double t1946;
  double t1970;
  double t1978;
  double t1979;
  double t1990;
  double t1996;
  double t2001;
  double t2012;
  double t2019;
  double t2023;
  double t2026;
  double t2055;
  double t2056;
  double t2058;
  double t2066;
  double t2067;
  double t2075;
  double t2084;
  double t2097;
  double t2098;
  double t2107;
  double t2123;
  double t2127;
  double t2130;
  double t1217;
  double t1239;
  double t1252;
  double t1264;
  double t2176;
  double t1371;
  double t1378;
  double t1404;
  double t1418;
  double t1429;
  double t1439;
  double t2166;
  double t2174;
  double t2177;
  double t2178;
  double t1562;
  double t1564;
  double t1586;
  double t1591;
  double t1607;
  double t2202;
  double t2206;
  double t2207;
  double t2185;
  double t2186;
  double t2191;
  double t1731;
  double t1752;
  double t1756;
  double t1779;
  double t1780;
  double t1782;
  double t2232;
  double t2234;
  double t2237;
  double t2240;
  double t2245;
  double t2247;
  double t1810;
  double t1819;
  double t1820;
  double t1842;
  double t1861;
  double t1864;
  double t2216;
  double t2222;
  double t2225;
  double t2270;
  double t2277;
  double t2280;
  double t1881;
  double t1889;
  double t1892;
  double t1918;
  double t1925;
  double t1928;
  double t2287;
  double t2289;
  double t2291;
  double t2296;
  double t2299;
  double t2301;
  double t1956;
  double t1963;
  double t1965;
  double t2004;
  double t2013;
  double t2014;
  double t2307;
  double t2309;
  double t2311;
  double t2316;
  double t2323;
  double t2327;
  double t2035;
  double t2048;
  double t2053;
  double t2080;
  double t2088;
  double t2095;
  double t2334;
  double t2337;
  double t2339;
  double t2347;
  double t2348;
  double t2352;
  double t2117;
  double t2118;
  double t2120;
  double t2356;
  double t2359;
  double t2360;
  double t2366;
  double t2367;
  double t2370;
  double t2404;
  double t2405;
  double t2410;
  double t2426;
  double t2430;
  double t2438;
  double t2419;
  double t2420;
  double t2422;
  double t2455;
  double t2456;
  double t2459;
  double t2463;
  double t2465;
  double t2468;
  double t2444;
  double t2445;
  double t2450;
  double t2488;
  double t2491;
  double t2492;
  double t2498;
  double t2501;
  double t2503;
  double t2508;
  double t2509;
  double t2510;
  double t2514;
  double t2522;
  double t2525;
  double t2529;
  double t2534;
  double t2537;
  double t2542;
  double t2543;
  double t2546;
  double t2551;
  double t2553;
  double t2554;
  double t2560;
  double t2561;
  double t2570;
  double t2580;
  double t2586;
  double t2587;
  t900 = Cos(var1[4]);
  t1153 = Cos(var1[6]);
  t1314 = Sin(var1[5]);
  t1337 = Sin(var1[4]);
  t1340 = Sin(var1[6]);
  t1391 = Cos(var1[7]);
  t1493 = t1153*t1337;
  t1536 = t900*t1314*t1340;
  t1541 = t1493 + t1536;
  t1484 = -1.*t900*t1153*t1314;
  t1487 = t1337*t1340;
  t1491 = t1484 + t1487;
  t1548 = Sin(var1[7]);
  t1696 = Cos(var1[8]);
  t1715 = -1.*t1696;
  t1723 = 1. + t1715;
  t1744 = Sin(var1[8]);
  t1649 = t1391*t1491;
  t1669 = t1541*t1548;
  t1687 = t1649 + t1669;
  t1778 = Cos(var1[5]);
  t1575 = Cos(var1[9]);
  t1579 = -1.*t1575;
  t1584 = 1. + t1579;
  t1589 = Sin(var1[9]);
  t1624 = t1391*t1541;
  t1639 = -1.*t1491*t1548;
  t1640 = t1624 + t1639;
  t1821 = t900*t1778*t1696;
  t1823 = t1687*t1744;
  t1826 = t1821 + t1823;
  t1830 = Cos(var1[10]);
  t1833 = -1.*t1830;
  t1834 = 1. + t1833;
  t1844 = Sin(var1[10]);
  t1867 = t1589*t1640;
  t1871 = t1575*t1826;
  t1874 = t1867 + t1871;
  t1897 = t1575*t1640;
  t1901 = -1.*t1589*t1826;
  t1904 = t1897 + t1901;
  t1910 = Cos(var1[11]);
  t1911 = -1.*t1910;
  t1915 = 1. + t1911;
  t1922 = Sin(var1[11]);
  t1930 = -1.*t1844*t1874;
  t1941 = t1830*t1904;
  t1946 = t1930 + t1941;
  t1970 = t1830*t1874;
  t1978 = t1844*t1904;
  t1979 = t1970 + t1978;
  t1990 = Cos(var1[12]);
  t1996 = -1.*t1990;
  t2001 = 1. + t1996;
  t2012 = Sin(var1[12]);
  t2019 = t1922*t1946;
  t2023 = t1910*t1979;
  t2026 = t2019 + t2023;
  t2055 = t1910*t1946;
  t2056 = -1.*t1922*t1979;
  t2058 = t2055 + t2056;
  t2066 = Cos(var1[13]);
  t2067 = -1.*t2066;
  t2075 = 1. + t2067;
  t2084 = Sin(var1[13]);
  t2097 = -1.*t2012*t2026;
  t2098 = t1990*t2058;
  t2107 = t2097 + t2098;
  t2123 = t1990*t2026;
  t2127 = t2012*t2058;
  t2130 = t2123 + t2127;
  t1217 = -1.*t1153;
  t1239 = 1. + t1217;
  t1252 = 0.135*t1239;
  t1264 = 0. + t1252;
  t2176 = Sin(var1[3]);
  t1371 = -0.135*t1340;
  t1378 = 0. + t1371;
  t1404 = -1.*t1391;
  t1418 = 1. + t1404;
  t1429 = 0.135*t1418;
  t1439 = 0. + t1429;
  t2166 = Cos(var1[3]);
  t2174 = t2166*t1778;
  t2177 = -1.*t2176*t1337*t1314;
  t2178 = t2174 + t2177;
  t1562 = -0.135*t1548;
  t1564 = 0. + t1562;
  t1586 = -0.09*t1584;
  t1591 = 0.049*t1589;
  t1607 = 0. + t1586 + t1591;
  t2202 = -1.*t900*t1153*t2176;
  t2206 = -1.*t2178*t1340;
  t2207 = t2202 + t2206;
  t2185 = t1153*t2178;
  t2186 = -1.*t900*t2176*t1340;
  t2191 = t2185 + t2186;
  t1731 = 0.135*t1723;
  t1752 = 0.049*t1744;
  t1756 = 0. + t1731 + t1752;
  t1779 = -0.049*t1723;
  t1780 = 0.135*t1744;
  t1782 = 0. + t1779 + t1780;
  t2232 = t1391*t2191;
  t2234 = t2207*t1548;
  t2237 = t2232 + t2234;
  t2240 = t1778*t2176*t1337;
  t2245 = t2166*t1314;
  t2247 = t2240 + t2245;
  t1810 = -0.049*t1584;
  t1819 = -0.09*t1589;
  t1820 = 0. + t1810 + t1819;
  t1842 = -0.049*t1834;
  t1861 = -0.21*t1844;
  t1864 = 0. + t1842 + t1861;
  t2216 = t1391*t2207;
  t2222 = -1.*t2191*t1548;
  t2225 = t2216 + t2222;
  t2270 = t1696*t2247;
  t2277 = t2237*t1744;
  t2280 = t2270 + t2277;
  t1881 = -0.21*t1834;
  t1889 = 0.049*t1844;
  t1892 = 0. + t1881 + t1889;
  t1918 = -0.2707*t1915;
  t1925 = 0.0016*t1922;
  t1928 = 0. + t1918 + t1925;
  t2287 = t1589*t2225;
  t2289 = t1575*t2280;
  t2291 = t2287 + t2289;
  t2296 = t1575*t2225;
  t2299 = -1.*t1589*t2280;
  t2301 = t2296 + t2299;
  t1956 = -0.0016*t1915;
  t1963 = -0.2707*t1922;
  t1965 = 0. + t1956 + t1963;
  t2004 = 0.0184*t2001;
  t2013 = -0.7055*t2012;
  t2014 = 0. + t2004 + t2013;
  t2307 = -1.*t1844*t2291;
  t2309 = t1830*t2301;
  t2311 = t2307 + t2309;
  t2316 = t1830*t2291;
  t2323 = t1844*t2301;
  t2327 = t2316 + t2323;
  t2035 = -0.7055*t2001;
  t2048 = -0.0184*t2012;
  t2053 = 0. + t2035 + t2048;
  t2080 = -1.1135*t2075;
  t2088 = 0.0216*t2084;
  t2095 = 0. + t2080 + t2088;
  t2334 = t1922*t2311;
  t2337 = t1910*t2327;
  t2339 = t2334 + t2337;
  t2347 = t1910*t2311;
  t2348 = -1.*t1922*t2327;
  t2352 = t2347 + t2348;
  t2117 = -0.0216*t2075;
  t2118 = -1.1135*t2084;
  t2120 = 0. + t2117 + t2118;
  t2356 = -1.*t2012*t2339;
  t2359 = t1990*t2352;
  t2360 = t2356 + t2359;
  t2366 = t1990*t2339;
  t2367 = t2012*t2352;
  t2370 = t2366 + t2367;
  t2404 = t1778*t2176;
  t2405 = t2166*t1337*t1314;
  t2410 = t2404 + t2405;
  t2426 = t2166*t900*t1153;
  t2430 = -1.*t2410*t1340;
  t2438 = t2426 + t2430;
  t2419 = t1153*t2410;
  t2420 = t2166*t900*t1340;
  t2422 = t2419 + t2420;
  t2455 = t1391*t2422;
  t2456 = t2438*t1548;
  t2459 = t2455 + t2456;
  t2463 = -1.*t2166*t1778*t1337;
  t2465 = t2176*t1314;
  t2468 = t2463 + t2465;
  t2444 = t1391*t2438;
  t2445 = -1.*t2422*t1548;
  t2450 = t2444 + t2445;
  t2488 = t1696*t2468;
  t2491 = t2459*t1744;
  t2492 = t2488 + t2491;
  t2498 = t1589*t2450;
  t2501 = t1575*t2492;
  t2503 = t2498 + t2501;
  t2508 = t1575*t2450;
  t2509 = -1.*t1589*t2492;
  t2510 = t2508 + t2509;
  t2514 = -1.*t1844*t2503;
  t2522 = t1830*t2510;
  t2525 = t2514 + t2522;
  t2529 = t1830*t2503;
  t2534 = t1844*t2510;
  t2537 = t2529 + t2534;
  t2542 = t1922*t2525;
  t2543 = t1910*t2537;
  t2546 = t2542 + t2543;
  t2551 = t1910*t2525;
  t2553 = -1.*t1922*t2537;
  t2554 = t2551 + t2553;
  t2560 = -1.*t2012*t2546;
  t2561 = t1990*t2554;
  t2570 = t2560 + t2561;
  t2580 = t1990*t2546;
  t2586 = t2012*t2554;
  t2587 = t2580 + t2586;
  p_output1[0]=0. + t1337*t1378 + t1439*t1491 + t1541*t1564 + t1607*t1640 + t1687*t1756 + t1820*t1826 + t1864*t1874 + t1892*t1904 + t1928*t1946 + t1965*t1979 + t2014*t2026 + t2053*t2058 + t2095*t2107 + t2120*t2130 - 0.0216*(t2084*t2107 + t2066*t2130) - 1.193387*(t2066*t2107 - 1.*t2084*t2130) - 1.*t1264*t1314*t900 + t1778*t1782*t900 + 0.1305*(t1687*t1696 - 1.*t1744*t1778*t900) + var1[0];
  p_output1[1]=0. + t1264*t2178 + t1439*t2191 + t1564*t2207 + t1607*t2225 + t1756*t2237 + t1782*t2247 + 0.1305*(t1696*t2237 - 1.*t1744*t2247) + t1820*t2280 + t1864*t2291 + t1892*t2301 + t1928*t2311 + t1965*t2327 + t2014*t2339 + t2053*t2352 + t2095*t2360 + t2120*t2370 - 0.0216*(t2084*t2360 + t2066*t2370) - 1.193387*(t2066*t2360 - 1.*t2084*t2370) - 1.*t1378*t2176*t900 + var1[1];
  p_output1[2]=0. + t1264*t2410 + t1439*t2422 + t1564*t2438 + t1607*t2450 + t1756*t2459 + t1782*t2468 + 0.1305*(t1696*t2459 - 1.*t1744*t2468) + t1820*t2492 + t1864*t2503 + t1892*t2510 + t1928*t2525 + t1965*t2537 + t2014*t2546 + t2053*t2554 + t2095*t2570 + t2120*t2587 - 0.0216*(t2084*t2570 + t2066*t2587) - 1.193387*(t2066*t2570 - 1.*t2084*t2587) + t1378*t2166*t900 + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "LeftHeel.hh"

namespace SymFunction
{

void LeftHeel_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
