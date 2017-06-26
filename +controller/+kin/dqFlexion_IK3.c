/*
 * Automatically Generated from Mathematica.
 * Fri 23 Jun 2017 12:39:45 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t497;
  double t515;
  double t522;
  double t528;
  double t529;
  double t548;
  double t557;
  double t559;
  double t563;
  double t605;
  double t619;
  double t621;
  double t637;
  double t643;
  double t644;
  double t649;
  double t627;
  double t658;
  double t669;
  double t701;
  double t736;
  double t737;
  double t740;
  double t749;
  double t765;
  double t772;
  double t774;
  double t785;
  double t790;
  double t568;
  double t618;
  double t628;
  double t632;
  double t650;
  double t652;
  double t653;
  double t655;
  double t659;
  double t660;
  double t671;
  double t685;
  double t687;
  double t698;
  double t703;
  double t715;
  double t717;
  double t791;
  double t804;
  double t806;
  double t807;
  double t810;
  double t814;
  double t817;
  double t823;
  double t825;
  double t826;
  double t827;
  double t828;
  double t829;
  double t832;
  double t833;
  double t835;
  double t836;
  double t840;
  double t843;
  double t844;
  double t845;
  double t847;
  double t848;
  double t850;
  double t861;
  double t866;
  double t870;
  double t873;
  double t874;
  double t877;
  double t879;
  double t725;
  double t911;
  double t914;
  double t915;
  double t921;
  double t923;
  double t924;
  double t928;
  double t930;
  double t936;
  double t931;
  double t937;
  double t939;
  double t940;
  double t882;
  double t949;
  double t950;
  double t953;
  double t954;
  double t956;
  double t957;
  double t960;
  double t961;
  double t962;
  double t891;
  double t893;
  double t897;
  double t899;
  double t904;
  double t905;
  double t906;
  double t907;
  t497 = Power(var2[0],2);
  t515 = 7.389631520540365e45*t497;
  t522 = 7.196137048348655e88*t497;
  t528 = Power(var2[0],4);
  t529 = -6.78756814823791e88*t528;
  t548 = -6.096939283359201e85 + t522 + t529;
  t557 = Sqrt(t548);
  t559 = -1.*t557;
  t563 = -3.9172204239607165e45 + t515 + t559;
  t605 = Power(t563,2);
  t619 = -6.529726269561443e-92*t605;
  t621 = 1. + t619;
  t637 = 2.5553329077757057e-46*t563;
  t643 = ArcCos(t637);
  t644 = 0.226893 + t643;
  t649 = Cos(t644);
  t627 = Sqrt(t621);
  t658 = Power(t649,2);
  t669 = Sin(t644);
  t701 = Power(t669,2);
  t736 = Cos(var1[0]);
  t737 = -3.444588759681651e-39*t563;
  t740 = 9.91e7*t627;
  t749 = 2.0442663262205644e-39*t563*t649;
  t765 = 8.16e7*t627*t649;
  t772 = -2.085151652744976e-38*t563*t669;
  t774 = 8.e6*t627*t669;
  t785 = t737 + t740 + t749 + t765 + t772 + t774;
  t790 = Sin(var1[0]);
  t568 = 3.038801893926869e-39*t563;
  t618 = 1.6328430054426058e-84*t605;
  t628 = 1.6176e6*t627;
  t632 = 2.5006301e7*t621;
  t650 = 2.502181983293971e-39*t563*t649;
  t652 = 2.6049428790737635e-84*t605*t649;
  t653 = -960000.*t627*t649;
  t655 = 3.98936e7*t621*t649;
  t659 = 1.0974119157675743e-84*t605*t658;
  t660 = 1.68064e7*t621*t658;
  t671 = 2.4531195914646776e-40*t563*t669;
  t685 = 6.179628465892636e-85*t605*t669;
  t687 = 9.792e6*t627*t669;
  t698 = 9.46384e6*t621*t669;
  t703 = 1.0974119157675743e-84*t605*t701;
  t715 = 1.68064e7*t621*t701;
  t717 = 1.44e6 + t568 + t618 + t628 + t632 + t650 + t652 + t653 + t655 + t659 + t660 + t671 + t685 + t687 + t698 + t703 + t715;
  t791 = Power(t785,2);
  t804 = Power(t790,2);
  t806 = t497*t804*t791;
  t807 = -3.038801893926869e-39*t563;
  t810 = -1.6031800261342928e-84*t605;
  t814 = -1.6176e6*t627;
  t817 = -1.706793730422258e-39*t563*t627;
  t823 = -454276.*t621;
  t825 = -2.502181983293971e-39*t563*t649;
  t826 = -2.640151163119239e-84*t605*t649;
  t827 = 960000.*t627*t649;
  t828 = -3.92458249307824e-40*t563*t627*t649;
  t829 = 539200.*t621*t649;
  t832 = -1.086964353736276e-84*t605*t658;
  t833 = 8.340606610979903e-40*t563*t627*t658;
  t835 = -160000.*t621*t658;
  t836 = 1.e8*t497*t804;
  t840 = -2.4531195914646776e-40*t563*t669;
  t843 = -2.5883834932541557e-85*t605*t669;
  t844 = -9.792e6*t627*t669;
  t845 = -1.0469709989738621e-38*t563*t627*t669;
  t847 = -5.49984e6*t621*t669;
  t848 = -2.131302654384855e-85*t605*t649*t669;
  t850 = -8.425648090150679e-39*t563*t627*t649*t669;
  t861 = 3.264e6*t621*t649*t669;
  t866 = -1.0447562031298307e-86*t605*t701;
  t870 = -8.340606610979903e-40*t563*t627*t701;
  t873 = -1.66464e7*t621*t701;
  t874 = -1.44e6 + t807 + t810 + t814 + t817 + t823 + t825 + t826 + t827 + t828 + t829 + t832 + t833 + t835 + t836 + t840 + t843 + t844 + t845 + t847 + t848 + t850 + t861 + t866 + t870 + t873;
  t877 = -4.*t874*t717;
  t879 = t806 + t877;
  t725 = 1/t717;
  t911 = 1.477926304108073e46*var2[0];
  t914 = 1.439227409669731e89*var2[0];
  t915 = Power(var2[0],3);
  t921 = -2.715027259295164e89*t915;
  t923 = t914 + t921;
  t924 = 1/Sqrt(t548);
  t928 = -0.5*t923*t924;
  t930 = t911 + t928;
  t936 = 1/Sqrt(t621);
  t931 = -3.444588759681651e-39*t930;
  t937 = -6.47095873313539e-84*t930*t563*t936;
  t939 = 9.1438991302582e-100*t930*t563*t936*t649;
  t940 = 0. + t931 + t937 + t939;
  t882 = 1/Sqrt(t879);
  t949 = 3.038801893926869e-39*t930;
  t950 = -1.056248521364259e-85*t930*t563*t936;
  t953 = -7.143671195514219e-102*t930*t563*t936*t649;
  t954 = -1.5791007976722952e-130*t930*t605*t936*t649;
  t956 = -2.4183261785924035e-39*t930*t627*t649;
  t957 = 1.142987391282275e-100*t930*t563*t936*t669;
  t960 = 6.656496261773179e-130*t930*t605*t936*t669;
  t961 = 1.0194142888964089e-38*t930*t627*t669;
  t962 = 0. + t949 + t950 + t953 + t954 + t956 + t957 + t960 + t961;
  t891 = Power(t717,-2);
  t893 = -1.*var2[0]*t790*t785;
  t897 = Sqrt(t879);
  t899 = t893 + t897;
  t904 = Power(t899,2);
  t905 = -0.25*t891*t904;
  t906 = 1. + t905;
  t907 = 1/Sqrt(t906);
  p_output1[0]=0.5*t725*t907*(0.5*(-8.e8*t497*t717*t736*t790 + 2.*t497*t736*t790*t791)*t882 - 1.*t736*t785*var2[0])*var3[0] + t907*(-0.5*t891*t899*t962 + 0.5*t725*(-1.*t785*t790 - 1.*t790*t940*var2[0] + 0.5*t882*(2.*t497*t785*t804*t940 - 4.*t874*t962 + 2.*t791*t804*var2[0] - 4.*t717*(0. - 3.038801893926869e-39*t930 - 3.1470340936519598e-84*t563*t930 - 1.706793730422258e-39*t627*t930 - 2.6753594471647136e-84*t563*t649*t930 + 1.0129339646422898e-39*t627*t649*t930 + 1.0028614793843246e-85*t563*t669*t930 - 1.0331926439351355e-38*t627*t669*t930 + 1.056248521364259e-85*t563*t930*t936 + 1.114489585826099e-130*t605*t930*t936 + 7.143671195514219e-102*t563*t649*t930*t936 + 9.176826458467173e-131*t605*t649*t930*t936 - 1.142987391282275e-100*t563*t669*t930*t936 + 8.996888684771729e-132*t605*t669*t930*t936 - 8.008332380732404e-146*t605*t649*t669*t930*t936 + 2.e8*t804*var2[0]))))*var4[0];
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "dqFlexion_IK3.hh"

namespace SymExpression
{

void dqFlexion_IK3_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
