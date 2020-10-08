#ifndef __FG_Simulator_cgxe_h__
#define __FG_Simulator_cgxe_h__

/* Include files */
#include "simstruc.h"
#include "rtwtypes.h"
#include "multiword_types.h"
#include "emlrt.h"
#include "covrt.h"
#include "cgxert.h"
#include "ComPosition_src.h"
#include "ComVelocity_src.h"
#include "J_LeftToeBottomBack_src.h"
#include "J_LeftToeJoint_src.h"
#include "J_RightToeBottomBack_src.h"
#include "J_RightToeJoint_src.h"
#include "LeftToeJoint_src.h"
#include "RightToeJoint_src.h"
#define rtInf                          (mxGetInf())
#define rtMinusInf                     (-(mxGetInf()))
#define rtNaN                          (mxGetNaN())
#define rtIsNaN(X)                     ((int)mxIsNaN(X))
#define rtIsInf(X)                     ((int)mxIsInf(X))

extern unsigned int cgxe_FG_Simulator_method_dispatcher(SimStruct* S, int_T
  method, void* data);

#endif
