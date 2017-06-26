/*
 * Automatically Generated from Mathematica.
 * Mon 26 Jun 2017 11:29:53 GMT-04:00
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
  double t63;
  double t80;
  double t166;
  double t185;
  double t190;
  double t221;
  double t259;
  double t261;
  double t263;
  double t251;
  double t252;
  double t255;
  double t272;
  double t327;
  double t330;
  double t333;
  double t340;
  double t355;
  double t358;
  double t362;
  double t326;
  double t283;
  double t289;
  double t292;
  double t300;
  double t319;
  double t321;
  double t322;
  double t392;
  double t393;
  double t397;
  double t400;
  double t401;
  double t408;
  double t413;
  double t425;
  double t426;
  double t428;
  double t435;
  double t436;
  double t438;
  double t442;
  double t444;
  double t446;
  double t450;
  double t455;
  double t457;
  double t461;
  double t482;
  double t487;
  double t488;
  double t496;
  double t497;
  double t498;
  double t500;
  double t510;
  double t515;
  double t518;
  double t529;
  double t531;
  double t532;
  double t111;
  double t116;
  double t135;
  double t148;
  double t559;
  double t196;
  double t213;
  double t227;
  double t233;
  double t239;
  double t246;
  double t557;
  double t558;
  double t560;
  double t563;
  double t277;
  double t279;
  double t295;
  double t315;
  double t318;
  double t573;
  double t576;
  double t577;
  double t567;
  double t568;
  double t570;
  double t334;
  double t344;
  double t345;
  double t363;
  double t366;
  double t367;
  double t594;
  double t597;
  double t598;
  double t586;
  double t587;
  double t592;
  double t386;
  double t387;
  double t390;
  double t412;
  double t419;
  double t422;
  double t581;
  double t583;
  double t584;
  double t613;
  double t615;
  double t618;
  double t430;
  double t432;
  double t434;
  double t447;
  double t451;
  double t452;
  double t621;
  double t622;
  double t623;
  double t627;
  double t628;
  double t631;
  double t470;
  double t475;
  double t480;
  double t499;
  double t506;
  double t509;
  double t635;
  double t637;
  double t640;
  double t644;
  double t645;
  double t647;
  double t525;
  double t527;
  double t528;
  double t649;
  double t650;
  double t651;
  double t653;
  double t654;
  double t655;
  double t676;
  double t677;
  double t679;
  double t689;
  double t691;
  double t695;
  double t685;
  double t686;
  double t687;
  double t712;
  double t713;
  double t715;
  double t707;
  double t709;
  double t710;
  double t698;
  double t701;
  double t703;
  double t725;
  double t727;
  double t730;
  double t733;
  double t735;
  double t736;
  double t740;
  double t741;
  double t742;
  double t744;
  double t746;
  double t747;
  double t749;
  double t750;
  double t753;
  double t760;
  double t762;
  double t765;
  double t768;
  double t769;
  double t770;
  t63 = Cos(var1[4]);
  t80 = Cos(var1[6]);
  t166 = Sin(var1[5]);
  t185 = Sin(var1[4]);
  t190 = Sin(var1[6]);
  t221 = Cos(var1[7]);
  t259 = t80*t185;
  t261 = t63*t166*t190;
  t263 = t259 + t261;
  t251 = -1.*t63*t80*t166;
  t252 = t185*t190;
  t255 = t251 + t252;
  t272 = Sin(var1[7]);
  t327 = Cos(var1[8]);
  t330 = -1.*t327;
  t333 = 1. + t330;
  t340 = Sin(var1[8]);
  t355 = t221*t255;
  t358 = t263*t272;
  t362 = t355 + t358;
  t326 = Cos(var1[5]);
  t283 = Cos(var1[9]);
  t289 = -1.*t283;
  t292 = 1. + t289;
  t300 = Sin(var1[9]);
  t319 = t221*t263;
  t321 = -1.*t255*t272;
  t322 = t319 + t321;
  t392 = t63*t326*t327;
  t393 = -1.*t362*t340;
  t397 = t392 + t393;
  t400 = Cos(var1[10]);
  t401 = -1.*t400;
  t408 = 1. + t401;
  t413 = Sin(var1[10]);
  t425 = t300*t322;
  t426 = t283*t397;
  t428 = t425 + t426;
  t435 = t283*t322;
  t436 = -1.*t300*t397;
  t438 = t435 + t436;
  t442 = Cos(var1[11]);
  t444 = -1.*t442;
  t446 = 1. + t444;
  t450 = Sin(var1[11]);
  t455 = -1.*t413*t428;
  t457 = t400*t438;
  t461 = t455 + t457;
  t482 = t400*t428;
  t487 = t413*t438;
  t488 = t482 + t487;
  t496 = Cos(var1[12]);
  t497 = -1.*t496;
  t498 = 1. + t497;
  t500 = Sin(var1[12]);
  t510 = t450*t461;
  t515 = t442*t488;
  t518 = t510 + t515;
  t529 = t442*t461;
  t531 = -1.*t450*t488;
  t532 = t529 + t531;
  t111 = -1.*t80;
  t116 = 1. + t111;
  t135 = 0.135*t116;
  t148 = 0. + t135;
  t559 = Sin(var1[3]);
  t196 = -0.135*t190;
  t213 = 0. + t196;
  t227 = -1.*t221;
  t233 = 1. + t227;
  t239 = 0.135*t233;
  t246 = 0. + t239;
  t557 = Cos(var1[3]);
  t558 = t557*t326;
  t560 = -1.*t559*t185*t166;
  t563 = t558 + t560;
  t277 = -0.135*t272;
  t279 = 0. + t277;
  t295 = -0.09*t292;
  t315 = 0.049*t300;
  t318 = 0. + t295 + t315;
  t573 = -1.*t63*t80*t559;
  t576 = -1.*t563*t190;
  t577 = t573 + t576;
  t567 = t80*t563;
  t568 = -1.*t63*t559*t190;
  t570 = t567 + t568;
  t334 = -0.049*t333;
  t344 = -0.135*t340;
  t345 = 0. + t334 + t344;
  t363 = 0.135*t333;
  t366 = -0.049*t340;
  t367 = 0. + t363 + t366;
  t594 = t221*t570;
  t597 = t577*t272;
  t598 = t594 + t597;
  t586 = t326*t559*t185;
  t587 = t557*t166;
  t592 = t586 + t587;
  t386 = -0.049*t292;
  t387 = -0.09*t300;
  t390 = 0. + t386 + t387;
  t412 = -0.049*t408;
  t419 = -0.21*t413;
  t422 = 0. + t412 + t419;
  t581 = t221*t577;
  t583 = -1.*t570*t272;
  t584 = t581 + t583;
  t613 = t327*t592;
  t615 = -1.*t598*t340;
  t618 = t613 + t615;
  t430 = -0.21*t408;
  t432 = 0.049*t413;
  t434 = 0. + t430 + t432;
  t447 = -0.2707*t446;
  t451 = 0.0016*t450;
  t452 = 0. + t447 + t451;
  t621 = t300*t584;
  t622 = t283*t618;
  t623 = t621 + t622;
  t627 = t283*t584;
  t628 = -1.*t300*t618;
  t631 = t627 + t628;
  t470 = -0.0016*t446;
  t475 = -0.2707*t450;
  t480 = 0. + t470 + t475;
  t499 = 0.0184*t498;
  t506 = -0.7055*t500;
  t509 = 0. + t499 + t506;
  t635 = -1.*t413*t623;
  t637 = t400*t631;
  t640 = t635 + t637;
  t644 = t400*t623;
  t645 = t413*t631;
  t647 = t644 + t645;
  t525 = -0.7055*t498;
  t527 = -0.0184*t500;
  t528 = 0. + t525 + t527;
  t649 = t450*t640;
  t650 = t442*t647;
  t651 = t649 + t650;
  t653 = t442*t640;
  t654 = -1.*t450*t647;
  t655 = t653 + t654;
  t676 = t326*t559;
  t677 = t557*t185*t166;
  t679 = t676 + t677;
  t689 = t557*t63*t80;
  t691 = -1.*t679*t190;
  t695 = t689 + t691;
  t685 = t80*t679;
  t686 = t557*t63*t190;
  t687 = t685 + t686;
  t712 = t221*t687;
  t713 = t695*t272;
  t715 = t712 + t713;
  t707 = -1.*t557*t326*t185;
  t709 = t559*t166;
  t710 = t707 + t709;
  t698 = t221*t695;
  t701 = -1.*t687*t272;
  t703 = t698 + t701;
  t725 = t327*t710;
  t727 = -1.*t715*t340;
  t730 = t725 + t727;
  t733 = t300*t703;
  t735 = t283*t730;
  t736 = t733 + t735;
  t740 = t283*t703;
  t741 = -1.*t300*t730;
  t742 = t740 + t741;
  t744 = -1.*t413*t736;
  t746 = t400*t742;
  t747 = t744 + t746;
  t749 = t400*t736;
  t750 = t413*t742;
  t753 = t749 + t750;
  t760 = t450*t747;
  t762 = t442*t753;
  t765 = t760 + t762;
  t768 = t442*t747;
  t769 = -1.*t450*t753;
  t770 = t768 + t769;
  p_output1[0]=0. + t185*t213 + t246*t255 + t263*t279 + t318*t322 + t362*t367 + t390*t397 + t422*t428 + t434*t438 + t452*t461 + t480*t488 + t509*t518 + t528*t532 - 1.1135*(-1.*t500*t518 + t496*t532) - 0.0216*(t496*t518 + t500*t532) - 1.*t148*t166*t63 + t326*t345*t63 + 0.1305*(t327*t362 + t326*t340*t63) + var1[0];
  p_output1[1]=0. + t148*t563 + t246*t570 + t279*t577 + t318*t584 + t345*t592 + t367*t598 + 0.1305*(t340*t592 + t327*t598) + t390*t618 + t422*t623 - 1.*t213*t559*t63 + t434*t631 + t452*t640 + t480*t647 + t509*t651 + t528*t655 - 1.1135*(-1.*t500*t651 + t496*t655) - 0.0216*(t496*t651 + t500*t655) + var1[1];
  p_output1[2]=0. + t213*t557*t63 + t148*t679 + t246*t687 + t279*t695 + t318*t703 + t345*t710 + t367*t715 + 0.1305*(t340*t710 + t327*t715) + t390*t730 + t422*t736 + t434*t742 + t452*t747 + t480*t753 + t509*t765 + t528*t770 - 1.1135*(-1.*t500*t765 + t496*t770) - 0.0216*(t496*t765 + t500*t770) + var1[2];
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

#include "LeftToeJoint.hh"

namespace SymFunction
{

void LeftToeJoint_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
