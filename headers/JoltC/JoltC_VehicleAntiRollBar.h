#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_VehicleAntiRollBar_t * JoltC_VehicleAntiRollBar_new();

//endregion

//region destructor

void JoltC_VehicleAntiRollBar_destroy(
  JoltC_VehicleAntiRollBar_t * self
);

//endregion
//region properties

long JoltC_VehicleAntiRollBar_mLeftWheel_Get(
  JoltC_VehicleAntiRollBar_t * self
);

void JoltC_VehicleAntiRollBar_mLeftWheel_Set(
  JoltC_VehicleAntiRollBar_t * self,
  long mLeftWheel
);

long JoltC_VehicleAntiRollBar_mRightWheel_Get(
  JoltC_VehicleAntiRollBar_t * self
);

void JoltC_VehicleAntiRollBar_mRightWheel_Set(
  JoltC_VehicleAntiRollBar_t * self,
  long mRightWheel
);

float JoltC_VehicleAntiRollBar_mStiffness_Get(
  JoltC_VehicleAntiRollBar_t * self
);

void JoltC_VehicleAntiRollBar_mStiffness_Set(
  JoltC_VehicleAntiRollBar_t * self,
  float mStiffness
);

//endregion


#ifdef __cplusplus
}
#endif
