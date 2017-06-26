/*
 * Automatically Generated from Mathematica.
 * Mon 26 Jun 2017 11:29:55 GMT-04:00
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
  double t220;
  double t398;
  double t425;
  double t430;
  double t470;
  double t525;
  double t509;
  double t510;
  double t515;
  double t482;
  double t548;
  double t551;
  double t554;
  double t318;
  double t322;
  double t345;
  double t366;
  double t280;
  double t619;
  double t621;
  double t622;
  double t558;
  double t565;
  double t567;
  double t580;
  double t593;
  double t597;
  double t604;
  double t658;
  double t659;
  double t660;
  double t669;
  double t670;
  double t671;
  double t676;
  double t682;
  double t685;
  double t686;
  double t710;
  double t716;
  double t717;
  double t725;
  double t731;
  double t735;
  double t740;
  double t747;
  double t748;
  double t749;
  double t773;
  double t774;
  double t780;
  double t787;
  double t790;
  double t791;
  double t797;
  double t803;
  double t807;
  double t811;
  double t823;
  double t825;
  double t826;
  double t419;
  double t422;
  double t355;
  double t371;
  double t382;
  double t845;
  double t432;
  double t451;
  double t457;
  double t465;
  double t850;
  double t487;
  double t493;
  double t499;
  double t506;
  double t860;
  double t861;
  double t869;
  double t528;
  double t535;
  double t571;
  double t584;
  double t585;
  double t873;
  double t876;
  double t877;
  double t883;
  double t887;
  double t888;
  double t608;
  double t611;
  double t613;
  double t848;
  double t857;
  double t858;
  double t904;
  double t906;
  double t907;
  double t649;
  double t650;
  double t653;
  double t672;
  double t677;
  double t680;
  double t891;
  double t893;
  double t897;
  double t921;
  double t923;
  double t924;
  double t696;
  double t698;
  double t703;
  double t737;
  double t743;
  double t746;
  double t930;
  double t931;
  double t936;
  double t941;
  double t942;
  double t945;
  double t762;
  double t766;
  double t768;
  double t794;
  double t798;
  double t801;
  double t947;
  double t949;
  double t953;
  double t956;
  double t957;
  double t960;
  double t817;
  double t819;
  double t821;
  double t964;
  double t966;
  double t967;
  double t970;
  double t977;
  double t980;
  double t1018;
  double t1020;
  double t1021;
  double t1023;
  double t1027;
  double t1028;
  double t1033;
  double t1034;
  double t1038;
  double t1000;
  double t1002;
  double t1010;
  double t1052;
  double t1055;
  double t1056;
  double t1042;
  double t1045;
  double t1049;
  double t1074;
  double t1075;
  double t1076;
  double t1084;
  double t1086;
  double t1091;
  double t1095;
  double t1096;
  double t1099;
  double t1102;
  double t1103;
  double t1104;
  double t1111;
  double t1112;
  double t1116;
  double t1125;
  double t1126;
  double t1129;
  double t1134;
  double t1135;
  double t1138;
  t220 = Cos(var1[4]);
  t398 = Sin(var1[14]);
  t425 = Sin(var1[4]);
  t430 = Cos(var1[14]);
  t470 = Sin(var1[5]);
  t525 = Sin(var1[15]);
  t509 = t398*t425;
  t510 = -1.*t430*t220*t470;
  t515 = t509 + t510;
  t482 = Cos(var1[15]);
  t548 = t430*t425;
  t551 = t220*t398*t470;
  t554 = t548 + t551;
  t318 = Cos(var1[16]);
  t322 = -1.*t318;
  t345 = 1. + t322;
  t366 = Sin(var1[16]);
  t280 = Cos(var1[5]);
  t619 = t482*t515;
  t621 = t525*t554;
  t622 = t619 + t621;
  t558 = Cos(var1[17]);
  t565 = -1.*t558;
  t567 = 1. + t565;
  t580 = Sin(var1[17]);
  t593 = -1.*t525*t515;
  t597 = t482*t554;
  t604 = t593 + t597;
  t658 = t318*t220*t280;
  t659 = -1.*t366*t622;
  t660 = t658 + t659;
  t669 = Cos(var1[18]);
  t670 = -1.*t669;
  t671 = 1. + t670;
  t676 = Sin(var1[18]);
  t682 = t580*t604;
  t685 = t558*t660;
  t686 = t682 + t685;
  t710 = t558*t604;
  t716 = -1.*t580*t660;
  t717 = t710 + t716;
  t725 = Cos(var1[19]);
  t731 = -1.*t725;
  t735 = 1. + t731;
  t740 = Sin(var1[19]);
  t747 = -1.*t676*t686;
  t748 = t669*t717;
  t749 = t747 + t748;
  t773 = t669*t686;
  t774 = t676*t717;
  t780 = t773 + t774;
  t787 = Cos(var1[20]);
  t790 = -1.*t787;
  t791 = 1. + t790;
  t797 = Sin(var1[20]);
  t803 = t740*t749;
  t807 = t725*t780;
  t811 = t803 + t807;
  t823 = t725*t749;
  t825 = -1.*t740*t780;
  t826 = t823 + t825;
  t419 = 0.135*t398;
  t422 = 0. + t419;
  t355 = -0.049*t345;
  t371 = 0.135*t366;
  t382 = 0. + t355 + t371;
  t845 = Sin(var1[3]);
  t432 = -1.*t430;
  t451 = 1. + t432;
  t457 = -0.135*t451;
  t465 = 0. + t457;
  t850 = Cos(var1[3]);
  t487 = -1.*t482;
  t493 = 1. + t487;
  t499 = -0.135*t493;
  t506 = 0. + t499;
  t860 = t850*t280;
  t861 = -1.*t845*t425*t470;
  t869 = t860 + t861;
  t528 = 0.135*t525;
  t535 = 0. + t528;
  t571 = -0.09*t567;
  t584 = 0.049*t580;
  t585 = 0. + t571 + t584;
  t873 = -1.*t220*t398*t845;
  t876 = t430*t869;
  t877 = t873 + t876;
  t883 = -1.*t430*t220*t845;
  t887 = -1.*t398*t869;
  t888 = t883 + t887;
  t608 = -0.135*t345;
  t611 = -0.049*t366;
  t613 = 0. + t608 + t611;
  t848 = t280*t845*t425;
  t857 = t850*t470;
  t858 = t848 + t857;
  t904 = t482*t877;
  t906 = t525*t888;
  t907 = t904 + t906;
  t649 = -0.049*t567;
  t650 = -0.09*t580;
  t653 = 0. + t649 + t650;
  t672 = -0.049*t671;
  t677 = -0.21*t676;
  t680 = 0. + t672 + t677;
  t891 = -1.*t525*t877;
  t893 = t482*t888;
  t897 = t891 + t893;
  t921 = t318*t858;
  t923 = -1.*t366*t907;
  t924 = t921 + t923;
  t696 = -0.21*t671;
  t698 = 0.049*t676;
  t703 = 0. + t696 + t698;
  t737 = -0.2707*t735;
  t743 = 0.0016*t740;
  t746 = 0. + t737 + t743;
  t930 = t580*t897;
  t931 = t558*t924;
  t936 = t930 + t931;
  t941 = t558*t897;
  t942 = -1.*t580*t924;
  t945 = t941 + t942;
  t762 = -0.0016*t735;
  t766 = -0.2707*t740;
  t768 = 0. + t762 + t766;
  t794 = 0.0184*t791;
  t798 = -0.7055*t797;
  t801 = 0. + t794 + t798;
  t947 = -1.*t676*t936;
  t949 = t669*t945;
  t953 = t947 + t949;
  t956 = t669*t936;
  t957 = t676*t945;
  t960 = t956 + t957;
  t817 = -0.7055*t791;
  t819 = -0.0184*t797;
  t821 = 0. + t817 + t819;
  t964 = t740*t953;
  t966 = t725*t960;
  t967 = t964 + t966;
  t970 = t725*t953;
  t977 = -1.*t740*t960;
  t980 = t970 + t977;
  t1018 = t280*t845;
  t1020 = t850*t425*t470;
  t1021 = t1018 + t1020;
  t1023 = t850*t220*t398;
  t1027 = t430*t1021;
  t1028 = t1023 + t1027;
  t1033 = t430*t850*t220;
  t1034 = -1.*t398*t1021;
  t1038 = t1033 + t1034;
  t1000 = -1.*t850*t280*t425;
  t1002 = t845*t470;
  t1010 = t1000 + t1002;
  t1052 = t482*t1028;
  t1055 = t525*t1038;
  t1056 = t1052 + t1055;
  t1042 = -1.*t525*t1028;
  t1045 = t482*t1038;
  t1049 = t1042 + t1045;
  t1074 = t318*t1010;
  t1075 = -1.*t366*t1056;
  t1076 = t1074 + t1075;
  t1084 = t580*t1049;
  t1086 = t558*t1076;
  t1091 = t1084 + t1086;
  t1095 = t558*t1049;
  t1096 = -1.*t580*t1076;
  t1099 = t1095 + t1096;
  t1102 = -1.*t676*t1091;
  t1103 = t669*t1099;
  t1104 = t1102 + t1103;
  t1111 = t669*t1091;
  t1112 = t676*t1099;
  t1116 = t1111 + t1112;
  t1125 = t740*t1104;
  t1126 = t725*t1116;
  t1129 = t1125 + t1126;
  t1134 = t725*t1104;
  t1135 = -1.*t740*t1116;
  t1138 = t1134 + t1135;
  p_output1[0]=0. + t220*t280*t382 + t422*t425 - 1.*t220*t465*t470 + t506*t515 + t535*t554 + t585*t604 + t613*t622 - 0.1305*(t220*t280*t366 + t318*t622) + t653*t660 + t680*t686 + t703*t717 + t746*t749 + t768*t780 + t801*t811 + t821*t826 - 1.1135*(-1.*t797*t811 + t787*t826) - 0.0216*(t787*t811 + t797*t826) + var1[0];
  p_output1[1]=0. - 1.*t220*t422*t845 + t382*t858 + t465*t869 + t506*t877 + t535*t888 + t585*t897 + t613*t907 - 0.1305*(t366*t858 + t318*t907) + t653*t924 + t680*t936 + t703*t945 + t746*t953 + t768*t960 + t801*t967 + t821*t980 - 1.1135*(-1.*t797*t967 + t787*t980) - 0.0216*(t787*t967 + t797*t980) + var1[1];
  p_output1[2]=0. - 0.1305*(t1056*t318 + t1010*t366) + t1010*t382 + t1021*t465 + t1028*t506 + t1038*t535 + t1049*t585 + t1056*t613 + t1076*t653 + t1091*t680 + t1099*t703 + t1104*t746 + t1116*t768 - 1.1135*(t1138*t787 - 1.*t1129*t797) - 0.0216*(t1129*t787 + t1138*t797) + t1129*t801 + t1138*t821 + t220*t422*t850 + var1[2];
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

#include "RightToeJoint.hh"

namespace SymFunction
{

void RightToeJoint_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
