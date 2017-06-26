/*
 * Automatically Generated from Mathematica.
 * Fri 23 Jun 2017 12:39:46 GMT-04:00
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
  double t515;
  double t522;
  double t528;
  double t529;
  double t548;
  double t557;
  double t559;
  double t563;
  double t568;
  double t618;
  double t628;
  double t632;
  double t649;
  double t650;
  double t652;
  double t653;
  double t637;
  double t669;
  double t687;
  double t717;
  double t765;
  double t772;
  double t774;
  double t787;
  double t793;
  double t798;
  double t799;
  double t806;
  double t810;
  double t605;
  double t627;
  double t643;
  double t644;
  double t655;
  double t658;
  double t659;
  double t660;
  double t671;
  double t685;
  double t698;
  double t701;
  double t703;
  double t715;
  double t725;
  double t737;
  double t740;
  double t814;
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
  double t882;
  double t887;
  double t890;
  double t891;
  double t893;
  double t897;
  double t899;
  double t904;
  double t749;
  double t937;
  double t939;
  double t941;
  double t942;
  double t946;
  double t947;
  double t949;
  double t950;
  double t954;
  double t953;
  double t956;
  double t957;
  double t960;
  double t907;
  double t967;
  double t969;
  double t970;
  double t973;
  double t974;
  double t977;
  double t980;
  double t982;
  double t984;
  double t914;
  double t915;
  double t921;
  double t923;
  double t924;
  double t928;
  double t930;
  double t931;
  t515 = Power(var2[0],2);
  t522 = 7.389631520540365e45*t515;
  t528 = 7.196137048348655e88*t515;
  t529 = Power(var2[0],4);
  t548 = -6.78756814823791e88*t529;
  t557 = -6.096939283359201e85 + t528 + t548;
  t559 = Sqrt(t557);
  t563 = -1.*t559;
  t568 = -3.9172204239607165e45 + t522 + t563;
  t618 = Power(t568,2);
  t628 = -6.529726269561443e-92*t618;
  t632 = 1. + t628;
  t649 = 2.5553329077757057e-46*t568;
  t650 = ArcCos(t649);
  t652 = 0.226893 + t650;
  t653 = Cos(t652);
  t637 = Sqrt(t632);
  t669 = Power(t653,2);
  t687 = Sin(t652);
  t717 = Power(t687,2);
  t765 = Cos(var1[0]);
  t772 = -3.444588759681651e-39*t568;
  t774 = 9.91e7*t637;
  t787 = 2.0442663262205644e-39*t568*t653;
  t793 = 8.16e7*t637*t653;
  t798 = -2.085151652744976e-38*t568*t687;
  t799 = 8.e6*t637*t687;
  t806 = t772 + t774 + t787 + t793 + t798 + t799;
  t810 = Sin(var1[0]);
  t605 = 3.038801893926869e-39*t568;
  t627 = 1.6328430054426058e-84*t618;
  t643 = 1.6176e6*t637;
  t644 = 2.5006301e7*t632;
  t655 = 2.502181983293971e-39*t568*t653;
  t658 = 2.6049428790737635e-84*t618*t653;
  t659 = -960000.*t637*t653;
  t660 = 3.98936e7*t632*t653;
  t671 = 1.0974119157675743e-84*t618*t669;
  t685 = 1.68064e7*t632*t669;
  t698 = 2.4531195914646776e-40*t568*t687;
  t701 = 6.179628465892636e-85*t618*t687;
  t703 = 9.792e6*t637*t687;
  t715 = 9.46384e6*t632*t687;
  t725 = 1.0974119157675743e-84*t618*t717;
  t737 = 1.68064e7*t632*t717;
  t740 = 1.44e6 + t605 + t627 + t643 + t644 + t655 + t658 + t659 + t660 + t671 + t685 + t698 + t701 + t703 + t715 + t725 + t737;
  t814 = Power(t806,2);
  t826 = Power(t810,2);
  t827 = t515*t826*t814;
  t828 = -3.038801893926869e-39*t568;
  t829 = -1.6031800261342928e-84*t618;
  t832 = -1.6176e6*t637;
  t833 = -1.706793730422258e-39*t568*t637;
  t835 = -454276.*t632;
  t836 = -2.502181983293971e-39*t568*t653;
  t840 = -2.640151163119239e-84*t618*t653;
  t843 = 960000.*t637*t653;
  t844 = -3.92458249307824e-40*t568*t637*t653;
  t845 = 539200.*t632*t653;
  t847 = -1.086964353736276e-84*t618*t669;
  t848 = 8.340606610979903e-40*t568*t637*t669;
  t850 = -160000.*t632*t669;
  t861 = 1.e8*t515*t826;
  t866 = -2.4531195914646776e-40*t568*t687;
  t870 = -2.5883834932541557e-85*t618*t687;
  t873 = -9.792e6*t637*t687;
  t874 = -1.0469709989738621e-38*t568*t637*t687;
  t877 = -5.49984e6*t632*t687;
  t879 = -2.131302654384855e-85*t618*t653*t687;
  t882 = -8.425648090150679e-39*t568*t637*t653*t687;
  t887 = 3.264e6*t632*t653*t687;
  t890 = -1.0447562031298307e-86*t618*t717;
  t891 = -8.340606610979903e-40*t568*t637*t717;
  t893 = -1.66464e7*t632*t717;
  t897 = -1.44e6 + t828 + t829 + t832 + t833 + t835 + t836 + t840 + t843 + t844 + t845 + t847 + t848 + t850 + t861 + t866 + t870 + t873 + t874 + t877 + t879 + t882 + t887 + t890 + t891 + t893;
  t899 = -4.*t897*t740;
  t904 = t827 + t899;
  t749 = 1/t740;
  t937 = 1.477926304108073e46*var2[0];
  t939 = 1.439227409669731e89*var2[0];
  t941 = Power(var2[0],3);
  t942 = -2.715027259295164e89*t941;
  t946 = t939 + t942;
  t947 = 1/Sqrt(t557);
  t949 = -0.5*t946*t947;
  t950 = t937 + t949;
  t954 = 1/Sqrt(t632);
  t953 = -3.444588759681651e-39*t950;
  t956 = -6.47095873313539e-84*t950*t568*t954;
  t957 = 9.1438991302582e-100*t950*t568*t954*t653;
  t960 = 0. + t953 + t956 + t957;
  t907 = 1/Sqrt(t904);
  t967 = 3.038801893926869e-39*t950;
  t969 = -1.056248521364259e-85*t950*t568*t954;
  t970 = -7.143671195514219e-102*t950*t568*t954*t653;
  t973 = -1.5791007976722952e-130*t950*t618*t954*t653;
  t974 = -2.4183261785924035e-39*t950*t637*t653;
  t977 = 1.142987391282275e-100*t950*t568*t954*t687;
  t980 = 6.656496261773179e-130*t950*t618*t954*t687;
  t982 = 1.0194142888964089e-38*t950*t637*t687;
  t984 = 0. + t967 + t969 + t970 + t973 + t974 + t977 + t980 + t982;
  t914 = Power(t740,-2);
  t915 = -1.*var2[0]*t810*t806;
  t921 = Sqrt(t904);
  t923 = t915 + t921;
  t924 = Power(t923,2);
  t928 = -0.25*t914*t924;
  t930 = 1. + t928;
  t931 = 1/Sqrt(t930);
  p_output1[0]=-0.5*t749*t931*(0.5*(-8.e8*t515*t740*t765*t810 + 2.*t515*t765*t810*t814)*t907 - 1.*t765*t806*var2[0])*var3[0] - 1.*t931*(-0.5*t914*t923*t984 + 0.5*t749*(-1.*t806*t810 - 1.*t810*t960*var2[0] + 0.5*t907*(2.*t515*t806*t826*t960 - 4.*t897*t984 + 2.*t814*t826*var2[0] - 4.*t740*(0. - 3.038801893926869e-39*t950 - 3.1470340936519598e-84*t568*t950 - 1.706793730422258e-39*t637*t950 - 2.6753594471647136e-84*t568*t653*t950 + 1.0129339646422898e-39*t637*t653*t950 + 1.0028614793843246e-85*t568*t687*t950 - 1.0331926439351355e-38*t637*t687*t950 + 1.056248521364259e-85*t568*t950*t954 + 1.114489585826099e-130*t618*t950*t954 + 7.143671195514219e-102*t568*t653*t950*t954 + 9.176826458467173e-131*t618*t653*t950*t954 - 1.142987391282275e-100*t568*t687*t950*t954 + 8.996888684771729e-132*t618*t687*t950*t954 - 8.008332380732404e-146*t618*t653*t687*t950*t954 + 2.e8*t826*var2[0]))))*var4[0];
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

#include "dqFlexion_IK4.hh"

namespace SymExpression
{

void dqFlexion_IK4_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
