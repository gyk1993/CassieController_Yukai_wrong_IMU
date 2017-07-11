/*
 * Automatically Generated from Mathematica.
 * Tue 11 Jul 2017 19:12:44 GMT-04:00
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
  double t165;
  double t184;
  double t188;
  double t238;
  double t285;
  double t278;
  double t280;
  double t281;
  double t240;
  double t294;
  double t302;
  double t318;
  double t101;
  double t111;
  double t131;
  double t140;
  double t85;
  double t385;
  double t389;
  double t390;
  double t330;
  double t331;
  double t332;
  double t337;
  double t352;
  double t353;
  double t358;
  double t419;
  double t423;
  double t424;
  double t429;
  double t431;
  double t435;
  double t445;
  double t455;
  double t458;
  double t459;
  double t466;
  double t469;
  double t477;
  double t481;
  double t482;
  double t484;
  double t487;
  double t499;
  double t501;
  double t503;
  double t529;
  double t530;
  double t533;
  double t538;
  double t541;
  double t546;
  double t553;
  double t558;
  double t560;
  double t563;
  double t587;
  double t588;
  double t591;
  double t596;
  double t598;
  double t600;
  double t607;
  double t614;
  double t616;
  double t620;
  double t628;
  double t629;
  double t632;
  double t181;
  double t183;
  double t134;
  double t149;
  double t155;
  double t653;
  double t189;
  double t199;
  double t225;
  double t235;
  double t657;
  double t252;
  double t254;
  double t258;
  double t264;
  double t661;
  double t662;
  double t663;
  double t286;
  double t287;
  double t335;
  double t345;
  double t350;
  double t667;
  double t668;
  double t669;
  double t678;
  double t682;
  double t683;
  double t364;
  double t383;
  double t384;
  double t656;
  double t658;
  double t659;
  double t696;
  double t698;
  double t700;
  double t411;
  double t412;
  double t418;
  double t436;
  double t449;
  double t452;
  double t690;
  double t691;
  double t692;
  double t717;
  double t718;
  double t720;
  double t462;
  double t463;
  double t464;
  double t486;
  double t490;
  double t491;
  double t723;
  double t726;
  double t727;
  double t729;
  double t730;
  double t733;
  double t521;
  double t523;
  double t526;
  double t552;
  double t554;
  double t557;
  double t735;
  double t736;
  double t737;
  double t746;
  double t747;
  double t749;
  double t569;
  double t573;
  double t584;
  double t604;
  double t610;
  double t613;
  double t751;
  double t752;
  double t754;
  double t756;
  double t757;
  double t759;
  double t623;
  double t624;
  double t626;
  double t761;
  double t762;
  double t763;
  double t765;
  double t768;
  double t777;
  double t811;
  double t813;
  double t815;
  double t821;
  double t822;
  double t823;
  double t828;
  double t829;
  double t830;
  double t802;
  double t803;
  double t804;
  double t841;
  double t842;
  double t844;
  double t832;
  double t833;
  double t838;
  double t855;
  double t856;
  double t857;
  double t859;
  double t860;
  double t862;
  double t868;
  double t871;
  double t872;
  double t877;
  double t878;
  double t879;
  double t884;
  double t887;
  double t890;
  double t893;
  double t897;
  double t899;
  double t903;
  double t904;
  double t905;
  double t910;
  double t912;
  double t913;
  double t919;
  double t920;
  double t921;
  t45 = Cos(var1[4]);
  t165 = Sin(var1[14]);
  t184 = Sin(var1[4]);
  t188 = Cos(var1[14]);
  t238 = Sin(var1[5]);
  t285 = Sin(var1[15]);
  t278 = t165*t184;
  t280 = -1.*t188*t45*t238;
  t281 = t278 + t280;
  t240 = Cos(var1[15]);
  t294 = t188*t184;
  t302 = t45*t165*t238;
  t318 = t294 + t302;
  t101 = Cos(var1[16]);
  t111 = -1.*t101;
  t131 = 1. + t111;
  t140 = Sin(var1[16]);
  t85 = Cos(var1[5]);
  t385 = t240*t281;
  t389 = t285*t318;
  t390 = t385 + t389;
  t330 = Cos(var1[17]);
  t331 = -1.*t330;
  t332 = 1. + t331;
  t337 = Sin(var1[17]);
  t352 = -1.*t285*t281;
  t353 = t240*t318;
  t358 = t352 + t353;
  t419 = t101*t45*t85;
  t423 = t140*t390;
  t424 = t419 + t423;
  t429 = Cos(var1[18]);
  t431 = -1.*t429;
  t435 = 1. + t431;
  t445 = Sin(var1[18]);
  t455 = t337*t358;
  t458 = t330*t424;
  t459 = t455 + t458;
  t466 = t330*t358;
  t469 = -1.*t337*t424;
  t477 = t466 + t469;
  t481 = Cos(var1[19]);
  t482 = -1.*t481;
  t484 = 1. + t482;
  t487 = Sin(var1[19]);
  t499 = -1.*t445*t459;
  t501 = t429*t477;
  t503 = t499 + t501;
  t529 = t429*t459;
  t530 = t445*t477;
  t533 = t529 + t530;
  t538 = Cos(var1[20]);
  t541 = -1.*t538;
  t546 = 1. + t541;
  t553 = Sin(var1[20]);
  t558 = t487*t503;
  t560 = t481*t533;
  t563 = t558 + t560;
  t587 = t481*t503;
  t588 = -1.*t487*t533;
  t591 = t587 + t588;
  t596 = Cos(var1[21]);
  t598 = -1.*t596;
  t600 = 1. + t598;
  t607 = Sin(var1[21]);
  t614 = -1.*t553*t563;
  t616 = t538*t591;
  t620 = t614 + t616;
  t628 = t538*t563;
  t629 = t553*t591;
  t632 = t628 + t629;
  t181 = 0.135*t165;
  t183 = 0. + t181;
  t134 = -0.049*t131;
  t149 = -0.135*t140;
  t155 = 0. + t134 + t149;
  t653 = Sin(var1[3]);
  t189 = -1.*t188;
  t199 = 1. + t189;
  t225 = -0.135*t199;
  t235 = 0. + t225;
  t657 = Cos(var1[3]);
  t252 = -1.*t240;
  t254 = 1. + t252;
  t258 = -0.135*t254;
  t264 = 0. + t258;
  t661 = t657*t85;
  t662 = -1.*t653*t184*t238;
  t663 = t661 + t662;
  t286 = 0.135*t285;
  t287 = 0. + t286;
  t335 = -0.09*t332;
  t345 = 0.049*t337;
  t350 = 0. + t335 + t345;
  t667 = -1.*t45*t165*t653;
  t668 = t188*t663;
  t669 = t667 + t668;
  t678 = -1.*t188*t45*t653;
  t682 = -1.*t165*t663;
  t683 = t678 + t682;
  t364 = -0.135*t131;
  t383 = 0.049*t140;
  t384 = 0. + t364 + t383;
  t656 = t85*t653*t184;
  t658 = t657*t238;
  t659 = t656 + t658;
  t696 = t240*t669;
  t698 = t285*t683;
  t700 = t696 + t698;
  t411 = -0.049*t332;
  t412 = -0.09*t337;
  t418 = 0. + t411 + t412;
  t436 = -0.049*t435;
  t449 = -0.21*t445;
  t452 = 0. + t436 + t449;
  t690 = -1.*t285*t669;
  t691 = t240*t683;
  t692 = t690 + t691;
  t717 = t101*t659;
  t718 = t140*t700;
  t720 = t717 + t718;
  t462 = -0.21*t435;
  t463 = 0.049*t445;
  t464 = 0. + t462 + t463;
  t486 = -0.2707*t484;
  t490 = 0.0016*t487;
  t491 = 0. + t486 + t490;
  t723 = t337*t692;
  t726 = t330*t720;
  t727 = t723 + t726;
  t729 = t330*t692;
  t730 = -1.*t337*t720;
  t733 = t729 + t730;
  t521 = -0.0016*t484;
  t523 = -0.2707*t487;
  t526 = 0. + t521 + t523;
  t552 = 0.0184*t546;
  t554 = -0.7055*t553;
  t557 = 0. + t552 + t554;
  t735 = -1.*t445*t727;
  t736 = t429*t733;
  t737 = t735 + t736;
  t746 = t429*t727;
  t747 = t445*t733;
  t749 = t746 + t747;
  t569 = -0.7055*t546;
  t573 = -0.0184*t553;
  t584 = 0. + t569 + t573;
  t604 = -1.1135*t600;
  t610 = 0.0216*t607;
  t613 = 0. + t604 + t610;
  t751 = t487*t737;
  t752 = t481*t749;
  t754 = t751 + t752;
  t756 = t481*t737;
  t757 = -1.*t487*t749;
  t759 = t756 + t757;
  t623 = -0.0216*t600;
  t624 = -1.1135*t607;
  t626 = 0. + t623 + t624;
  t761 = -1.*t553*t754;
  t762 = t538*t759;
  t763 = t761 + t762;
  t765 = t538*t754;
  t768 = t553*t759;
  t777 = t765 + t768;
  t811 = t85*t653;
  t813 = t657*t184*t238;
  t815 = t811 + t813;
  t821 = t657*t45*t165;
  t822 = t188*t815;
  t823 = t821 + t822;
  t828 = t188*t657*t45;
  t829 = -1.*t165*t815;
  t830 = t828 + t829;
  t802 = -1.*t657*t85*t184;
  t803 = t653*t238;
  t804 = t802 + t803;
  t841 = t240*t823;
  t842 = t285*t830;
  t844 = t841 + t842;
  t832 = -1.*t285*t823;
  t833 = t240*t830;
  t838 = t832 + t833;
  t855 = t101*t804;
  t856 = t140*t844;
  t857 = t855 + t856;
  t859 = t337*t838;
  t860 = t330*t857;
  t862 = t859 + t860;
  t868 = t330*t838;
  t871 = -1.*t337*t857;
  t872 = t868 + t871;
  t877 = -1.*t445*t862;
  t878 = t429*t872;
  t879 = t877 + t878;
  t884 = t429*t862;
  t887 = t445*t872;
  t890 = t884 + t887;
  t893 = t487*t879;
  t897 = t481*t890;
  t899 = t893 + t897;
  t903 = t481*t879;
  t904 = -1.*t487*t890;
  t905 = t903 + t904;
  t910 = -1.*t553*t899;
  t912 = t538*t905;
  t913 = t910 + t912;
  t919 = t538*t899;
  t920 = t553*t905;
  t921 = t919 + t920;
  p_output1[0]=0. + t183*t184 + t264*t281 + t287*t318 + t350*t358 + t384*t390 + t418*t424 - 1.*t235*t238*t45 + t452*t459 + t464*t477 + t491*t503 + t526*t533 + t557*t563 + t584*t591 + t613*t620 + t626*t632 + 0.0306*(t607*t620 + t596*t632) - 1.1312*(t596*t620 - 1.*t607*t632) + t155*t45*t85 - 0.1305*(t101*t390 - 1.*t140*t45*t85) + var1[0];
  p_output1[1]=0. - 1.*t183*t45*t653 + t155*t659 + t235*t663 + t264*t669 + t287*t683 + t350*t692 + t384*t700 - 0.1305*(-1.*t140*t659 + t101*t700) + t418*t720 + t452*t727 + t464*t733 + t491*t737 + t526*t749 + t557*t754 + t584*t759 + t613*t763 + t626*t777 + 0.0306*(t607*t763 + t596*t777) - 1.1312*(t596*t763 - 1.*t607*t777) + var1[1];
  p_output1[2]=0. + t183*t45*t657 + t155*t804 + t235*t815 + t264*t823 + t287*t830 + t350*t838 + t384*t844 - 0.1305*(-1.*t140*t804 + t101*t844) + t418*t857 + t452*t862 + t464*t872 + t491*t879 + t526*t890 + t557*t899 + t584*t905 + t613*t913 + t626*t921 + 0.0306*(t607*t913 + t596*t921) - 1.1312*(t596*t913 - 1.*t607*t921) + var1[2];
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
