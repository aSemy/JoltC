#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region properties

float JoltC_VehicleTrack_mAngularVelocity_Get(
  JoltC_VehicleTrack_t * self
);

void JoltC_VehicleTrack_mAngularVelocity_Set(
  JoltC_VehicleTrack_t * self,
  float mAngularVelocity
);

long JoltC_VehicleTrack_mDrivenWheel_Get(
  JoltC_VehicleTrack_t * self
);

void JoltC_VehicleTrack_mDrivenWheel_Set(
  JoltC_VehicleTrack_t * self,
  long mDrivenWheel
);

JoltC_ArrayUint_t * JoltC_VehicleTrack_mWheels_Get(
  JoltC_VehicleTrack_t * self
);

void JoltC_VehicleTrack_mWheels_Set(
  JoltC_VehicleTrack_t * self,
  JoltC_ArrayUint_t * mWheels
);

float JoltC_VehicleTrack_mInertia_Get(
  JoltC_VehicleTrack_t * self
);

void JoltC_VehicleTrack_mInertia_Set(
  JoltC_VehicleTrack_t * self,
  float mInertia
);

float JoltC_VehicleTrack_mAngularDamping_Get(
  JoltC_VehicleTrack_t * self
);

void JoltC_VehicleTrack_mAngularDamping_Set(
  JoltC_VehicleTrack_t * self,
  float mAngularDamping
);

float JoltC_VehicleTrack_mMaxBrakeTorque_Get(
  JoltC_VehicleTrack_t * self
);

void JoltC_VehicleTrack_mMaxBrakeTorque_Set(
  JoltC_VehicleTrack_t * self,
  float mMaxBrakeTorque
);

float JoltC_VehicleTrack_mDifferentialRatio_Get(
  JoltC_VehicleTrack_t * self
);

void JoltC_VehicleTrack_mDifferentialRatio_Set(
  JoltC_VehicleTrack_t * self,
  float mDifferentialRatio
);

//endregion


#ifdef __cplusplus
}
#endif

