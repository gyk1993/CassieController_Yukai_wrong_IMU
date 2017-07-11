/*
 * Automatically Generated from Mathematica.
 * Mon 10 Jul 2017 14:13:03 GMT-04:00
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
  double t940;
  double t1208;
  double t1365;
  double t1395;
  double t1414;
  double t1471;
  double t1617;
  double t1620;
  double t1627;
  double t1566;
  double t1583;
  double t1597;
  double t1641;
  double t1773;
  double t1782;
  double t1790;
  double t1813;
  double t1837;
  double t1845;
  double t1846;
  double t1770;
  double t1661;
  double t1662;
  double t1663;
  double t1685;
  double t1724;
  double t1736;
  double t1739;
  double t1901;
  double t1907;
  double t1909;
  double t1917;
  double t1919;
  double t1931;
  double t1940;
  double t1963;
  double t1964;
  double t1969;
  double t1989;
  double t1992;
  double t1993;
  double t2007;
  double t2008;
  double t2010;
  double t2014;
  double t2024;
  double t2034;
  double t2048;
  double t2073;
  double t2074;
  double t2078;
  double t2082;
  double t2084;
  double t2085;
  double t2088;
  double t2107;
  double t2115;
  double t2118;
  double t2142;
  double t2148;
  double t2152;
  double t2157;
  double t2159;
  double t2165;
  double t2175;
  double t2197;
  double t2198;
  double t2200;
  double t2210;
  double t2212;
  double t2221;
  double t1279;
  double t1289;
  double t1318;
  double t1327;
  double t2275;
  double t1431;
  double t1451;
  double t1500;
  double t1512;
  double t1519;
  double t1560;
  double t2268;
  double t2274;
  double t2279;
  double t2280;
  double t1645;
  double t1648;
  double t1670;
  double t1707;
  double t1719;
  double t2306;
  double t2311;
  double t2313;
  double t2283;
  double t2295;
  double t2299;
  double t1791;
  double t1821;
  double t1827;
  double t1848;
  double t1855;
  double t1856;
  double t2351;
  double t2352;
  double t2357;
  double t2329;
  double t2332;
  double t2337;
  double t1890;
  double t1891;
  double t1900;
  double t1939;
  double t1949;
  double t1962;
  double t2319;
  double t2323;
  double t2326;
  double t2378;
  double t2379;
  double t2382;
  double t1978;
  double t1985;
  double t1986;
  double t2011;
  double t2019;
  double t2023;
  double t2386;
  double t2387;
  double t2390;
  double t2394;
  double t2395;
  double t2402;
  double t2058;
  double t2061;
  double t2062;
  double t2086;
  double t2102;
  double t2106;
  double t2407;
  double t2416;
  double t2417;
  double t2421;
  double t2422;
  double t2423;
  double t2128;
  double t2134;
  double t2139;
  double t2169;
  double t2180;
  double t2190;
  double t2431;
  double t2433;
  double t2434;
  double t2443;
  double t2446;
  double t2449;
  double t2204;
  double t2206;
  double t2209;
  double t2453;
  double t2455;
  double t2460;
  double t2467;
  double t2473;
  double t2474;
  double t2506;
  double t2507;
  double t2513;
  double t2537;
  double t2539;
  double t2540;
  double t2525;
  double t2529;
  double t2530;
  double t2573;
  double t2577;
  double t2581;
  double t2554;
  double t2555;
  double t2556;
  double t2543;
  double t2545;
  double t2546;
  double t2593;
  double t2596;
  double t2597;
  double t2606;
  double t2607;
  double t2616;
  double t2620;
  double t2628;
  double t2629;
  double t2636;
  double t2639;
  double t2641;
  double t2645;
  double t2652;
  double t2658;
  double t2665;
  double t2670;
  double t2672;
  double t2682;
  double t2686;
  double t2688;
  double t2690;
  double t2692;
  double t2694;
  double t2696;
  double t2697;
  double t2699;
  t940 = Cos(var1[4]);
  t1208 = Cos(var1[6]);
  t1365 = Sin(var1[5]);
  t1395 = Sin(var1[4]);
  t1414 = Sin(var1[6]);
  t1471 = Cos(var1[7]);
  t1617 = t1208*t1395;
  t1620 = t940*t1365*t1414;
  t1627 = t1617 + t1620;
  t1566 = -1.*t940*t1208*t1365;
  t1583 = t1395*t1414;
  t1597 = t1566 + t1583;
  t1641 = Sin(var1[7]);
  t1773 = Cos(var1[8]);
  t1782 = -1.*t1773;
  t1790 = 1. + t1782;
  t1813 = Sin(var1[8]);
  t1837 = t1471*t1597;
  t1845 = t1627*t1641;
  t1846 = t1837 + t1845;
  t1770 = Cos(var1[5]);
  t1661 = Cos(var1[9]);
  t1662 = -1.*t1661;
  t1663 = 1. + t1662;
  t1685 = Sin(var1[9]);
  t1724 = t1471*t1627;
  t1736 = -1.*t1597*t1641;
  t1739 = t1724 + t1736;
  t1901 = t940*t1770*t1773;
  t1907 = -1.*t1846*t1813;
  t1909 = t1901 + t1907;
  t1917 = Cos(var1[10]);
  t1919 = -1.*t1917;
  t1931 = 1. + t1919;
  t1940 = Sin(var1[10]);
  t1963 = t1685*t1739;
  t1964 = t1661*t1909;
  t1969 = t1963 + t1964;
  t1989 = t1661*t1739;
  t1992 = -1.*t1685*t1909;
  t1993 = t1989 + t1992;
  t2007 = Cos(var1[11]);
  t2008 = -1.*t2007;
  t2010 = 1. + t2008;
  t2014 = Sin(var1[11]);
  t2024 = -1.*t1940*t1969;
  t2034 = t1917*t1993;
  t2048 = t2024 + t2034;
  t2073 = t1917*t1969;
  t2074 = t1940*t1993;
  t2078 = t2073 + t2074;
  t2082 = Cos(var1[12]);
  t2084 = -1.*t2082;
  t2085 = 1. + t2084;
  t2088 = Sin(var1[12]);
  t2107 = t2014*t2048;
  t2115 = t2007*t2078;
  t2118 = t2107 + t2115;
  t2142 = t2007*t2048;
  t2148 = -1.*t2014*t2078;
  t2152 = t2142 + t2148;
  t2157 = Cos(var1[13]);
  t2159 = -1.*t2157;
  t2165 = 1. + t2159;
  t2175 = Sin(var1[13]);
  t2197 = -1.*t2088*t2118;
  t2198 = t2082*t2152;
  t2200 = t2197 + t2198;
  t2210 = t2082*t2118;
  t2212 = t2088*t2152;
  t2221 = t2210 + t2212;
  t1279 = -1.*t1208;
  t1289 = 1. + t1279;
  t1318 = 0.135*t1289;
  t1327 = 0. + t1318;
  t2275 = Sin(var1[3]);
  t1431 = -0.135*t1414;
  t1451 = 0. + t1431;
  t1500 = -1.*t1471;
  t1512 = 1. + t1500;
  t1519 = 0.135*t1512;
  t1560 = 0. + t1519;
  t2268 = Cos(var1[3]);
  t2274 = t2268*t1770;
  t2279 = -1.*t2275*t1395*t1365;
  t2280 = t2274 + t2279;
  t1645 = -0.135*t1641;
  t1648 = 0. + t1645;
  t1670 = -0.09*t1663;
  t1707 = 0.049*t1685;
  t1719 = 0. + t1670 + t1707;
  t2306 = -1.*t940*t1208*t2275;
  t2311 = -1.*t2280*t1414;
  t2313 = t2306 + t2311;
  t2283 = t1208*t2280;
  t2295 = -1.*t940*t2275*t1414;
  t2299 = t2283 + t2295;
  t1791 = -0.049*t1790;
  t1821 = -0.135*t1813;
  t1827 = 0. + t1791 + t1821;
  t1848 = 0.135*t1790;
  t1855 = -0.049*t1813;
  t1856 = 0. + t1848 + t1855;
  t2351 = t1471*t2299;
  t2352 = t2313*t1641;
  t2357 = t2351 + t2352;
  t2329 = t1770*t2275*t1395;
  t2332 = t2268*t1365;
  t2337 = t2329 + t2332;
  t1890 = -0.049*t1663;
  t1891 = -0.09*t1685;
  t1900 = 0. + t1890 + t1891;
  t1939 = -0.049*t1931;
  t1949 = -0.21*t1940;
  t1962 = 0. + t1939 + t1949;
  t2319 = t1471*t2313;
  t2323 = -1.*t2299*t1641;
  t2326 = t2319 + t2323;
  t2378 = t1773*t2337;
  t2379 = -1.*t2357*t1813;
  t2382 = t2378 + t2379;
  t1978 = -0.21*t1931;
  t1985 = 0.049*t1940;
  t1986 = 0. + t1978 + t1985;
  t2011 = -0.2707*t2010;
  t2019 = 0.0016*t2014;
  t2023 = 0. + t2011 + t2019;
  t2386 = t1685*t2326;
  t2387 = t1661*t2382;
  t2390 = t2386 + t2387;
  t2394 = t1661*t2326;
  t2395 = -1.*t1685*t2382;
  t2402 = t2394 + t2395;
  t2058 = -0.0016*t2010;
  t2061 = -0.2707*t2014;
  t2062 = 0. + t2058 + t2061;
  t2086 = 0.0184*t2085;
  t2102 = -0.7055*t2088;
  t2106 = 0. + t2086 + t2102;
  t2407 = -1.*t1940*t2390;
  t2416 = t1917*t2402;
  t2417 = t2407 + t2416;
  t2421 = t1917*t2390;
  t2422 = t1940*t2402;
  t2423 = t2421 + t2422;
  t2128 = -0.7055*t2085;
  t2134 = -0.0184*t2088;
  t2139 = 0. + t2128 + t2134;
  t2169 = -1.1135*t2165;
  t2180 = 0.0216*t2175;
  t2190 = 0. + t2169 + t2180;
  t2431 = t2014*t2417;
  t2433 = t2007*t2423;
  t2434 = t2431 + t2433;
  t2443 = t2007*t2417;
  t2446 = -1.*t2014*t2423;
  t2449 = t2443 + t2446;
  t2204 = -0.0216*t2165;
  t2206 = -1.1135*t2175;
  t2209 = 0. + t2204 + t2206;
  t2453 = -1.*t2088*t2434;
  t2455 = t2082*t2449;
  t2460 = t2453 + t2455;
  t2467 = t2082*t2434;
  t2473 = t2088*t2449;
  t2474 = t2467 + t2473;
  t2506 = t1770*t2275;
  t2507 = t2268*t1395*t1365;
  t2513 = t2506 + t2507;
  t2537 = t2268*t940*t1208;
  t2539 = -1.*t2513*t1414;
  t2540 = t2537 + t2539;
  t2525 = t1208*t2513;
  t2529 = t2268*t940*t1414;
  t2530 = t2525 + t2529;
  t2573 = t1471*t2530;
  t2577 = t2540*t1641;
  t2581 = t2573 + t2577;
  t2554 = -1.*t2268*t1770*t1395;
  t2555 = t2275*t1365;
  t2556 = t2554 + t2555;
  t2543 = t1471*t2540;
  t2545 = -1.*t2530*t1641;
  t2546 = t2543 + t2545;
  t2593 = t1773*t2556;
  t2596 = -1.*t2581*t1813;
  t2597 = t2593 + t2596;
  t2606 = t1685*t2546;
  t2607 = t1661*t2597;
  t2616 = t2606 + t2607;
  t2620 = t1661*t2546;
  t2628 = -1.*t1685*t2597;
  t2629 = t2620 + t2628;
  t2636 = -1.*t1940*t2616;
  t2639 = t1917*t2629;
  t2641 = t2636 + t2639;
  t2645 = t1917*t2616;
  t2652 = t1940*t2629;
  t2658 = t2645 + t2652;
  t2665 = t2014*t2641;
  t2670 = t2007*t2658;
  t2672 = t2665 + t2670;
  t2682 = t2007*t2641;
  t2686 = -1.*t2014*t2658;
  t2688 = t2682 + t2686;
  t2690 = -1.*t2088*t2672;
  t2692 = t2082*t2688;
  t2694 = t2690 + t2692;
  t2696 = t2082*t2672;
  t2697 = t2088*t2688;
  t2699 = t2696 + t2697;
  p_output1[0]=0. + t1395*t1451 + t1560*t1597 + t1627*t1648 + t1719*t1739 + t1846*t1856 + t1900*t1909 + t1962*t1969 + t1986*t1993 + t2023*t2048 + t2062*t2078 + t2106*t2118 + t2139*t2152 + t2190*t2200 + t2209*t2221 - 0.0216*(t2175*t2200 + t2157*t2221) - 1.193387*(t2157*t2200 - 1.*t2175*t2221) - 1.*t1327*t1365*t940 + t1770*t1827*t940 + 0.1305*(t1773*t1846 + t1770*t1813*t940) + var1[0];
  p_output1[1]=0. + t1327*t2280 + t1560*t2299 + t1648*t2313 + t1719*t2326 + t1827*t2337 + t1856*t2357 + 0.1305*(t1813*t2337 + t1773*t2357) + t1900*t2382 + t1962*t2390 + t1986*t2402 + t2023*t2417 + t2062*t2423 + t2106*t2434 + t2139*t2449 + t2190*t2460 + t2209*t2474 - 0.0216*(t2175*t2460 + t2157*t2474) - 1.193387*(t2157*t2460 - 1.*t2175*t2474) - 1.*t1451*t2275*t940 + var1[1];
  p_output1[2]=0. + t1327*t2513 + t1560*t2530 + t1648*t2540 + t1719*t2546 + t1827*t2556 + t1856*t2581 + 0.1305*(t1813*t2556 + t1773*t2581) + t1900*t2597 + t1962*t2616 + t1986*t2629 + t2023*t2641 + t2062*t2658 + t2106*t2672 + t2139*t2688 + t2190*t2694 + t2209*t2699 - 0.0216*(t2175*t2694 + t2157*t2699) - 1.193387*(t2157*t2694 - 1.*t2175*t2699) + t1451*t2268*t940 + var1[2];
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
