/*
 * Automatically Generated from Mathematica.
 * Mon 10 Jul 2017 14:13:00 GMT-04:00
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
  double t161;
  double t189;
  double t390;
  double t423;
  double t430;
  double t480;
  double t540;
  double t546;
  double t549;
  double t530;
  double t531;
  double t536;
  double t559;
  double t649;
  double t653;
  double t657;
  double t664;
  double t690;
  double t695;
  double t701;
  double t644;
  double t570;
  double t588;
  double t593;
  double t606;
  double t635;
  double t639;
  double t640;
  double t749;
  double t750;
  double t754;
  double t757;
  double t758;
  double t765;
  double t780;
  double t799;
  double t800;
  double t803;
  double t815;
  double t816;
  double t818;
  double t824;
  double t828;
  double t830;
  double t838;
  double t845;
  double t847;
  double t851;
  double t880;
  double t890;
  double t891;
  double t904;
  double t905;
  double t906;
  double t910;
  double t926;
  double t933;
  double t936;
  double t947;
  double t950;
  double t953;
  double t281;
  double t287;
  double t332;
  double t356;
  double t1002;
  double t438;
  double t461;
  double t487;
  double t501;
  double t511;
  double t523;
  double t998;
  double t1001;
  double t1003;
  double t1006;
  double t564;
  double t566;
  double t597;
  double t629;
  double t634;
  double t1022;
  double t1025;
  double t1026;
  double t1015;
  double t1017;
  double t1019;
  double t658;
  double t668;
  double t669;
  double t703;
  double t708;
  double t709;
  double t1056;
  double t1061;
  double t1062;
  double t1039;
  double t1044;
  double t1053;
  double t737;
  double t738;
  double t746;
  double t779;
  double t789;
  double t792;
  double t1030;
  double t1032;
  double t1033;
  double t1087;
  double t1089;
  double t1092;
  double t805;
  double t811;
  double t813;
  double t831;
  double t840;
  double t841;
  double t1095;
  double t1096;
  double t1097;
  double t1101;
  double t1102;
  double t1107;
  double t860;
  double t872;
  double t878;
  double t909;
  double t918;
  double t921;
  double t1119;
  double t1124;
  double t1129;
  double t1134;
  double t1135;
  double t1139;
  double t943;
  double t945;
  double t946;
  double t1142;
  double t1145;
  double t1146;
  double t1148;
  double t1149;
  double t1150;
  double t1183;
  double t1184;
  double t1187;
  double t1199;
  double t1201;
  double t1205;
  double t1195;
  double t1196;
  double t1197;
  double t1234;
  double t1235;
  double t1237;
  double t1228;
  double t1231;
  double t1232;
  double t1210;
  double t1221;
  double t1223;
  double t1248;
  double t1250;
  double t1253;
  double t1265;
  double t1268;
  double t1270;
  double t1276;
  double t1277;
  double t1278;
  double t1280;
  double t1284;
  double t1285;
  double t1289;
  double t1291;
  double t1294;
  double t1306;
  double t1311;
  double t1315;
  double t1318;
  double t1319;
  double t1320;
  t161 = Cos(var1[4]);
  t189 = Cos(var1[6]);
  t390 = Sin(var1[5]);
  t423 = Sin(var1[4]);
  t430 = Sin(var1[6]);
  t480 = Cos(var1[7]);
  t540 = t189*t423;
  t546 = t161*t390*t430;
  t549 = t540 + t546;
  t530 = -1.*t161*t189*t390;
  t531 = t423*t430;
  t536 = t530 + t531;
  t559 = Sin(var1[7]);
  t649 = Cos(var1[8]);
  t653 = -1.*t649;
  t657 = 1. + t653;
  t664 = Sin(var1[8]);
  t690 = t480*t536;
  t695 = t549*t559;
  t701 = t690 + t695;
  t644 = Cos(var1[5]);
  t570 = Cos(var1[9]);
  t588 = -1.*t570;
  t593 = 1. + t588;
  t606 = Sin(var1[9]);
  t635 = t480*t549;
  t639 = -1.*t536*t559;
  t640 = t635 + t639;
  t749 = t161*t644*t649;
  t750 = -1.*t701*t664;
  t754 = t749 + t750;
  t757 = Cos(var1[10]);
  t758 = -1.*t757;
  t765 = 1. + t758;
  t780 = Sin(var1[10]);
  t799 = t606*t640;
  t800 = t570*t754;
  t803 = t799 + t800;
  t815 = t570*t640;
  t816 = -1.*t606*t754;
  t818 = t815 + t816;
  t824 = Cos(var1[11]);
  t828 = -1.*t824;
  t830 = 1. + t828;
  t838 = Sin(var1[11]);
  t845 = -1.*t780*t803;
  t847 = t757*t818;
  t851 = t845 + t847;
  t880 = t757*t803;
  t890 = t780*t818;
  t891 = t880 + t890;
  t904 = Cos(var1[12]);
  t905 = -1.*t904;
  t906 = 1. + t905;
  t910 = Sin(var1[12]);
  t926 = t838*t851;
  t933 = t824*t891;
  t936 = t926 + t933;
  t947 = t824*t851;
  t950 = -1.*t838*t891;
  t953 = t947 + t950;
  t281 = -1.*t189;
  t287 = 1. + t281;
  t332 = 0.135*t287;
  t356 = 0. + t332;
  t1002 = Sin(var1[3]);
  t438 = -0.135*t430;
  t461 = 0. + t438;
  t487 = -1.*t480;
  t501 = 1. + t487;
  t511 = 0.135*t501;
  t523 = 0. + t511;
  t998 = Cos(var1[3]);
  t1001 = t998*t644;
  t1003 = -1.*t1002*t423*t390;
  t1006 = t1001 + t1003;
  t564 = -0.135*t559;
  t566 = 0. + t564;
  t597 = -0.09*t593;
  t629 = 0.049*t606;
  t634 = 0. + t597 + t629;
  t1022 = -1.*t161*t189*t1002;
  t1025 = -1.*t1006*t430;
  t1026 = t1022 + t1025;
  t1015 = t189*t1006;
  t1017 = -1.*t161*t1002*t430;
  t1019 = t1015 + t1017;
  t658 = -0.049*t657;
  t668 = -0.135*t664;
  t669 = 0. + t658 + t668;
  t703 = 0.135*t657;
  t708 = -0.049*t664;
  t709 = 0. + t703 + t708;
  t1056 = t480*t1019;
  t1061 = t1026*t559;
  t1062 = t1056 + t1061;
  t1039 = t644*t1002*t423;
  t1044 = t998*t390;
  t1053 = t1039 + t1044;
  t737 = -0.049*t593;
  t738 = -0.09*t606;
  t746 = 0. + t737 + t738;
  t779 = -0.049*t765;
  t789 = -0.21*t780;
  t792 = 0. + t779 + t789;
  t1030 = t480*t1026;
  t1032 = -1.*t1019*t559;
  t1033 = t1030 + t1032;
  t1087 = t649*t1053;
  t1089 = -1.*t1062*t664;
  t1092 = t1087 + t1089;
  t805 = -0.21*t765;
  t811 = 0.049*t780;
  t813 = 0. + t805 + t811;
  t831 = -0.2707*t830;
  t840 = 0.0016*t838;
  t841 = 0. + t831 + t840;
  t1095 = t606*t1033;
  t1096 = t570*t1092;
  t1097 = t1095 + t1096;
  t1101 = t570*t1033;
  t1102 = -1.*t606*t1092;
  t1107 = t1101 + t1102;
  t860 = -0.0016*t830;
  t872 = -0.2707*t838;
  t878 = 0. + t860 + t872;
  t909 = 0.0184*t906;
  t918 = -0.7055*t910;
  t921 = 0. + t909 + t918;
  t1119 = -1.*t780*t1097;
  t1124 = t757*t1107;
  t1129 = t1119 + t1124;
  t1134 = t757*t1097;
  t1135 = t780*t1107;
  t1139 = t1134 + t1135;
  t943 = -0.7055*t906;
  t945 = -0.0184*t910;
  t946 = 0. + t943 + t945;
  t1142 = t838*t1129;
  t1145 = t824*t1139;
  t1146 = t1142 + t1145;
  t1148 = t824*t1129;
  t1149 = -1.*t838*t1139;
  t1150 = t1148 + t1149;
  t1183 = t644*t1002;
  t1184 = t998*t423*t390;
  t1187 = t1183 + t1184;
  t1199 = t998*t161*t189;
  t1201 = -1.*t1187*t430;
  t1205 = t1199 + t1201;
  t1195 = t189*t1187;
  t1196 = t998*t161*t430;
  t1197 = t1195 + t1196;
  t1234 = t480*t1197;
  t1235 = t1205*t559;
  t1237 = t1234 + t1235;
  t1228 = -1.*t998*t644*t423;
  t1231 = t1002*t390;
  t1232 = t1228 + t1231;
  t1210 = t480*t1205;
  t1221 = -1.*t1197*t559;
  t1223 = t1210 + t1221;
  t1248 = t649*t1232;
  t1250 = -1.*t1237*t664;
  t1253 = t1248 + t1250;
  t1265 = t606*t1223;
  t1268 = t570*t1253;
  t1270 = t1265 + t1268;
  t1276 = t570*t1223;
  t1277 = -1.*t606*t1253;
  t1278 = t1276 + t1277;
  t1280 = -1.*t780*t1270;
  t1284 = t757*t1278;
  t1285 = t1280 + t1284;
  t1289 = t757*t1270;
  t1291 = t780*t1278;
  t1294 = t1289 + t1291;
  t1306 = t838*t1285;
  t1311 = t824*t1294;
  t1315 = t1306 + t1311;
  t1318 = t824*t1285;
  t1319 = -1.*t838*t1294;
  t1320 = t1318 + t1319;
  p_output1[0]=0. - 1.*t161*t356*t390 + t423*t461 + t523*t536 + t549*t566 + t634*t640 + t161*t644*t669 + 0.1305*(t161*t644*t664 + t649*t701) + t701*t709 + t746*t754 + t792*t803 + t813*t818 + t841*t851 + t878*t891 + t921*t936 + t946*t953 - 1.1135*(-1.*t910*t936 + t904*t953) - 0.0216*(t904*t936 + t910*t953) + var1[0];
  p_output1[1]=0. + t1006*t356 - 1.*t1002*t161*t461 + t1019*t523 + t1026*t566 + t1033*t634 + 0.1305*(t1062*t649 + t1053*t664) + t1053*t669 + t1062*t709 + t1092*t746 + t1097*t792 + t1107*t813 + t1129*t841 + t1139*t878 - 1.1135*(t1150*t904 - 1.*t1146*t910) - 0.0216*(t1146*t904 + t1150*t910) + t1146*t921 + t1150*t946 + var1[1];
  p_output1[2]=0. + t1187*t356 + t1197*t523 + t1205*t566 + t1223*t634 + 0.1305*(t1237*t649 + t1232*t664) + t1232*t669 + t1237*t709 + t1253*t746 + t1270*t792 + t1278*t813 + t1285*t841 + t1294*t878 - 1.1135*(t1320*t904 - 1.*t1315*t910) - 0.0216*(t1315*t904 + t1320*t910) + t1315*t921 + t1320*t946 + t161*t461*t998 + var1[2];
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
