#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_VehicleAntiRollBar_t * JoltC_VehicleAntiRollBar_new(
  char** outErrMsg
);

//endregion constructors

//region properties

long JoltC_VehicleAntiRollBar_mLeftWheel_Get(
  JoltC_VehicleAntiRollBar_t * self,
  char** outErrMsg
);

void JoltC_VehicleAntiRollBar_mLeftWheel_Set(
  JoltC_VehicleAntiRollBar_t * self,
  long mLeftWheel,
  char** outErrMsg
);

long JoltC_VehicleAntiRollBar_mRightWheel_Get(
  JoltC_VehicleAntiRollBar_t * self,
  char** outErrMsg
);

void JoltC_VehicleAntiRollBar_mRightWheel_Set(
  JoltC_VehicleAntiRollBar_t * self,
  long mRightWheel,
  char** outErrMsg
);

float JoltC_VehicleAntiRollBar_mStiffness_Get(
  JoltC_VehicleAntiRollBar_t * self,
  char** outErrMsg
);

void JoltC_VehicleAntiRollBar_mStiffness_Set(
  JoltC_VehicleAntiRollBar_t * self,
  float mStiffness,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

