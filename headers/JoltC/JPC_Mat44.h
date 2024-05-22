#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_Mat44_t * JPC_Mat44_new();

//endregion constructors

//region functions

JPC_Mat44_t * JPC_Mat44_sZero();

JPC_Mat44_t * JPC_Mat44_sIdentity();

JPC_Mat44_t * JPC_Mat44_sRotationX(
  float inX
);

JPC_Mat44_t * JPC_Mat44_sRotationY(
  float inY
);

JPC_Mat44_t * JPC_Mat44_sRotationZ(
  float inZ
);

JPC_Mat44_t * JPC_Mat44_sRotation(
  const JPC_Quat_t * inQ
);

JPC_Mat44_t * JPC_Mat44_sTranslation(
  const JPC_Vec3_t * inTranslation
);

JPC_Mat44_t * JPC_Mat44_sRotationTranslation(
  const JPC_Quat_t * inRotation,
  const JPC_Vec3_t * inTranslation
);

JPC_Mat44_t * JPC_Mat44_sInverseRotationTranslation(
  const JPC_Quat_t * inRotation,
  const JPC_Vec3_t * inTranslation
);

JPC_Mat44_t * JPC_Mat44_sScale(
  float inScale
);

JPC_Mat44_t * JPC_Mat44_sPerspective(
  float inFovY,
  float inAspect,
  float inNear,
  float inFar
);

JPC_Vec3_t * JPC_Mat44_GetAxisX(
  JPC_Mat44_t * self
);

JPC_Vec3_t * JPC_Mat44_GetAxisY(
  JPC_Mat44_t * self
);

JPC_Vec3_t * JPC_Mat44_GetAxisZ(
  JPC_Mat44_t * self
);

JPC_Mat44_t * JPC_Mat44_GetRotation(
  JPC_Mat44_t * self
);

JPC_Quat_t * JPC_Mat44_GetQuaternion(
  JPC_Mat44_t * self
);

JPC_Vec3_t * JPC_Mat44_GetTranslation(
  JPC_Mat44_t * self
);

bool JPC_Mat44_IsClose(
  JPC_Mat44_t * self,
  const JPC_Mat44_t * inM,
  float inMaxDistSq
);

JPC_Vec3_t * JPC_Mat44_Multiply3x3(
  JPC_Mat44_t * self,
  const JPC_Vec3_t * inV
);

JPC_Vec3_t * JPC_Mat44_Multiply3x3Transposed(
  JPC_Mat44_t * self,
  const JPC_Vec3_t * inV
);

JPC_Mat44_t * JPC_Mat44_Transposed(
  JPC_Mat44_t * self
);

JPC_Mat44_t * JPC_Mat44_Transposed3x3(
  JPC_Mat44_t * self
);

JPC_Mat44_t * JPC_Mat44_Inversed(
  JPC_Mat44_t * self
);

JPC_Mat44_t * JPC_Mat44_InversedRotationTranslation(
  JPC_Mat44_t * self
);

float JPC_Mat44_GetDeterminant3x3(
  JPC_Mat44_t * self
);

JPC_Mat44_t * JPC_Mat44_Inversed3x3(
  JPC_Mat44_t * self
);

JPC_Mat44_t * JPC_Mat44_GetDirectionPreservingMatrix(
  JPC_Mat44_t * self
);

JPC_Mat44_t * JPC_Mat44_PreTranslated(
  JPC_Mat44_t * self,
  const JPC_Vec3_t * inTranslation
);

JPC_Mat44_t * JPC_Mat44_PostTranslated(
  JPC_Mat44_t * self,
  const JPC_Vec3_t * inTranslation
);

JPC_Mat44_t * JPC_Mat44_PreScaled(
  JPC_Mat44_t * self,
  const JPC_Vec3_t * inScale
);

JPC_Mat44_t * JPC_Mat44_PostScaled(
  JPC_Mat44_t * self,
  const JPC_Vec3_t * inScale
);

void JPC_Mat44_SetColumn3(
  JPC_Mat44_t * self,
  long inCol,
  const JPC_Vec3_t * inV
);

void JPC_Mat44_SetAxisX(
  JPC_Mat44_t * self,
  const JPC_Vec3_t * inV
);

void JPC_Mat44_SetAxisY(
  JPC_Mat44_t * self,
  const JPC_Vec3_t * inV
);

void JPC_Mat44_SetAxisZ(
  JPC_Mat44_t * self,
  const JPC_Vec3_t * inV
);

void JPC_Mat44_SetTranslation(
  JPC_Mat44_t * self,
  const JPC_Vec3_t * inV
);

void JPC_Mat44_SetColumn4(
  JPC_Mat44_t * self,
  long inCol,
  const JPC_Vec4_t * inV
);

//endregion functions


#ifdef __cplusplus
}
#endif

