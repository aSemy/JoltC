#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_Quat_t * JoltC_Quat_new_0();

JoltC_Quat_t * JoltC_Quat_new_1(
  float inX,
  float inY,
  float inZ,
  float inW
);

//endregion

//region functions

JoltC_Quat_t * JoltC_Quat_sZero();

JoltC_Quat_t * JoltC_Quat_sIdentity();

JoltC_Quat_t * JoltC_Quat_sRotation(
  JoltC_Vec3_t * inRotation,
  float inAngle
);

JoltC_Quat_t * JoltC_Quat_sFromTo(
  JoltC_Vec3_t * inFrom,
  JoltC_Vec3_t * inTo
);

bool JoltC_Quat_Equals(
  JoltC_Quat_t * self,
  JoltC_Quat_t * inQ
);

bool JoltC_Quat_NotEquals(
  JoltC_Quat_t * self,
  JoltC_Quat_t * inQ
);

bool JoltC_Quat_IsClose(
  JoltC_Quat_t * self,
  JoltC_Quat_t * inQ,
  float inMaxDistSq
);

bool JoltC_Quat_IsNormalized(
  JoltC_Quat_t * self,
  float inTolerance
);

float JoltC_Quat_Length(
  JoltC_Quat_t * self
);

float JoltC_Quat_LengthSq(
  JoltC_Quat_t * self
);

JoltC_Quat_t * JoltC_Quat_Normalized(
  JoltC_Quat_t * self
);

JoltC_Quat_t * JoltC_Quat_sEulerAngles(
  JoltC_Vec3_t * inInput
);

JoltC_Vec3_t * JoltC_Quat_GetEulerAngles(
  JoltC_Quat_t * self
);

float JoltC_Quat_GetX(
  JoltC_Quat_t * self
);

float JoltC_Quat_GetY(
  JoltC_Quat_t * self
);

float JoltC_Quat_GetZ(
  JoltC_Quat_t * self
);

float JoltC_Quat_GetW(
  JoltC_Quat_t * self
);

JoltC_Vec3_t * JoltC_Quat_GetXYZ(
  JoltC_Quat_t * self
);

void JoltC_Quat_SetX(
  JoltC_Quat_t * self,
  float inX
);

void JoltC_Quat_SetY(
  JoltC_Quat_t * self,
  float inY
);

void JoltC_Quat_SetZ(
  JoltC_Quat_t * self,
  float inZ
);

void JoltC_Quat_SetW(
  JoltC_Quat_t * self,
  float inW
);

void JoltC_Quat_Set(
  JoltC_Quat_t * self,
  float inX,
  float inY,
  float inZ,
  float inW
);

JoltC_Vec3_t * JoltC_Quat_InverseRotate(
  JoltC_Quat_t * self,
  JoltC_Vec3_t * inV
);

JoltC_Vec3_t * JoltC_Quat_RotateAxisX(
  JoltC_Quat_t * self
);

JoltC_Vec3_t * JoltC_Quat_RotateAxisY(
  JoltC_Quat_t * self
);

JoltC_Vec3_t * JoltC_Quat_RotateAxisZ(
  JoltC_Quat_t * self
);

float JoltC_Quat_Dot(
  JoltC_Quat_t * self,
  JoltC_Quat_t * inQ
);

JoltC_Quat_t * JoltC_Quat_Conjugated(
  JoltC_Quat_t * self
);

JoltC_Quat_t * JoltC_Quat_Inversed(
  JoltC_Quat_t * self
);

JoltC_Quat_t * JoltC_Quat_EnsureWPositive(
  JoltC_Quat_t * self
);

JoltC_Quat_t * JoltC_Quat_GetPerpendicular(
  JoltC_Quat_t * self
);

float JoltC_Quat_GetRotationAngle(
  JoltC_Quat_t * self,
  JoltC_Vec3_t * inAxis
);

JoltC_Quat_t * JoltC_Quat_GetTwist(
  JoltC_Quat_t * self,
  JoltC_Vec3_t * inAxis
);

void JoltC_Quat_GetSwingTwist(
  JoltC_Quat_t * self,
  JoltC_Quat_t * outSwing,
  JoltC_Quat_t * outTwist
);

JoltC_Quat_t * JoltC_Quat_LERP(
  JoltC_Quat_t * self,
  JoltC_Quat_t * inDestination,
  float inFraction
);

JoltC_Quat_t * JoltC_Quat_SLERP(
  JoltC_Quat_t * self,
  JoltC_Quat_t * inDestination,
  float inFraction
);

//endregion


#ifdef __cplusplus
}
#endif

