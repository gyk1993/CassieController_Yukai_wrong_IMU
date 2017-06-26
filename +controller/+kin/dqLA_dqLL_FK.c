/*
 * Automatically Generated from Mathematica.
 * Fri 23 Jun 2017 12:39:39 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dqLA_dqLL_FK.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE inline        /* use standard inline */
#endif

/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
INLINE double Power(double x, double y) { return pow(x, y); }
INLINE double Sqrt(double x) { return sqrt(x); }

INLINE double Abs(double x) { return fabs(x); }

INLINE double Exp(double x) { return exp(x); }
INLINE double Log(double x) { return log(x); }

INLINE double Sin(double x) { return sin(x); }
INLINE double Cos(double x) { return cos(x); }
INLINE double Tan(double x) { return tan(x); }

INLINE double ArcSin(double x) { return asin(x); }
INLINE double ArcCos(double x) { return acos(x); }
//INLINE double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
INLINE double ArcTan(double x, double y) { return atan2(y,x); }

INLINE double Sinh(double x) { return sinh(x); }
INLINE double Cosh(double x) { return cosh(x); }
INLINE double Tanh(double x) { return tanh(x); }

#define E 2.71828182845904523536029
#define Pi 3.14159265358979323846264
#define Degree 0.01745329251994329576924

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t321;
  double t425;
  double t441;
  double t450;
  double t480;
  double t498;
  double t543;
  double t548;
  double t549;
  double t551;
  double t555;
  double t558;
  double t564;
  double t565;
  double t567;
  double t580;
  double t581;
  double t583;
  double t340;
  double t390;
  double t497;
  double t515;
  double t518;
  double t528;
  double t529;
  double t535;
  double t570;
  double t573;
  double t576;
  double t557;
  double t559;
  double t563;
  double t632;
  double t637;
  double t640;
  double t586;
  double t430;
  double t522;
  double t541;
  double t568;
  double t584;
  double t585;
  double t587;
  double t592;
  double t593;
  double t594;
  double t605;
  double t608;
  double t619;
  double t621;
  double t627;
  double t628;
  double t643;
  double t644;
  double t648;
  double t649;
  double t650;
  double t652;
  double t653;
  double t655;
  double t658;
  double t659;
  double t412;
  double t613;
  double t696;
  double t698;
  double t701;
  double t618;
  double t660;
  double t669;
  double t671;
  double t731;
  double t733;
  double t736;
  double t737;
  double t740;
  double t695;
  double t749;
  double t756;
  double t762;
  double t742;
  double t747;
  double t703;
  double t709;
  double t715;
  t321 = Cos(var1[0]);
  t425 = Sin(var1[0]);
  t441 = Cos(var2[0]);
  t450 = -1.*t441;
  t480 = 1. + t450;
  t498 = Sin(var2[0]);
  t543 = -1.*var2[0];
  t548 = 0.226893 + t543;
  t549 = Cos(t548);
  t551 = -1.*t549;
  t555 = 1. + t551;
  t558 = Sin(t548);
  t564 = -1.*t441*t425;
  t565 = -1.*t321*t498;
  t567 = t564 + t565;
  t580 = t321*t441;
  t581 = -1.*t425*t498;
  t583 = t580 + t581;
  t340 = -1.*t321;
  t390 = 1. + t340;
  t497 = -0.049*t480;
  t515 = -0.21*t498;
  t518 = 0. + t497 + t515;
  t528 = -0.21*t480;
  t529 = 0.049*t498;
  t535 = 0. + t528 + t529;
  t570 = 0.0184*t555;
  t573 = -0.7055*t558;
  t576 = 0. + t570 + t573;
  t557 = -0.7055*t555;
  t559 = -0.0184*t558;
  t563 = 0. + t557 + t559;
  t632 = t441*t425;
  t637 = t321*t498;
  t640 = t632 + t637;
  t586 = t549*t583;
  t430 = -0.09*t425;
  t522 = t321*t518;
  t541 = -1.*t425*t535;
  t568 = t563*t567;
  t584 = t576*t583;
  t585 = t558*t567;
  t587 = t585 + t586;
  t592 = -0.0216*t587;
  t593 = t549*t567;
  t594 = -1.*t558*t583;
  t605 = t593 + t594;
  t608 = -1.1135*t605;
  t619 = -0.09*t390;
  t621 = 0.049*t425;
  t627 = t425*t518;
  t628 = t321*t535;
  t643 = t576*t640;
  t644 = t563*t583;
  t648 = -1.*t558*t640;
  t649 = t648 + t586;
  t650 = -1.1135*t649;
  t652 = t549*t640;
  t653 = t558*t583;
  t655 = t652 + t653;
  t658 = -0.0216*t655;
  t659 = 0.09 + t619 + t621 + t627 + t628 + t643 + t644 + t650 + t658;
  t412 = -0.049*t390;
  t613 = 0.049 + t412 + t430 + t522 + t541 + t568 + t584 + t592 + t608;
  t696 = -1.*t321*t441;
  t698 = t425*t498;
  t701 = t696 + t698;
  t618 = Power(t613,2);
  t660 = Power(t659,2);
  t669 = t618 + t660;
  t671 = 1/Sqrt(t669);
  t731 = 0.049*t441;
  t733 = t731 + t515;
  t736 = -0.21*t441;
  t737 = -0.049*t498;
  t740 = t736 + t737;
  t695 = t576*t567;
  t749 = 0.0184*t549;
  t756 = 0.7055*t558;
  t762 = t749 + t756;
  t742 = 0.7055*t549;
  t747 = t742 + t559;
  t703 = t563*t701;
  t709 = t549*t701;
  t715 = t558*t701;
  p_output1[0]=0.5*t671*(2.*(0.049*t321 + t430 + t522 + t541 + t568 + t584 + t592 + t608)*t659 + 2.*t613*(-0.09*t321 - 0.049*t425 - 1.*t425*t518 - 1.*t321*t535 + t695 + t703 - 1.1135*(-1.*t558*t567 + t709) - 0.0216*(t593 + t715)))*var3[0] + 0.5*t671*(2.*t613*(t695 + t703 - 1.1135*(t586 + t709) - 0.0216*(t653 + t715) - 1.*t425*t733 + t321*t740 + t583*t747 + t567*t762) + 2.*t659*(t568 + t584 - 0.0216*(t585 + t558*t640) - 1.1135*(t593 + t652) + t321*t733 + t425*t740 + t640*t747 + t583*t762))*var4[0];
}

static void output2(double *p_output2,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t672;
  double t686;
  double t691;
  double t707;
  double t712;
  double t716;
  double t748;
  double t765;
  double t766;
  double t769;
  double t770;
  double t773;
  double t780;
  double t782;
  double t783;
  double t793;
  double t794;
  double t797;
  double t680;
  double t682;
  double t685;
  double t687;
  double t713;
  double t717;
  double t719;
  double t723;
  double t725;
  double t730;
  double t735;
  double t741;
  double t772;
  double t774;
  double t775;
  double t785;
  double t787;
  double t790;
  double t791;
  double t798;
  double t799;
  double t804;
  double t806;
  double t807;
  double t810;
  double t811;
  double t814;
  double t817;
  double t819;
  double t821;
  double t828;
  double t829;
  double t831;
  double t869;
  double t870;
  double t873;
  double t823;
  double t825;
  double t826;
  double t827;
  double t832;
  double t833;
  double t834;
  double t835;
  double t836;
  double t840;
  double t843;
  double t844;
  double t845;
  double t847;
  double t848;
  double t850;
  double t860;
  double t861;
  double t863;
  double t865;
  double t866;
  double t874;
  double t876;
  double t877;
  double t879;
  double t882;
  double t883;
  double t885;
  double t887;
  double t888;
  double t854;
  double t857;
  double t858;
  double t859;
  double t890;
  double t893;
  double t911;
  double t912;
  double t914;
  double t915;
  double t920;
  double t931;
  double t936;
  double t923;
  double t924;
  double t928;
  double t913;
  double t921;
  double t930;
  double t937;
  double t939;
  double t940;
  double t941;
  double t942;
  double t945;
  t672 = Cos(var1[0]);
  t686 = Sin(var1[0]);
  t691 = Cos(var2[0]);
  t707 = -1.*t691;
  t712 = 1. + t707;
  t716 = Sin(var2[0]);
  t748 = -1.*var2[0];
  t765 = 0.226893 + t748;
  t766 = Cos(t765);
  t769 = -1.*t766;
  t770 = 1. + t769;
  t773 = Sin(t765);
  t780 = -1.*t691*t686;
  t782 = -1.*t672*t716;
  t783 = t780 + t782;
  t793 = t672*t691;
  t794 = -1.*t686*t716;
  t797 = t793 + t794;
  t680 = -1.*t672;
  t682 = 1. + t680;
  t685 = -0.049*t682;
  t687 = -0.09*t686;
  t713 = -0.049*t712;
  t717 = -0.21*t716;
  t719 = 0. + t713 + t717;
  t723 = t672*t719;
  t725 = -0.21*t712;
  t730 = 0.049*t716;
  t735 = 0. + t725 + t730;
  t741 = -1.*t686*t735;
  t772 = -0.7055*t770;
  t774 = -0.0184*t773;
  t775 = 0. + t772 + t774;
  t785 = t775*t783;
  t787 = 0.0184*t770;
  t790 = -0.7055*t773;
  t791 = 0. + t787 + t790;
  t798 = t791*t797;
  t799 = t773*t783;
  t804 = t766*t797;
  t806 = t799 + t804;
  t807 = -0.0216*t806;
  t810 = t766*t783;
  t811 = -1.*t773*t797;
  t814 = t810 + t811;
  t817 = -1.1135*t814;
  t819 = 0.049 + t685 + t687 + t723 + t741 + t785 + t798 + t807 + t817;
  t821 = Power(t819,2);
  t828 = t691*t686;
  t829 = t672*t716;
  t831 = t828 + t829;
  t869 = -1.*t672*t691;
  t870 = t686*t716;
  t873 = t869 + t870;
  t823 = -0.09*t682;
  t825 = 0.049*t686;
  t826 = t686*t719;
  t827 = t672*t735;
  t832 = t791*t831;
  t833 = t775*t797;
  t834 = -1.*t773*t831;
  t835 = t834 + t804;
  t836 = -1.1135*t835;
  t840 = t766*t831;
  t843 = t773*t797;
  t844 = t840 + t843;
  t845 = -0.0216*t844;
  t847 = 0.09 + t823 + t825 + t826 + t827 + t832 + t833 + t836 + t845;
  t848 = Power(t847,2);
  t850 = t821 + t848;
  t860 = -0.09*t672;
  t861 = -0.049*t686;
  t863 = -1.*t686*t719;
  t865 = -1.*t672*t735;
  t866 = t791*t783;
  t874 = t775*t873;
  t876 = -1.*t773*t783;
  t877 = t766*t873;
  t879 = t876 + t877;
  t882 = -1.1135*t879;
  t883 = t773*t873;
  t885 = t810 + t883;
  t887 = -0.0216*t885;
  t888 = t860 + t861 + t863 + t865 + t866 + t874 + t882 + t887;
  t854 = 1/t850;
  t857 = -1.*t821*t854;
  t858 = 1. + t857;
  t859 = 1/Sqrt(t858);
  t890 = 1/Sqrt(t850);
  t893 = Power(t850,-1.5);
  t911 = 0.049*t691;
  t912 = t911 + t717;
  t914 = -0.21*t691;
  t915 = -0.049*t716;
  t920 = t914 + t915;
  t931 = 0.7055*t766;
  t936 = t931 + t774;
  t923 = 0.0184*t766;
  t924 = 0.7055*t773;
  t928 = t923 + t924;
  t913 = -1.*t686*t912;
  t921 = t672*t920;
  t930 = t928*t783;
  t937 = t936*t797;
  t939 = t804 + t877;
  t940 = -1.1135*t939;
  t941 = t843 + t883;
  t942 = -0.0216*t941;
  t945 = t913 + t921 + t866 + t930 + t937 + t874 + t940 + t942;
  p_output2[0]=t859*(t888*t890 - 0.5*t819*(2.*(0.049*t672 + t687 + t723 + t741 + t785 + t798 + t807 + t817)*t847 + 2.*t819*t888)*t893)*var3[0] + t859*(t890*t945 - 0.5*t819*t893*(2.*t847*(t785 + t798 - 0.0216*(t799 + t773*t831) - 1.1135*(t810 + t840) + t672*t912 + t686*t920 + t797*t928 + t831*t936) + 2.*t819*t945))*var4[0];
}



void dqLA_dqLL_FK(double *p_output1, double *p_output2, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);
  output2(p_output2, var1, var2, var3, var4);

}
