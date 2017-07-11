/*
 * Automatically Generated from Mathematica.
 * Mon 10 Jul 2017 14:13:04 GMT-04:00
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
  double t1165;
  double t1900;
  double t1971;
  double t1993;
  double t2049;
  double t2122;
  double t2102;
  double t2106;
  double t2107;
  double t2061;
  double t2153;
  double t2198;
  double t2204;
  double t1560;
  double t1620;
  double t1645;
  double t1791;
  double t1453;
  double t2328;
  double t2329;
  double t2332;
  double t2209;
  double t2210;
  double t2223;
  double t2227;
  double t2255;
  double t2281;
  double t2283;
  double t2394;
  double t2402;
  double t2403;
  double t2417;
  double t2421;
  double t2422;
  double t2449;
  double t2473;
  double t2477;
  double t2479;
  double t2496;
  double t2497;
  double t2500;
  double t2507;
  double t2514;
  double t2520;
  double t2529;
  double t2540;
  double t2543;
  double t2546;
  double t2604;
  double t2607;
  double t2617;
  double t2632;
  double t2639;
  double t2641;
  double t2645;
  double t2678;
  double t2682;
  double t2689;
  double t2714;
  double t2715;
  double t2719;
  double t2725;
  double t2730;
  double t2734;
  double t2748;
  double t2764;
  double t2768;
  double t2770;
  double t2785;
  double t2786;
  double t2787;
  double t1912;
  double t1949;
  double t1707;
  double t1837;
  double t1859;
  double t2820;
  double t2011;
  double t2019;
  double t2034;
  double t2048;
  double t2825;
  double t2062;
  double t2073;
  double t2074;
  double t2086;
  double t2843;
  double t2846;
  double t2854;
  double t2128;
  double t2139;
  double t2224;
  double t2241;
  double t2254;
  double t2858;
  double t2863;
  double t2867;
  double t2874;
  double t2881;
  double t2885;
  double t2315;
  double t2319;
  double t2326;
  double t2824;
  double t2835;
  double t2836;
  double t2895;
  double t2898;
  double t2899;
  double t2385;
  double t2386;
  double t2387;
  double t2440;
  double t2450;
  double t2463;
  double t2889;
  double t2890;
  double t2892;
  double t2922;
  double t2925;
  double t2928;
  double t2484;
  double t2488;
  double t2492;
  double t2525;
  double t2534;
  double t2537;
  double t2931;
  double t2932;
  double t2935;
  double t2937;
  double t2938;
  double t2942;
  double t2573;
  double t2584;
  double t2591;
  double t2644;
  double t2652;
  double t2670;
  double t2945;
  double t2948;
  double t2951;
  double t2962;
  double t2964;
  double t2965;
  double t2697;
  double t2704;
  double t2713;
  double t2744;
  double t2758;
  double t2760;
  double t2972;
  double t2973;
  double t2976;
  double t2980;
  double t2986;
  double t2987;
  double t2774;
  double t2775;
  double t2778;
  double t2990;
  double t2991;
  double t2993;
  double t2998;
  double t3000;
  double t3003;
  double t3042;
  double t3045;
  double t3049;
  double t3055;
  double t3056;
  double t3057;
  double t3064;
  double t3065;
  double t3068;
  double t3034;
  double t3035;
  double t3038;
  double t3075;
  double t3079;
  double t3083;
  double t3071;
  double t3072;
  double t3073;
  double t3107;
  double t3108;
  double t3112;
  double t3114;
  double t3115;
  double t3116;
  double t3122;
  double t3123;
  double t3125;
  double t3132;
  double t3135;
  double t3137;
  double t3143;
  double t3145;
  double t3147;
  double t3152;
  double t3153;
  double t3155;
  double t3159;
  double t3160;
  double t3165;
  double t3171;
  double t3174;
  double t3178;
  double t3182;
  double t3183;
  double t3184;
  t1165 = Cos(var1[4]);
  t1900 = Sin(var1[14]);
  t1971 = Sin(var1[4]);
  t1993 = Cos(var1[14]);
  t2049 = Sin(var1[5]);
  t2122 = Sin(var1[15]);
  t2102 = t1900*t1971;
  t2106 = -1.*t1993*t1165*t2049;
  t2107 = t2102 + t2106;
  t2061 = Cos(var1[15]);
  t2153 = t1993*t1971;
  t2198 = t1165*t1900*t2049;
  t2204 = t2153 + t2198;
  t1560 = Cos(var1[16]);
  t1620 = -1.*t1560;
  t1645 = 1. + t1620;
  t1791 = Sin(var1[16]);
  t1453 = Cos(var1[5]);
  t2328 = t2061*t2107;
  t2329 = t2122*t2204;
  t2332 = t2328 + t2329;
  t2209 = Cos(var1[17]);
  t2210 = -1.*t2209;
  t2223 = 1. + t2210;
  t2227 = Sin(var1[17]);
  t2255 = -1.*t2122*t2107;
  t2281 = t2061*t2204;
  t2283 = t2255 + t2281;
  t2394 = t1560*t1165*t1453;
  t2402 = -1.*t1791*t2332;
  t2403 = t2394 + t2402;
  t2417 = Cos(var1[18]);
  t2421 = -1.*t2417;
  t2422 = 1. + t2421;
  t2449 = Sin(var1[18]);
  t2473 = t2227*t2283;
  t2477 = t2209*t2403;
  t2479 = t2473 + t2477;
  t2496 = t2209*t2283;
  t2497 = -1.*t2227*t2403;
  t2500 = t2496 + t2497;
  t2507 = Cos(var1[19]);
  t2514 = -1.*t2507;
  t2520 = 1. + t2514;
  t2529 = Sin(var1[19]);
  t2540 = -1.*t2449*t2479;
  t2543 = t2417*t2500;
  t2546 = t2540 + t2543;
  t2604 = t2417*t2479;
  t2607 = t2449*t2500;
  t2617 = t2604 + t2607;
  t2632 = Cos(var1[20]);
  t2639 = -1.*t2632;
  t2641 = 1. + t2639;
  t2645 = Sin(var1[20]);
  t2678 = t2529*t2546;
  t2682 = t2507*t2617;
  t2689 = t2678 + t2682;
  t2714 = t2507*t2546;
  t2715 = -1.*t2529*t2617;
  t2719 = t2714 + t2715;
  t2725 = Cos(var1[21]);
  t2730 = -1.*t2725;
  t2734 = 1. + t2730;
  t2748 = Sin(var1[21]);
  t2764 = -1.*t2645*t2689;
  t2768 = t2632*t2719;
  t2770 = t2764 + t2768;
  t2785 = t2632*t2689;
  t2786 = t2645*t2719;
  t2787 = t2785 + t2786;
  t1912 = 0.135*t1900;
  t1949 = 0. + t1912;
  t1707 = -0.049*t1645;
  t1837 = 0.135*t1791;
  t1859 = 0. + t1707 + t1837;
  t2820 = Sin(var1[3]);
  t2011 = -1.*t1993;
  t2019 = 1. + t2011;
  t2034 = -0.135*t2019;
  t2048 = 0. + t2034;
  t2825 = Cos(var1[3]);
  t2062 = -1.*t2061;
  t2073 = 1. + t2062;
  t2074 = -0.135*t2073;
  t2086 = 0. + t2074;
  t2843 = t2825*t1453;
  t2846 = -1.*t2820*t1971*t2049;
  t2854 = t2843 + t2846;
  t2128 = 0.135*t2122;
  t2139 = 0. + t2128;
  t2224 = -0.09*t2223;
  t2241 = 0.049*t2227;
  t2254 = 0. + t2224 + t2241;
  t2858 = -1.*t1165*t1900*t2820;
  t2863 = t1993*t2854;
  t2867 = t2858 + t2863;
  t2874 = -1.*t1993*t1165*t2820;
  t2881 = -1.*t1900*t2854;
  t2885 = t2874 + t2881;
  t2315 = -0.135*t1645;
  t2319 = -0.049*t1791;
  t2326 = 0. + t2315 + t2319;
  t2824 = t1453*t2820*t1971;
  t2835 = t2825*t2049;
  t2836 = t2824 + t2835;
  t2895 = t2061*t2867;
  t2898 = t2122*t2885;
  t2899 = t2895 + t2898;
  t2385 = -0.049*t2223;
  t2386 = -0.09*t2227;
  t2387 = 0. + t2385 + t2386;
  t2440 = -0.049*t2422;
  t2450 = -0.21*t2449;
  t2463 = 0. + t2440 + t2450;
  t2889 = -1.*t2122*t2867;
  t2890 = t2061*t2885;
  t2892 = t2889 + t2890;
  t2922 = t1560*t2836;
  t2925 = -1.*t1791*t2899;
  t2928 = t2922 + t2925;
  t2484 = -0.21*t2422;
  t2488 = 0.049*t2449;
  t2492 = 0. + t2484 + t2488;
  t2525 = -0.2707*t2520;
  t2534 = 0.0016*t2529;
  t2537 = 0. + t2525 + t2534;
  t2931 = t2227*t2892;
  t2932 = t2209*t2928;
  t2935 = t2931 + t2932;
  t2937 = t2209*t2892;
  t2938 = -1.*t2227*t2928;
  t2942 = t2937 + t2938;
  t2573 = -0.0016*t2520;
  t2584 = -0.2707*t2529;
  t2591 = 0. + t2573 + t2584;
  t2644 = 0.0184*t2641;
  t2652 = -0.7055*t2645;
  t2670 = 0. + t2644 + t2652;
  t2945 = -1.*t2449*t2935;
  t2948 = t2417*t2942;
  t2951 = t2945 + t2948;
  t2962 = t2417*t2935;
  t2964 = t2449*t2942;
  t2965 = t2962 + t2964;
  t2697 = -0.7055*t2641;
  t2704 = -0.0184*t2645;
  t2713 = 0. + t2697 + t2704;
  t2744 = -1.1135*t2734;
  t2758 = 0.0216*t2748;
  t2760 = 0. + t2744 + t2758;
  t2972 = t2529*t2951;
  t2973 = t2507*t2965;
  t2976 = t2972 + t2973;
  t2980 = t2507*t2951;
  t2986 = -1.*t2529*t2965;
  t2987 = t2980 + t2986;
  t2774 = -0.0216*t2734;
  t2775 = -1.1135*t2748;
  t2778 = 0. + t2774 + t2775;
  t2990 = -1.*t2645*t2976;
  t2991 = t2632*t2987;
  t2993 = t2990 + t2991;
  t2998 = t2632*t2976;
  t3000 = t2645*t2987;
  t3003 = t2998 + t3000;
  t3042 = t1453*t2820;
  t3045 = t2825*t1971*t2049;
  t3049 = t3042 + t3045;
  t3055 = t2825*t1165*t1900;
  t3056 = t1993*t3049;
  t3057 = t3055 + t3056;
  t3064 = t1993*t2825*t1165;
  t3065 = -1.*t1900*t3049;
  t3068 = t3064 + t3065;
  t3034 = -1.*t2825*t1453*t1971;
  t3035 = t2820*t2049;
  t3038 = t3034 + t3035;
  t3075 = t2061*t3057;
  t3079 = t2122*t3068;
  t3083 = t3075 + t3079;
  t3071 = -1.*t2122*t3057;
  t3072 = t2061*t3068;
  t3073 = t3071 + t3072;
  t3107 = t1560*t3038;
  t3108 = -1.*t1791*t3083;
  t3112 = t3107 + t3108;
  t3114 = t2227*t3073;
  t3115 = t2209*t3112;
  t3116 = t3114 + t3115;
  t3122 = t2209*t3073;
  t3123 = -1.*t2227*t3112;
  t3125 = t3122 + t3123;
  t3132 = -1.*t2449*t3116;
  t3135 = t2417*t3125;
  t3137 = t3132 + t3135;
  t3143 = t2417*t3116;
  t3145 = t2449*t3125;
  t3147 = t3143 + t3145;
  t3152 = t2529*t3137;
  t3153 = t2507*t3147;
  t3155 = t3152 + t3153;
  t3159 = t2507*t3137;
  t3160 = -1.*t2529*t3147;
  t3165 = t3159 + t3160;
  t3171 = -1.*t2645*t3155;
  t3174 = t2632*t3165;
  t3178 = t3171 + t3174;
  t3182 = t2632*t3155;
  t3183 = t2645*t3165;
  t3184 = t3182 + t3183;
  p_output1[0]=0. + t1165*t1453*t1859 + t1949*t1971 - 1.*t1165*t2048*t2049 + t2086*t2107 + t2139*t2204 + t2254*t2283 + t2326*t2332 - 0.1305*(t1165*t1453*t1791 + t1560*t2332) + t2387*t2403 + t2463*t2479 + t2492*t2500 + t2537*t2546 + t2591*t2617 + t2670*t2689 + t2713*t2719 + t2760*t2770 + t2778*t2787 - 0.0216*(t2748*t2770 + t2725*t2787) - 1.193387*(t2725*t2770 - 1.*t2748*t2787) + var1[0];
  p_output1[1]=0. - 1.*t1165*t1949*t2820 + t1859*t2836 + t2048*t2854 + t2086*t2867 + t2139*t2885 + t2254*t2892 + t2326*t2899 - 0.1305*(t1791*t2836 + t1560*t2899) + t2387*t2928 + t2463*t2935 + t2492*t2942 + t2537*t2951 + t2591*t2965 + t2670*t2976 + t2713*t2987 + t2760*t2993 + t2778*t3003 - 0.0216*(t2748*t2993 + t2725*t3003) - 1.193387*(t2725*t2993 - 1.*t2748*t3003) + var1[1];
  p_output1[2]=0. + t1165*t1949*t2825 + t1859*t3038 + t2048*t3049 + t2086*t3057 + t2139*t3068 + t2254*t3073 + t2326*t3083 - 0.1305*(t1791*t3038 + t1560*t3083) + t2387*t3112 + t2463*t3116 + t2492*t3125 + t2537*t3137 + t2591*t3147 + t2670*t3155 + t2713*t3165 + t2760*t3178 + t2778*t3184 - 0.0216*(t2748*t3178 + t2725*t3184) - 1.193387*(t2725*t3178 - 1.*t2748*t3184) + var1[2];
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
