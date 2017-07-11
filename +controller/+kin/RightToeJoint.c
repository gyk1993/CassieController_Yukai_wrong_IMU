/*
 * Automatically Generated from Mathematica.
 * Tue 11 Jul 2017 19:12:46 GMT-04:00
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
  double t458;
  double t728;
  double t759;
  double t779;
  double t822;
  double t909;
  double t887;
  double t893;
  double t897;
  double t830;
  double t930;
  double t936;
  double t943;
  double t591;
  double t623;
  double t643;
  double t683;
  double t557;
  double t1035;
  double t1039;
  double t1048;
  double t950;
  double t954;
  double t957;
  double t977;
  double t1003;
  double t1011;
  double t1021;
  double t1099;
  double t1105;
  double t1109;
  double t1122;
  double t1123;
  double t1131;
  double t1133;
  double t1141;
  double t1145;
  double t1152;
  double t1165;
  double t1169;
  double t1180;
  double t1202;
  double t1208;
  double t1211;
  double t1226;
  double t1238;
  double t1239;
  double t1244;
  double t1264;
  double t1280;
  double t1282;
  double t1294;
  double t1297;
  double t1301;
  double t1310;
  double t1320;
  double t1321;
  double t1329;
  double t1342;
  double t1343;
  double t1345;
  double t746;
  double t756;
  double t660;
  double t692;
  double t698;
  double t1382;
  double t780;
  double t784;
  double t809;
  double t817;
  double t1388;
  double t845;
  double t853;
  double t860;
  double t883;
  double t1397;
  double t1398;
  double t1402;
  double t919;
  double t928;
  double t976;
  double t984;
  double t997;
  double t1406;
  double t1413;
  double t1417;
  double t1421;
  double t1425;
  double t1429;
  double t1025;
  double t1028;
  double t1030;
  double t1385;
  double t1391;
  double t1395;
  double t1443;
  double t1448;
  double t1452;
  double t1091;
  double t1093;
  double t1097;
  double t1132;
  double t1137;
  double t1138;
  double t1433;
  double t1436;
  double t1438;
  double t1485;
  double t1487;
  double t1490;
  double t1154;
  double t1156;
  double t1162;
  double t1217;
  double t1228;
  double t1232;
  double t1492;
  double t1493;
  double t1494;
  double t1500;
  double t1503;
  double t1513;
  double t1247;
  double t1252;
  double t1253;
  double t1304;
  double t1314;
  double t1317;
  double t1516;
  double t1521;
  double t1522;
  double t1536;
  double t1541;
  double t1542;
  double t1337;
  double t1338;
  double t1340;
  double t1548;
  double t1554;
  double t1560;
  double t1564;
  double t1566;
  double t1569;
  double t1622;
  double t1624;
  double t1630;
  double t1639;
  double t1640;
  double t1642;
  double t1644;
  double t1646;
  double t1649;
  double t1610;
  double t1611;
  double t1616;
  double t1669;
  double t1676;
  double t1684;
  double t1651;
  double t1658;
  double t1660;
  double t1697;
  double t1701;
  double t1702;
  double t1715;
  double t1717;
  double t1720;
  double t1726;
  double t1730;
  double t1731;
  double t1735;
  double t1736;
  double t1739;
  double t1743;
  double t1744;
  double t1747;
  double t1749;
  double t1752;
  double t1753;
  double t1761;
  double t1762;
  double t1768;
  t458 = Cos(var1[4]);
  t728 = Sin(var1[14]);
  t759 = Sin(var1[4]);
  t779 = Cos(var1[14]);
  t822 = Sin(var1[5]);
  t909 = Sin(var1[15]);
  t887 = t728*t759;
  t893 = -1.*t779*t458*t822;
  t897 = t887 + t893;
  t830 = Cos(var1[15]);
  t930 = t779*t759;
  t936 = t458*t728*t822;
  t943 = t930 + t936;
  t591 = Cos(var1[16]);
  t623 = -1.*t591;
  t643 = 1. + t623;
  t683 = Sin(var1[16]);
  t557 = Cos(var1[5]);
  t1035 = t830*t897;
  t1039 = t909*t943;
  t1048 = t1035 + t1039;
  t950 = Cos(var1[17]);
  t954 = -1.*t950;
  t957 = 1. + t954;
  t977 = Sin(var1[17]);
  t1003 = -1.*t909*t897;
  t1011 = t830*t943;
  t1021 = t1003 + t1011;
  t1099 = t591*t458*t557;
  t1105 = t683*t1048;
  t1109 = t1099 + t1105;
  t1122 = Cos(var1[18]);
  t1123 = -1.*t1122;
  t1131 = 1. + t1123;
  t1133 = Sin(var1[18]);
  t1141 = t977*t1021;
  t1145 = t950*t1109;
  t1152 = t1141 + t1145;
  t1165 = t950*t1021;
  t1169 = -1.*t977*t1109;
  t1180 = t1165 + t1169;
  t1202 = Cos(var1[19]);
  t1208 = -1.*t1202;
  t1211 = 1. + t1208;
  t1226 = Sin(var1[19]);
  t1238 = -1.*t1133*t1152;
  t1239 = t1122*t1180;
  t1244 = t1238 + t1239;
  t1264 = t1122*t1152;
  t1280 = t1133*t1180;
  t1282 = t1264 + t1280;
  t1294 = Cos(var1[20]);
  t1297 = -1.*t1294;
  t1301 = 1. + t1297;
  t1310 = Sin(var1[20]);
  t1320 = t1226*t1244;
  t1321 = t1202*t1282;
  t1329 = t1320 + t1321;
  t1342 = t1202*t1244;
  t1343 = -1.*t1226*t1282;
  t1345 = t1342 + t1343;
  t746 = 0.135*t728;
  t756 = 0. + t746;
  t660 = -0.049*t643;
  t692 = -0.135*t683;
  t698 = 0. + t660 + t692;
  t1382 = Sin(var1[3]);
  t780 = -1.*t779;
  t784 = 1. + t780;
  t809 = -0.135*t784;
  t817 = 0. + t809;
  t1388 = Cos(var1[3]);
  t845 = -1.*t830;
  t853 = 1. + t845;
  t860 = -0.135*t853;
  t883 = 0. + t860;
  t1397 = t1388*t557;
  t1398 = -1.*t1382*t759*t822;
  t1402 = t1397 + t1398;
  t919 = 0.135*t909;
  t928 = 0. + t919;
  t976 = -0.09*t957;
  t984 = 0.049*t977;
  t997 = 0. + t976 + t984;
  t1406 = -1.*t458*t728*t1382;
  t1413 = t779*t1402;
  t1417 = t1406 + t1413;
  t1421 = -1.*t779*t458*t1382;
  t1425 = -1.*t728*t1402;
  t1429 = t1421 + t1425;
  t1025 = -0.135*t643;
  t1028 = 0.049*t683;
  t1030 = 0. + t1025 + t1028;
  t1385 = t557*t1382*t759;
  t1391 = t1388*t822;
  t1395 = t1385 + t1391;
  t1443 = t830*t1417;
  t1448 = t909*t1429;
  t1452 = t1443 + t1448;
  t1091 = -0.049*t957;
  t1093 = -0.09*t977;
  t1097 = 0. + t1091 + t1093;
  t1132 = -0.049*t1131;
  t1137 = -0.21*t1133;
  t1138 = 0. + t1132 + t1137;
  t1433 = -1.*t909*t1417;
  t1436 = t830*t1429;
  t1438 = t1433 + t1436;
  t1485 = t591*t1395;
  t1487 = t683*t1452;
  t1490 = t1485 + t1487;
  t1154 = -0.21*t1131;
  t1156 = 0.049*t1133;
  t1162 = 0. + t1154 + t1156;
  t1217 = -0.2707*t1211;
  t1228 = 0.0016*t1226;
  t1232 = 0. + t1217 + t1228;
  t1492 = t977*t1438;
  t1493 = t950*t1490;
  t1494 = t1492 + t1493;
  t1500 = t950*t1438;
  t1503 = -1.*t977*t1490;
  t1513 = t1500 + t1503;
  t1247 = -0.0016*t1211;
  t1252 = -0.2707*t1226;
  t1253 = 0. + t1247 + t1252;
  t1304 = 0.0184*t1301;
  t1314 = -0.7055*t1310;
  t1317 = 0. + t1304 + t1314;
  t1516 = -1.*t1133*t1494;
  t1521 = t1122*t1513;
  t1522 = t1516 + t1521;
  t1536 = t1122*t1494;
  t1541 = t1133*t1513;
  t1542 = t1536 + t1541;
  t1337 = -0.7055*t1301;
  t1338 = -0.0184*t1310;
  t1340 = 0. + t1337 + t1338;
  t1548 = t1226*t1522;
  t1554 = t1202*t1542;
  t1560 = t1548 + t1554;
  t1564 = t1202*t1522;
  t1566 = -1.*t1226*t1542;
  t1569 = t1564 + t1566;
  t1622 = t557*t1382;
  t1624 = t1388*t759*t822;
  t1630 = t1622 + t1624;
  t1639 = t1388*t458*t728;
  t1640 = t779*t1630;
  t1642 = t1639 + t1640;
  t1644 = t779*t1388*t458;
  t1646 = -1.*t728*t1630;
  t1649 = t1644 + t1646;
  t1610 = -1.*t1388*t557*t759;
  t1611 = t1382*t822;
  t1616 = t1610 + t1611;
  t1669 = t830*t1642;
  t1676 = t909*t1649;
  t1684 = t1669 + t1676;
  t1651 = -1.*t909*t1642;
  t1658 = t830*t1649;
  t1660 = t1651 + t1658;
  t1697 = t591*t1616;
  t1701 = t683*t1684;
  t1702 = t1697 + t1701;
  t1715 = t977*t1660;
  t1717 = t950*t1702;
  t1720 = t1715 + t1717;
  t1726 = t950*t1660;
  t1730 = -1.*t977*t1702;
  t1731 = t1726 + t1730;
  t1735 = -1.*t1133*t1720;
  t1736 = t1122*t1731;
  t1739 = t1735 + t1736;
  t1743 = t1122*t1720;
  t1744 = t1133*t1731;
  t1747 = t1743 + t1744;
  t1749 = t1226*t1739;
  t1752 = t1202*t1747;
  t1753 = t1749 + t1752;
  t1761 = t1202*t1739;
  t1762 = -1.*t1226*t1747;
  t1768 = t1761 + t1762;
  p_output1[0]=0. + t1030*t1048 + t1097*t1109 + t1138*t1152 + t1162*t1180 + t1232*t1244 + t1253*t1282 + t1317*t1329 + t1340*t1345 - 1.1135*(-1.*t1310*t1329 + t1294*t1345) - 0.0216*(t1294*t1329 + t1310*t1345) - 0.1305*(t1048*t591 - 1.*t458*t557*t683) + t458*t557*t698 + t756*t759 - 1.*t458*t817*t822 + t883*t897 + t928*t943 + t1021*t997 + var1[0];
  p_output1[1]=0. + t1030*t1452 + t1097*t1490 + t1138*t1494 + t1162*t1513 + t1232*t1522 + t1253*t1542 + t1317*t1560 + t1340*t1569 - 1.1135*(-1.*t1310*t1560 + t1294*t1569) - 0.0216*(t1294*t1560 + t1310*t1569) - 0.1305*(t1452*t591 - 1.*t1395*t683) + t1395*t698 - 1.*t1382*t458*t756 + t1402*t817 + t1417*t883 + t1429*t928 + t1438*t997 + var1[1];
  p_output1[2]=0. + t1030*t1684 + t1097*t1702 + t1138*t1720 + t1162*t1731 + t1232*t1739 + t1253*t1747 + t1317*t1753 + t1340*t1768 - 1.1135*(-1.*t1310*t1753 + t1294*t1768) - 0.0216*(t1294*t1753 + t1310*t1768) - 0.1305*(t1684*t591 - 1.*t1616*t683) + t1616*t698 + t1388*t458*t756 + t1630*t817 + t1642*t883 + t1649*t928 + t1660*t997 + var1[2];
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
