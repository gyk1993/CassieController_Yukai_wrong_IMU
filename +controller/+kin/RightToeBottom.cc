/*
 * Automatically Generated from Mathematica.
 * Mon 3 Jul 2017 14:21:51 GMT-04:00
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
  double t45;
  double t175;
  double t186;
  double t199;
  double t249;
  double t294;
  double t282;
  double t284;
  double t285;
  double t257;
  double t328;
  double t332;
  double t334;
  double t108;
  double t112;
  double t133;
  double t141;
  double t87;
  double t398;
  double t400;
  double t402;
  double t336;
  double t349;
  double t350;
  double t353;
  double t364;
  double t377;
  double t381;
  double t432;
  double t435;
  double t437;
  double t440;
  double t445;
  double t453;
  double t457;
  double t465;
  double t466;
  double t469;
  double t485;
  double t486;
  double t487;
  double t497;
  double t498;
  double t499;
  double t504;
  double t517;
  double t523;
  double t530;
  double t546;
  double t549;
  double t550;
  double t556;
  double t557;
  double t558;
  double t560;
  double t567;
  double t570;
  double t573;
  double t600;
  double t602;
  double t604;
  double t609;
  double t610;
  double t615;
  double t623;
  double t628;
  double t629;
  double t632;
  double t640;
  double t641;
  double t642;
  double t184;
  double t185;
  double t135;
  double t150;
  double t158;
  double t662;
  double t208;
  double t234;
  double t239;
  double t247;
  double t666;
  double t258;
  double t262;
  double t278;
  double t281;
  double t670;
  double t682;
  double t683;
  double t301;
  double t305;
  double t351;
  double t355;
  double t356;
  double t688;
  double t690;
  double t694;
  double t698;
  double t700;
  double t701;
  double t390;
  double t396;
  double t397;
  double t664;
  double t667;
  double t668;
  double t716;
  double t717;
  double t720;
  double t424;
  double t425;
  double t430;
  double t456;
  double t461;
  double t463;
  double t704;
  double t708;
  double t709;
  double t733;
  double t734;
  double t735;
  double t480;
  double t482;
  double t484;
  double t501;
  double t511;
  double t512;
  double t737;
  double t738;
  double t743;
  double t746;
  double t747;
  double t749;
  double t536;
  double t537;
  double t540;
  double t559;
  double t564;
  double t566;
  double t752;
  double t754;
  double t755;
  double t757;
  double t758;
  double t759;
  double t593;
  double t596;
  double t597;
  double t620;
  double t624;
  double t626;
  double t762;
  double t763;
  double t764;
  double t776;
  double t777;
  double t779;
  double t634;
  double t635;
  double t639;
  double t783;
  double t784;
  double t787;
  double t790;
  double t792;
  double t795;
  double t830;
  double t831;
  double t832;
  double t840;
  double t841;
  double t842;
  double t845;
  double t846;
  double t847;
  double t821;
  double t823;
  double t824;
  double t855;
  double t858;
  double t859;
  double t849;
  double t850;
  double t851;
  double t873;
  double t875;
  double t877;
  double t879;
  double t880;
  double t888;
  double t891;
  double t893;
  double t897;
  double t901;
  double t904;
  double t905;
  double t909;
  double t910;
  double t912;
  double t916;
  double t918;
  double t919;
  double t926;
  double t929;
  double t932;
  double t934;
  double t936;
  double t937;
  double t939;
  double t940;
  double t941;
  t45 = Cos(var1[4]);
  t175 = Sin(var1[14]);
  t186 = Sin(var1[4]);
  t199 = Cos(var1[14]);
  t249 = Sin(var1[5]);
  t294 = Sin(var1[15]);
  t282 = t175*t186;
  t284 = -1.*t199*t45*t249;
  t285 = t282 + t284;
  t257 = Cos(var1[15]);
  t328 = t199*t186;
  t332 = t45*t175*t249;
  t334 = t328 + t332;
  t108 = Cos(var1[16]);
  t112 = -1.*t108;
  t133 = 1. + t112;
  t141 = Sin(var1[16]);
  t87 = Cos(var1[5]);
  t398 = t257*t285;
  t400 = t294*t334;
  t402 = t398 + t400;
  t336 = Cos(var1[17]);
  t349 = -1.*t336;
  t350 = 1. + t349;
  t353 = Sin(var1[17]);
  t364 = -1.*t294*t285;
  t377 = t257*t334;
  t381 = t364 + t377;
  t432 = t108*t45*t87;
  t435 = -1.*t141*t402;
  t437 = t432 + t435;
  t440 = Cos(var1[18]);
  t445 = -1.*t440;
  t453 = 1. + t445;
  t457 = Sin(var1[18]);
  t465 = t353*t381;
  t466 = t336*t437;
  t469 = t465 + t466;
  t485 = t336*t381;
  t486 = -1.*t353*t437;
  t487 = t485 + t486;
  t497 = Cos(var1[19]);
  t498 = -1.*t497;
  t499 = 1. + t498;
  t504 = Sin(var1[19]);
  t517 = -1.*t457*t469;
  t523 = t440*t487;
  t530 = t517 + t523;
  t546 = t440*t469;
  t549 = t457*t487;
  t550 = t546 + t549;
  t556 = Cos(var1[20]);
  t557 = -1.*t556;
  t558 = 1. + t557;
  t560 = Sin(var1[20]);
  t567 = t504*t530;
  t570 = t497*t550;
  t573 = t567 + t570;
  t600 = t497*t530;
  t602 = -1.*t504*t550;
  t604 = t600 + t602;
  t609 = Cos(var1[21]);
  t610 = -1.*t609;
  t615 = 1. + t610;
  t623 = Sin(var1[21]);
  t628 = -1.*t560*t573;
  t629 = t556*t604;
  t632 = t628 + t629;
  t640 = t556*t573;
  t641 = t560*t604;
  t642 = t640 + t641;
  t184 = 0.135*t175;
  t185 = 0. + t184;
  t135 = -0.049*t133;
  t150 = 0.135*t141;
  t158 = 0. + t135 + t150;
  t662 = Sin(var1[3]);
  t208 = -1.*t199;
  t234 = 1. + t208;
  t239 = -0.135*t234;
  t247 = 0. + t239;
  t666 = Cos(var1[3]);
  t258 = -1.*t257;
  t262 = 1. + t258;
  t278 = -0.135*t262;
  t281 = 0. + t278;
  t670 = t666*t87;
  t682 = -1.*t662*t186*t249;
  t683 = t670 + t682;
  t301 = 0.135*t294;
  t305 = 0. + t301;
  t351 = -0.09*t350;
  t355 = 0.049*t353;
  t356 = 0. + t351 + t355;
  t688 = -1.*t45*t175*t662;
  t690 = t199*t683;
  t694 = t688 + t690;
  t698 = -1.*t199*t45*t662;
  t700 = -1.*t175*t683;
  t701 = t698 + t700;
  t390 = -0.135*t133;
  t396 = -0.049*t141;
  t397 = 0. + t390 + t396;
  t664 = t87*t662*t186;
  t667 = t666*t249;
  t668 = t664 + t667;
  t716 = t257*t694;
  t717 = t294*t701;
  t720 = t716 + t717;
  t424 = -0.049*t350;
  t425 = -0.09*t353;
  t430 = 0. + t424 + t425;
  t456 = -0.049*t453;
  t461 = -0.21*t457;
  t463 = 0. + t456 + t461;
  t704 = -1.*t294*t694;
  t708 = t257*t701;
  t709 = t704 + t708;
  t733 = t108*t668;
  t734 = -1.*t141*t720;
  t735 = t733 + t734;
  t480 = -0.21*t453;
  t482 = 0.049*t457;
  t484 = 0. + t480 + t482;
  t501 = -0.2707*t499;
  t511 = 0.0016*t504;
  t512 = 0. + t501 + t511;
  t737 = t353*t709;
  t738 = t336*t735;
  t743 = t737 + t738;
  t746 = t336*t709;
  t747 = -1.*t353*t735;
  t749 = t746 + t747;
  t536 = -0.0016*t499;
  t537 = -0.2707*t504;
  t540 = 0. + t536 + t537;
  t559 = 0.0184*t558;
  t564 = -0.7055*t560;
  t566 = 0. + t559 + t564;
  t752 = -1.*t457*t743;
  t754 = t440*t749;
  t755 = t752 + t754;
  t757 = t440*t743;
  t758 = t457*t749;
  t759 = t757 + t758;
  t593 = -0.7055*t558;
  t596 = -0.0184*t560;
  t597 = 0. + t593 + t596;
  t620 = -1.1135*t615;
  t624 = 0.0216*t623;
  t626 = 0. + t620 + t624;
  t762 = t504*t755;
  t763 = t497*t759;
  t764 = t762 + t763;
  t776 = t497*t755;
  t777 = -1.*t504*t759;
  t779 = t776 + t777;
  t634 = -0.0216*t615;
  t635 = -1.1135*t623;
  t639 = 0. + t634 + t635;
  t783 = -1.*t560*t764;
  t784 = t556*t779;
  t787 = t783 + t784;
  t790 = t556*t764;
  t792 = t560*t779;
  t795 = t790 + t792;
  t830 = t87*t662;
  t831 = t666*t186*t249;
  t832 = t830 + t831;
  t840 = t666*t45*t175;
  t841 = t199*t832;
  t842 = t840 + t841;
  t845 = t199*t666*t45;
  t846 = -1.*t175*t832;
  t847 = t845 + t846;
  t821 = -1.*t666*t87*t186;
  t823 = t662*t249;
  t824 = t821 + t823;
  t855 = t257*t842;
  t858 = t294*t847;
  t859 = t855 + t858;
  t849 = -1.*t294*t842;
  t850 = t257*t847;
  t851 = t849 + t850;
  t873 = t108*t824;
  t875 = -1.*t141*t859;
  t877 = t873 + t875;
  t879 = t353*t851;
  t880 = t336*t877;
  t888 = t879 + t880;
  t891 = t336*t851;
  t893 = -1.*t353*t877;
  t897 = t891 + t893;
  t901 = -1.*t457*t888;
  t904 = t440*t897;
  t905 = t901 + t904;
  t909 = t440*t888;
  t910 = t457*t897;
  t912 = t909 + t910;
  t916 = t504*t905;
  t918 = t497*t912;
  t919 = t916 + t918;
  t926 = t497*t905;
  t929 = -1.*t504*t912;
  t932 = t926 + t929;
  t934 = -1.*t560*t919;
  t936 = t556*t932;
  t937 = t934 + t936;
  t939 = t556*t919;
  t940 = t560*t932;
  t941 = t939 + t940;
  p_output1[0]=0. + t185*t186 + t281*t285 + t305*t334 + t356*t381 + t397*t402 + t430*t437 - 1.*t247*t249*t45 + t463*t469 + t484*t487 + t512*t530 + t540*t550 + t566*t573 + t597*t604 + t626*t632 + t639*t642 + 0.0306*(t623*t632 + t609*t642) - 1.1312*(t609*t632 - 1.*t623*t642) + t158*t45*t87 - 0.1305*(t108*t402 + t141*t45*t87) + var1[0];
  p_output1[1]=0. - 1.*t185*t45*t662 + t158*t668 + t247*t683 + t281*t694 + t305*t701 + t356*t709 + t397*t720 - 0.1305*(t141*t668 + t108*t720) + t430*t735 + t463*t743 + t484*t749 + t512*t755 + t540*t759 + t566*t764 + t597*t779 + t626*t787 + t639*t795 + 0.0306*(t623*t787 + t609*t795) - 1.1312*(t609*t787 - 1.*t623*t795) + var1[1];
  p_output1[2]=0. + t185*t45*t666 + t158*t824 + t247*t832 + t281*t842 + t305*t847 + t356*t851 + t397*t859 - 0.1305*(t141*t824 + t108*t859) + t430*t877 + t463*t888 + t484*t897 + t512*t905 + t540*t912 + t566*t919 + t597*t932 + t626*t937 + t639*t941 + 0.0306*(t623*t937 + t609*t941) - 1.1312*(t609*t937 - 1.*t623*t941) + var1[2];
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
