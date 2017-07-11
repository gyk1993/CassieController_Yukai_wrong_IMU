/*
 * Automatically Generated from Mathematica.
 * Tue 11 Jul 2017 19:12:45 GMT-04:00
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
  double t160;
  double t186;
  double t364;
  double t409;
  double t418;
  double t461;
  double t523;
  double t526;
  double t529;
  double t501;
  double t503;
  double t510;
  double t536;
  double t634;
  double t636;
  double t641;
  double t655;
  double t626;
  double t629;
  double t633;
  double t668;
  double t558;
  double t560;
  double t564;
  double t573;
  double t613;
  double t622;
  double t623;
  double t723;
  double t728;
  double t729;
  double t734;
  double t736;
  double t743;
  double t752;
  double t762;
  double t765;
  double t768;
  double t789;
  double t791;
  double t792;
  double t796;
  double t798;
  double t803;
  double t811;
  double t821;
  double t822;
  double t828;
  double t853;
  double t856;
  double t859;
  double t863;
  double t872;
  double t878;
  double t884;
  double t897;
  double t900;
  double t905;
  double t932;
  double t933;
  double t935;
  double t264;
  double t282;
  double t302;
  double t350;
  double t969;
  double t423;
  double t436;
  double t466;
  double t480;
  double t486;
  double t491;
  double t960;
  double t962;
  double t971;
  double t972;
  double t552;
  double t554;
  double t569;
  double t584;
  double t591;
  double t991;
  double t994;
  double t997;
  double t984;
  double t985;
  double t989;
  double t643;
  double t658;
  double t660;
  double t677;
  double t683;
  double t687;
  double t1017;
  double t1018;
  double t1019;
  double t1022;
  double t1023;
  double t1024;
  double t717;
  double t718;
  double t722;
  double t746;
  double t756;
  double t759;
  double t1003;
  double t1004;
  double t1011;
  double t1039;
  double t1048;
  double t1051;
  double t780;
  double t784;
  double t785;
  double t809;
  double t813;
  double t817;
  double t1059;
  double t1063;
  double t1064;
  double t1069;
  double t1071;
  double t1074;
  double t838;
  double t841;
  double t845;
  double t883;
  double t887;
  double t893;
  double t1077;
  double t1083;
  double t1084;
  double t1091;
  double t1093;
  double t1096;
  double t919;
  double t928;
  double t930;
  double t1099;
  double t1102;
  double t1103;
  double t1109;
  double t1110;
  double t1114;
  double t1141;
  double t1145;
  double t1148;
  double t1160;
  double t1161;
  double t1162;
  double t1154;
  double t1156;
  double t1157;
  double t1180;
  double t1187;
  double t1189;
  double t1195;
  double t1197;
  double t1199;
  double t1169;
  double t1170;
  double t1177;
  double t1211;
  double t1217;
  double t1221;
  double t1226;
  double t1228;
  double t1231;
  double t1234;
  double t1236;
  double t1238;
  double t1241;
  double t1242;
  double t1243;
  double t1246;
  double t1247;
  double t1250;
  double t1252;
  double t1253;
  double t1255;
  double t1274;
  double t1277;
  double t1279;
  t160 = Cos(var1[4]);
  t186 = Cos(var1[6]);
  t364 = Sin(var1[5]);
  t409 = Sin(var1[4]);
  t418 = Sin(var1[6]);
  t461 = Cos(var1[7]);
  t523 = t186*t409;
  t526 = t160*t364*t418;
  t529 = t523 + t526;
  t501 = -1.*t160*t186*t364;
  t503 = t409*t418;
  t510 = t501 + t503;
  t536 = Sin(var1[7]);
  t634 = Cos(var1[8]);
  t636 = -1.*t634;
  t641 = 1. + t636;
  t655 = Sin(var1[8]);
  t626 = t461*t510;
  t629 = t529*t536;
  t633 = t626 + t629;
  t668 = Cos(var1[5]);
  t558 = Cos(var1[9]);
  t560 = -1.*t558;
  t564 = 1. + t560;
  t573 = Sin(var1[9]);
  t613 = t461*t529;
  t622 = -1.*t510*t536;
  t623 = t613 + t622;
  t723 = t160*t668*t634;
  t728 = t633*t655;
  t729 = t723 + t728;
  t734 = Cos(var1[10]);
  t736 = -1.*t734;
  t743 = 1. + t736;
  t752 = Sin(var1[10]);
  t762 = t573*t623;
  t765 = t558*t729;
  t768 = t762 + t765;
  t789 = t558*t623;
  t791 = -1.*t573*t729;
  t792 = t789 + t791;
  t796 = Cos(var1[11]);
  t798 = -1.*t796;
  t803 = 1. + t798;
  t811 = Sin(var1[11]);
  t821 = -1.*t752*t768;
  t822 = t734*t792;
  t828 = t821 + t822;
  t853 = t734*t768;
  t856 = t752*t792;
  t859 = t853 + t856;
  t863 = Cos(var1[12]);
  t872 = -1.*t863;
  t878 = 1. + t872;
  t884 = Sin(var1[12]);
  t897 = t811*t828;
  t900 = t796*t859;
  t905 = t897 + t900;
  t932 = t796*t828;
  t933 = -1.*t811*t859;
  t935 = t932 + t933;
  t264 = -1.*t186;
  t282 = 1. + t264;
  t302 = 0.135*t282;
  t350 = 0. + t302;
  t969 = Sin(var1[3]);
  t423 = -0.135*t418;
  t436 = 0. + t423;
  t466 = -1.*t461;
  t480 = 1. + t466;
  t486 = 0.135*t480;
  t491 = 0. + t486;
  t960 = Cos(var1[3]);
  t962 = t960*t668;
  t971 = -1.*t969*t409*t364;
  t972 = t962 + t971;
  t552 = -0.135*t536;
  t554 = 0. + t552;
  t569 = -0.09*t564;
  t584 = 0.049*t573;
  t591 = 0. + t569 + t584;
  t991 = -1.*t160*t186*t969;
  t994 = -1.*t972*t418;
  t997 = t991 + t994;
  t984 = t186*t972;
  t985 = -1.*t160*t969*t418;
  t989 = t984 + t985;
  t643 = 0.135*t641;
  t658 = 0.049*t655;
  t660 = 0. + t643 + t658;
  t677 = -0.049*t641;
  t683 = 0.135*t655;
  t687 = 0. + t677 + t683;
  t1017 = t461*t989;
  t1018 = t997*t536;
  t1019 = t1017 + t1018;
  t1022 = t668*t969*t409;
  t1023 = t960*t364;
  t1024 = t1022 + t1023;
  t717 = -0.049*t564;
  t718 = -0.09*t573;
  t722 = 0. + t717 + t718;
  t746 = -0.049*t743;
  t756 = -0.21*t752;
  t759 = 0. + t746 + t756;
  t1003 = t461*t997;
  t1004 = -1.*t989*t536;
  t1011 = t1003 + t1004;
  t1039 = t634*t1024;
  t1048 = t1019*t655;
  t1051 = t1039 + t1048;
  t780 = -0.21*t743;
  t784 = 0.049*t752;
  t785 = 0. + t780 + t784;
  t809 = -0.2707*t803;
  t813 = 0.0016*t811;
  t817 = 0. + t809 + t813;
  t1059 = t573*t1011;
  t1063 = t558*t1051;
  t1064 = t1059 + t1063;
  t1069 = t558*t1011;
  t1071 = -1.*t573*t1051;
  t1074 = t1069 + t1071;
  t838 = -0.0016*t803;
  t841 = -0.2707*t811;
  t845 = 0. + t838 + t841;
  t883 = 0.0184*t878;
  t887 = -0.7055*t884;
  t893 = 0. + t883 + t887;
  t1077 = -1.*t752*t1064;
  t1083 = t734*t1074;
  t1084 = t1077 + t1083;
  t1091 = t734*t1064;
  t1093 = t752*t1074;
  t1096 = t1091 + t1093;
  t919 = -0.7055*t878;
  t928 = -0.0184*t884;
  t930 = 0. + t919 + t928;
  t1099 = t811*t1084;
  t1102 = t796*t1096;
  t1103 = t1099 + t1102;
  t1109 = t796*t1084;
  t1110 = -1.*t811*t1096;
  t1114 = t1109 + t1110;
  t1141 = t668*t969;
  t1145 = t960*t409*t364;
  t1148 = t1141 + t1145;
  t1160 = t960*t160*t186;
  t1161 = -1.*t1148*t418;
  t1162 = t1160 + t1161;
  t1154 = t186*t1148;
  t1156 = t960*t160*t418;
  t1157 = t1154 + t1156;
  t1180 = t461*t1157;
  t1187 = t1162*t536;
  t1189 = t1180 + t1187;
  t1195 = -1.*t960*t668*t409;
  t1197 = t969*t364;
  t1199 = t1195 + t1197;
  t1169 = t461*t1162;
  t1170 = -1.*t1157*t536;
  t1177 = t1169 + t1170;
  t1211 = t634*t1199;
  t1217 = t1189*t655;
  t1221 = t1211 + t1217;
  t1226 = t573*t1177;
  t1228 = t558*t1221;
  t1231 = t1226 + t1228;
  t1234 = t558*t1177;
  t1236 = -1.*t573*t1221;
  t1238 = t1234 + t1236;
  t1241 = -1.*t752*t1231;
  t1242 = t734*t1238;
  t1243 = t1241 + t1242;
  t1246 = t734*t1231;
  t1247 = t752*t1238;
  t1250 = t1246 + t1247;
  t1252 = t811*t1243;
  t1253 = t796*t1250;
  t1255 = t1252 + t1253;
  t1274 = t796*t1243;
  t1277 = -1.*t811*t1250;
  t1279 = t1274 + t1277;
  p_output1[0]=0. - 1.*t160*t350*t364 + t409*t436 + t491*t510 + t529*t554 + t591*t623 + t633*t660 + 0.1305*(t633*t634 - 1.*t160*t655*t668) + t160*t668*t687 + t722*t729 + t759*t768 + t785*t792 + t817*t828 + t845*t859 + t893*t905 + t930*t935 - 1.1135*(-1.*t884*t905 + t863*t935) - 0.0216*(t863*t905 + t884*t935) + var1[0];
  p_output1[1]=0. + t1011*t591 + 0.1305*(t1019*t634 - 1.*t1024*t655) + t1019*t660 + t1024*t687 + t1051*t722 + t1064*t759 + t1074*t785 + t1084*t817 + t1096*t845 - 1.1135*(t1114*t863 - 1.*t1103*t884) - 0.0216*(t1103*t863 + t1114*t884) + t1103*t893 + t1114*t930 - 1.*t160*t436*t969 + t350*t972 + t491*t989 + t554*t997 + var1[1];
  p_output1[2]=0. + t1148*t350 + t1157*t491 + t1162*t554 + t1177*t591 + 0.1305*(t1189*t634 - 1.*t1199*t655) + t1189*t660 + t1199*t687 + t1221*t722 + t1231*t759 + t1238*t785 + t1243*t817 + t1250*t845 - 1.1135*(t1279*t863 - 1.*t1255*t884) - 0.0216*(t1255*t863 + t1279*t884) + t1255*t893 + t1279*t930 + t160*t436*t960 + var1[2];
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
