#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_Quat_t * JPC_Quat_new_0();

JPC_Quat_t * JPC_Quat_new_1(
  float inX,
  float inY,
  float inZ,
  float inW
);

//endregion constructors

//region functions

JPC_Quat_t * JPC_Quat_sZero();

JPC_Quat_t * JPC_Quat_sIdentity();

JPC_Quat_t * JPC_Quat_sRotation(
  const JPC_Vec3_t * inRotation,
  float inAngle
);

JPC_Quat_t * JPC_Quat_sFromTo(
  const JPC_Vec3_t * inFrom,
  const JPC_Vec3_t * inTo
);

bool JPC_Quat_Equals(
  JPC_Quat_t * self,
  const JPC_Quat_t * inQ
);

bool JPC_Quat_NotEquals(
  JPC_Quat_t * self,
  const JPC_Quat_t * inQ
);

bool JPC_Quat_IsClose(
  JPC_Quat_t * self,
  const JPC_Quat_t * inQ,
  float inMaxDistSq
);

bool JPC_Quat_IsNormalized(
  JPC_Quat_t * self,
  float inTolerance
);

float JPC_Quat_Length(
  JPC_Quat_t * self
);

float JPC_Quat_LengthSq(
  JPC_Quat_t * self
);

JPC_Quat_t * JPC_Quat_Normalized(
  JPC_Quat_t * self
);

JPC_Quat_t * JPC_Quat_sEulerAngles(
  const JPC_Vec3_t * inInput
);

const JPC_Vec3_t * JPC_Quat_GetEulerAngles(
  JPC_Quat_t * self
);

float JPC_Quat_GetX(
  JPC_Quat_t * self
);

float JPC_Quat_GetY(
  JPC_Quat_t * self
);

float JPC_Quat_GetZ(
  JPC_Quat_t * self
);

float JPC_Quat_GetW(
  JPC_Quat_t * self
);

const JPC_Vec3_t * JPC_Quat_GetXYZ(
  JPC_Quat_t * self
);

void JPC_Quat_SetX(
  JPC_Quat_t * self,
  float inX
);

void JPC_Quat_SetY(
  JPC_Quat_t * self,
  float inY
);

void JPC_Quat_SetZ(
  JPC_Quat_t * self,
  float inZ
);

void JPC_Quat_SetW(
  JPC_Quat_t * self,
  float inW
);

void JPC_Quat_Set(
  JPC_Quat_t * self,
  float inX,
  float inY,
  float inZ,
  float inW
);

const JPC_Vec3_t * JPC_Quat_InverseRotate(
  JPC_Quat_t * self,
  const JPC_Vec3_t * inV
);

const JPC_Vec3_t * JPC_Quat_RotateAxisX(
  JPC_Quat_t * self
);

const JPC_Vec3_t * JPC_Quat_RotateAxisY(
  JPC_Quat_t * self
);

const JPC_Vec3_t * JPC_Quat_RotateAxisZ(
  JPC_Quat_t * self
);

float JPC_Quat_Dot(
  JPC_Quat_t * self,
  const JPC_Quat_t * inQ
);

const JPC_Quat_t * JPC_Quat_Conjugated(
  JPC_Quat_t * self
);

const JPC_Quat_t * JPC_Quat_Inversed(
  JPC_Quat_t * self
);

const JPC_Quat_t * JPC_Quat_EnsureWPositive(
  JPC_Quat_t * self
);

const JPC_Quat_t * JPC_Quat_GetPerpendicular(
  JPC_Quat_t * self
);

float JPC_Quat_GetRotationAngle(
  JPC_Quat_t * self,
  const JPC_Vec3_t * inAxis
);

const JPC_Quat_t * JPC_Quat_GetTwist(
  JPC_Quat_t * self,
  const JPC_Vec3_t * inAxis
);

void JPC_Quat_GetSwingTwist(
  JPC_Quat_t * self,
  JPC_Quat_t * outSwing,
  JPC_Quat_t * outTwist
);

const JPC_Quat_t * JPC_Quat_LERP(
  JPC_Quat_t * self,
  const JPC_Quat_t * inDestination,
  float inFraction
);

const JPC_Quat_t * JPC_Quat_SLERP(
  JPC_Quat_t * self,
  const JPC_Quat_t * inDestination,
  float inFraction
);

//endregion functions


#ifdef __cplusplus
}
#endif

