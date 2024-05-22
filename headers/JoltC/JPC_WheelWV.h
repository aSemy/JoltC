#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_WheelWV_t * JPC_WheelWV_new(
  const JPC_WheelSettingsWV_t * inWheel
);

//endregion constructors

//region functions

const JPC_WheelSettingsWV_t * JPC_WheelWV_GetSettings_0(
  JPC_WheelWV_t * self
);

const JPC_WheelSettings_t * JPC_WheelWV_GetSettings_1(
  JPC_WheelWV_t * self
);

float JPC_WheelWV_GetAngularVelocity(
  JPC_WheelWV_t * self
);

void JPC_WheelWV_SetAngularVelocity(
  JPC_WheelWV_t * self,
  float inVel
);

float JPC_WheelWV_GetRotationAngle(
  JPC_WheelWV_t * self
);

void JPC_WheelWV_SetRotationAngle(
  JPC_WheelWV_t * self,
  float inAngle
);

float JPC_WheelWV_GetSteerAngle(
  JPC_WheelWV_t * self
);

void JPC_WheelWV_SetSteerAngle(
  JPC_WheelWV_t * self,
  float inAngle
);

bool JPC_WheelWV_HasContact(
  JPC_WheelWV_t * self
);

JPC_BodyID_t * JPC_WheelWV_GetContactBodyID(
  JPC_WheelWV_t * self
);

JPC_RVec3_t * JPC_WheelWV_GetContactPosition(
  JPC_WheelWV_t * self
);

JPC_Vec3_t * JPC_WheelWV_GetContactPointVelocity(
  JPC_WheelWV_t * self
);

JPC_Vec3_t * JPC_WheelWV_GetContactNormal(
  JPC_WheelWV_t * self
);

JPC_Vec3_t * JPC_WheelWV_GetContactLongitudinal(
  JPC_WheelWV_t * self
);

JPC_Vec3_t * JPC_WheelWV_GetContactLateral(
  JPC_WheelWV_t * self
);

float JPC_WheelWV_GetSuspensionLength(
  JPC_WheelWV_t * self
);

bool JPC_WheelWV_HasHitHardPoint(
  JPC_WheelWV_t * self
);

float JPC_WheelWV_GetSuspensionLambda(
  JPC_WheelWV_t * self
);

float JPC_WheelWV_GetLongitudinalLambda(
  JPC_WheelWV_t * self
);

float JPC_WheelWV_GetLateralLambda(
  JPC_WheelWV_t * self
);

//endregion functions

//region properties

float JPC_WheelWV_mLongitudinalSlip_Get(
  JPC_WheelWV_t * self
);

void JPC_WheelWV_mLongitudinalSlip_Set(
  JPC_WheelWV_t * self,
  float mLongitudinalSlip
);

float JPC_WheelWV_mLateralSlip_Get(
  JPC_WheelWV_t * self
);

void JPC_WheelWV_mLateralSlip_Set(
  JPC_WheelWV_t * self,
  float mLateralSlip
);

float JPC_WheelWV_mCombinedLongitudinalFriction_Get(
  JPC_WheelWV_t * self
);

void JPC_WheelWV_mCombinedLongitudinalFriction_Set(
  JPC_WheelWV_t * self,
  float mCombinedLongitudinalFriction
);

float JPC_WheelWV_mCombinedLateralFriction_Get(
  JPC_WheelWV_t * self
);

void JPC_WheelWV_mCombinedLateralFriction_Set(
  JPC_WheelWV_t * self,
  float mCombinedLateralFriction
);

float JPC_WheelWV_mBrakeImpulse_Get(
  JPC_WheelWV_t * self
);

void JPC_WheelWV_mBrakeImpulse_Set(
  JPC_WheelWV_t * self,
  float mBrakeImpulse
);

//endregion properties


#ifdef __cplusplus
}
#endif

