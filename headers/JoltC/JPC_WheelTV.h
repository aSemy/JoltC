#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_WheelTV_t * JPC_WheelTV_new(
  const JPC_WheelSettingsTV_t * inWheel
);

//endregion constructors

//region functions

const JPC_WheelSettingsTV_t * JPC_WheelTV_GetSettings_0(
  JPC_WheelTV_t * self
);

const JPC_WheelSettings_t * JPC_WheelTV_GetSettings_1(
  JPC_WheelTV_t * self
);

float JPC_WheelTV_GetAngularVelocity(
  JPC_WheelTV_t * self
);

void JPC_WheelTV_SetAngularVelocity(
  JPC_WheelTV_t * self,
  float inVel
);

float JPC_WheelTV_GetRotationAngle(
  JPC_WheelTV_t * self
);

void JPC_WheelTV_SetRotationAngle(
  JPC_WheelTV_t * self,
  float inAngle
);

float JPC_WheelTV_GetSteerAngle(
  JPC_WheelTV_t * self
);

void JPC_WheelTV_SetSteerAngle(
  JPC_WheelTV_t * self,
  float inAngle
);

bool JPC_WheelTV_HasContact(
  JPC_WheelTV_t * self
);

JPC_BodyID_t * JPC_WheelTV_GetContactBodyID(
  JPC_WheelTV_t * self
);

JPC_RVec3_t * JPC_WheelTV_GetContactPosition(
  JPC_WheelTV_t * self
);

JPC_Vec3_t * JPC_WheelTV_GetContactPointVelocity(
  JPC_WheelTV_t * self
);

JPC_Vec3_t * JPC_WheelTV_GetContactNormal(
  JPC_WheelTV_t * self
);

JPC_Vec3_t * JPC_WheelTV_GetContactLongitudinal(
  JPC_WheelTV_t * self
);

JPC_Vec3_t * JPC_WheelTV_GetContactLateral(
  JPC_WheelTV_t * self
);

float JPC_WheelTV_GetSuspensionLength(
  JPC_WheelTV_t * self
);

bool JPC_WheelTV_HasHitHardPoint(
  JPC_WheelTV_t * self
);

float JPC_WheelTV_GetSuspensionLambda(
  JPC_WheelTV_t * self
);

float JPC_WheelTV_GetLongitudinalLambda(
  JPC_WheelTV_t * self
);

float JPC_WheelTV_GetLateralLambda(
  JPC_WheelTV_t * self
);

//endregion functions

//region properties

long JPC_WheelTV_mTrackIndex_Get(
  JPC_WheelTV_t * self
);

void JPC_WheelTV_mTrackIndex_Set(
  JPC_WheelTV_t * self,
  long mTrackIndex
);

float JPC_WheelTV_mCombinedLongitudinalFriction_Get(
  JPC_WheelTV_t * self
);

void JPC_WheelTV_mCombinedLongitudinalFriction_Set(
  JPC_WheelTV_t * self,
  float mCombinedLongitudinalFriction
);

float JPC_WheelTV_mCombinedLateralFriction_Get(
  JPC_WheelTV_t * self
);

void JPC_WheelTV_mCombinedLateralFriction_Set(
  JPC_WheelTV_t * self,
  float mCombinedLateralFriction
);

float JPC_WheelTV_mBrakeImpulse_Get(
  JPC_WheelTV_t * self
);

void JPC_WheelTV_mBrakeImpulse_Set(
  JPC_WheelTV_t * self,
  float mBrakeImpulse
);

//endregion properties


#ifdef __cplusplus
}
#endif

