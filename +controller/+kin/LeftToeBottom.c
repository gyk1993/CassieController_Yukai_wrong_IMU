/*
 * Automatically Generated from Mathematica.
 * Wed 14 Jun 2017 10:54:48 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "LeftToeBottom.h"

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
  double t7;
  double t10;
  double t22;
  double t25;
  double t26;
  double t31;
  double t50;
  double t51;
  double t52;
  double t41;
  double t42;
  double t47;
  double t53;
  double t76;
  double t77;
  double t78;
  double t81;
  double t86;
  double t87;
  double t91;
  double t75;
  double t58;
  double t59;
  double t60;
  double t62;
  double t65;
  double t66;
  double t69;
  double t109;
  double t111;
  double t112;
  double t114;
  double t116;
  double t117;
  double t119;
  double t123;
  double t127;
  double t129;
  double t136;
  double t137;
  double t138;
  double t141;
  double t142;
  double t143;
  double t145;
  double t148;
  double t149;
  double t150;
  double t161;
  double t164;
  double t165;
  double t168;
  double t169;
  double t170;
  double t172;
  double t175;
  double t177;
  double t178;
  double t185;
  double t186;
  double t187;
  double t190;
  double t192;
  double t193;
  double t196;
  double t199;
  double t201;
  double t202;
  double t209;
  double t211;
  double t213;
  double t13;
  double t15;
  double t19;
  double t20;
  double t227;
  double t27;
  double t29;
  double t35;
  double t37;
  double t38;
  double t39;
  double t225;
  double t226;
  double t228;
  double t230;
  double t55;
  double t56;
  double t61;
  double t63;
  double t64;
  double t239;
  double t240;
  double t242;
  double t233;
  double t235;
  double t236;
  double t80;
  double t82;
  double t83;
  double t93;
  double t94;
  double t96;
  double t254;
  double t255;
  double t256;
  double t249;
  double t251;
  double t252;
  double t102;
  double t103;
  double t105;
  double t118;
  double t120;
  double t122;
  double t245;
  double t246;
  double t247;
  double t266;
  double t267;
  double t269;
  double t132;
  double t134;
  double t135;
  double t144;
  double t146;
  double t147;
  double t271;
  double t272;
  double t273;
  double t276;
  double t277;
  double t279;
  double t156;
  double t157;
  double t158;
  double t171;
  double t173;
  double t174;
  double t282;
  double t283;
  double t285;
  double t288;
  double t289;
  double t291;
  double t180;
  double t181;
  double t182;
  double t195;
  double t197;
  double t198;
  double t293;
  double t294;
  double t295;
  double t297;
  double t298;
  double t299;
  double t205;
  double t206;
  double t208;
  double t301;
  double t302;
  double t303;
  double t305;
  double t306;
  double t307;
  double t318;
  double t319;
  double t320;
  double t327;
  double t328;
  double t329;
  double t323;
  double t324;
  double t325;
  double t339;
  double t340;
  double t341;
  double t335;
  double t336;
  double t337;
  double t331;
  double t332;
  double t333;
  double t347;
  double t348;
  double t349;
  double t351;
  double t352;
  double t353;
  double t355;
  double t356;
  double t357;
  double t359;
  double t360;
  double t361;
  double t363;
  double t364;
  double t365;
  double t367;
  double t368;
  double t369;
  double t371;
  double t372;
  double t373;
  double t375;
  double t376;
  double t377;
  double t379;
  double t380;
  double t381;
  t7 = Cos(var1[4]);
  t10 = Cos(var1[6]);
  t22 = Sin(var1[5]);
  t25 = Sin(var1[4]);
  t26 = Sin(var1[6]);
  t31 = Cos(var1[7]);
  t50 = t10*t25;
  t51 = t7*t22*t26;
  t52 = t50 + t51;
  t41 = -1.*t7*t10*t22;
  t42 = t25*t26;
  t47 = t41 + t42;
  t53 = Sin(var1[7]);
  t76 = Cos(var1[8]);
  t77 = -1.*t76;
  t78 = 1. + t77;
  t81 = Sin(var1[8]);
  t86 = t31*t47;
  t87 = t52*t53;
  t91 = t86 + t87;
  t75 = Cos(var1[5]);
  t58 = Cos(var1[9]);
  t59 = -1.*t58;
  t60 = 1. + t59;
  t62 = Sin(var1[9]);
  t65 = t31*t52;
  t66 = -1.*t47*t53;
  t69 = t65 + t66;
  t109 = t7*t75*t76;
  t111 = -1.*t91*t81;
  t112 = t109 + t111;
  t114 = Cos(var1[10]);
  t116 = -1.*t114;
  t117 = 1. + t116;
  t119 = Sin(var1[10]);
  t123 = t62*t69;
  t127 = t58*t112;
  t129 = t123 + t127;
  t136 = t58*t69;
  t137 = -1.*t62*t112;
  t138 = t136 + t137;
  t141 = Cos(var1[11]);
  t142 = -1.*t141;
  t143 = 1. + t142;
  t145 = Sin(var1[11]);
  t148 = -1.*t119*t129;
  t149 = t114*t138;
  t150 = t148 + t149;
  t161 = t114*t129;
  t164 = t119*t138;
  t165 = t161 + t164;
  t168 = Cos(var1[12]);
  t169 = -1.*t168;
  t170 = 1. + t169;
  t172 = Sin(var1[12]);
  t175 = t145*t150;
  t177 = t141*t165;
  t178 = t175 + t177;
  t185 = t141*t150;
  t186 = -1.*t145*t165;
  t187 = t185 + t186;
  t190 = Cos(var1[13]);
  t192 = -1.*t190;
  t193 = 1. + t192;
  t196 = Sin(var1[13]);
  t199 = -1.*t172*t178;
  t201 = t168*t187;
  t202 = t199 + t201;
  t209 = t168*t178;
  t211 = t172*t187;
  t213 = t209 + t211;
  t13 = -1.*t10;
  t15 = 1. + t13;
  t19 = 0.135*t15;
  t20 = 0. + t19;
  t227 = Sin(var1[3]);
  t27 = -0.135*t26;
  t29 = 0. + t27;
  t35 = -1.*t31;
  t37 = 1. + t35;
  t38 = 0.135*t37;
  t39 = 0. + t38;
  t225 = Cos(var1[3]);
  t226 = t225*t75;
  t228 = -1.*t227*t25*t22;
  t230 = t226 + t228;
  t55 = -0.135*t53;
  t56 = 0. + t55;
  t61 = -0.09*t60;
  t63 = 0.049*t62;
  t64 = 0. + t61 + t63;
  t239 = -1.*t7*t10*t227;
  t240 = -1.*t230*t26;
  t242 = t239 + t240;
  t233 = t10*t230;
  t235 = -1.*t7*t227*t26;
  t236 = t233 + t235;
  t80 = -0.049*t78;
  t82 = -0.135*t81;
  t83 = 0. + t80 + t82;
  t93 = 0.135*t78;
  t94 = -0.049*t81;
  t96 = 0. + t93 + t94;
  t254 = t31*t236;
  t255 = t242*t53;
  t256 = t254 + t255;
  t249 = t75*t227*t25;
  t251 = t225*t22;
  t252 = t249 + t251;
  t102 = -0.049*t60;
  t103 = -0.09*t62;
  t105 = 0. + t102 + t103;
  t118 = -0.049*t117;
  t120 = -0.21*t119;
  t122 = 0. + t118 + t120;
  t245 = t31*t242;
  t246 = -1.*t236*t53;
  t247 = t245 + t246;
  t266 = t76*t252;
  t267 = -1.*t256*t81;
  t269 = t266 + t267;
  t132 = -0.21*t117;
  t134 = 0.049*t119;
  t135 = 0. + t132 + t134;
  t144 = -0.2707*t143;
  t146 = 0.0016*t145;
  t147 = 0. + t144 + t146;
  t271 = t62*t247;
  t272 = t58*t269;
  t273 = t271 + t272;
  t276 = t58*t247;
  t277 = -1.*t62*t269;
  t279 = t276 + t277;
  t156 = -0.0016*t143;
  t157 = -0.2707*t145;
  t158 = 0. + t156 + t157;
  t171 = 0.0184*t170;
  t173 = -0.7055*t172;
  t174 = 0. + t171 + t173;
  t282 = -1.*t119*t273;
  t283 = t114*t279;
  t285 = t282 + t283;
  t288 = t114*t273;
  t289 = t119*t279;
  t291 = t288 + t289;
  t180 = -0.7055*t170;
  t181 = -0.0184*t172;
  t182 = 0. + t180 + t181;
  t195 = -1.1135*t193;
  t197 = 0.0216*t196;
  t198 = 0. + t195 + t197;
  t293 = t145*t285;
  t294 = t141*t291;
  t295 = t293 + t294;
  t297 = t141*t285;
  t298 = -1.*t145*t291;
  t299 = t297 + t298;
  t205 = -0.0216*t193;
  t206 = -1.1135*t196;
  t208 = 0. + t205 + t206;
  t301 = -1.*t172*t295;
  t302 = t168*t299;
  t303 = t301 + t302;
  t305 = t168*t295;
  t306 = t172*t299;
  t307 = t305 + t306;
  t318 = t75*t227;
  t319 = t225*t25*t22;
  t320 = t318 + t319;
  t327 = t225*t7*t10;
  t328 = -1.*t320*t26;
  t329 = t327 + t328;
  t323 = t10*t320;
  t324 = t225*t7*t26;
  t325 = t323 + t324;
  t339 = t31*t325;
  t340 = t329*t53;
  t341 = t339 + t340;
  t335 = -1.*t225*t75*t25;
  t336 = t227*t22;
  t337 = t335 + t336;
  t331 = t31*t329;
  t332 = -1.*t325*t53;
  t333 = t331 + t332;
  t347 = t76*t337;
  t348 = -1.*t341*t81;
  t349 = t347 + t348;
  t351 = t62*t333;
  t352 = t58*t349;
  t353 = t351 + t352;
  t355 = t58*t333;
  t356 = -1.*t62*t349;
  t357 = t355 + t356;
  t359 = -1.*t119*t353;
  t360 = t114*t357;
  t361 = t359 + t360;
  t363 = t114*t353;
  t364 = t119*t357;
  t365 = t363 + t364;
  t367 = t145*t361;
  t368 = t141*t365;
  t369 = t367 + t368;
  t371 = t141*t361;
  t372 = -1.*t145*t365;
  t373 = t371 + t372;
  t375 = -1.*t172*t369;
  t376 = t168*t373;
  t377 = t375 + t376;
  t379 = t168*t369;
  t380 = t172*t373;
  t381 = t379 + t380;
  p_output1[0]=0. + t105*t112 + t122*t129 + t135*t138 + t147*t150 + t158*t165 + t174*t178 + t182*t187 + t198*t202 + t208*t213 + 0.0306*(t196*t202 + t190*t213) - 1.1312*(t190*t202 - 1.*t196*t213) + t25*t29 + t39*t47 + t52*t56 + t64*t69 - 1.*t20*t22*t7 + t7*t75*t83 + 0.1305*(t7*t75*t81 + t76*t91) + t91*t96 + var1[0];
  p_output1[1]=0. + t20*t230 + t105*t269 + t122*t273 + t135*t279 + t147*t285 + t158*t291 + t174*t295 + t182*t299 + t198*t303 + t208*t307 + 0.0306*(t196*t303 + t190*t307) - 1.1312*(t190*t303 - 1.*t196*t307) + t236*t39 + t242*t56 + t247*t64 - 1.*t227*t29*t7 + 0.1305*(t256*t76 + t252*t81) + t252*t83 + t256*t96 + var1[1];
  p_output1[2]=0. + t20*t320 + t105*t349 + t122*t353 + t135*t357 + t147*t361 + t158*t365 + t174*t369 + t182*t373 + t198*t377 + t208*t381 + 0.0306*(t196*t377 + t190*t381) - 1.1312*(t190*t377 - 1.*t196*t381) + t325*t39 + t329*t56 + t333*t64 + t225*t29*t7 + 0.1305*(t341*t76 + t337*t81) + t337*t83 + t341*t96 + var1[2];
}



void LeftToeBottom(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
