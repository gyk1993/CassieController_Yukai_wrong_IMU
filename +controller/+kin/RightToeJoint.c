/*
 * Automatically Generated from Mathematica.
 * Mon 10 Jul 2017 14:13:01 GMT-04:00
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
  double t477;
  double t755;
  double t799;
  double t805;
  double t860;
  double t943;
  double t921;
  double t926;
  double t933;
  double t880;
  double t985;
  double t990;
  double t995;
  double t634;
  double t640;
  double t669;
  double t708;
  double t567;
  double t1093;
  double t1095;
  double t1096;
  double t1001;
  double t1013;
  double t1015;
  double t1029;
  double t1054;
  double t1061;
  double t1072;
  double t1153;
  double t1154;
  double t1155;
  double t1168;
  double t1173;
  double t1174;
  double t1183;
  double t1192;
  double t1195;
  double t1196;
  double t1232;
  double t1238;
  double t1239;
  double t1248;
  double t1254;
  double t1268;
  double t1276;
  double t1285;
  double t1287;
  double t1289;
  double t1326;
  double t1327;
  double t1336;
  double t1343;
  double t1346;
  double t1347;
  double t1359;
  double t1367;
  double t1373;
  double t1380;
  double t1401;
  double t1403;
  double t1404;
  double t789;
  double t792;
  double t690;
  double t717;
  double t733;
  double t1429;
  double t811;
  double t840;
  double t847;
  double t855;
  double t1434;
  double t890;
  double t900;
  double t909;
  double t918;
  double t1454;
  double t1457;
  double t1470;
  double t946;
  double t960;
  double t1020;
  double t1033;
  double t1035;
  double t1476;
  double t1481;
  double t1482;
  double t1490;
  double t1499;
  double t1500;
  double t1077;
  double t1083;
  double t1087;
  double t1432;
  double t1445;
  double t1451;
  double t1517;
  double t1519;
  double t1521;
  double t1142;
  double t1145;
  double t1148;
  double t1175;
  double t1184;
  double t1190;
  double t1504;
  double t1506;
  double t1510;
  double t1552;
  double t1555;
  double t1556;
  double t1208;
  double t1210;
  double t1223;
  double t1271;
  double t1279;
  double t1284;
  double t1563;
  double t1566;
  double t1574;
  double t1579;
  double t1580;
  double t1583;
  double t1311;
  double t1316;
  double t1318;
  double t1350;
  double t1362;
  double t1365;
  double t1585;
  double t1587;
  double t1593;
  double t1604;
  double t1605;
  double t1612;
  double t1389;
  double t1393;
  double t1395;
  double t1617;
  double t1620;
  double t1621;
  double t1627;
  double t1636;
  double t1639;
  double t1694;
  double t1696;
  double t1700;
  double t1707;
  double t1711;
  double t1713;
  double t1719;
  double t1720;
  double t1724;
  double t1672;
  double t1676;
  double t1684;
  double t1739;
  double t1742;
  double t1743;
  double t1728;
  double t1732;
  double t1736;
  double t1761;
  double t1762;
  double t1763;
  double t1771;
  double t1773;
  double t1778;
  double t1782;
  double t1783;
  double t1786;
  double t1789;
  double t1790;
  double t1791;
  double t1798;
  double t1799;
  double t1803;
  double t1812;
  double t1813;
  double t1816;
  double t1821;
  double t1822;
  double t1825;
  t477 = Cos(var1[4]);
  t755 = Sin(var1[14]);
  t799 = Sin(var1[4]);
  t805 = Cos(var1[14]);
  t860 = Sin(var1[5]);
  t943 = Sin(var1[15]);
  t921 = t755*t799;
  t926 = -1.*t805*t477*t860;
  t933 = t921 + t926;
  t880 = Cos(var1[15]);
  t985 = t805*t799;
  t990 = t477*t755*t860;
  t995 = t985 + t990;
  t634 = Cos(var1[16]);
  t640 = -1.*t634;
  t669 = 1. + t640;
  t708 = Sin(var1[16]);
  t567 = Cos(var1[5]);
  t1093 = t880*t933;
  t1095 = t943*t995;
  t1096 = t1093 + t1095;
  t1001 = Cos(var1[17]);
  t1013 = -1.*t1001;
  t1015 = 1. + t1013;
  t1029 = Sin(var1[17]);
  t1054 = -1.*t943*t933;
  t1061 = t880*t995;
  t1072 = t1054 + t1061;
  t1153 = t634*t477*t567;
  t1154 = -1.*t708*t1096;
  t1155 = t1153 + t1154;
  t1168 = Cos(var1[18]);
  t1173 = -1.*t1168;
  t1174 = 1. + t1173;
  t1183 = Sin(var1[18]);
  t1192 = t1029*t1072;
  t1195 = t1001*t1155;
  t1196 = t1192 + t1195;
  t1232 = t1001*t1072;
  t1238 = -1.*t1029*t1155;
  t1239 = t1232 + t1238;
  t1248 = Cos(var1[19]);
  t1254 = -1.*t1248;
  t1268 = 1. + t1254;
  t1276 = Sin(var1[19]);
  t1285 = -1.*t1183*t1196;
  t1287 = t1168*t1239;
  t1289 = t1285 + t1287;
  t1326 = t1168*t1196;
  t1327 = t1183*t1239;
  t1336 = t1326 + t1327;
  t1343 = Cos(var1[20]);
  t1346 = -1.*t1343;
  t1347 = 1. + t1346;
  t1359 = Sin(var1[20]);
  t1367 = t1276*t1289;
  t1373 = t1248*t1336;
  t1380 = t1367 + t1373;
  t1401 = t1248*t1289;
  t1403 = -1.*t1276*t1336;
  t1404 = t1401 + t1403;
  t789 = 0.135*t755;
  t792 = 0. + t789;
  t690 = -0.049*t669;
  t717 = 0.135*t708;
  t733 = 0. + t690 + t717;
  t1429 = Sin(var1[3]);
  t811 = -1.*t805;
  t840 = 1. + t811;
  t847 = -0.135*t840;
  t855 = 0. + t847;
  t1434 = Cos(var1[3]);
  t890 = -1.*t880;
  t900 = 1. + t890;
  t909 = -0.135*t900;
  t918 = 0. + t909;
  t1454 = t1434*t567;
  t1457 = -1.*t1429*t799*t860;
  t1470 = t1454 + t1457;
  t946 = 0.135*t943;
  t960 = 0. + t946;
  t1020 = -0.09*t1015;
  t1033 = 0.049*t1029;
  t1035 = 0. + t1020 + t1033;
  t1476 = -1.*t477*t755*t1429;
  t1481 = t805*t1470;
  t1482 = t1476 + t1481;
  t1490 = -1.*t805*t477*t1429;
  t1499 = -1.*t755*t1470;
  t1500 = t1490 + t1499;
  t1077 = -0.135*t669;
  t1083 = -0.049*t708;
  t1087 = 0. + t1077 + t1083;
  t1432 = t567*t1429*t799;
  t1445 = t1434*t860;
  t1451 = t1432 + t1445;
  t1517 = t880*t1482;
  t1519 = t943*t1500;
  t1521 = t1517 + t1519;
  t1142 = -0.049*t1015;
  t1145 = -0.09*t1029;
  t1148 = 0. + t1142 + t1145;
  t1175 = -0.049*t1174;
  t1184 = -0.21*t1183;
  t1190 = 0. + t1175 + t1184;
  t1504 = -1.*t943*t1482;
  t1506 = t880*t1500;
  t1510 = t1504 + t1506;
  t1552 = t634*t1451;
  t1555 = -1.*t708*t1521;
  t1556 = t1552 + t1555;
  t1208 = -0.21*t1174;
  t1210 = 0.049*t1183;
  t1223 = 0. + t1208 + t1210;
  t1271 = -0.2707*t1268;
  t1279 = 0.0016*t1276;
  t1284 = 0. + t1271 + t1279;
  t1563 = t1029*t1510;
  t1566 = t1001*t1556;
  t1574 = t1563 + t1566;
  t1579 = t1001*t1510;
  t1580 = -1.*t1029*t1556;
  t1583 = t1579 + t1580;
  t1311 = -0.0016*t1268;
  t1316 = -0.2707*t1276;
  t1318 = 0. + t1311 + t1316;
  t1350 = 0.0184*t1347;
  t1362 = -0.7055*t1359;
  t1365 = 0. + t1350 + t1362;
  t1585 = -1.*t1183*t1574;
  t1587 = t1168*t1583;
  t1593 = t1585 + t1587;
  t1604 = t1168*t1574;
  t1605 = t1183*t1583;
  t1612 = t1604 + t1605;
  t1389 = -0.7055*t1347;
  t1393 = -0.0184*t1359;
  t1395 = 0. + t1389 + t1393;
  t1617 = t1276*t1593;
  t1620 = t1248*t1612;
  t1621 = t1617 + t1620;
  t1627 = t1248*t1593;
  t1636 = -1.*t1276*t1612;
  t1639 = t1627 + t1636;
  t1694 = t567*t1429;
  t1696 = t1434*t799*t860;
  t1700 = t1694 + t1696;
  t1707 = t1434*t477*t755;
  t1711 = t805*t1700;
  t1713 = t1707 + t1711;
  t1719 = t805*t1434*t477;
  t1720 = -1.*t755*t1700;
  t1724 = t1719 + t1720;
  t1672 = -1.*t1434*t567*t799;
  t1676 = t1429*t860;
  t1684 = t1672 + t1676;
  t1739 = t880*t1713;
  t1742 = t943*t1724;
  t1743 = t1739 + t1742;
  t1728 = -1.*t943*t1713;
  t1732 = t880*t1724;
  t1736 = t1728 + t1732;
  t1761 = t634*t1684;
  t1762 = -1.*t708*t1743;
  t1763 = t1761 + t1762;
  t1771 = t1029*t1736;
  t1773 = t1001*t1763;
  t1778 = t1771 + t1773;
  t1782 = t1001*t1736;
  t1783 = -1.*t1029*t1763;
  t1786 = t1782 + t1783;
  t1789 = -1.*t1183*t1778;
  t1790 = t1168*t1786;
  t1791 = t1789 + t1790;
  t1798 = t1168*t1778;
  t1799 = t1183*t1786;
  t1803 = t1798 + t1799;
  t1812 = t1276*t1791;
  t1813 = t1248*t1803;
  t1816 = t1812 + t1813;
  t1821 = t1248*t1791;
  t1822 = -1.*t1276*t1803;
  t1825 = t1821 + t1822;
  p_output1[0]=0. + t1035*t1072 + t1087*t1096 + t1148*t1155 + t1190*t1196 + t1223*t1239 + t1284*t1289 + t1318*t1336 + t1365*t1380 + t1395*t1404 - 1.1135*(-1.*t1359*t1380 + t1343*t1404) - 0.0216*(t1343*t1380 + t1359*t1404) - 0.1305*(t1096*t634 + t477*t567*t708) + t477*t567*t733 + t792*t799 - 1.*t477*t855*t860 + t918*t933 + t960*t995 + var1[0];
  p_output1[1]=0. + t1035*t1510 + t1087*t1521 + t1148*t1556 + t1190*t1574 + t1223*t1583 + t1284*t1593 + t1318*t1612 + t1365*t1621 + t1395*t1639 - 1.1135*(-1.*t1359*t1621 + t1343*t1639) - 0.0216*(t1343*t1621 + t1359*t1639) - 0.1305*(t1521*t634 + t1451*t708) + t1451*t733 - 1.*t1429*t477*t792 + t1470*t855 + t1482*t918 + t1500*t960 + var1[1];
  p_output1[2]=0. + t1035*t1736 + t1087*t1743 + t1148*t1763 + t1190*t1778 + t1223*t1786 + t1284*t1791 + t1318*t1803 + t1365*t1816 + t1395*t1825 - 1.1135*(-1.*t1359*t1816 + t1343*t1825) - 0.0216*(t1343*t1816 + t1359*t1825) - 0.1305*(t1743*t634 + t1684*t708) + t1684*t733 + t1434*t477*t792 + t1700*t855 + t1713*t918 + t1724*t960 + var1[2];
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
