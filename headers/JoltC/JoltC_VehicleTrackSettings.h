#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region properties

long JoltC_VehicleTrackSettings_mDrivenWheel_Get(
  JoltC_VehicleTrackSettings_t * self,
  char** outErrMsg
);

void JoltC_VehicleTrackSettings_mDrivenWheel_Set(
  JoltC_VehicleTrackSettings_t * self,
  long mDrivenWheel,
  char** outErrMsg
);

JoltC_ArrayUint_t * JoltC_VehicleTrackSettings_mWheels_Get(
  JoltC_VehicleTrackSettings_t * self,
  char** outErrMsg
);

void JoltC_VehicleTrackSettings_mWheels_Set(
  JoltC_VehicleTrackSettings_t * self,
  JoltC_ArrayUint_t * mWheels,
  char** outErrMsg
);

float JoltC_VehicleTrackSettings_mInertia_Get(
  JoltC_VehicleTrackSettings_t * self,
  char** outErrMsg
);

void JoltC_VehicleTrackSettings_mInertia_Set(
  JoltC_VehicleTrackSettings_t * self,
  float mInertia,
  char** outErrMsg
);

float JoltC_VehicleTrackSettings_mAngularDamping_Get(
  JoltC_VehicleTrackSettings_t * self,
  char** outErrMsg
);

void JoltC_VehicleTrackSettings_mAngularDamping_Set(
  JoltC_VehicleTrackSettings_t * self,
  float mAngularDamping,
  char** outErrMsg
);

float JoltC_VehicleTrackSettings_mMaxBrakeTorque_Get(
  JoltC_VehicleTrackSettings_t * self,
  char** outErrMsg
);

void JoltC_VehicleTrackSettings_mMaxBrakeTorque_Set(
  JoltC_VehicleTrackSettings_t * self,
  float mMaxBrakeTorque,
  char** outErrMsg
);

float JoltC_VehicleTrackSettings_mDifferentialRatio_Get(
  JoltC_VehicleTrackSettings_t * self,
  char** outErrMsg
);

void JoltC_VehicleTrackSettings_mDifferentialRatio_Set(
  JoltC_VehicleTrackSettings_t * self,
  float mDifferentialRatio,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

