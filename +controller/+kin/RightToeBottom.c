/*
 * Automatically Generated from Mathematica.
 * Wed 14 Jun 2017 10:54:49 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "RightToeBottom.h"

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
static void output1(double *p_output1,const double *var1)
{
  double t39;
  double t94;
  double t101;
  double t103;
  double t130;
  double t156;
  double t146;
  double t147;
  double t150;
  double t135;
  double t161;
  double t164;
  double t166;
  double t50;
  double t51;
  double t55;
  double t69;
  double t49;
  double t220;
  double t221;
  double t223;
  double t175;
  double t181;
  double t185;
  double t189;
  double t201;
  double t203;
  double t205;
  double t251;
  double t253;
  double t254;
  double t259;
  double t261;
  double t263;
  double t266;
  double t275;
  double t283;
  double t287;
  double t297;
  double t299;
  double t300;
  double t305;
  double t306;
  double t308;
  double t310;
  double t313;
  double t314;
  double t315;
  double t323;
  double t324;
  double t329;
  double t334;
  double t338;
  double t339;
  double t343;
  double t346;
  double t350;
  double t351;
  double t361;
  double t362;
  double t363;
  double t367;
  double t370;
  double t371;
  double t376;
  double t380;
  double t383;
  double t384;
  double t391;
  double t393;
  double t395;
  double t98;
  double t100;
  double t61;
  double t82;
  double t87;
  double t407;
  double t105;
  double t109;
  double t122;
  double t127;
  double t411;
  double t136;
  double t138;
  double t139;
  double t144;
  double t415;
  double t417;
  double t418;
  double t157;
  double t158;
  double t187;
  double t195;
  double t198;
  double t421;
  double t422;
  double t424;
  double t427;
  double t428;
  double t429;
  double t209;
  double t211;
  double t218;
  double t409;
  double t412;
  double t413;
  double t436;
  double t437;
  double t438;
  double t238;
  double t242;
  double t245;
  double t264;
  double t270;
  double t272;
  double t431;
  double t433;
  double t434;
  double t448;
  double t449;
  double t451;
  double t292;
  double t294;
  double t296;
  double t309;
  double t311;
  double t312;
  double t453;
  double t454;
  double t455;
  double t458;
  double t459;
  double t461;
  double t318;
  double t321;
  double t322;
  double t342;
  double t344;
  double t345;
  double t464;
  double t465;
  double t467;
  double t470;
  double t471;
  double t473;
  double t354;
  double t355;
  double t357;
  double t374;
  double t378;
  double t379;
  double t475;
  double t476;
  double t477;
  double t479;
  double t480;
  double t481;
  double t387;
  double t388;
  double t390;
  double t483;
  double t484;
  double t485;
  double t487;
  double t488;
  double t489;
  double t505;
  double t506;
  double t507;
  double t509;
  double t510;
  double t511;
  double t513;
  double t514;
  double t515;
  double t501;
  double t502;
  double t503;
  double t521;
  double t522;
  double t523;
  double t517;
  double t518;
  double t519;
  double t529;
  double t530;
  double t531;
  double t533;
  double t534;
  double t535;
  double t537;
  double t538;
  double t539;
  double t541;
  double t542;
  double t543;
  double t545;
  double t546;
  double t547;
  double t549;
  double t550;
  double t551;
  double t553;
  double t554;
  double t555;
  double t557;
  double t558;
  double t559;
  double t561;
  double t562;
  double t563;
  t39 = Cos(var1[4]);
  t94 = Sin(var1[14]);
  t101 = Sin(var1[4]);
  t103 = Cos(var1[14]);
  t130 = Sin(var1[5]);
  t156 = Sin(var1[15]);
  t146 = t94*t101;
  t147 = -1.*t103*t39*t130;
  t150 = t146 + t147;
  t135 = Cos(var1[15]);
  t161 = t103*t101;
  t164 = t39*t94*t130;
  t166 = t161 + t164;
  t50 = Cos(var1[16]);
  t51 = -1.*t50;
  t55 = 1. + t51;
  t69 = Sin(var1[16]);
  t49 = Cos(var1[5]);
  t220 = t135*t150;
  t221 = t156*t166;
  t223 = t220 + t221;
  t175 = Cos(var1[17]);
  t181 = -1.*t175;
  t185 = 1. + t181;
  t189 = Sin(var1[17]);
  t201 = -1.*t156*t150;
  t203 = t135*t166;
  t205 = t201 + t203;
  t251 = t50*t39*t49;
  t253 = -1.*t69*t223;
  t254 = t251 + t253;
  t259 = Cos(var1[18]);
  t261 = -1.*t259;
  t263 = 1. + t261;
  t266 = Sin(var1[18]);
  t275 = t189*t205;
  t283 = t175*t254;
  t287 = t275 + t283;
  t297 = t175*t205;
  t299 = -1.*t189*t254;
  t300 = t297 + t299;
  t305 = Cos(var1[19]);
  t306 = -1.*t305;
  t308 = 1. + t306;
  t310 = Sin(var1[19]);
  t313 = -1.*t266*t287;
  t314 = t259*t300;
  t315 = t313 + t314;
  t323 = t259*t287;
  t324 = t266*t300;
  t329 = t323 + t324;
  t334 = Cos(var1[20]);
  t338 = -1.*t334;
  t339 = 1. + t338;
  t343 = Sin(var1[20]);
  t346 = t310*t315;
  t350 = t305*t329;
  t351 = t346 + t350;
  t361 = t305*t315;
  t362 = -1.*t310*t329;
  t363 = t361 + t362;
  t367 = Cos(var1[21]);
  t370 = -1.*t367;
  t371 = 1. + t370;
  t376 = Sin(var1[21]);
  t380 = -1.*t343*t351;
  t383 = t334*t363;
  t384 = t380 + t383;
  t391 = t334*t351;
  t393 = t343*t363;
  t395 = t391 + t393;
  t98 = 0.135*t94;
  t100 = 0. + t98;
  t61 = -0.049*t55;
  t82 = 0.135*t69;
  t87 = 0. + t61 + t82;
  t407 = Sin(var1[3]);
  t105 = -1.*t103;
  t109 = 1. + t105;
  t122 = -0.135*t109;
  t127 = 0. + t122;
  t411 = Cos(var1[3]);
  t136 = -1.*t135;
  t138 = 1. + t136;
  t139 = -0.135*t138;
  t144 = 0. + t139;
  t415 = t411*t49;
  t417 = -1.*t407*t101*t130;
  t418 = t415 + t417;
  t157 = 0.135*t156;
  t158 = 0. + t157;
  t187 = -0.09*t185;
  t195 = 0.049*t189;
  t198 = 0. + t187 + t195;
  t421 = -1.*t39*t94*t407;
  t422 = t103*t418;
  t424 = t421 + t422;
  t427 = -1.*t103*t39*t407;
  t428 = -1.*t94*t418;
  t429 = t427 + t428;
  t209 = -0.135*t55;
  t211 = -0.049*t69;
  t218 = 0. + t209 + t211;
  t409 = t49*t407*t101;
  t412 = t411*t130;
  t413 = t409 + t412;
  t436 = t135*t424;
  t437 = t156*t429;
  t438 = t436 + t437;
  t238 = -0.049*t185;
  t242 = -0.09*t189;
  t245 = 0. + t238 + t242;
  t264 = -0.049*t263;
  t270 = -0.21*t266;
  t272 = 0. + t264 + t270;
  t431 = -1.*t156*t424;
  t433 = t135*t429;
  t434 = t431 + t433;
  t448 = t50*t413;
  t449 = -1.*t69*t438;
  t451 = t448 + t449;
  t292 = -0.21*t263;
  t294 = 0.049*t266;
  t296 = 0. + t292 + t294;
  t309 = -0.2707*t308;
  t311 = 0.0016*t310;
  t312 = 0. + t309 + t311;
  t453 = t189*t434;
  t454 = t175*t451;
  t455 = t453 + t454;
  t458 = t175*t434;
  t459 = -1.*t189*t451;
  t461 = t458 + t459;
  t318 = -0.0016*t308;
  t321 = -0.2707*t310;
  t322 = 0. + t318 + t321;
  t342 = 0.0184*t339;
  t344 = -0.7055*t343;
  t345 = 0. + t342 + t344;
  t464 = -1.*t266*t455;
  t465 = t259*t461;
  t467 = t464 + t465;
  t470 = t259*t455;
  t471 = t266*t461;
  t473 = t470 + t471;
  t354 = -0.7055*t339;
  t355 = -0.0184*t343;
  t357 = 0. + t354 + t355;
  t374 = -1.1135*t371;
  t378 = 0.0216*t376;
  t379 = 0. + t374 + t378;
  t475 = t310*t467;
  t476 = t305*t473;
  t477 = t475 + t476;
  t479 = t305*t467;
  t480 = -1.*t310*t473;
  t481 = t479 + t480;
  t387 = -0.0216*t371;
  t388 = -1.1135*t376;
  t390 = 0. + t387 + t388;
  t483 = -1.*t343*t477;
  t484 = t334*t481;
  t485 = t483 + t484;
  t487 = t334*t477;
  t488 = t343*t481;
  t489 = t487 + t488;
  t505 = t49*t407;
  t506 = t411*t101*t130;
  t507 = t505 + t506;
  t509 = t411*t39*t94;
  t510 = t103*t507;
  t511 = t509 + t510;
  t513 = t103*t411*t39;
  t514 = -1.*t94*t507;
  t515 = t513 + t514;
  t501 = -1.*t411*t49*t101;
  t502 = t407*t130;
  t503 = t501 + t502;
  t521 = t135*t511;
  t522 = t156*t515;
  t523 = t521 + t522;
  t517 = -1.*t156*t511;
  t518 = t135*t515;
  t519 = t517 + t518;
  t529 = t50*t503;
  t530 = -1.*t69*t523;
  t531 = t529 + t530;
  t533 = t189*t519;
  t534 = t175*t531;
  t535 = t533 + t534;
  t537 = t175*t519;
  t538 = -1.*t189*t531;
  t539 = t537 + t538;
  t541 = -1.*t266*t535;
  t542 = t259*t539;
  t543 = t541 + t542;
  t545 = t259*t535;
  t546 = t266*t539;
  t547 = t545 + t546;
  t549 = t310*t543;
  t550 = t305*t547;
  t551 = t549 + t550;
  t553 = t305*t543;
  t554 = -1.*t310*t547;
  t555 = t553 + t554;
  t557 = -1.*t343*t551;
  t558 = t334*t555;
  t559 = t557 + t558;
  t561 = t334*t551;
  t562 = t343*t555;
  t563 = t561 + t562;
  p_output1[0]=0. + t100*t101 + t144*t150 + t158*t166 + t198*t205 + t218*t223 + t245*t254 + t272*t287 + t296*t300 + t312*t315 + t322*t329 + t345*t351 + t357*t363 + t379*t384 - 1.*t127*t130*t39 + t390*t395 + 0.0306*(t376*t384 + t367*t395) - 1.1312*(t367*t384 - 1.*t376*t395) - 0.1305*(t223*t50 + t39*t49*t69) + t39*t49*t87 + var1[0];
  p_output1[1]=0. - 1.*t100*t39*t407 + t127*t418 + t144*t424 + t158*t429 + t198*t434 + t218*t438 + t245*t451 + t272*t455 + t296*t461 + t312*t467 + t322*t473 + t345*t477 + t357*t481 + t379*t485 + t390*t489 + 0.0306*(t376*t485 + t367*t489) - 1.1312*(t367*t485 - 1.*t376*t489) - 0.1305*(t438*t50 + t413*t69) + t413*t87 + var1[1];
  p_output1[2]=0. + t100*t39*t411 + t127*t507 + t144*t511 + t158*t515 + t198*t519 + t218*t523 + t245*t531 + t272*t535 + t296*t539 + t312*t543 + t322*t547 + t345*t551 + t357*t555 + t379*t559 + t390*t563 + 0.0306*(t376*t559 + t367*t563) - 1.1312*(t367*t559 - 1.*t376*t563) - 0.1305*(t50*t523 + t503*t69) + t503*t87 + var1[2];
}



void RightToeBottom(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
