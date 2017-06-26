/*
 * Automatically Generated from Mathematica.
 * Fri 23 Jun 2017 12:39:36 GMT-04:00
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
  double t15;
  double t69;
  double t77;
  double t81;
  double t99;
  double t117;
  double t112;
  double t113;
  double t114;
  double t102;
  double t132;
  double t135;
  double t136;
  double t38;
  double t41;
  double t50;
  double t56;
  double t31;
  double t170;
  double t171;
  double t172;
  double t138;
  double t141;
  double t142;
  double t145;
  double t156;
  double t158;
  double t161;
  double t192;
  double t193;
  double t195;
  double t198;
  double t199;
  double t205;
  double t209;
  double t217;
  double t218;
  double t219;
  double t225;
  double t226;
  double t227;
  double t230;
  double t231;
  double t232;
  double t235;
  double t242;
  double t246;
  double t251;
  double t261;
  double t263;
  double t264;
  double t269;
  double t270;
  double t271;
  double t273;
  double t280;
  double t283;
  double t285;
  double t296;
  double t298;
  double t299;
  double t302;
  double t303;
  double t306;
  double t310;
  double t314;
  double t315;
  double t316;
  double t322;
  double t323;
  double t324;
  double t75;
  double t76;
  double t52;
  double t59;
  double t61;
  double t338;
  double t82;
  double t93;
  double t96;
  double t98;
  double t342;
  double t103;
  double t105;
  double t109;
  double t111;
  double t346;
  double t350;
  double t351;
  double t119;
  double t123;
  double t143;
  double t147;
  double t148;
  double t354;
  double t355;
  double t357;
  double t360;
  double t361;
  double t362;
  double t166;
  double t168;
  double t169;
  double t340;
  double t343;
  double t344;
  double t370;
  double t371;
  double t373;
  double t186;
  double t187;
  double t190;
  double t208;
  double t213;
  double t215;
  double t364;
  double t366;
  double t367;
  double t382;
  double t383;
  double t384;
  double t221;
  double t223;
  double t224;
  double t233;
  double t239;
  double t240;
  double t386;
  double t387;
  double t388;
  double t390;
  double t391;
  double t392;
  double t255;
  double t256;
  double t259;
  double t272;
  double t277;
  double t279;
  double t395;
  double t397;
  double t398;
  double t400;
  double t401;
  double t402;
  double t292;
  double t294;
  double t295;
  double t308;
  double t311;
  double t312;
  double t405;
  double t406;
  double t407;
  double t410;
  double t411;
  double t412;
  double t318;
  double t319;
  double t321;
  double t414;
  double t415;
  double t418;
  double t420;
  double t422;
  double t423;
  double t446;
  double t447;
  double t448;
  double t451;
  double t452;
  double t453;
  double t455;
  double t456;
  double t457;
  double t439;
  double t441;
  double t442;
  double t465;
  double t468;
  double t469;
  double t459;
  double t460;
  double t461;
  double t476;
  double t478;
  double t479;
  double t481;
  double t482;
  double t486;
  double t488;
  double t490;
  double t491;
  double t494;
  double t496;
  double t497;
  double t499;
  double t500;
  double t502;
  double t504;
  double t506;
  double t507;
  double t510;
  double t512;
  double t514;
  double t516;
  double t518;
  double t519;
  double t521;
  double t522;
  double t523;
  t15 = Cos(var1[4]);
  t69 = Sin(var1[14]);
  t77 = Sin(var1[4]);
  t81 = Cos(var1[14]);
  t99 = Sin(var1[5]);
  t117 = Sin(var1[15]);
  t112 = t69*t77;
  t113 = -1.*t81*t15*t99;
  t114 = t112 + t113;
  t102 = Cos(var1[15]);
  t132 = t81*t77;
  t135 = t15*t69*t99;
  t136 = t132 + t135;
  t38 = Cos(var1[16]);
  t41 = -1.*t38;
  t50 = 1. + t41;
  t56 = Sin(var1[16]);
  t31 = Cos(var1[5]);
  t170 = t102*t114;
  t171 = t117*t136;
  t172 = t170 + t171;
  t138 = Cos(var1[17]);
  t141 = -1.*t138;
  t142 = 1. + t141;
  t145 = Sin(var1[17]);
  t156 = -1.*t117*t114;
  t158 = t102*t136;
  t161 = t156 + t158;
  t192 = t38*t15*t31;
  t193 = -1.*t56*t172;
  t195 = t192 + t193;
  t198 = Cos(var1[18]);
  t199 = -1.*t198;
  t205 = 1. + t199;
  t209 = Sin(var1[18]);
  t217 = t145*t161;
  t218 = t138*t195;
  t219 = t217 + t218;
  t225 = t138*t161;
  t226 = -1.*t145*t195;
  t227 = t225 + t226;
  t230 = Cos(var1[19]);
  t231 = -1.*t230;
  t232 = 1. + t231;
  t235 = Sin(var1[19]);
  t242 = -1.*t209*t219;
  t246 = t198*t227;
  t251 = t242 + t246;
  t261 = t198*t219;
  t263 = t209*t227;
  t264 = t261 + t263;
  t269 = Cos(var1[20]);
  t270 = -1.*t269;
  t271 = 1. + t270;
  t273 = Sin(var1[20]);
  t280 = t235*t251;
  t283 = t230*t264;
  t285 = t280 + t283;
  t296 = t230*t251;
  t298 = -1.*t235*t264;
  t299 = t296 + t298;
  t302 = Cos(var1[21]);
  t303 = -1.*t302;
  t306 = 1. + t303;
  t310 = Sin(var1[21]);
  t314 = -1.*t273*t285;
  t315 = t269*t299;
  t316 = t314 + t315;
  t322 = t269*t285;
  t323 = t273*t299;
  t324 = t322 + t323;
  t75 = 0.135*t69;
  t76 = 0. + t75;
  t52 = -0.049*t50;
  t59 = 0.135*t56;
  t61 = 0. + t52 + t59;
  t338 = Sin(var1[3]);
  t82 = -1.*t81;
  t93 = 1. + t82;
  t96 = -0.135*t93;
  t98 = 0. + t96;
  t342 = Cos(var1[3]);
  t103 = -1.*t102;
  t105 = 1. + t103;
  t109 = -0.135*t105;
  t111 = 0. + t109;
  t346 = t342*t31;
  t350 = -1.*t338*t77*t99;
  t351 = t346 + t350;
  t119 = 0.135*t117;
  t123 = 0. + t119;
  t143 = -0.09*t142;
  t147 = 0.049*t145;
  t148 = 0. + t143 + t147;
  t354 = -1.*t15*t69*t338;
  t355 = t81*t351;
  t357 = t354 + t355;
  t360 = -1.*t81*t15*t338;
  t361 = -1.*t69*t351;
  t362 = t360 + t361;
  t166 = -0.135*t50;
  t168 = -0.049*t56;
  t169 = 0. + t166 + t168;
  t340 = t31*t338*t77;
  t343 = t342*t99;
  t344 = t340 + t343;
  t370 = t102*t357;
  t371 = t117*t362;
  t373 = t370 + t371;
  t186 = -0.049*t142;
  t187 = -0.09*t145;
  t190 = 0. + t186 + t187;
  t208 = -0.049*t205;
  t213 = -0.21*t209;
  t215 = 0. + t208 + t213;
  t364 = -1.*t117*t357;
  t366 = t102*t362;
  t367 = t364 + t366;
  t382 = t38*t344;
  t383 = -1.*t56*t373;
  t384 = t382 + t383;
  t221 = -0.21*t205;
  t223 = 0.049*t209;
  t224 = 0. + t221 + t223;
  t233 = -0.2707*t232;
  t239 = 0.0016*t235;
  t240 = 0. + t233 + t239;
  t386 = t145*t367;
  t387 = t138*t384;
  t388 = t386 + t387;
  t390 = t138*t367;
  t391 = -1.*t145*t384;
  t392 = t390 + t391;
  t255 = -0.0016*t232;
  t256 = -0.2707*t235;
  t259 = 0. + t255 + t256;
  t272 = 0.0184*t271;
  t277 = -0.7055*t273;
  t279 = 0. + t272 + t277;
  t395 = -1.*t209*t388;
  t397 = t198*t392;
  t398 = t395 + t397;
  t400 = t198*t388;
  t401 = t209*t392;
  t402 = t400 + t401;
  t292 = -0.7055*t271;
  t294 = -0.0184*t273;
  t295 = 0. + t292 + t294;
  t308 = -1.1135*t306;
  t311 = 0.0216*t310;
  t312 = 0. + t308 + t311;
  t405 = t235*t398;
  t406 = t230*t402;
  t407 = t405 + t406;
  t410 = t230*t398;
  t411 = -1.*t235*t402;
  t412 = t410 + t411;
  t318 = -0.0216*t306;
  t319 = -1.1135*t310;
  t321 = 0. + t318 + t319;
  t414 = -1.*t273*t407;
  t415 = t269*t412;
  t418 = t414 + t415;
  t420 = t269*t407;
  t422 = t273*t412;
  t423 = t420 + t422;
  t446 = t31*t338;
  t447 = t342*t77*t99;
  t448 = t446 + t447;
  t451 = t342*t15*t69;
  t452 = t81*t448;
  t453 = t451 + t452;
  t455 = t81*t342*t15;
  t456 = -1.*t69*t448;
  t457 = t455 + t456;
  t439 = -1.*t342*t31*t77;
  t441 = t338*t99;
  t442 = t439 + t441;
  t465 = t102*t453;
  t468 = t117*t457;
  t469 = t465 + t468;
  t459 = -1.*t117*t453;
  t460 = t102*t457;
  t461 = t459 + t460;
  t476 = t38*t442;
  t478 = -1.*t56*t469;
  t479 = t476 + t478;
  t481 = t145*t461;
  t482 = t138*t479;
  t486 = t481 + t482;
  t488 = t138*t461;
  t490 = -1.*t145*t479;
  t491 = t488 + t490;
  t494 = -1.*t209*t486;
  t496 = t198*t491;
  t497 = t494 + t496;
  t499 = t198*t486;
  t500 = t209*t491;
  t502 = t499 + t500;
  t504 = t235*t497;
  t506 = t230*t502;
  t507 = t504 + t506;
  t510 = t230*t497;
  t512 = -1.*t235*t502;
  t514 = t510 + t512;
  t516 = -1.*t273*t507;
  t518 = t269*t514;
  t519 = t516 + t518;
  t521 = t269*t507;
  t522 = t273*t514;
  t523 = t521 + t522;
  p_output1[0]=0. + t111*t114 + t123*t136 + t148*t161 + t169*t172 + t190*t195 + t215*t219 + t224*t227 + t240*t251 + t259*t264 + t279*t285 + t295*t299 + t312*t316 + t321*t324 + 0.0306*(t310*t316 + t302*t324) - 1.1312*(t302*t316 - 1.*t310*t324) - 0.1305*(t172*t38 + t15*t31*t56) + t15*t31*t61 + t76*t77 - 1.*t15*t98*t99 + var1[0];
  p_output1[1]=0. + t111*t357 + t123*t362 + t148*t367 + t169*t373 + t190*t384 + t215*t388 + t224*t392 + t240*t398 + t259*t402 + t279*t407 + t295*t412 + t312*t418 + t321*t423 + 0.0306*(t310*t418 + t302*t423) - 1.1312*(t302*t418 - 1.*t310*t423) - 0.1305*(t373*t38 + t344*t56) + t344*t61 - 1.*t15*t338*t76 + t351*t98 + var1[1];
  p_output1[2]=0. + t111*t453 + t123*t457 + t148*t461 + t169*t469 + t190*t479 + t215*t486 + t224*t491 + t240*t497 + t259*t502 + t279*t507 + t295*t514 + t312*t519 + t321*t523 + 0.0306*(t310*t519 + t302*t523) - 1.1312*(t302*t519 - 1.*t310*t523) - 0.1305*(t38*t469 + t442*t56) + t442*t61 + t15*t342*t76 + t448*t98 + var1[2];
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

#include "RightToeBottom.hh"

namespace SymFunction
{

void RightToeBottom_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
