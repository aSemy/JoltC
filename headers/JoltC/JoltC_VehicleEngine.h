#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_VehicleEngine_ClampRPM(
  JoltC_VehicleEngine_t * self,
  char** outErrMsg
);

float JoltC_VehicleEngine_GetCurrentRPM(
  JoltC_VehicleEngine_t * self,
  char** outErrMsg
);

void JoltC_VehicleEngine_SetCurrentRPM(
  JoltC_VehicleEngine_t * self,
  float inRPM,
  char** outErrMsg
);

float JoltC_VehicleEngine_GetAngularVelocity(
  JoltC_VehicleEngine_t * self,
  char** outErrMsg
);

float JoltC_VehicleEngine_GetTorque(
  JoltC_VehicleEngine_t * self,
  float inAcceleration,
  char** outErrMsg
);

//endregion functions

//region properties

float JoltC_VehicleEngine_mMaxTorque_Get(
  JoltC_VehicleEngine_t * self,
  char** outErrMsg
);

void JoltC_VehicleEngine_mMaxTorque_Set(
  JoltC_VehicleEngine_t * self,
  float mMaxTorque,
  char** outErrMsg
);

float JoltC_VehicleEngine_mMinRPM_Get(
  JoltC_VehicleEngine_t * self,
  char** outErrMsg
);

void JoltC_VehicleEngine_mMinRPM_Set(
  JoltC_VehicleEngine_t * self,
  float mMinRPM,
  char** outErrMsg
);

float JoltC_VehicleEngine_mMaxRPM_Get(
  JoltC_VehicleEngine_t * self,
  char** outErrMsg
);

void JoltC_VehicleEngine_mMaxRPM_Set(
  JoltC_VehicleEngine_t * self,
  float mMaxRPM,
  char** outErrMsg
);

JoltC_LinearCurve_t * JoltC_VehicleEngine_mNormalizedTorque_Get(
  JoltC_VehicleEngine_t * self,
  char** outErrMsg
);

void JoltC_VehicleEngine_mNormalizedTorque_Set(
  JoltC_VehicleEngine_t * self,
  JoltC_LinearCurve_t * mNormalizedTorque,
  char** outErrMsg
);

float JoltC_VehicleEngine_mInertia_Get(
  JoltC_VehicleEngine_t * self,
  char** outErrMsg
);

void JoltC_VehicleEngine_mInertia_Set(
  JoltC_VehicleEngine_t * self,
  float mInertia,
  char** outErrMsg
);

float JoltC_VehicleEngine_mAngularDamping_Get(
  JoltC_VehicleEngine_t * self,
  char** outErrMsg
);

void JoltC_VehicleEngine_mAngularDamping_Set(
  JoltC_VehicleEngine_t * self,
  float mAngularDamping,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

