#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_VehicleAntiRollBar_t * JPC_VehicleAntiRollBar_new();

//endregion constructors

//region properties

long JPC_VehicleAntiRollBar_mLeftWheel_Get(
  JPC_VehicleAntiRollBar_t * self
);

void JPC_VehicleAntiRollBar_mLeftWheel_Set(
  JPC_VehicleAntiRollBar_t * self,
  long mLeftWheel
);

long JPC_VehicleAntiRollBar_mRightWheel_Get(
  JPC_VehicleAntiRollBar_t * self
);

void JPC_VehicleAntiRollBar_mRightWheel_Set(
  JPC_VehicleAntiRollBar_t * self,
  long mRightWheel
);

float JPC_VehicleAntiRollBar_mStiffness_Get(
  JPC_VehicleAntiRollBar_t * self
);

void JPC_VehicleAntiRollBar_mStiffness_Set(
  JPC_VehicleAntiRollBar_t * self,
  float mStiffness
);

//endregion properties


#ifdef __cplusplus
}
#endif

