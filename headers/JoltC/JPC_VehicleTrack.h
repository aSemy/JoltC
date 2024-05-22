#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region properties

float JPC_VehicleTrack_mAngularVelocity_Get(
  JPC_VehicleTrack_t * self
);

void JPC_VehicleTrack_mAngularVelocity_Set(
  JPC_VehicleTrack_t * self,
  float mAngularVelocity
);

long JPC_VehicleTrack_mDrivenWheel_Get(
  JPC_VehicleTrack_t * self
);

void JPC_VehicleTrack_mDrivenWheel_Set(
  JPC_VehicleTrack_t * self,
  long mDrivenWheel
);

JPC_ArrayUint_t * JPC_VehicleTrack_mWheels_Get(
  JPC_VehicleTrack_t * self
);

void JPC_VehicleTrack_mWheels_Set(
  JPC_VehicleTrack_t * self,
  JPC_ArrayUint_t * mWheels
);

float JPC_VehicleTrack_mInertia_Get(
  JPC_VehicleTrack_t * self
);

void JPC_VehicleTrack_mInertia_Set(
  JPC_VehicleTrack_t * self,
  float mInertia
);

float JPC_VehicleTrack_mAngularDamping_Get(
  JPC_VehicleTrack_t * self
);

void JPC_VehicleTrack_mAngularDamping_Set(
  JPC_VehicleTrack_t * self,
  float mAngularDamping
);

float JPC_VehicleTrack_mMaxBrakeTorque_Get(
  JPC_VehicleTrack_t * self
);

void JPC_VehicleTrack_mMaxBrakeTorque_Set(
  JPC_VehicleTrack_t * self,
  float mMaxBrakeTorque
);

float JPC_VehicleTrack_mDifferentialRatio_Get(
  JPC_VehicleTrack_t * self
);

void JPC_VehicleTrack_mDifferentialRatio_Set(
  JPC_VehicleTrack_t * self,
  float mDifferentialRatio
);

//endregion properties


#ifdef __cplusplus
}
#endif

