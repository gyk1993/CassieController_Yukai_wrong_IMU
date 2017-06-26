#ifndef __c2_cassie_sim_h__
#define __c2_cassie_sim_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef struct_tag_swFd8ELbXRvNcIjxvdm1NkG
#define struct_tag_swFd8ELbXRvNcIjxvdm1NkG

struct tag_swFd8ELbXRvNcIjxvdm1NkG
{
  real_T vectorNavOrientation[4];
  real_T vectorNavAngularVelocity[3];
  real_T vectorNavLinearAcceleration[3];
  real_T vectorNavMagneticField[3];
  real_T vectorNavPressure;
  real_T vectorNavTemperature;
  real_T motorPosition[10];
  real_T motorVelocity[10];
  real_T jointPosition[6];
  real_T jointVelocity[6];
  real_T radio[16];
  real_T stateOfCharge;
  real_T status;
};

#endif                                 /*struct_tag_swFd8ELbXRvNcIjxvdm1NkG*/

#ifndef typedef_c2_swFd8ELbXRvNcIjxvdm1NkG
#define typedef_c2_swFd8ELbXRvNcIjxvdm1NkG

typedef struct tag_swFd8ELbXRvNcIjxvdm1NkG c2_swFd8ELbXRvNcIjxvdm1NkG;

#endif                                 /*typedef_c2_swFd8ELbXRvNcIjxvdm1NkG*/

#ifndef struct_tag_se1gvm02H55jaxudcq1v1rH
#define struct_tag_se1gvm02H55jaxudcq1v1rH

struct tag_se1gvm02H55jaxudcq1v1rH
{
  c2_swFd8ELbXRvNcIjxvdm1NkG data;
};

#endif                                 /*struct_tag_se1gvm02H55jaxudcq1v1rH*/

#ifndef typedef_c2_CassieOutputs
#define typedef_c2_CassieOutputs

typedef struct tag_se1gvm02H55jaxudcq1v1rH c2_CassieOutputs;

#endif                                 /*typedef_c2_CassieOutputs*/

#ifndef struct_cassieOutputsBus_tag
#define struct_cassieOutputsBus_tag

struct cassieOutputsBus_tag
{
  real_T vectorNavOrientation[4];
  real_T vectorNavAngularVelocity[3];
  real_T vectorNavLinearAcceleration[3];
  real_T vectorNavMagneticField[3];
  real_T vectorNavPressure;
  real_T vectorNavTemperature;
  real_T motorPosition[10];
  real_T motorVelocity[10];
  real_T jointPosition[6];
  real_T jointVelocity[6];
  real_T radio[16];
  real_T stateOfCharge;
  real_T status;
};

#endif                                 /*struct_cassieOutputsBus_tag*/

#ifndef typedef_c2_cassieOutputsBus
#define typedef_c2_cassieOutputsBus

typedef struct cassieOutputsBus_tag c2_cassieOutputsBus;

#endif                                 /*typedef_c2_cassieOutputsBus*/

#ifndef typedef_SFc2_cassie_simInstanceStruct
#define typedef_SFc2_cassie_simInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c2_sfEvent;
  boolean_T c2_doneDoubleBufferReInit;
  uint8_T c2_is_active_c2_cassie_sim;
  c2_cassieOutputsBus *c2_outputs;
  real_T (*c2_q)[26];
  real_T (*c2_dq)[26];
} SFc2_cassie_simInstanceStruct;

#endif                                 /*typedef_SFc2_cassie_simInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c2_cassie_sim_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c2_cassie_sim_get_check_sum(mxArray *plhs[]);
extern void c2_cassie_sim_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
