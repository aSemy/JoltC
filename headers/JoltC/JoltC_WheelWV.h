#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_WheelWV_t * JoltC_WheelWV_new(
  const JoltC_WheelSettingsWV_t * inWheel
);

//endregion

//region functions

const JoltC_WheelSettingsWV_t * JoltC_WheelWV_GetSettings_0(
  JoltC_WheelWV_t * self
);

const JoltC_WheelSettings_t * JoltC_WheelWV_GetSettings_1(
  JoltC_WheelWV_t * self
);

float JoltC_WheelWV_GetAngularVelocity(
  JoltC_WheelWV_t * self
);

void JoltC_WheelWV_SetAngularVelocity(
  JoltC_WheelWV_t * self,
  float inVel
);

float JoltC_WheelWV_GetRotationAngle(
  JoltC_WheelWV_t * self
);

void JoltC_WheelWV_SetRotationAngle(
  JoltC_WheelWV_t * self,
  float inAngle
);

float JoltC_WheelWV_GetSteerAngle(
  JoltC_WheelWV_t * self
);

void JoltC_WheelWV_SetSteerAngle(
  JoltC_WheelWV_t * self,
  float inAngle
);

bool JoltC_WheelWV_HasContact(
  JoltC_WheelWV_t * self
);

JoltC_BodyID_t * JoltC_WheelWV_GetContactBodyID(
  JoltC_WheelWV_t * self
);

JoltC_RVec3_t * JoltC_WheelWV_GetContactPosition(
  JoltC_WheelWV_t * self
);

JoltC_Vec3_t * JoltC_WheelWV_GetContactPointVelocity(
  JoltC_WheelWV_t * self
);

JoltC_Vec3_t * JoltC_WheelWV_GetContactNormal(
  JoltC_WheelWV_t * self
);

JoltC_Vec3_t * JoltC_WheelWV_GetContactLongitudinal(
  JoltC_WheelWV_t * self
);

JoltC_Vec3_t * JoltC_WheelWV_GetContactLateral(
  JoltC_WheelWV_t * self
);

float JoltC_WheelWV_GetSuspensionLength(
  JoltC_WheelWV_t * self
);

bool JoltC_WheelWV_HasHitHardPoint(
  JoltC_WheelWV_t * self
);

float JoltC_WheelWV_GetSuspensionLambda(
  JoltC_WheelWV_t * self
);

float JoltC_WheelWV_GetLongitudinalLambda(
  JoltC_WheelWV_t * self
);

float JoltC_WheelWV_GetLateralLambda(
  JoltC_WheelWV_t * self
);

//endregion

//region properties

float JoltC_WheelWV_mLongitudinalSlip_Get(
  JoltC_WheelWV_t * self
);

void JoltC_WheelWV_mLongitudinalSlip_Set(
  JoltC_WheelWV_t * self,
  float mLongitudinalSlip
);

float JoltC_WheelWV_mLateralSlip_Get(
  JoltC_WheelWV_t * self
);

void JoltC_WheelWV_mLateralSlip_Set(
  JoltC_WheelWV_t * self,
  float mLateralSlip
);

float JoltC_WheelWV_mCombinedLongitudinalFriction_Get(
  JoltC_WheelWV_t * self
);

void JoltC_WheelWV_mCombinedLongitudinalFriction_Set(
  JoltC_WheelWV_t * self,
  float mCombinedLongitudinalFriction
);

float JoltC_WheelWV_mCombinedLateralFriction_Get(
  JoltC_WheelWV_t * self
);

void JoltC_WheelWV_mCombinedLateralFriction_Set(
  JoltC_WheelWV_t * self,
  float mCombinedLateralFriction
);

float JoltC_WheelWV_mBrakeImpulse_Get(
  JoltC_WheelWV_t * self
);

void JoltC_WheelWV_mBrakeImpulse_Set(
  JoltC_WheelWV_t * self,
  float mBrakeImpulse
);

//endregion


#ifdef __cplusplus
}
#endif

