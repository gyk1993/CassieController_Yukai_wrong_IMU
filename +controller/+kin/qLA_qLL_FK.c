/*
 * Automatically Generated from Mathematica.
 * Fri 23 Jun 2017 12:39:38 GMT-04:00
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
  double t190;
  double t233;
  double t252;
  double t261;
  double t272;
  double t292;
  double t344;
  double t345;
  double t352;
  double t363;
  double t366;
  double t385;
  double t397;
  double t398;
  double t400;
  double t425;
  double t428;
  double t429;
  double t213;
  double t220;
  double t277;
  double t295;
  double t300;
  double t321;
  double t330;
  double t334;
  double t408;
  double t412;
  double t422;
  double t368;
  double t387;
  double t390;
  double t465;
  double t470;
  double t475;
  double t435;
  t190 = Cos(var1[0]);
  t233 = Sin(var1[0]);
  t252 = Cos(var2[0]);
  t261 = -1.*t252;
  t272 = 1. + t261;
  t292 = Sin(var2[0]);
  t344 = -1.*var2[0];
  t345 = 0.226893 + t344;
  t352 = Cos(t345);
  t363 = -1.*t352;
  t366 = 1. + t363;
  t385 = Sin(t345);
  t397 = -1.*t252*t233;
  t398 = -1.*t190*t292;
  t400 = t397 + t398;
  t425 = t190*t252;
  t428 = -1.*t233*t292;
  t429 = t425 + t428;
  t213 = -1.*t190;
  t220 = 1. + t213;
  t277 = -0.049*t272;
  t295 = -0.21*t292;
  t300 = 0. + t277 + t295;
  t321 = -0.21*t272;
  t330 = 0.049*t292;
  t334 = 0. + t321 + t330;
  t408 = 0.0184*t366;
  t412 = -0.7055*t385;
  t422 = 0. + t408 + t412;
  t368 = -0.7055*t366;
  t387 = -0.0184*t385;
  t390 = 0. + t368 + t387;
  t465 = t252*t233;
  t470 = t190*t292;
  t475 = t465 + t470;
  t435 = t352*t429;
  p_output1[0]=Sqrt(Power(0.049 - 0.049*t220 - 0.09*t233 + t190*t300 - 1.*t233*t334 + t390*t400 + t422*t429 - 1.1135*(t352*t400 - 1.*t385*t429) - 0.0216*(t385*t400 + t435),2) + Power(0.09 - 0.09*t220 + 0.049*t233 + t233*t300 + t190*t334 + t390*t429 + t422*t475 - 0.0216*(t385*t429 + t352*t475) - 1.1135*(t435 - 1.*t385*t475),2));
}

static void output2(double *p_output2,const double *var1,const double *var2)
{
  double t227;
  double t401;
  double t434;
  double t436;
  double t438;
  double t442;
  double t461;
  double t480;
  double t482;
  double t487;
  double t488;
  double t496;
  double t499;
  double t500;
  double t506;
  double t522;
  double t525;
  double t527;
  double t246;
  double t315;
  double t340;
  double t430;
  double t441;
  double t444;
  double t446;
  double t447;
  double t450;
  double t452;
  double t455;
  double t457;
  double t493;
  double t497;
  double t498;
  double t509;
  double t510;
  double t515;
  double t518;
  double t528;
  double t529;
  double t531;
  double t532;
  double t533;
  double t535;
  double t537;
  double t541;
  double t543;
  double t548;
  double t558;
  double t559;
  double t560;
  t227 = Cos(var1[0]);
  t401 = Sin(var1[0]);
  t434 = Cos(var2[0]);
  t436 = -1.*t434;
  t438 = 1. + t436;
  t442 = Sin(var2[0]);
  t461 = -1.*var2[0];
  t480 = 0.226893 + t461;
  t482 = Cos(t480);
  t487 = -1.*t482;
  t488 = 1. + t487;
  t496 = Sin(t480);
  t499 = -1.*t434*t401;
  t500 = -1.*t227*t442;
  t506 = t499 + t500;
  t522 = t227*t434;
  t525 = -1.*t401*t442;
  t527 = t522 + t525;
  t246 = -1.*t227;
  t315 = 1. + t246;
  t340 = -0.049*t315;
  t430 = -0.09*t401;
  t441 = -0.049*t438;
  t444 = -0.21*t442;
  t446 = 0. + t441 + t444;
  t447 = t227*t446;
  t450 = -0.21*t438;
  t452 = 0.049*t442;
  t455 = 0. + t450 + t452;
  t457 = -1.*t401*t455;
  t493 = -0.7055*t488;
  t497 = -0.0184*t496;
  t498 = 0. + t493 + t497;
  t509 = t498*t506;
  t510 = 0.0184*t488;
  t515 = -0.7055*t496;
  t518 = 0. + t510 + t515;
  t528 = t518*t527;
  t529 = t496*t506;
  t531 = t482*t527;
  t532 = t529 + t531;
  t533 = -0.0216*t532;
  t535 = t482*t506;
  t537 = -1.*t496*t527;
  t541 = t535 + t537;
  t543 = -1.1135*t541;
  t548 = 0.049 + t340 + t430 + t447 + t457 + t509 + t528 + t533 + t543;
  t558 = t434*t401;
  t559 = t227*t442;
  t560 = t558 + t559;
  p_output2[0]=ArcSin(t548/Sqrt(Power(t548,2) + Power(0.09 - 0.09*t315 + 0.049*t401 + t401*t446 + t227*t455 + t498*t527 + t518*t560 - 0.0216*(t496*t527 + t482*t560) - 1.1135*(t531 - 1.*t496*t560),2)));
}



void qLA_qLL_FK(double *p_output1, double *p_output2, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);
  output2(p_output2, var1, var2);

}
