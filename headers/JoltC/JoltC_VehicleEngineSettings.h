#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region converters

/**
 * Convert an instance of JoltC_VehicleEngine_t into JoltC_VehicleEngineSettings_t.
 */
JoltC_VehicleEngineSettings_t * JoltC_VehicleEngineSettings_From_VehicleEngine(
  JoltC_VehicleEngine_t * subtype
);

//endregion

//region properties

float JoltC_VehicleEngineSettings_mMaxTorque_Get(
  JoltC_VehicleEngineSettings_t * self
);

void JoltC_VehicleEngineSettings_mMaxTorque_Set(
  JoltC_VehicleEngineSettings_t * self,
  float mMaxTorque
);

float JoltC_VehicleEngineSettings_mMinRPM_Get(
  JoltC_VehicleEngineSettings_t * self
);

void JoltC_VehicleEngineSettings_mMinRPM_Set(
  JoltC_VehicleEngineSettings_t * self,
  float mMinRPM
);

float JoltC_VehicleEngineSettings_mMaxRPM_Get(
  JoltC_VehicleEngineSettings_t * self
);

void JoltC_VehicleEngineSettings_mMaxRPM_Set(
  JoltC_VehicleEngineSettings_t * self,
  float mMaxRPM
);

JoltC_LinearCurve_t * JoltC_VehicleEngineSettings_mNormalizedTorque_Get(
  JoltC_VehicleEngineSettings_t * self
);

void JoltC_VehicleEngineSettings_mNormalizedTorque_Set(
  JoltC_VehicleEngineSettings_t * self,
  JoltC_LinearCurve_t * mNormalizedTorque
);

float JoltC_VehicleEngineSettings_mInertia_Get(
  JoltC_VehicleEngineSettings_t * self
);

void JoltC_VehicleEngineSettings_mInertia_Set(
  JoltC_VehicleEngineSettings_t * self,
  float mInertia
);

float JoltC_VehicleEngineSettings_mAngularDamping_Get(
  JoltC_VehicleEngineSettings_t * self
);

void JoltC_VehicleEngineSettings_mAngularDamping_Set(
  JoltC_VehicleEngineSettings_t * self,
  float mAngularDamping
);

//endregion


#ifdef __cplusplus
}
#endif

