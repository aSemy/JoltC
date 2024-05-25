#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_WheelWV_t * JoltC_WheelWV_new(
  const JoltC_WheelSettingsWV_t * inWheel,
  char** outErrMsg
);

//endregion constructors

//region functions

const JoltC_WheelSettingsWV_t * JoltC_WheelWV_GetSettings_0(
  JoltC_WheelWV_t * self,
  char** outErrMsg
);

const JoltC_WheelSettings_t * JoltC_WheelWV_GetSettings_1(
  JoltC_WheelWV_t * self,
  char** outErrMsg
);

float JoltC_WheelWV_GetAngularVelocity(
  JoltC_WheelWV_t * self,
  char** outErrMsg
);

void JoltC_WheelWV_SetAngularVelocity(
  JoltC_WheelWV_t * self,
  float inVel,
  char** outErrMsg
);

float JoltC_WheelWV_GetRotationAngle(
  JoltC_WheelWV_t * self,
  char** outErrMsg
);

void JoltC_WheelWV_SetRotationAngle(
  JoltC_WheelWV_t * self,
  float inAngle,
  char** outErrMsg
);

float JoltC_WheelWV_GetSteerAngle(
  JoltC_WheelWV_t * self,
  char** outErrMsg
);

void JoltC_WheelWV_SetSteerAngle(
  JoltC_WheelWV_t * self,
  float inAngle,
  char** outErrMsg
);

bool JoltC_WheelWV_HasContact(
  JoltC_WheelWV_t * self,
  char** outErrMsg
);

JoltC_BodyID_t * JoltC_WheelWV_GetContactBodyID(
  JoltC_WheelWV_t * self,
  char** outErrMsg
);

JoltC_RVec3_t * JoltC_WheelWV_GetContactPosition(
  JoltC_WheelWV_t * self,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_WheelWV_GetContactPointVelocity(
  JoltC_WheelWV_t * self,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_WheelWV_GetContactNormal(
  JoltC_WheelWV_t * self,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_WheelWV_GetContactLongitudinal(
  JoltC_WheelWV_t * self,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_WheelWV_GetContactLateral(
  JoltC_WheelWV_t * self,
  char** outErrMsg
);

float JoltC_WheelWV_GetSuspensionLength(
  JoltC_WheelWV_t * self,
  char** outErrMsg
);

bool JoltC_WheelWV_HasHitHardPoint(
  JoltC_WheelWV_t * self,
  char** outErrMsg
);

float JoltC_WheelWV_GetSuspensionLambda(
  JoltC_WheelWV_t * self,
  char** outErrMsg
);

float JoltC_WheelWV_GetLongitudinalLambda(
  JoltC_WheelWV_t * self,
  char** outErrMsg
);

float JoltC_WheelWV_GetLateralLambda(
  JoltC_WheelWV_t * self,
  char** outErrMsg
);

//endregion functions

//region properties

float JoltC_WheelWV_mLongitudinalSlip_Get(
  JoltC_WheelWV_t * self,
  char** outErrMsg
);

void JoltC_WheelWV_mLongitudinalSlip_Set(
  JoltC_WheelWV_t * self,
  float mLongitudinalSlip,
  char** outErrMsg
);

float JoltC_WheelWV_mLateralSlip_Get(
  JoltC_WheelWV_t * self,
  char** outErrMsg
);

void JoltC_WheelWV_mLateralSlip_Set(
  JoltC_WheelWV_t * self,
  float mLateralSlip,
  char** outErrMsg
);

float JoltC_WheelWV_mCombinedLongitudinalFriction_Get(
  JoltC_WheelWV_t * self,
  char** outErrMsg
);

void JoltC_WheelWV_mCombinedLongitudinalFriction_Set(
  JoltC_WheelWV_t * self,
  float mCombinedLongitudinalFriction,
  char** outErrMsg
);

float JoltC_WheelWV_mCombinedLateralFriction_Get(
  JoltC_WheelWV_t * self,
  char** outErrMsg
);

void JoltC_WheelWV_mCombinedLateralFriction_Set(
  JoltC_WheelWV_t * self,
  float mCombinedLateralFriction,
  char** outErrMsg
);

float JoltC_WheelWV_mBrakeImpulse_Get(
  JoltC_WheelWV_t * self,
  char** outErrMsg
);

void JoltC_WheelWV_mBrakeImpulse_Set(
  JoltC_WheelWV_t * self,
  float mBrakeImpulse,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

