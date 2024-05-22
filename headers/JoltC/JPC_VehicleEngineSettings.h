#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region properties

float JPC_VehicleEngineSettings_mMaxTorque_Get(
  JPC_VehicleEngineSettings_t * self
);

void JPC_VehicleEngineSettings_mMaxTorque_Set(
  JPC_VehicleEngineSettings_t * self,
  float mMaxTorque
);

float JPC_VehicleEngineSettings_mMinRPM_Get(
  JPC_VehicleEngineSettings_t * self
);

void JPC_VehicleEngineSettings_mMinRPM_Set(
  JPC_VehicleEngineSettings_t * self,
  float mMinRPM
);

float JPC_VehicleEngineSettings_mMaxRPM_Get(
  JPC_VehicleEngineSettings_t * self
);

void JPC_VehicleEngineSettings_mMaxRPM_Set(
  JPC_VehicleEngineSettings_t * self,
  float mMaxRPM
);

JPC_LinearCurve_t * JPC_VehicleEngineSettings_mNormalizedTorque_Get(
  JPC_VehicleEngineSettings_t * self
);

void JPC_VehicleEngineSettings_mNormalizedTorque_Set(
  JPC_VehicleEngineSettings_t * self,
  JPC_LinearCurve_t * mNormalizedTorque
);

float JPC_VehicleEngineSettings_mInertia_Get(
  JPC_VehicleEngineSettings_t * self
);

void JPC_VehicleEngineSettings_mInertia_Set(
  JPC_VehicleEngineSettings_t * self,
  float mInertia
);

float JPC_VehicleEngineSettings_mAngularDamping_Get(
  JPC_VehicleEngineSettings_t * self
);

void JPC_VehicleEngineSettings_mAngularDamping_Set(
  JPC_VehicleEngineSettings_t * self,
  float mAngularDamping
);

//endregion properties


#ifdef __cplusplus
}
#endif

