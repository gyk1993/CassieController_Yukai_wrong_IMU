/*
 * Automatically Generated from Mathematica.
 * Mon 10 Jul 2017 14:13:15 GMT-04:00
 */

#ifndef DQFLEXION_IK3_HH
#define DQFLEXION_IK3_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymExpression
{

  void dqFlexion_IK3_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4);

  inline void dqFlexion_IK3(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3,const Eigen::VectorXd &var4)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);
    assert_size_matrix(var2, 1, 1);
    assert_size_matrix(var3, 1, 1);
    assert_size_matrix(var4, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    dqFlexion_IK3_raw(p_output1.data(), var1.data(),var2.data(),var3.data(),var4.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // DQFLEXION_IK3_HH
