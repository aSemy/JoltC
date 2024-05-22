#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JPC_VehicleEngine_ClampRPM(
  JPC_VehicleEngine_t * self
);

float JPC_VehicleEngine_GetCurrentRPM(
  JPC_VehicleEngine_t * self
);

void JPC_VehicleEngine_SetCurrentRPM(
  JPC_VehicleEngine_t * self,
  float inRPM
);

float JPC_VehicleEngine_GetAngularVelocity(
  JPC_VehicleEngine_t * self
);

float JPC_VehicleEngine_GetTorque(
  JPC_VehicleEngine_t * self,
  float inAcceleration
);

//endregion functions

//region properties

float JPC_VehicleEngine_mMaxTorque_Get(
  JPC_VehicleEngine_t * self
);

void JPC_VehicleEngine_mMaxTorque_Set(
  JPC_VehicleEngine_t * self,
  float mMaxTorque
);

float JPC_VehicleEngine_mMinRPM_Get(
  JPC_VehicleEngine_t * self
);

void JPC_VehicleEngine_mMinRPM_Set(
  JPC_VehicleEngine_t * self,
  float mMinRPM
);

float JPC_VehicleEngine_mMaxRPM_Get(
  JPC_VehicleEngine_t * self
);

void JPC_VehicleEngine_mMaxRPM_Set(
  JPC_VehicleEngine_t * self,
  float mMaxRPM
);

JPC_LinearCurve_t * JPC_VehicleEngine_mNormalizedTorque_Get(
  JPC_VehicleEngine_t * self
);

void JPC_VehicleEngine_mNormalizedTorque_Set(
  JPC_VehicleEngine_t * self,
  JPC_LinearCurve_t * mNormalizedTorque
);

float JPC_VehicleEngine_mInertia_Get(
  JPC_VehicleEngine_t * self
);

void JPC_VehicleEngine_mInertia_Set(
  JPC_VehicleEngine_t * self,
  float mInertia
);

float JPC_VehicleEngine_mAngularDamping_Get(
  JPC_VehicleEngine_t * self
);

void JPC_VehicleEngine_mAngularDamping_Set(
  JPC_VehicleEngine_t * self,
  float mAngularDamping
);

//endregion properties


#ifdef __cplusplus
}
#endif

