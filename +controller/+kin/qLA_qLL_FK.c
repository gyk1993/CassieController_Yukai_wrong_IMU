/*
 * Automatically Generated from Mathematica.
 * Tue 11 Jul 2017 19:12:54 GMT-04:00
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
  double t377;
  double t432;
  double t499;
  double t620;
  double t663;
  double t837;
  double t1654;
  double t1656;
  double t1711;
  double t1815;
  double t1818;
  double t2093;
  double t2213;
  double t2271;
  double t2285;
  double t2646;
  double t2690;
  double t2830;
  double t398;
  double t405;
  double t674;
  double t910;
  double t942;
  double t1300;
  double t1552;
  double t1617;
  double t2363;
  double t2431;
  double t2639;
  double t1876;
  double t2146;
  double t2154;
  double t3178;
  double t3184;
  double t3238;
  double t2932;
  t377 = Cos(var1[0]);
  t432 = Sin(var1[0]);
  t499 = Cos(var2[0]);
  t620 = -1.*t499;
  t663 = 1. + t620;
  t837 = Sin(var2[0]);
  t1654 = -1.*var2[0];
  t1656 = 0.226893 + t1654;
  t1711 = Cos(t1656);
  t1815 = -1.*t1711;
  t1818 = 1. + t1815;
  t2093 = Sin(t1656);
  t2213 = -1.*t499*t432;
  t2271 = -1.*t377*t837;
  t2285 = t2213 + t2271;
  t2646 = t377*t499;
  t2690 = -1.*t432*t837;
  t2830 = t2646 + t2690;
  t398 = -1.*t377;
  t405 = 1. + t398;
  t674 = -0.049*t663;
  t910 = -0.21*t837;
  t942 = 0. + t674 + t910;
  t1300 = -0.21*t663;
  t1552 = 0.049*t837;
  t1617 = 0. + t1300 + t1552;
  t2363 = 0.0184*t1818;
  t2431 = -0.7055*t2093;
  t2639 = 0. + t2363 + t2431;
  t1876 = -0.7055*t1818;
  t2146 = -0.0184*t2093;
  t2154 = 0. + t1876 + t2146;
  t3178 = t499*t432;
  t3184 = t377*t837;
  t3238 = t3178 + t3184;
  t2932 = t1711*t2830;
  p_output1[0]=Sqrt(Power(0.049 + t2154*t2285 + t2639*t2830 - 1.1135*(t1711*t2285 - 1.*t2093*t2830) - 0.0216*(t2093*t2285 + t2932) - 0.049*t405 - 0.09*t432 - 1.*t1617*t432 + t377*t942,2) + Power(0.09 + t2154*t2830 + t2639*t3238 - 0.0216*(t2093*t2830 + t1711*t3238) - 1.1135*(t2932 - 1.*t2093*t3238) + t1617*t377 - 0.09*t405 + 0.049*t432 + t432*t942,2));
}

static void output2(double *p_output2,const double *var1,const double *var2)
{
  double t430;
  double t2302;
  double t2922;
  double t2936;
  double t2939;
  double t2943;
  double t3172;
  double t3244;
  double t3290;
  double t3340;
  double t3344;
  double t3366;
  double t3434;
  double t3435;
  double t3439;
  double t3524;
  double t3550;
  double t3551;
  double t438;
  double t991;
  double t1634;
  double t2846;
  double t2940;
  double t2967;
  double t3019;
  double t3083;
  double t3086;
  double t3130;
  double t3150;
  double t3161;
  double t3357;
  double t3426;
  double t3432;
  double t3449;
  double t3458;
  double t3460;
  double t3513;
  double t3555;
  double t3556;
  double t3570;
  double t3601;
  double t3606;
  double t3609;
  double t3610;
  double t3611;
  double t3620;
  double t3630;
  double t3655;
  double t3695;
  double t3697;
  t430 = Cos(var1[0]);
  t2302 = Sin(var1[0]);
  t2922 = Cos(var2[0]);
  t2936 = -1.*t2922;
  t2939 = 1. + t2936;
  t2943 = Sin(var2[0]);
  t3172 = -1.*var2[0];
  t3244 = 0.226893 + t3172;
  t3290 = Cos(t3244);
  t3340 = -1.*t3290;
  t3344 = 1. + t3340;
  t3366 = Sin(t3244);
  t3434 = -1.*t2922*t2302;
  t3435 = -1.*t430*t2943;
  t3439 = t3434 + t3435;
  t3524 = t430*t2922;
  t3550 = -1.*t2302*t2943;
  t3551 = t3524 + t3550;
  t438 = -1.*t430;
  t991 = 1. + t438;
  t1634 = -0.049*t991;
  t2846 = -0.09*t2302;
  t2940 = -0.049*t2939;
  t2967 = -0.21*t2943;
  t3019 = 0. + t2940 + t2967;
  t3083 = t430*t3019;
  t3086 = -0.21*t2939;
  t3130 = 0.049*t2943;
  t3150 = 0. + t3086 + t3130;
  t3161 = -1.*t2302*t3150;
  t3357 = -0.7055*t3344;
  t3426 = -0.0184*t3366;
  t3432 = 0. + t3357 + t3426;
  t3449 = t3432*t3439;
  t3458 = 0.0184*t3344;
  t3460 = -0.7055*t3366;
  t3513 = 0. + t3458 + t3460;
  t3555 = t3513*t3551;
  t3556 = t3366*t3439;
  t3570 = t3290*t3551;
  t3601 = t3556 + t3570;
  t3606 = -0.0216*t3601;
  t3609 = t3290*t3439;
  t3610 = -1.*t3366*t3551;
  t3611 = t3609 + t3610;
  t3620 = -1.1135*t3611;
  t3630 = 0.049 + t1634 + t2846 + t3083 + t3161 + t3449 + t3555 + t3606 + t3620;
  t3655 = t2922*t2302;
  t3695 = t430*t2943;
  t3697 = t3655 + t3695;
  p_output2[0]=ArcSin(t3630/Sqrt(Power(t3630,2) + Power(0.09 + 0.049*t2302 + t2302*t3019 + t3432*t3551 + t3513*t3697 - 0.0216*(t3366*t3551 + t3290*t3697) - 1.1135*(t3570 - 1.*t3366*t3697) + t3150*t430 - 0.09*t991,2)));
}



void qLA_qLL_FK(double *p_output1, double *p_output2, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);
  output2(p_output2, var1, var2);

}
