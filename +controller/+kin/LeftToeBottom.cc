/*
 * Automatically Generated from Mathematica.
 * Mon 10 Jul 2017 14:12:57 GMT-04:00
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
  double t62;
  double t64;
  double t65;
  double t79;
  double t116;
  double t117;
  double t124;
  double t131;
  double t135;
  double t138;
  double t139;
  double t115;
  double t88;
  double t91;
  double t92;
  double t94;
  double t110;
  double t111;
  double t112;
  double t165;
  double t166;
  double t167;
  double t179;
  double t180;
  double t181;
  double t183;
  double t186;
  double t187;
  double t188;
  double t212;
  double t213;
  double t215;
  double t217;
  double t218;
  double t229;
  double t232;
  double t238;
  double t239;
  double t240;
  double t257;
  double t258;
  double t261;
  double t263;
  double t264;
  double t271;
  double t280;
  double t284;
  double t285;
  double t286;
  double t302;
  double t303;
  double t304;
  double t308;
  double t309;
  double t310;
  double t318;
  double t325;
  double t328;
  double t330;
  double t336;
  double t337;
  double t345;
  double t11;
  double t13;
  double t14;
  double t15;
  double t361;
  double t42;
  double t43;
  double t47;
  double t56;
  double t59;
  double t61;
  double t359;
  double t360;
  double t362;
  double t363;
  double t84;
  double t85;
  double t93;
  double t101;
  double t108;
  double t383;
  double t384;
  double t385;
  double t377;
  double t379;
  double t380;
  double t129;
  double t132;
  double t133;
  double t140;
  double t141;
  double t148;
  double t405;
  double t406;
  double t409;
  double t398;
  double t400;
  double t402;
  double t161;
  double t162;
  double t164;
  double t182;
  double t184;
  double t185;
  double t390;
  double t392;
  double t396;
  double t419;
  double t420;
  double t422;
  double t199;
  double t208;
  double t211;
  double t231;
  double t234;
  double t235;
  double t424;
  double t425;
  double t428;
  double t430;
  double t431;
  double t432;
  double t249;
  double t254;
  double t255;
  double t278;
  double t281;
  double t282;
  double t436;
  double t437;
  double t438;
  double t440;
  double t445;
  double t447;
  double t294;
  double t299;
  double t301;
  double t311;
  double t319;
  double t320;
  double t449;
  double t451;
  double t452;
  double t454;
  double t455;
  double t456;
  double t332;
  double t334;
  double t335;
  double t458;
  double t459;
  double t460;
  double t462;
  double t463;
  double t464;
  double t487;
  double t490;
  double t493;
  double t506;
  double t507;
  double t510;
  double t499;
  double t501;
  double t503;
  double t525;
  double t526;
  double t529;
  double t520;
  double t521;
  double t523;
  double t512;
  double t513;
  double t517;
  double t537;
  double t538;
  double t539;
  double t541;
  double t546;
  double t548;
  double t550;
  double t552;
  double t553;
  double t555;
  double t556;
  double t557;
  double t559;
  double t560;
  double t561;
  double t563;
  double t564;
  double t565;
  double t567;
  double t568;
  double t569;
  double t572;
  double t573;
  double t583;
  double t587;
  double t588;
  double t589;
  t5 = Cos(var1[4]);
  t8 = Cos(var1[6]);
  t22 = Sin(var1[5]);
  t39 = Sin(var1[4]);
  t41 = Sin(var1[6]);
  t46 = Cos(var1[7]);
  t69 = t8*t39;
  t70 = t5*t22*t41;
  t77 = t69 + t70;
  t62 = -1.*t5*t8*t22;
  t64 = t39*t41;
  t65 = t62 + t64;
  t79 = Sin(var1[7]);
  t116 = Cos(var1[8]);
  t117 = -1.*t116;
  t124 = 1. + t117;
  t131 = Sin(var1[8]);
  t135 = t46*t65;
  t138 = t77*t79;
  t139 = t135 + t138;
  t115 = Cos(var1[5]);
  t88 = Cos(var1[9]);
  t91 = -1.*t88;
  t92 = 1. + t91;
  t94 = Sin(var1[9]);
  t110 = t46*t77;
  t111 = -1.*t65*t79;
  t112 = t110 + t111;
  t165 = t5*t115*t116;
  t166 = -1.*t139*t131;
  t167 = t165 + t166;
  t179 = Cos(var1[10]);
  t180 = -1.*t179;
  t181 = 1. + t180;
  t183 = Sin(var1[10]);
  t186 = t94*t112;
  t187 = t88*t167;
  t188 = t186 + t187;
  t212 = t88*t112;
  t213 = -1.*t94*t167;
  t215 = t212 + t213;
  t217 = Cos(var1[11]);
  t218 = -1.*t217;
  t229 = 1. + t218;
  t232 = Sin(var1[11]);
  t238 = -1.*t183*t188;
  t239 = t179*t215;
  t240 = t238 + t239;
  t257 = t179*t188;
  t258 = t183*t215;
  t261 = t257 + t258;
  t263 = Cos(var1[12]);
  t264 = -1.*t263;
  t271 = 1. + t264;
  t280 = Sin(var1[12]);
  t284 = t232*t240;
  t285 = t217*t261;
  t286 = t284 + t285;
  t302 = t217*t240;
  t303 = -1.*t232*t261;
  t304 = t302 + t303;
  t308 = Cos(var1[13]);
  t309 = -1.*t308;
  t310 = 1. + t309;
  t318 = Sin(var1[13]);
  t325 = -1.*t280*t286;
  t328 = t263*t304;
  t330 = t325 + t328;
  t336 = t263*t286;
  t337 = t280*t304;
  t345 = t336 + t337;
  t11 = -1.*t8;
  t13 = 1. + t11;
  t14 = 0.135*t13;
  t15 = 0. + t14;
  t361 = Sin(var1[3]);
  t42 = -0.135*t41;
  t43 = 0. + t42;
  t47 = -1.*t46;
  t56 = 1. + t47;
  t59 = 0.135*t56;
  t61 = 0. + t59;
  t359 = Cos(var1[3]);
  t360 = t359*t115;
  t362 = -1.*t361*t39*t22;
  t363 = t360 + t362;
  t84 = -0.135*t79;
  t85 = 0. + t84;
  t93 = -0.09*t92;
  t101 = 0.049*t94;
  t108 = 0. + t93 + t101;
  t383 = -1.*t5*t8*t361;
  t384 = -1.*t363*t41;
  t385 = t383 + t384;
  t377 = t8*t363;
  t379 = -1.*t5*t361*t41;
  t380 = t377 + t379;
  t129 = -0.049*t124;
  t132 = -0.135*t131;
  t133 = 0. + t129 + t132;
  t140 = 0.135*t124;
  t141 = -0.049*t131;
  t148 = 0. + t140 + t141;
  t405 = t46*t380;
  t406 = t385*t79;
  t409 = t405 + t406;
  t398 = t115*t361*t39;
  t400 = t359*t22;
  t402 = t398 + t400;
  t161 = -0.049*t92;
  t162 = -0.09*t94;
  t164 = 0. + t161 + t162;
  t182 = -0.049*t181;
  t184 = -0.21*t183;
  t185 = 0. + t182 + t184;
  t390 = t46*t385;
  t392 = -1.*t380*t79;
  t396 = t390 + t392;
  t419 = t116*t402;
  t420 = -1.*t409*t131;
  t422 = t419 + t420;
  t199 = -0.21*t181;
  t208 = 0.049*t183;
  t211 = 0. + t199 + t208;
  t231 = -0.2707*t229;
  t234 = 0.0016*t232;
  t235 = 0. + t231 + t234;
  t424 = t94*t396;
  t425 = t88*t422;
  t428 = t424 + t425;
  t430 = t88*t396;
  t431 = -1.*t94*t422;
  t432 = t430 + t431;
  t249 = -0.0016*t229;
  t254 = -0.2707*t232;
  t255 = 0. + t249 + t254;
  t278 = 0.0184*t271;
  t281 = -0.7055*t280;
  t282 = 0. + t278 + t281;
  t436 = -1.*t183*t428;
  t437 = t179*t432;
  t438 = t436 + t437;
  t440 = t179*t428;
  t445 = t183*t432;
  t447 = t440 + t445;
  t294 = -0.7055*t271;
  t299 = -0.0184*t280;
  t301 = 0. + t294 + t299;
  t311 = -1.1135*t310;
  t319 = 0.0216*t318;
  t320 = 0. + t311 + t319;
  t449 = t232*t438;
  t451 = t217*t447;
  t452 = t449 + t451;
  t454 = t217*t438;
  t455 = -1.*t232*t447;
  t456 = t454 + t455;
  t332 = -0.0216*t310;
  t334 = -1.1135*t318;
  t335 = 0. + t332 + t334;
  t458 = -1.*t280*t452;
  t459 = t263*t456;
  t460 = t458 + t459;
  t462 = t263*t452;
  t463 = t280*t456;
  t464 = t462 + t463;
  t487 = t115*t361;
  t490 = t359*t39*t22;
  t493 = t487 + t490;
  t506 = t359*t5*t8;
  t507 = -1.*t493*t41;
  t510 = t506 + t507;
  t499 = t8*t493;
  t501 = t359*t5*t41;
  t503 = t499 + t501;
  t525 = t46*t503;
  t526 = t510*t79;
  t529 = t525 + t526;
  t520 = -1.*t359*t115*t39;
  t521 = t361*t22;
  t523 = t520 + t521;
  t512 = t46*t510;
  t513 = -1.*t503*t79;
  t517 = t512 + t513;
  t537 = t116*t523;
  t538 = -1.*t529*t131;
  t539 = t537 + t538;
  t541 = t94*t517;
  t546 = t88*t539;
  t548 = t541 + t546;
  t550 = t88*t517;
  t552 = -1.*t94*t539;
  t553 = t550 + t552;
  t555 = -1.*t183*t548;
  t556 = t179*t553;
  t557 = t555 + t556;
  t559 = t179*t548;
  t560 = t183*t553;
  t561 = t559 + t560;
  t563 = t232*t557;
  t564 = t217*t561;
  t565 = t563 + t564;
  t567 = t217*t557;
  t568 = -1.*t232*t561;
  t569 = t567 + t568;
  t572 = -1.*t280*t565;
  t573 = t263*t569;
  t583 = t572 + t573;
  t587 = t263*t565;
  t588 = t280*t569;
  t589 = t587 + t588;
  p_output1[0]=0. + t108*t112 + t139*t148 + t164*t167 + t185*t188 + t211*t215 + t235*t240 + t255*t261 + t282*t286 + t301*t304 + t320*t330 + t335*t345 + 0.0306*(t318*t330 + t308*t345) - 1.1312*(t308*t330 - 1.*t318*t345) + t39*t43 + t115*t133*t5 - 1.*t15*t22*t5 + 0.1305*(t116*t139 + t115*t131*t5) + t61*t65 + t77*t85 + var1[0];
  p_output1[1]=0. + t15*t363 + t108*t396 + t133*t402 + t148*t409 + 0.1305*(t131*t402 + t116*t409) + t164*t422 + t185*t428 + t211*t432 + t235*t438 + t255*t447 + t282*t452 + t301*t456 + t320*t460 + t335*t464 + 0.0306*(t318*t460 + t308*t464) - 1.1312*(t308*t460 - 1.*t318*t464) - 1.*t361*t43*t5 + t380*t61 + t385*t85 + var1[1];
  p_output1[2]=0. + t15*t493 + t359*t43*t5 + t108*t517 + t133*t523 + t148*t529 + 0.1305*(t131*t523 + t116*t529) + t164*t539 + t185*t548 + t211*t553 + t235*t557 + t255*t561 + t282*t565 + t301*t569 + t320*t583 + t335*t589 + 0.0306*(t318*t583 + t308*t589) - 1.1312*(t308*t583 - 1.*t318*t589) + t503*t61 + t510*t85 + var1[2];
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
