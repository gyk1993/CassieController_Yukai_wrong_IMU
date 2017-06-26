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
  double t430;
  double t497;
  double t515;
  double t522;
  double t528;
  double t529;
  double t548;
  double t557;
  double t559;
  double t568;
  double t608;
  double t613;
  double t627;
  double t628;
  double t632;
  double t637;
  double t618;
  double t652;
  double t658;
  double t685;
  double t713;
  double t715;
  double t717;
  double t725;
  double t736;
  double t737;
  double t740;
  double t747;
  double t756;
  double t563;
  double t605;
  double t619;
  double t621;
  double t643;
  double t644;
  double t649;
  double t650;
  double t653;
  double t655;
  double t659;
  double t660;
  double t669;
  double t671;
  double t687;
  double t698;
  double t701;
  double t762;
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
  double t835;
  double t836;
  double t840;
  double t843;
  double t844;
  double t845;
  double t847;
  double t848;
  double t703;
  double t891;
  double t893;
  double t897;
  double t899;
  double t904;
  double t905;
  double t906;
  double t907;
  double t911;
  double t908;
  double t914;
  double t915;
  double t920;
  double t850;
  double t930;
  double t931;
  double t936;
  double t937;
  double t939;
  double t940;
  double t941;
  double t942;
  double t946;
  double t870;
  double t873;
  double t874;
  double t877;
  double t879;
  double t882;
  double t883;
  double t885;
  double t887;
  t430 = Power(var2[0],2);
  t497 = 7.389631520540365e45*t430;
  t515 = 7.196137048348655e88*t430;
  t522 = Power(var2[0],4);
  t528 = -6.78756814823791e88*t522;
  t529 = -6.096939283359201e85 + t515 + t528;
  t548 = Sqrt(t529);
  t557 = -1.*t548;
  t559 = -3.9172204239607165e45 + t497 + t557;
  t568 = Power(t559,2);
  t608 = -6.529726269561443e-92*t568;
  t613 = 1. + t608;
  t627 = 2.5553329077757057e-46*t559;
  t628 = ArcCos(t627);
  t632 = 0.226893 + t628;
  t637 = Cos(t632);
  t618 = Sqrt(t613);
  t652 = Power(t637,2);
  t658 = Sin(t632);
  t685 = Power(t658,2);
  t713 = Cos(var1[0]);
  t715 = -3.444588759681651e-39*t559;
  t717 = 9.91e7*t618;
  t725 = 2.0442663262205644e-39*t559*t637;
  t736 = 8.16e7*t618*t637;
  t737 = -2.085151652744976e-38*t559*t658;
  t740 = 8.e6*t618*t658;
  t747 = t715 + t717 + t725 + t736 + t737 + t740;
  t756 = Sin(var1[0]);
  t563 = 3.038801893926869e-39*t559;
  t605 = 1.6328430054426058e-84*t568;
  t619 = 1.6176e6*t618;
  t621 = 2.5006301e7*t613;
  t643 = 2.502181983293971e-39*t559*t637;
  t644 = 2.6049428790737635e-84*t568*t637;
  t649 = -960000.*t618*t637;
  t650 = 3.98936e7*t613*t637;
  t653 = 1.0974119157675743e-84*t568*t652;
  t655 = 1.68064e7*t613*t652;
  t659 = 2.4531195914646776e-40*t559*t658;
  t660 = 6.179628465892636e-85*t568*t658;
  t669 = 9.792e6*t618*t658;
  t671 = 9.46384e6*t613*t658;
  t687 = 1.0974119157675743e-84*t568*t685;
  t698 = 1.68064e7*t613*t685;
  t701 = 1.44e6 + t563 + t605 + t619 + t621 + t643 + t644 + t649 + t650 + t653 + t655 + t659 + t660 + t669 + t671 + t687 + t698;
  t762 = Power(t747,2);
  t775 = Power(t756,2);
  t785 = t430*t775*t762;
  t787 = -3.038801893926869e-39*t559;
  t790 = -1.6031800261342928e-84*t568;
  t791 = -1.6176e6*t618;
  t793 = -1.706793730422258e-39*t559*t618;
  t798 = -454276.*t613;
  t799 = -2.502181983293971e-39*t559*t637;
  t804 = -2.640151163119239e-84*t568*t637;
  t806 = 960000.*t618*t637;
  t807 = -3.92458249307824e-40*t559*t618*t637;
  t810 = 539200.*t613*t637;
  t814 = -1.086964353736276e-84*t568*t652;
  t817 = 8.340606610979903e-40*t559*t618*t652;
  t823 = -160000.*t613*t652;
  t825 = 1.e8*t430*t775;
  t826 = -2.4531195914646776e-40*t559*t658;
  t827 = -2.5883834932541557e-85*t568*t658;
  t828 = -9.792e6*t618*t658;
  t829 = -1.0469709989738621e-38*t559*t618*t658;
  t832 = -5.49984e6*t613*t658;
  t833 = -2.131302654384855e-85*t568*t637*t658;
  t835 = -8.425648090150679e-39*t559*t618*t637*t658;
  t836 = 3.264e6*t613*t637*t658;
  t840 = -1.0447562031298307e-86*t568*t685;
  t843 = -8.340606610979903e-40*t559*t618*t685;
  t844 = -1.66464e7*t613*t685;
  t845 = -1.44e6 + t787 + t790 + t791 + t793 + t798 + t799 + t804 + t806 + t807 + t810 + t814 + t817 + t823 + t825 + t826 + t827 + t828 + t829 + t832 + t833 + t835 + t836 + t840 + t843 + t844;
  t847 = -4.*t845*t701;
  t848 = t785 + t847;
  t703 = 1/t701;
  t891 = 1.477926304108073e46*var2[0];
  t893 = 1.439227409669731e89*var2[0];
  t897 = Power(var2[0],3);
  t899 = -2.715027259295164e89*t897;
  t904 = t893 + t899;
  t905 = 1/Sqrt(t529);
  t906 = -0.5*t904*t905;
  t907 = t891 + t906;
  t911 = 1/Sqrt(t613);
  t908 = -3.444588759681651e-39*t907;
  t914 = -6.47095873313539e-84*t907*t559*t911;
  t915 = 9.1438991302582e-100*t907*t559*t911*t637;
  t920 = 0. + t908 + t914 + t915;
  t850 = 1/Sqrt(t848);
  t930 = 3.038801893926869e-39*t907;
  t931 = -1.056248521364259e-85*t907*t559*t911;
  t936 = -7.143671195514219e-102*t907*t559*t911*t637;
  t937 = -1.5791007976722952e-130*t907*t568*t911*t637;
  t939 = -2.4183261785924035e-39*t907*t618*t637;
  t940 = 1.142987391282275e-100*t907*t559*t911*t658;
  t941 = 6.656496261773179e-130*t907*t568*t911*t658;
  t942 = 1.0194142888964089e-38*t907*t618*t658;
  t946 = 0. + t930 + t931 + t936 + t937 + t939 + t940 + t941 + t942;
  t870 = Power(t701,-2);
  t873 = -1.*var2[0]*t756*t747;
  t874 = Sqrt(t848);
  t877 = -1.*t874;
  t879 = t873 + t877;
  t882 = Power(t879,2);
  t883 = -0.25*t870*t882;
  t885 = 1. + t883;
  t887 = 1/Sqrt(t885);
  p_output1[0]=-0.5*t703*t887*(-0.5*(-8.e8*t430*t701*t713*t756 + 2.*t430*t713*t756*t762)*t850 - 1.*t713*t747*var2[0])*var3[0] - 1.*t887*(-0.5*t870*t879*t946 + 0.5*t703*(-1.*t747*t756 - 1.*t756*t920*var2[0] - 0.5*t850*(2.*t430*t747*t775*t920 - 4.*t845*t946 + 2.*t762*t775*var2[0] - 4.*t701*(0. - 3.038801893926869e-39*t907 - 3.1470340936519598e-84*t559*t907 - 1.706793730422258e-39*t618*t907 - 2.6753594471647136e-84*t559*t637*t907 + 1.0129339646422898e-39*t618*t637*t907 + 1.0028614793843246e-85*t559*t658*t907 - 1.0331926439351355e-38*t618*t658*t907 + 1.056248521364259e-85*t559*t907*t911 + 1.114489585826099e-130*t568*t907*t911 + 7.143671195514219e-102*t559*t637*t907*t911 + 9.176826458467173e-131*t568*t637*t907*t911 - 1.142987391282275e-100*t559*t658*t907*t911 + 8.996888684771729e-132*t568*t658*t907*t911 - 8.008332380732404e-146*t568*t637*t658*t907*t911 + 2.e8*t775*var2[0]))))*var4[0];
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

#include "dqFlexion_IK2.hh"

namespace SymExpression
{

void dqFlexion_IK2_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
