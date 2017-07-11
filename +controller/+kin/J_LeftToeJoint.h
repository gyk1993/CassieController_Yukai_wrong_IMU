/*
 * Automatically Generated from Mathematica.
 * Tue 11 Jul 2017 19:12:46 GMT-04:00
 */

#ifndef J_LEFTTOEJOINT_HH
#define J_LEFTTOEJOINT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void J_LeftToeJoint_raw(double *p_output1, const double *var1);

  inline void J_LeftToeJoint(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 22);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_LeftToeJoint_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_LEFTTOEJOINT_HH
