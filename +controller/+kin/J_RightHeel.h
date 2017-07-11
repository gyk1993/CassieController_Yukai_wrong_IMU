/*
 * Automatically Generated from Mathematica.
 * Tue 11 Jul 2017 19:12:50 GMT-04:00
 */

#ifndef J_RIGHTHEEL_HH
#define J_RIGHTHEEL_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void J_RightHeel_raw(double *p_output1, const double *var1);

  inline void J_RightHeel(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 22);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_RightHeel_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_RIGHTHEEL_HH
