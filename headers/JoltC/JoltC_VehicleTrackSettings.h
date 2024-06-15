#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_VehicleTrackSettings_destroy(
  JoltC_VehicleTrackSettings_t * self
);

//endregion
//region converters

/**
 * Convert an instance of JoltC_VehicleTrack_t into JoltC_VehicleTrackSettings_t.
 */
JoltC_VehicleTrackSettings_t * JoltC_VehicleTrackSettings_From_VehicleTrack(
  JoltC_VehicleTrack_t * subtype
);

//endregion

//region properties

long JoltC_VehicleTrackSettings_mDrivenWheel_Get(
  JoltC_VehicleTrackSettings_t * self
);

void JoltC_VehicleTrackSettings_mDrivenWheel_Set(
  JoltC_VehicleTrackSettings_t * self,
  long mDrivenWheel
);

JoltC_ArrayUint_t * JoltC_VehicleTrackSettings_mWheels_Get(
  JoltC_VehicleTrackSettings_t * self
);

void JoltC_VehicleTrackSettings_mWheels_Set(
  JoltC_VehicleTrackSettings_t * self,
  JoltC_ArrayUint_t * mWheels
);

float JoltC_VehicleTrackSettings_mInertia_Get(
  JoltC_VehicleTrackSettings_t * self
);

void JoltC_VehicleTrackSettings_mInertia_Set(
  JoltC_VehicleTrackSettings_t * self,
  float mInertia
);

float JoltC_VehicleTrackSettings_mAngularDamping_Get(
  JoltC_VehicleTrackSettings_t * self
);

void JoltC_VehicleTrackSettings_mAngularDamping_Set(
  JoltC_VehicleTrackSettings_t * self,
  float mAngularDamping
);

float JoltC_VehicleTrackSettings_mMaxBrakeTorque_Get(
  JoltC_VehicleTrackSettings_t * self
);

void JoltC_VehicleTrackSettings_mMaxBrakeTorque_Set(
  JoltC_VehicleTrackSettings_t * self,
  float mMaxBrakeTorque
);

float JoltC_VehicleTrackSettings_mDifferentialRatio_Get(
  JoltC_VehicleTrackSettings_t * self
);

void JoltC_VehicleTrackSettings_mDifferentialRatio_Set(
  JoltC_VehicleTrackSettings_t * self,
  float mDifferentialRatio
);

//endregion


#ifdef __cplusplus
}
#endif
