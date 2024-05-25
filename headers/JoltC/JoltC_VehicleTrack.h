#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region properties

float JoltC_VehicleTrack_mAngularVelocity_Get(
  JoltC_VehicleTrack_t * self,
  char** outErrMsg
);

void JoltC_VehicleTrack_mAngularVelocity_Set(
  JoltC_VehicleTrack_t * self,
  float mAngularVelocity,
  char** outErrMsg
);

long JoltC_VehicleTrack_mDrivenWheel_Get(
  JoltC_VehicleTrack_t * self,
  char** outErrMsg
);

void JoltC_VehicleTrack_mDrivenWheel_Set(
  JoltC_VehicleTrack_t * self,
  long mDrivenWheel,
  char** outErrMsg
);

JoltC_ArrayUint_t * JoltC_VehicleTrack_mWheels_Get(
  JoltC_VehicleTrack_t * self,
  char** outErrMsg
);

void JoltC_VehicleTrack_mWheels_Set(
  JoltC_VehicleTrack_t * self,
  JoltC_ArrayUint_t * mWheels,
  char** outErrMsg
);

float JoltC_VehicleTrack_mInertia_Get(
  JoltC_VehicleTrack_t * self,
  char** outErrMsg
);

void JoltC_VehicleTrack_mInertia_Set(
  JoltC_VehicleTrack_t * self,
  float mInertia,
  char** outErrMsg
);

float JoltC_VehicleTrack_mAngularDamping_Get(
  JoltC_VehicleTrack_t * self,
  char** outErrMsg
);

void JoltC_VehicleTrack_mAngularDamping_Set(
  JoltC_VehicleTrack_t * self,
  float mAngularDamping,
  char** outErrMsg
);

float JoltC_VehicleTrack_mMaxBrakeTorque_Get(
  JoltC_VehicleTrack_t * self,
  char** outErrMsg
);

void JoltC_VehicleTrack_mMaxBrakeTorque_Set(
  JoltC_VehicleTrack_t * self,
  float mMaxBrakeTorque,
  char** outErrMsg
);

float JoltC_VehicleTrack_mDifferentialRatio_Get(
  JoltC_VehicleTrack_t * self,
  char** outErrMsg
);

void JoltC_VehicleTrack_mDifferentialRatio_Set(
  JoltC_VehicleTrack_t * self,
  float mDifferentialRatio,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

