/*
 * Automatically Generated from Mathematica.
 * Tue 11 Jul 2017 19:12:50 GMT-04:00
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
  double t80;
  double t1820;
  double t1871;
  double t1897;
  double t1946;
  double t2023;
  double t2004;
  double t2013;
  double t2014;
  double t1956;
  double t2048;
  double t2053;
  double t2058;
  double t1439;
  double t1536;
  double t1562;
  double t1649;
  double t1385;
  double t2209;
  double t2216;
  double t2225;
  double t2111;
  double t2117;
  double t2118;
  double t2127;
  double t2141;
  double t2150;
  double t2153;
  double t2283;
  double t2287;
  double t2295;
  double t2301;
  double t2303;
  double t2309;
  double t2316;
  double t2352;
  double t2359;
  double t2366;
  double t2383;
  double t2387;
  double t2391;
  double t2399;
  double t2400;
  double t2404;
  double t2411;
  double t2420;
  double t2423;
  double t2426;
  double t2469;
  double t2487;
  double t2491;
  double t2501;
  double t2507;
  double t2510;
  double t2526;
  double t2542;
  double t2543;
  double t2547;
  double t2593;
  double t2595;
  double t2596;
  double t2600;
  double t2603;
  double t2607;
  double t2619;
  double t2633;
  double t2634;
  double t2638;
  double t2649;
  double t2652;
  double t2662;
  double t1823;
  double t1842;
  double t1591;
  double t1756;
  double t1784;
  double t2702;
  double t1905;
  double t1918;
  double t1928;
  double t1941;
  double t2713;
  double t1963;
  double t1965;
  double t1970;
  double t1989;
  double t2727;
  double t2730;
  double t2731;
  double t2032;
  double t2035;
  double t2120;
  double t2131;
  double t2139;
  double t2736;
  double t2739;
  double t2740;
  double t2755;
  double t2761;
  double t2764;
  double t2181;
  double t2185;
  double t2207;
  double t2709;
  double t2714;
  double t2717;
  double t2780;
  double t2784;
  double t2785;
  double t2263;
  double t2270;
  double t2277;
  double t2313;
  double t2337;
  double t2347;
  double t2772;
  double t2773;
  double t2776;
  double t2808;
  double t2813;
  double t2814;
  double t2374;
  double t2377;
  double t2378;
  double t2405;
  double t2416;
  double t2419;
  double t2821;
  double t2824;
  double t2826;
  double t2830;
  double t2831;
  double t2832;
  double t2444;
  double t2455;
  double t2462;
  double t2522;
  double t2529;
  double t2534;
  double t2836;
  double t2837;
  double t2840;
  double t2845;
  double t2846;
  double t2852;
  double t2555;
  double t2580;
  double t2589;
  double t2608;
  double t2624;
  double t2628;
  double t2856;
  double t2857;
  double t2862;
  double t2869;
  double t2870;
  double t2871;
  double t2642;
  double t2643;
  double t2646;
  double t2879;
  double t2880;
  double t2882;
  double t2884;
  double t2888;
  double t2892;
  double t2939;
  double t2940;
  double t2942;
  double t2945;
  double t2948;
  double t2951;
  double t2955;
  double t2956;
  double t2958;
  double t2930;
  double t2933;
  double t2935;
  double t2971;
  double t2972;
  double t2976;
  double t2963;
  double t2964;
  double t2967;
  double t2989;
  double t2991;
  double t2992;
  double t2997;
  double t2998;
  double t3001;
  double t3005;
  double t3009;
  double t3010;
  double t3015;
  double t3018;
  double t3020;
  double t3024;
  double t3026;
  double t3030;
  double t3033;
  double t3034;
  double t3035;
  double t3040;
  double t3044;
  double t3046;
  double t3053;
  double t3054;
  double t3056;
  double t3060;
  double t3063;
  double t3065;
  t80 = Cos(var1[4]);
  t1820 = Sin(var1[14]);
  t1871 = Sin(var1[4]);
  t1897 = Cos(var1[14]);
  t1946 = Sin(var1[5]);
  t2023 = Sin(var1[15]);
  t2004 = t1820*t1871;
  t2013 = -1.*t1897*t80*t1946;
  t2014 = t2004 + t2013;
  t1956 = Cos(var1[15]);
  t2048 = t1897*t1871;
  t2053 = t80*t1820*t1946;
  t2058 = t2048 + t2053;
  t1439 = Cos(var1[16]);
  t1536 = -1.*t1439;
  t1562 = 1. + t1536;
  t1649 = Sin(var1[16]);
  t1385 = Cos(var1[5]);
  t2209 = t1956*t2014;
  t2216 = t2023*t2058;
  t2225 = t2209 + t2216;
  t2111 = Cos(var1[17]);
  t2117 = -1.*t2111;
  t2118 = 1. + t2117;
  t2127 = Sin(var1[17]);
  t2141 = -1.*t2023*t2014;
  t2150 = t1956*t2058;
  t2153 = t2141 + t2150;
  t2283 = t1439*t80*t1385;
  t2287 = t1649*t2225;
  t2295 = t2283 + t2287;
  t2301 = Cos(var1[18]);
  t2303 = -1.*t2301;
  t2309 = 1. + t2303;
  t2316 = Sin(var1[18]);
  t2352 = t2127*t2153;
  t2359 = t2111*t2295;
  t2366 = t2352 + t2359;
  t2383 = t2111*t2153;
  t2387 = -1.*t2127*t2295;
  t2391 = t2383 + t2387;
  t2399 = Cos(var1[19]);
  t2400 = -1.*t2399;
  t2404 = 1. + t2400;
  t2411 = Sin(var1[19]);
  t2420 = -1.*t2316*t2366;
  t2423 = t2301*t2391;
  t2426 = t2420 + t2423;
  t2469 = t2301*t2366;
  t2487 = t2316*t2391;
  t2491 = t2469 + t2487;
  t2501 = Cos(var1[20]);
  t2507 = -1.*t2501;
  t2510 = 1. + t2507;
  t2526 = Sin(var1[20]);
  t2542 = t2411*t2426;
  t2543 = t2399*t2491;
  t2547 = t2542 + t2543;
  t2593 = t2399*t2426;
  t2595 = -1.*t2411*t2491;
  t2596 = t2593 + t2595;
  t2600 = Cos(var1[21]);
  t2603 = -1.*t2600;
  t2607 = 1. + t2603;
  t2619 = Sin(var1[21]);
  t2633 = -1.*t2526*t2547;
  t2634 = t2501*t2596;
  t2638 = t2633 + t2634;
  t2649 = t2501*t2547;
  t2652 = t2526*t2596;
  t2662 = t2649 + t2652;
  t1823 = 0.135*t1820;
  t1842 = 0. + t1823;
  t1591 = -0.049*t1562;
  t1756 = -0.135*t1649;
  t1784 = 0. + t1591 + t1756;
  t2702 = Sin(var1[3]);
  t1905 = -1.*t1897;
  t1918 = 1. + t1905;
  t1928 = -0.135*t1918;
  t1941 = 0. + t1928;
  t2713 = Cos(var1[3]);
  t1963 = -1.*t1956;
  t1965 = 1. + t1963;
  t1970 = -0.135*t1965;
  t1989 = 0. + t1970;
  t2727 = t2713*t1385;
  t2730 = -1.*t2702*t1871*t1946;
  t2731 = t2727 + t2730;
  t2032 = 0.135*t2023;
  t2035 = 0. + t2032;
  t2120 = -0.09*t2118;
  t2131 = 0.049*t2127;
  t2139 = 0. + t2120 + t2131;
  t2736 = -1.*t80*t1820*t2702;
  t2739 = t1897*t2731;
  t2740 = t2736 + t2739;
  t2755 = -1.*t1897*t80*t2702;
  t2761 = -1.*t1820*t2731;
  t2764 = t2755 + t2761;
  t2181 = -0.135*t1562;
  t2185 = 0.049*t1649;
  t2207 = 0. + t2181 + t2185;
  t2709 = t1385*t2702*t1871;
  t2714 = t2713*t1946;
  t2717 = t2709 + t2714;
  t2780 = t1956*t2740;
  t2784 = t2023*t2764;
  t2785 = t2780 + t2784;
  t2263 = -0.049*t2118;
  t2270 = -0.09*t2127;
  t2277 = 0. + t2263 + t2270;
  t2313 = -0.049*t2309;
  t2337 = -0.21*t2316;
  t2347 = 0. + t2313 + t2337;
  t2772 = -1.*t2023*t2740;
  t2773 = t1956*t2764;
  t2776 = t2772 + t2773;
  t2808 = t1439*t2717;
  t2813 = t1649*t2785;
  t2814 = t2808 + t2813;
  t2374 = -0.21*t2309;
  t2377 = 0.049*t2316;
  t2378 = 0. + t2374 + t2377;
  t2405 = -0.2707*t2404;
  t2416 = 0.0016*t2411;
  t2419 = 0. + t2405 + t2416;
  t2821 = t2127*t2776;
  t2824 = t2111*t2814;
  t2826 = t2821 + t2824;
  t2830 = t2111*t2776;
  t2831 = -1.*t2127*t2814;
  t2832 = t2830 + t2831;
  t2444 = -0.0016*t2404;
  t2455 = -0.2707*t2411;
  t2462 = 0. + t2444 + t2455;
  t2522 = 0.0184*t2510;
  t2529 = -0.7055*t2526;
  t2534 = 0. + t2522 + t2529;
  t2836 = -1.*t2316*t2826;
  t2837 = t2301*t2832;
  t2840 = t2836 + t2837;
  t2845 = t2301*t2826;
  t2846 = t2316*t2832;
  t2852 = t2845 + t2846;
  t2555 = -0.7055*t2510;
  t2580 = -0.0184*t2526;
  t2589 = 0. + t2555 + t2580;
  t2608 = -1.1135*t2607;
  t2624 = 0.0216*t2619;
  t2628 = 0. + t2608 + t2624;
  t2856 = t2411*t2840;
  t2857 = t2399*t2852;
  t2862 = t2856 + t2857;
  t2869 = t2399*t2840;
  t2870 = -1.*t2411*t2852;
  t2871 = t2869 + t2870;
  t2642 = -0.0216*t2607;
  t2643 = -1.1135*t2619;
  t2646 = 0. + t2642 + t2643;
  t2879 = -1.*t2526*t2862;
  t2880 = t2501*t2871;
  t2882 = t2879 + t2880;
  t2884 = t2501*t2862;
  t2888 = t2526*t2871;
  t2892 = t2884 + t2888;
  t2939 = t1385*t2702;
  t2940 = t2713*t1871*t1946;
  t2942 = t2939 + t2940;
  t2945 = t2713*t80*t1820;
  t2948 = t1897*t2942;
  t2951 = t2945 + t2948;
  t2955 = t1897*t2713*t80;
  t2956 = -1.*t1820*t2942;
  t2958 = t2955 + t2956;
  t2930 = -1.*t2713*t1385*t1871;
  t2933 = t2702*t1946;
  t2935 = t2930 + t2933;
  t2971 = t1956*t2951;
  t2972 = t2023*t2958;
  t2976 = t2971 + t2972;
  t2963 = -1.*t2023*t2951;
  t2964 = t1956*t2958;
  t2967 = t2963 + t2964;
  t2989 = t1439*t2935;
  t2991 = t1649*t2976;
  t2992 = t2989 + t2991;
  t2997 = t2127*t2967;
  t2998 = t2111*t2992;
  t3001 = t2997 + t2998;
  t3005 = t2111*t2967;
  t3009 = -1.*t2127*t2992;
  t3010 = t3005 + t3009;
  t3015 = -1.*t2316*t3001;
  t3018 = t2301*t3010;
  t3020 = t3015 + t3018;
  t3024 = t2301*t3001;
  t3026 = t2316*t3010;
  t3030 = t3024 + t3026;
  t3033 = t2411*t3020;
  t3034 = t2399*t3030;
  t3035 = t3033 + t3034;
  t3040 = t2399*t3020;
  t3044 = -1.*t2411*t3030;
  t3046 = t3040 + t3044;
  t3053 = -1.*t2526*t3035;
  t3054 = t2501*t3046;
  t3056 = t3053 + t3054;
  t3060 = t2501*t3035;
  t3063 = t2526*t3046;
  t3065 = t3060 + t3063;
  p_output1[0]=0. + t1842*t1871 + t1989*t2014 + t2035*t2058 + t2139*t2153 + t2207*t2225 + t2277*t2295 + t2347*t2366 + t2378*t2391 + t2419*t2426 + t2462*t2491 + t2534*t2547 + t2589*t2596 + t2628*t2638 + t2646*t2662 - 0.0216*(t2619*t2638 + t2600*t2662) - 1.193387*(t2600*t2638 - 1.*t2619*t2662) + t1385*t1784*t80 - 1.*t1941*t1946*t80 - 0.1305*(t1439*t2225 - 1.*t1385*t1649*t80) + var1[0];
  p_output1[1]=0. + t1784*t2717 + t1941*t2731 + t1989*t2740 + t2035*t2764 + t2139*t2776 + t2207*t2785 - 0.1305*(-1.*t1649*t2717 + t1439*t2785) + t2277*t2814 + t2347*t2826 + t2378*t2832 + t2419*t2840 + t2462*t2852 + t2534*t2862 + t2589*t2871 + t2628*t2882 + t2646*t2892 - 0.0216*(t2619*t2882 + t2600*t2892) - 1.193387*(t2600*t2882 - 1.*t2619*t2892) - 1.*t1842*t2702*t80 + var1[1];
  p_output1[2]=0. + t1784*t2935 + t1941*t2942 + t1989*t2951 + t2035*t2958 + t2139*t2967 + t2207*t2976 - 0.1305*(-1.*t1649*t2935 + t1439*t2976) + t2277*t2992 + t2347*t3001 + t2378*t3010 + t2419*t3020 + t2462*t3030 + t2534*t3035 + t2589*t3046 + t2628*t3056 + t2646*t3065 - 0.0216*(t2619*t3056 + t2600*t3065) - 1.193387*(t2600*t3056 - 1.*t2619*t3065) + t1842*t2713*t80 + var1[2];
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

#include "RightHeel.hh"

namespace SymFunction
{

void RightHeel_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
