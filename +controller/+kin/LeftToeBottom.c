/*
 * Automatically Generated from Mathematica.
 * Tue 11 Jul 2017 19:12:42 GMT-04:00
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
  double t5;
  double t8;
  double t22;
  double t39;
  double t41;
  double t46;
  double t69;
  double t70;
  double t77;
  double t64;
  double t65;
  double t66;
  double t79;
  double t117;
  double t124;
  double t129;
  double t132;
  double t114;
  double t115;
  double t116;
  double t138;
  double t87;
  double t88;
  double t91;
  double t93;
  double t108;
  double t110;
  double t111;
  double t164;
  double t165;
  double t166;
  double t175;
  double t179;
  double t180;
  double t182;
  double t185;
  double t186;
  double t187;
  double t211;
  double t212;
  double t213;
  double t216;
  double t217;
  double t218;
  double t231;
  double t236;
  double t238;
  double t239;
  double t254;
  double t255;
  double t257;
  double t261;
  double t262;
  double t263;
  double t271;
  double t281;
  double t282;
  double t284;
  double t299;
  double t301;
  double t302;
  double t304;
  double t305;
  double t308;
  double t310;
  double t319;
  double t320;
  double t325;
  double t334;
  double t335;
  double t336;
  double t11;
  double t13;
  double t14;
  double t15;
  double t359;
  double t42;
  double t43;
  double t47;
  double t56;
  double t59;
  double t62;
  double t357;
  double t358;
  double t360;
  double t361;
  double t82;
  double t84;
  double t92;
  double t94;
  double t101;
  double t380;
  double t381;
  double t383;
  double t364;
  double t369;
  double t377;
  double t131;
  double t133;
  double t134;
  double t139;
  double t140;
  double t141;
  double t392;
  double t394;
  double t396;
  double t398;
  double t400;
  double t402;
  double t160;
  double t161;
  double t162;
  double t181;
  double t183;
  double t184;
  double t385;
  double t387;
  double t389;
  double t411;
  double t412;
  double t416;
  double t189;
  double t199;
  double t208;
  double t225;
  double t234;
  double t235;
  double t419;
  double t420;
  double t422;
  double t424;
  double t425;
  double t428;
  double t247;
  double t249;
  double t252;
  double t264;
  double t278;
  double t280;
  double t430;
  double t431;
  double t432;
  double t436;
  double t437;
  double t438;
  double t286;
  double t287;
  double t294;
  double t309;
  double t311;
  double t318;
  double t440;
  double t445;
  double t447;
  double t449;
  double t451;
  double t452;
  double t330;
  double t331;
  double t332;
  double t454;
  double t455;
  double t456;
  double t458;
  double t459;
  double t460;
  double t482;
  double t484;
  double t485;
  double t497;
  double t498;
  double t499;
  double t490;
  double t491;
  double t493;
  double t510;
  double t511;
  double t512;
  double t517;
  double t519;
  double t520;
  double t503;
  double t504;
  double t506;
  double t529;
  double t530;
  double t531;
  double t533;
  double t536;
  double t537;
  double t539;
  double t540;
  double t541;
  double t548;
  double t549;
  double t550;
  double t553;
  double t554;
  double t555;
  double t557;
  double t558;
  double t559;
  double t561;
  double t562;
  double t563;
  double t565;
  double t566;
  double t567;
  double t569;
  double t570;
  double t572;
  t5 = Cos(var1[4]);
  t8 = Cos(var1[6]);
  t22 = Sin(var1[5]);
  t39 = Sin(var1[4]);
  t41 = Sin(var1[6]);
  t46 = Cos(var1[7]);
  t69 = t8*t39;
  t70 = t5*t22*t41;
  t77 = t69 + t70;
  t64 = -1.*t5*t8*t22;
  t65 = t39*t41;
  t66 = t64 + t65;
  t79 = Sin(var1[7]);
  t117 = Cos(var1[8]);
  t124 = -1.*t117;
  t129 = 1. + t124;
  t132 = Sin(var1[8]);
  t114 = t46*t66;
  t115 = t77*t79;
  t116 = t114 + t115;
  t138 = Cos(var1[5]);
  t87 = Cos(var1[9]);
  t88 = -1.*t87;
  t91 = 1. + t88;
  t93 = Sin(var1[9]);
  t108 = t46*t77;
  t110 = -1.*t66*t79;
  t111 = t108 + t110;
  t164 = t5*t138*t117;
  t165 = t116*t132;
  t166 = t164 + t165;
  t175 = Cos(var1[10]);
  t179 = -1.*t175;
  t180 = 1. + t179;
  t182 = Sin(var1[10]);
  t185 = t93*t111;
  t186 = t87*t166;
  t187 = t185 + t186;
  t211 = t87*t111;
  t212 = -1.*t93*t166;
  t213 = t211 + t212;
  t216 = Cos(var1[11]);
  t217 = -1.*t216;
  t218 = 1. + t217;
  t231 = Sin(var1[11]);
  t236 = -1.*t182*t187;
  t238 = t175*t213;
  t239 = t236 + t238;
  t254 = t175*t187;
  t255 = t182*t213;
  t257 = t254 + t255;
  t261 = Cos(var1[12]);
  t262 = -1.*t261;
  t263 = 1. + t262;
  t271 = Sin(var1[12]);
  t281 = t231*t239;
  t282 = t216*t257;
  t284 = t281 + t282;
  t299 = t216*t239;
  t301 = -1.*t231*t257;
  t302 = t299 + t301;
  t304 = Cos(var1[13]);
  t305 = -1.*t304;
  t308 = 1. + t305;
  t310 = Sin(var1[13]);
  t319 = -1.*t271*t284;
  t320 = t261*t302;
  t325 = t319 + t320;
  t334 = t261*t284;
  t335 = t271*t302;
  t336 = t334 + t335;
  t11 = -1.*t8;
  t13 = 1. + t11;
  t14 = 0.135*t13;
  t15 = 0. + t14;
  t359 = Sin(var1[3]);
  t42 = -0.135*t41;
  t43 = 0. + t42;
  t47 = -1.*t46;
  t56 = 1. + t47;
  t59 = 0.135*t56;
  t62 = 0. + t59;
  t357 = Cos(var1[3]);
  t358 = t357*t138;
  t360 = -1.*t359*t39*t22;
  t361 = t358 + t360;
  t82 = -0.135*t79;
  t84 = 0. + t82;
  t92 = -0.09*t91;
  t94 = 0.049*t93;
  t101 = 0. + t92 + t94;
  t380 = -1.*t5*t8*t359;
  t381 = -1.*t361*t41;
  t383 = t380 + t381;
  t364 = t8*t361;
  t369 = -1.*t5*t359*t41;
  t377 = t364 + t369;
  t131 = 0.135*t129;
  t133 = 0.049*t132;
  t134 = 0. + t131 + t133;
  t139 = -0.049*t129;
  t140 = 0.135*t132;
  t141 = 0. + t139 + t140;
  t392 = t46*t377;
  t394 = t383*t79;
  t396 = t392 + t394;
  t398 = t138*t359*t39;
  t400 = t357*t22;
  t402 = t398 + t400;
  t160 = -0.049*t91;
  t161 = -0.09*t93;
  t162 = 0. + t160 + t161;
  t181 = -0.049*t180;
  t183 = -0.21*t182;
  t184 = 0. + t181 + t183;
  t385 = t46*t383;
  t387 = -1.*t377*t79;
  t389 = t385 + t387;
  t411 = t117*t402;
  t412 = t396*t132;
  t416 = t411 + t412;
  t189 = -0.21*t180;
  t199 = 0.049*t182;
  t208 = 0. + t189 + t199;
  t225 = -0.2707*t218;
  t234 = 0.0016*t231;
  t235 = 0. + t225 + t234;
  t419 = t93*t389;
  t420 = t87*t416;
  t422 = t419 + t420;
  t424 = t87*t389;
  t425 = -1.*t93*t416;
  t428 = t424 + t425;
  t247 = -0.0016*t218;
  t249 = -0.2707*t231;
  t252 = 0. + t247 + t249;
  t264 = 0.0184*t263;
  t278 = -0.7055*t271;
  t280 = 0. + t264 + t278;
  t430 = -1.*t182*t422;
  t431 = t175*t428;
  t432 = t430 + t431;
  t436 = t175*t422;
  t437 = t182*t428;
  t438 = t436 + t437;
  t286 = -0.7055*t263;
  t287 = -0.0184*t271;
  t294 = 0. + t286 + t287;
  t309 = -1.1135*t308;
  t311 = 0.0216*t310;
  t318 = 0. + t309 + t311;
  t440 = t231*t432;
  t445 = t216*t438;
  t447 = t440 + t445;
  t449 = t216*t432;
  t451 = -1.*t231*t438;
  t452 = t449 + t451;
  t330 = -0.0216*t308;
  t331 = -1.1135*t310;
  t332 = 0. + t330 + t331;
  t454 = -1.*t271*t447;
  t455 = t261*t452;
  t456 = t454 + t455;
  t458 = t261*t447;
  t459 = t271*t452;
  t460 = t458 + t459;
  t482 = t138*t359;
  t484 = t357*t39*t22;
  t485 = t482 + t484;
  t497 = t357*t5*t8;
  t498 = -1.*t485*t41;
  t499 = t497 + t498;
  t490 = t8*t485;
  t491 = t357*t5*t41;
  t493 = t490 + t491;
  t510 = t46*t493;
  t511 = t499*t79;
  t512 = t510 + t511;
  t517 = -1.*t357*t138*t39;
  t519 = t359*t22;
  t520 = t517 + t519;
  t503 = t46*t499;
  t504 = -1.*t493*t79;
  t506 = t503 + t504;
  t529 = t117*t520;
  t530 = t512*t132;
  t531 = t529 + t530;
  t533 = t93*t506;
  t536 = t87*t531;
  t537 = t533 + t536;
  t539 = t87*t506;
  t540 = -1.*t93*t531;
  t541 = t539 + t540;
  t548 = -1.*t182*t537;
  t549 = t175*t541;
  t550 = t548 + t549;
  t553 = t175*t537;
  t554 = t182*t541;
  t555 = t553 + t554;
  t557 = t231*t550;
  t558 = t216*t555;
  t559 = t557 + t558;
  t561 = t216*t550;
  t562 = -1.*t231*t555;
  t563 = t561 + t562;
  t565 = -1.*t271*t559;
  t566 = t261*t563;
  t567 = t565 + t566;
  t569 = t261*t559;
  t570 = t271*t563;
  t572 = t569 + t570;
  p_output1[0]=0. + t101*t111 + t116*t134 + t162*t166 + t184*t187 + t208*t213 + t235*t239 + t252*t257 + t280*t284 + t294*t302 + t318*t325 + t332*t336 + 0.0306*(t310*t325 + t304*t336) - 1.1312*(t304*t325 - 1.*t310*t336) + t39*t43 + t138*t141*t5 - 1.*t15*t22*t5 + 0.1305*(t116*t117 - 1.*t132*t138*t5) + t62*t66 + t77*t84 + var1[0];
  p_output1[1]=0. + t15*t361 + t101*t389 + t134*t396 + t141*t402 + 0.1305*(t117*t396 - 1.*t132*t402) + t162*t416 + t184*t422 + t208*t428 + t235*t432 + t252*t438 + t280*t447 + t294*t452 + t318*t456 + t332*t460 + 0.0306*(t310*t456 + t304*t460) - 1.1312*(t304*t456 - 1.*t310*t460) - 1.*t359*t43*t5 + t377*t62 + t383*t84 + var1[1];
  p_output1[2]=0. + t15*t485 + t357*t43*t5 + t101*t506 + t134*t512 + t141*t520 + 0.1305*(t117*t512 - 1.*t132*t520) + t162*t531 + t184*t537 + t208*t541 + t235*t550 + t252*t555 + t280*t559 + t294*t563 + t318*t567 + t332*t572 + 0.0306*(t310*t567 + t304*t572) - 1.1312*(t304*t567 - 1.*t310*t572) + t493*t62 + t499*t84 + var1[2];
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

#include "LeftToeBottom.hh"

namespace SymFunction
{

void LeftToeBottom_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
