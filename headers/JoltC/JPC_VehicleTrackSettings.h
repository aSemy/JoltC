#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region properties

long JPC_VehicleTrackSettings_mDrivenWheel_Get(
  JPC_VehicleTrackSettings_t * self
);

void JPC_VehicleTrackSettings_mDrivenWheel_Set(
  JPC_VehicleTrackSettings_t * self,
  long mDrivenWheel
);

JPC_ArrayUint_t * JPC_VehicleTrackSettings_mWheels_Get(
  JPC_VehicleTrackSettings_t * self
);

void JPC_VehicleTrackSettings_mWheels_Set(
  JPC_VehicleTrackSettings_t * self,
  JPC_ArrayUint_t * mWheels
);

float JPC_VehicleTrackSettings_mInertia_Get(
  JPC_VehicleTrackSettings_t * self
);

void JPC_VehicleTrackSettings_mInertia_Set(
  JPC_VehicleTrackSettings_t * self,
  float mInertia
);

float JPC_VehicleTrackSettings_mAngularDamping_Get(
  JPC_VehicleTrackSettings_t * self
);

void JPC_VehicleTrackSettings_mAngularDamping_Set(
  JPC_VehicleTrackSettings_t * self,
  float mAngularDamping
);

float JPC_VehicleTrackSettings_mMaxBrakeTorque_Get(
  JPC_VehicleTrackSettings_t * self
);

void JPC_VehicleTrackSettings_mMaxBrakeTorque_Set(
  JPC_VehicleTrackSettings_t * self,
  float mMaxBrakeTorque
);

float JPC_VehicleTrackSettings_mDifferentialRatio_Get(
  JPC_VehicleTrackSettings_t * self
);

void JPC_VehicleTrackSettings_mDifferentialRatio_Set(
  JPC_VehicleTrackSettings_t * self,
  float mDifferentialRatio
);

//endregion properties


#ifdef __cplusplus
}
#endif

