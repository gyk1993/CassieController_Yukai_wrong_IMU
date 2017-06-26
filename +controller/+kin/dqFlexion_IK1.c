/*
 * Automatically Generated from Mathematica.
 * Fri 23 Jun 2017 12:39:44 GMT-04:00
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
  double t412;
  double t430;
  double t497;
  double t515;
  double t522;
  double t528;
  double t529;
  double t548;
  double t557;
  double t563;
  double t592;
  double t593;
  double t618;
  double t619;
  double t621;
  double t627;
  double t605;
  double t644;
  double t652;
  double t660;
  double t695;
  double t698;
  double t701;
  double t703;
  double t713;
  double t715;
  double t717;
  double t723;
  double t730;
  double t559;
  double t568;
  double t608;
  double t613;
  double t628;
  double t632;
  double t637;
  double t643;
  double t649;
  double t650;
  double t653;
  double t655;
  double t658;
  double t659;
  double t669;
  double t671;
  double t685;
  double t731;
  double t742;
  double t747;
  double t749;
  double t756;
  double t762;
  double t765;
  double t772;
  double t774;
  double t775;
  double t785;
  double t787;
  double t790;
  double t791;
  double t793;
  double t798;
  double t799;
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
  double t687;
  double t870;
  double t873;
  double t874;
  double t877;
  double t879;
  double t882;
  double t883;
  double t885;
  double t890;
  double t887;
  double t891;
  double t893;
  double t895;
  double t835;
  double t906;
  double t907;
  double t908;
  double t911;
  double t914;
  double t915;
  double t920;
  double t921;
  double t923;
  double t843;
  double t844;
  double t845;
  double t847;
  double t848;
  double t850;
  double t859;
  double t860;
  double t861;
  t412 = Power(var2[0],2);
  t430 = 7.389631520540365e45*t412;
  t497 = 7.196137048348655e88*t412;
  t515 = Power(var2[0],4);
  t522 = -6.78756814823791e88*t515;
  t528 = -6.096939283359201e85 + t497 + t522;
  t529 = Sqrt(t528);
  t548 = -1.*t529;
  t557 = -3.9172204239607165e45 + t430 + t548;
  t563 = Power(t557,2);
  t592 = -6.529726269561443e-92*t563;
  t593 = 1. + t592;
  t618 = 2.5553329077757057e-46*t557;
  t619 = ArcCos(t618);
  t621 = 0.226893 + t619;
  t627 = Cos(t621);
  t605 = Sqrt(t593);
  t644 = Power(t627,2);
  t652 = Sin(t621);
  t660 = Power(t652,2);
  t695 = Cos(var1[0]);
  t698 = -3.444588759681651e-39*t557;
  t701 = 9.91e7*t605;
  t703 = 2.0442663262205644e-39*t557*t627;
  t713 = 8.16e7*t605*t627;
  t715 = -2.085151652744976e-38*t557*t652;
  t717 = 8.e6*t605*t652;
  t723 = t698 + t701 + t703 + t713 + t715 + t717;
  t730 = Sin(var1[0]);
  t559 = 3.038801893926869e-39*t557;
  t568 = 1.6328430054426058e-84*t563;
  t608 = 1.6176e6*t605;
  t613 = 2.5006301e7*t593;
  t628 = 2.502181983293971e-39*t557*t627;
  t632 = 2.6049428790737635e-84*t563*t627;
  t637 = -960000.*t605*t627;
  t643 = 3.98936e7*t593*t627;
  t649 = 1.0974119157675743e-84*t563*t644;
  t650 = 1.68064e7*t593*t644;
  t653 = 2.4531195914646776e-40*t557*t652;
  t655 = 6.179628465892636e-85*t563*t652;
  t658 = 9.792e6*t605*t652;
  t659 = 9.46384e6*t593*t652;
  t669 = 1.0974119157675743e-84*t563*t660;
  t671 = 1.68064e7*t593*t660;
  t685 = 1.44e6 + t559 + t568 + t608 + t613 + t628 + t632 + t637 + t643 + t649 + t650 + t653 + t655 + t658 + t659 + t669 + t671;
  t731 = Power(t723,2);
  t742 = Power(t730,2);
  t747 = t412*t742*t731;
  t749 = -3.038801893926869e-39*t557;
  t756 = -1.6031800261342928e-84*t563;
  t762 = -1.6176e6*t605;
  t765 = -1.706793730422258e-39*t557*t605;
  t772 = -454276.*t593;
  t774 = -2.502181983293971e-39*t557*t627;
  t775 = -2.640151163119239e-84*t563*t627;
  t785 = 960000.*t605*t627;
  t787 = -3.92458249307824e-40*t557*t605*t627;
  t790 = 539200.*t593*t627;
  t791 = -1.086964353736276e-84*t563*t644;
  t793 = 8.340606610979903e-40*t557*t605*t644;
  t798 = -160000.*t593*t644;
  t799 = 1.e8*t412*t742;
  t804 = -2.4531195914646776e-40*t557*t652;
  t806 = -2.5883834932541557e-85*t563*t652;
  t807 = -9.792e6*t605*t652;
  t810 = -1.0469709989738621e-38*t557*t605*t652;
  t814 = -5.49984e6*t593*t652;
  t817 = -2.131302654384855e-85*t563*t627*t652;
  t823 = -8.425648090150679e-39*t557*t605*t627*t652;
  t825 = 3.264e6*t593*t627*t652;
  t826 = -1.0447562031298307e-86*t563*t660;
  t827 = -8.340606610979903e-40*t557*t605*t660;
  t828 = -1.66464e7*t593*t660;
  t829 = -1.44e6 + t749 + t756 + t762 + t765 + t772 + t774 + t775 + t785 + t787 + t790 + t791 + t793 + t798 + t799 + t804 + t806 + t807 + t810 + t814 + t817 + t823 + t825 + t826 + t827 + t828;
  t832 = -4.*t829*t685;
  t833 = t747 + t832;
  t687 = 1/t685;
  t870 = 1.477926304108073e46*var2[0];
  t873 = 1.439227409669731e89*var2[0];
  t874 = Power(var2[0],3);
  t877 = -2.715027259295164e89*t874;
  t879 = t873 + t877;
  t882 = 1/Sqrt(t528);
  t883 = -0.5*t879*t882;
  t885 = t870 + t883;
  t890 = 1/Sqrt(t593);
  t887 = -3.444588759681651e-39*t885;
  t891 = -6.47095873313539e-84*t885*t557*t890;
  t893 = 9.1438991302582e-100*t885*t557*t890*t627;
  t895 = 0. + t887 + t891 + t893;
  t835 = 1/Sqrt(t833);
  t906 = 3.038801893926869e-39*t885;
  t907 = -1.056248521364259e-85*t885*t557*t890;
  t908 = -7.143671195514219e-102*t885*t557*t890*t627;
  t911 = -1.5791007976722952e-130*t885*t563*t890*t627;
  t914 = -2.4183261785924035e-39*t885*t605*t627;
  t915 = 1.142987391282275e-100*t885*t557*t890*t652;
  t920 = 6.656496261773179e-130*t885*t563*t890*t652;
  t921 = 1.0194142888964089e-38*t885*t605*t652;
  t923 = 0. + t906 + t907 + t908 + t911 + t914 + t915 + t920 + t921;
  t843 = Power(t685,-2);
  t844 = -1.*var2[0]*t730*t723;
  t845 = Sqrt(t833);
  t847 = -1.*t845;
  t848 = t844 + t847;
  t850 = Power(t848,2);
  t859 = -0.25*t843*t850;
  t860 = 1. + t859;
  t861 = 1/Sqrt(t860);
  p_output1[0]=0.5*t687*t861*(-0.5*(-8.e8*t412*t685*t695*t730 + 2.*t412*t695*t730*t731)*t835 - 1.*t695*t723*var2[0])*var3[0] + t861*(-0.5*t843*t848*t923 + 0.5*t687*(-1.*t723*t730 - 1.*t730*t895*var2[0] - 0.5*t835*(2.*t412*t723*t742*t895 - 4.*t829*t923 + 2.*t731*t742*var2[0] - 4.*t685*(0. - 3.038801893926869e-39*t885 - 3.1470340936519598e-84*t557*t885 - 1.706793730422258e-39*t605*t885 - 2.6753594471647136e-84*t557*t627*t885 + 1.0129339646422898e-39*t605*t627*t885 + 1.0028614793843246e-85*t557*t652*t885 - 1.0331926439351355e-38*t605*t652*t885 + 1.056248521364259e-85*t557*t885*t890 + 1.114489585826099e-130*t563*t885*t890 + 7.143671195514219e-102*t557*t627*t885*t890 + 9.176826458467173e-131*t563*t627*t885*t890 - 1.142987391282275e-100*t557*t652*t885*t890 + 8.996888684771729e-132*t563*t652*t885*t890 - 8.008332380732404e-146*t563*t627*t652*t885*t890 + 2.e8*t742*var2[0]))))*var4[0];
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

#include "dqFlexion_IK1.hh"

namespace SymExpression
{

void dqFlexion_IK1_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
