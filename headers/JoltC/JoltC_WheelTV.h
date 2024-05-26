#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_WheelTV_t * JoltC_WheelTV_new(
  JoltC_WheelSettingsTV_t * inWheel
);

//endregion

//region functions

JoltC_WheelSettingsTV_t * JoltC_WheelTV_GetSettings_0(
  JoltC_WheelTV_t * self
);

JoltC_WheelSettings_t * JoltC_WheelTV_GetSettings_1(
  JoltC_WheelTV_t * self
);

float JoltC_WheelTV_GetAngularVelocity(
  JoltC_WheelTV_t * self
);

void JoltC_WheelTV_SetAngularVelocity(
  JoltC_WheelTV_t * self,
  float inVel
);

float JoltC_WheelTV_GetRotationAngle(
  JoltC_WheelTV_t * self
);

void JoltC_WheelTV_SetRotationAngle(
  JoltC_WheelTV_t * self,
  float inAngle
);

float JoltC_WheelTV_GetSteerAngle(
  JoltC_WheelTV_t * self
);

void JoltC_WheelTV_SetSteerAngle(
  JoltC_WheelTV_t * self,
  float inAngle
);

bool JoltC_WheelTV_HasContact(
  JoltC_WheelTV_t * self
);

JoltC_BodyID_t * JoltC_WheelTV_GetContactBodyID(
  JoltC_WheelTV_t * self
);

JoltC_RVec3_t * JoltC_WheelTV_GetContactPosition(
  JoltC_WheelTV_t * self
);

JoltC_Vec3_t * JoltC_WheelTV_GetContactPointVelocity(
  JoltC_WheelTV_t * self
);

JoltC_Vec3_t * JoltC_WheelTV_GetContactNormal(
  JoltC_WheelTV_t * self
);

JoltC_Vec3_t * JoltC_WheelTV_GetContactLongitudinal(
  JoltC_WheelTV_t * self
);

JoltC_Vec3_t * JoltC_WheelTV_GetContactLateral(
  JoltC_WheelTV_t * self
);

float JoltC_WheelTV_GetSuspensionLength(
  JoltC_WheelTV_t * self
);

bool JoltC_WheelTV_HasHitHardPoint(
  JoltC_WheelTV_t * self
);

float JoltC_WheelTV_GetSuspensionLambda(
  JoltC_WheelTV_t * self
);

float JoltC_WheelTV_GetLongitudinalLambda(
  JoltC_WheelTV_t * self
);

float JoltC_WheelTV_GetLateralLambda(
  JoltC_WheelTV_t * self
);

//endregion

//region properties

long JoltC_WheelTV_mTrackIndex_Get(
  JoltC_WheelTV_t * self
);

void JoltC_WheelTV_mTrackIndex_Set(
  JoltC_WheelTV_t * self,
  long mTrackIndex
);

float JoltC_WheelTV_mCombinedLongitudinalFriction_Get(
  JoltC_WheelTV_t * self
);

void JoltC_WheelTV_mCombinedLongitudinalFriction_Set(
  JoltC_WheelTV_t * self,
  float mCombinedLongitudinalFriction
);

float JoltC_WheelTV_mCombinedLateralFriction_Get(
  JoltC_WheelTV_t * self
);

void JoltC_WheelTV_mCombinedLateralFriction_Set(
  JoltC_WheelTV_t * self,
  float mCombinedLateralFriction
);

float JoltC_WheelTV_mBrakeImpulse_Get(
  JoltC_WheelTV_t * self
);

void JoltC_WheelTV_mBrakeImpulse_Set(
  JoltC_WheelTV_t * self,
  float mBrakeImpulse
);

//endregion


#ifdef __cplusplus
}
#endif

