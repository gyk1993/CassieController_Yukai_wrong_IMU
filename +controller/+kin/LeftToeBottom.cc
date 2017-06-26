/*
 * Automatically Generated from Mathematica.
 * Mon 26 Jun 2017 11:29:09 GMT-04:00
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
  double t3;
  double t4;
  double t9;
  double t11;
  double t12;
  double t16;
  double t25;
  double t26;
  double t27;
  double t21;
  double t22;
  double t23;
  double t28;
  double t44;
  double t45;
  double t46;
  double t48;
  double t52;
  double t53;
  double t54;
  double t43;
  double t32;
  double t33;
  double t34;
  double t36;
  double t39;
  double t40;
  double t41;
  double t66;
  double t67;
  double t68;
  double t70;
  double t71;
  double t72;
  double t74;
  double t77;
  double t78;
  double t79;
  double t84;
  double t85;
  double t86;
  double t88;
  double t89;
  double t90;
  double t92;
  double t95;
  double t96;
  double t97;
  double t102;
  double t103;
  double t104;
  double t106;
  double t107;
  double t108;
  double t110;
  double t113;
  double t114;
  double t115;
  double t120;
  double t121;
  double t122;
  double t124;
  double t125;
  double t126;
  double t128;
  double t131;
  double t132;
  double t133;
  double t138;
  double t139;
  double t140;
  double t5;
  double t6;
  double t7;
  double t8;
  double t153;
  double t13;
  double t14;
  double t17;
  double t18;
  double t19;
  double t20;
  double t151;
  double t152;
  double t154;
  double t155;
  double t29;
  double t30;
  double t35;
  double t37;
  double t38;
  double t162;
  double t163;
  double t164;
  double t158;
  double t159;
  double t160;
  double t47;
  double t49;
  double t50;
  double t55;
  double t56;
  double t57;
  double t174;
  double t175;
  double t176;
  double t170;
  double t171;
  double t172;
  double t63;
  double t64;
  double t65;
  double t73;
  double t75;
  double t76;
  double t166;
  double t167;
  double t168;
  double t182;
  double t183;
  double t184;
  double t81;
  double t82;
  double t83;
  double t91;
  double t93;
  double t94;
  double t186;
  double t187;
  double t188;
  double t190;
  double t191;
  double t192;
  double t99;
  double t100;
  double t101;
  double t109;
  double t111;
  double t112;
  double t194;
  double t195;
  double t196;
  double t198;
  double t199;
  double t200;
  double t117;
  double t118;
  double t119;
  double t127;
  double t129;
  double t130;
  double t202;
  double t203;
  double t204;
  double t206;
  double t207;
  double t208;
  double t135;
  double t136;
  double t137;
  double t210;
  double t211;
  double t212;
  double t214;
  double t215;
  double t216;
  double t227;
  double t228;
  double t229;
  double t236;
  double t237;
  double t238;
  double t232;
  double t233;
  double t234;
  double t248;
  double t249;
  double t250;
  double t244;
  double t245;
  double t246;
  double t240;
  double t241;
  double t242;
  double t256;
  double t257;
  double t258;
  double t260;
  double t261;
  double t262;
  double t264;
  double t265;
  double t266;
  double t268;
  double t269;
  double t270;
  double t272;
  double t273;
  double t274;
  double t276;
  double t277;
  double t278;
  double t280;
  double t281;
  double t282;
  double t284;
  double t285;
  double t286;
  double t288;
  double t289;
  double t290;
  t3 = Cos(var1[4]);
  t4 = Cos(var1[6]);
  t9 = Sin(var1[5]);
  t11 = Sin(var1[4]);
  t12 = Sin(var1[6]);
  t16 = Cos(var1[7]);
  t25 = t4*t11;
  t26 = t3*t9*t12;
  t27 = t25 + t26;
  t21 = -1.*t3*t4*t9;
  t22 = t11*t12;
  t23 = t21 + t22;
  t28 = Sin(var1[7]);
  t44 = Cos(var1[8]);
  t45 = -1.*t44;
  t46 = 1. + t45;
  t48 = Sin(var1[8]);
  t52 = t16*t23;
  t53 = t27*t28;
  t54 = t52 + t53;
  t43 = Cos(var1[5]);
  t32 = Cos(var1[9]);
  t33 = -1.*t32;
  t34 = 1. + t33;
  t36 = Sin(var1[9]);
  t39 = t16*t27;
  t40 = -1.*t23*t28;
  t41 = t39 + t40;
  t66 = t3*t43*t44;
  t67 = -1.*t54*t48;
  t68 = t66 + t67;
  t70 = Cos(var1[10]);
  t71 = -1.*t70;
  t72 = 1. + t71;
  t74 = Sin(var1[10]);
  t77 = t36*t41;
  t78 = t32*t68;
  t79 = t77 + t78;
  t84 = t32*t41;
  t85 = -1.*t36*t68;
  t86 = t84 + t85;
  t88 = Cos(var1[11]);
  t89 = -1.*t88;
  t90 = 1. + t89;
  t92 = Sin(var1[11]);
  t95 = -1.*t74*t79;
  t96 = t70*t86;
  t97 = t95 + t96;
  t102 = t70*t79;
  t103 = t74*t86;
  t104 = t102 + t103;
  t106 = Cos(var1[12]);
  t107 = -1.*t106;
  t108 = 1. + t107;
  t110 = Sin(var1[12]);
  t113 = t92*t97;
  t114 = t88*t104;
  t115 = t113 + t114;
  t120 = t88*t97;
  t121 = -1.*t92*t104;
  t122 = t120 + t121;
  t124 = Cos(var1[13]);
  t125 = -1.*t124;
  t126 = 1. + t125;
  t128 = Sin(var1[13]);
  t131 = -1.*t110*t115;
  t132 = t106*t122;
  t133 = t131 + t132;
  t138 = t106*t115;
  t139 = t110*t122;
  t140 = t138 + t139;
  t5 = -1.*t4;
  t6 = 1. + t5;
  t7 = 0.135*t6;
  t8 = 0. + t7;
  t153 = Sin(var1[3]);
  t13 = -0.135*t12;
  t14 = 0. + t13;
  t17 = -1.*t16;
  t18 = 1. + t17;
  t19 = 0.135*t18;
  t20 = 0. + t19;
  t151 = Cos(var1[3]);
  t152 = t151*t43;
  t154 = -1.*t153*t11*t9;
  t155 = t152 + t154;
  t29 = -0.135*t28;
  t30 = 0. + t29;
  t35 = -0.09*t34;
  t37 = 0.049*t36;
  t38 = 0. + t35 + t37;
  t162 = -1.*t3*t4*t153;
  t163 = -1.*t155*t12;
  t164 = t162 + t163;
  t158 = t4*t155;
  t159 = -1.*t3*t153*t12;
  t160 = t158 + t159;
  t47 = -0.049*t46;
  t49 = -0.135*t48;
  t50 = 0. + t47 + t49;
  t55 = 0.135*t46;
  t56 = -0.049*t48;
  t57 = 0. + t55 + t56;
  t174 = t16*t160;
  t175 = t164*t28;
  t176 = t174 + t175;
  t170 = t43*t153*t11;
  t171 = t151*t9;
  t172 = t170 + t171;
  t63 = -0.049*t34;
  t64 = -0.09*t36;
  t65 = 0. + t63 + t64;
  t73 = -0.049*t72;
  t75 = -0.21*t74;
  t76 = 0. + t73 + t75;
  t166 = t16*t164;
  t167 = -1.*t160*t28;
  t168 = t166 + t167;
  t182 = t44*t172;
  t183 = -1.*t176*t48;
  t184 = t182 + t183;
  t81 = -0.21*t72;
  t82 = 0.049*t74;
  t83 = 0. + t81 + t82;
  t91 = -0.2707*t90;
  t93 = 0.0016*t92;
  t94 = 0. + t91 + t93;
  t186 = t36*t168;
  t187 = t32*t184;
  t188 = t186 + t187;
  t190 = t32*t168;
  t191 = -1.*t36*t184;
  t192 = t190 + t191;
  t99 = -0.0016*t90;
  t100 = -0.2707*t92;
  t101 = 0. + t99 + t100;
  t109 = 0.0184*t108;
  t111 = -0.7055*t110;
  t112 = 0. + t109 + t111;
  t194 = -1.*t74*t188;
  t195 = t70*t192;
  t196 = t194 + t195;
  t198 = t70*t188;
  t199 = t74*t192;
  t200 = t198 + t199;
  t117 = -0.7055*t108;
  t118 = -0.0184*t110;
  t119 = 0. + t117 + t118;
  t127 = -1.1135*t126;
  t129 = 0.0216*t128;
  t130 = 0. + t127 + t129;
  t202 = t92*t196;
  t203 = t88*t200;
  t204 = t202 + t203;
  t206 = t88*t196;
  t207 = -1.*t92*t200;
  t208 = t206 + t207;
  t135 = -0.0216*t126;
  t136 = -1.1135*t128;
  t137 = 0. + t135 + t136;
  t210 = -1.*t110*t204;
  t211 = t106*t208;
  t212 = t210 + t211;
  t214 = t106*t204;
  t215 = t110*t208;
  t216 = t214 + t215;
  t227 = t43*t153;
  t228 = t151*t11*t9;
  t229 = t227 + t228;
  t236 = t151*t3*t4;
  t237 = -1.*t229*t12;
  t238 = t236 + t237;
  t232 = t4*t229;
  t233 = t151*t3*t12;
  t234 = t232 + t233;
  t248 = t16*t234;
  t249 = t238*t28;
  t250 = t248 + t249;
  t244 = -1.*t151*t43*t11;
  t245 = t153*t9;
  t246 = t244 + t245;
  t240 = t16*t238;
  t241 = -1.*t234*t28;
  t242 = t240 + t241;
  t256 = t44*t246;
  t257 = -1.*t250*t48;
  t258 = t256 + t257;
  t260 = t36*t242;
  t261 = t32*t258;
  t262 = t260 + t261;
  t264 = t32*t242;
  t265 = -1.*t36*t258;
  t266 = t264 + t265;
  t268 = -1.*t74*t262;
  t269 = t70*t266;
  t270 = t268 + t269;
  t272 = t70*t262;
  t273 = t74*t266;
  t274 = t272 + t273;
  t276 = t92*t270;
  t277 = t88*t274;
  t278 = t276 + t277;
  t280 = t88*t270;
  t281 = -1.*t92*t274;
  t282 = t280 + t281;
  t284 = -1.*t110*t278;
  t285 = t106*t282;
  t286 = t284 + t285;
  t288 = t106*t278;
  t289 = t110*t282;
  t290 = t288 + t289;
  p_output1[0]=0. + t101*t104 + t112*t115 + t119*t122 + t130*t133 + t11*t14 + t137*t140 + 0.0306*(t128*t133 + t124*t140) - 1.1312*(t124*t133 - 1.*t128*t140) + t20*t23 + t27*t30 + t38*t41 + t3*t43*t50 + 0.1305*(t3*t43*t48 + t44*t54) + t54*t57 + t65*t68 + t76*t79 + t83*t86 - 1.*t3*t8*t9 + t94*t97 + var1[0];
  p_output1[1]=0. + t160*t20 + t101*t200 + t112*t204 + t119*t208 + t130*t212 + t137*t216 + 0.0306*(t128*t212 + t124*t216) - 1.1312*(t124*t212 - 1.*t128*t216) - 1.*t14*t153*t3 + t164*t30 + t168*t38 + 0.1305*(t176*t44 + t172*t48) + t172*t50 + t176*t57 + t184*t65 + t188*t76 + t155*t8 + t192*t83 + t196*t94 + var1[1];
  p_output1[2]=0. + t20*t234 + t101*t274 + t112*t278 + t119*t282 + t130*t286 + t137*t290 + 0.0306*(t128*t286 + t124*t290) - 1.1312*(t124*t286 - 1.*t128*t290) + t14*t151*t3 + t238*t30 + t242*t38 + 0.1305*(t250*t44 + t246*t48) + t246*t50 + t250*t57 + t258*t65 + t262*t76 + t229*t8 + t266*t83 + t270*t94 + var1[2];
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

#include "LeftToeBottom.hh"

namespace SymFunction
{

void LeftToeBottom_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
