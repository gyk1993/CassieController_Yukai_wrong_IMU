/*
 * Automatically Generated from Mathematica.
 * Mon 10 Jul 2017 14:13:08 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "qLA_qLL_FK.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE inline        /* use standard inline */
#endif

/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
INLINE double Power(double x, double y) { return pow(x, y); }
INLINE double Sqrt(double x) { return sqrt(x); }

INLINE double Abs(double x) { return fabs(x); }

INLINE double Exp(double x) { return exp(x); }
INLINE double Log(double x) { return log(x); }

INLINE double Sin(double x) { return sin(x); }
INLINE double Cos(double x) { return cos(x); }
INLINE double Tan(double x) { return tan(x); }

INLINE double ArcSin(double x) { return asin(x); }
INLINE double ArcCos(double x) { return acos(x); }
//INLINE double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
INLINE double ArcTan(double x, double y) { return atan2(y,x); }

INLINE double Sinh(double x) { return sinh(x); }
INLINE double Cosh(double x) { return cosh(x); }
INLINE double Tanh(double x) { return tanh(x); }

#define E 2.71828182845904523536029
#define Pi 3.14159265358979323846264
#define Degree 0.01745329251994329576924

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t674;
  double t986;
  double t1092;
  double t1200;
  double t1284;
  double t1344;
  double t1789;
  double t1904;
  double t1924;
  double t2130;
  double t2154;
  double t2356;
  double t2601;
  double t2610;
  double t2756;
  double t2930;
  double t2932;
  double t2936;
  double t691;
  double t695;
  double t1293;
  double t1355;
  double t1367;
  double t1436;
  double t1740;
  double t1764;
  double t2804;
  double t2812;
  double t2927;
  double t2166;
  double t2428;
  double t2447;
  double t3398;
  double t3438;
  double t3471;
  double t2960;
  t674 = Cos(var1[0]);
  t986 = Sin(var1[0]);
  t1092 = Cos(var2[0]);
  t1200 = -1.*t1092;
  t1284 = 1. + t1200;
  t1344 = Sin(var2[0]);
  t1789 = -1.*var2[0];
  t1904 = 0.226893 + t1789;
  t1924 = Cos(t1904);
  t2130 = -1.*t1924;
  t2154 = 1. + t2130;
  t2356 = Sin(t1904);
  t2601 = -1.*t1092*t986;
  t2610 = -1.*t674*t1344;
  t2756 = t2601 + t2610;
  t2930 = t674*t1092;
  t2932 = -1.*t986*t1344;
  t2936 = t2930 + t2932;
  t691 = -1.*t674;
  t695 = 1. + t691;
  t1293 = -0.049*t1284;
  t1355 = -0.21*t1344;
  t1367 = 0. + t1293 + t1355;
  t1436 = -0.21*t1284;
  t1740 = 0.049*t1344;
  t1764 = 0. + t1436 + t1740;
  t2804 = 0.0184*t2154;
  t2812 = -0.7055*t2356;
  t2927 = 0. + t2804 + t2812;
  t2166 = -0.7055*t2154;
  t2428 = -0.0184*t2356;
  t2447 = 0. + t2166 + t2428;
  t3398 = t1092*t986;
  t3438 = t674*t1344;
  t3471 = t3398 + t3438;
  t2960 = t1924*t2936;
  p_output1[0]=Sqrt(Power(0.09 + t2447*t2936 + t2927*t3471 - 0.0216*(t2356*t2936 + t1924*t3471) - 1.1135*(t2960 - 1.*t2356*t3471) + t1764*t674 - 0.09*t695 + 0.049*t986 + t1367*t986,2) + Power(0.049 + t2447*t2756 + t2927*t2936 - 1.1135*(t1924*t2756 - 1.*t2356*t2936) - 0.0216*(t2356*t2756 + t2960) + t1367*t674 - 0.049*t695 - 0.09*t986 - 1.*t1764*t986,2));
}

static void output2(double *p_output2,const double *var1,const double *var2)
{
  double t824;
  double t2762;
  double t2956;
  double t2962;
  double t2985;
  double t3113;
  double t3397;
  double t3491;
  double t3492;
  double t3495;
  double t3502;
  double t3504;
  double t3554;
  double t3627;
  double t3640;
  double t3682;
  double t3683;
  double t3685;
  double t1058;
  double t1368;
  double t1778;
  double t2948;
  double t3004;
  double t3146;
  double t3190;
  double t3191;
  double t3192;
  double t3231;
  double t3388;
  double t3396;
  double t3503;
  double t3540;
  double t3545;
  double t3641;
  double t3642;
  double t3643;
  double t3676;
  double t3688;
  double t3690;
  double t3693;
  double t3719;
  double t3723;
  double t3724;
  double t3725;
  double t3726;
  double t3741;
  double t3746;
  double t3813;
  double t3816;
  double t3831;
  t824 = Cos(var1[0]);
  t2762 = Sin(var1[0]);
  t2956 = Cos(var2[0]);
  t2962 = -1.*t2956;
  t2985 = 1. + t2962;
  t3113 = Sin(var2[0]);
  t3397 = -1.*var2[0];
  t3491 = 0.226893 + t3397;
  t3492 = Cos(t3491);
  t3495 = -1.*t3492;
  t3502 = 1. + t3495;
  t3504 = Sin(t3491);
  t3554 = -1.*t2956*t2762;
  t3627 = -1.*t824*t3113;
  t3640 = t3554 + t3627;
  t3682 = t824*t2956;
  t3683 = -1.*t2762*t3113;
  t3685 = t3682 + t3683;
  t1058 = -1.*t824;
  t1368 = 1. + t1058;
  t1778 = -0.049*t1368;
  t2948 = -0.09*t2762;
  t3004 = -0.049*t2985;
  t3146 = -0.21*t3113;
  t3190 = 0. + t3004 + t3146;
  t3191 = t824*t3190;
  t3192 = -0.21*t2985;
  t3231 = 0.049*t3113;
  t3388 = 0. + t3192 + t3231;
  t3396 = -1.*t2762*t3388;
  t3503 = -0.7055*t3502;
  t3540 = -0.0184*t3504;
  t3545 = 0. + t3503 + t3540;
  t3641 = t3545*t3640;
  t3642 = 0.0184*t3502;
  t3643 = -0.7055*t3504;
  t3676 = 0. + t3642 + t3643;
  t3688 = t3676*t3685;
  t3690 = t3504*t3640;
  t3693 = t3492*t3685;
  t3719 = t3690 + t3693;
  t3723 = -0.0216*t3719;
  t3724 = t3492*t3640;
  t3725 = -1.*t3504*t3685;
  t3726 = t3724 + t3725;
  t3741 = -1.1135*t3726;
  t3746 = 0.049 + t1778 + t2948 + t3191 + t3396 + t3641 + t3688 + t3723 + t3741;
  t3813 = t2956*t2762;
  t3816 = t824*t3113;
  t3831 = t3813 + t3816;
  p_output2[0]=ArcSin(t3746/Sqrt(Power(t3746,2) + Power(0.09 - 0.09*t1368 + 0.049*t2762 + t2762*t3190 + t3545*t3685 + t3676*t3831 - 0.0216*(t3504*t3685 + t3492*t3831) - 1.1135*(t3693 - 1.*t3504*t3831) + t3388*t824,2)));
}



void qLA_qLL_FK(double *p_output1, double *p_output2, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);
  output2(p_output2, var1, var2);

}
