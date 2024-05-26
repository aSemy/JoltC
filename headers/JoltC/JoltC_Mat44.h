#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_Mat44_t * JoltC_Mat44_new();

//endregion

//region functions

JoltC_Mat44_t * JoltC_Mat44_sZero();

JoltC_Mat44_t * JoltC_Mat44_sIdentity();

JoltC_Mat44_t * JoltC_Mat44_sRotationX(
  float inX
);

JoltC_Mat44_t * JoltC_Mat44_sRotationY(
  float inY
);

JoltC_Mat44_t * JoltC_Mat44_sRotationZ(
  float inZ
);

JoltC_Mat44_t * JoltC_Mat44_sRotation(
  JoltC_Quat_t * inQ
);

JoltC_Mat44_t * JoltC_Mat44_sTranslation(
  JoltC_Vec3_t * inTranslation
);

JoltC_Mat44_t * JoltC_Mat44_sRotationTranslation(
  JoltC_Quat_t * inRotation,
  JoltC_Vec3_t * inTranslation
);

JoltC_Mat44_t * JoltC_Mat44_sInverseRotationTranslation(
  JoltC_Quat_t * inRotation,
  JoltC_Vec3_t * inTranslation
);

JoltC_Mat44_t * JoltC_Mat44_sScale(
  float inScale
);

JoltC_Mat44_t * JoltC_Mat44_sPerspective(
  float inFovY,
  float inAspect,
  float inNear,
  float inFar
);

JoltC_Vec3_t * JoltC_Mat44_GetAxisX(
  JoltC_Mat44_t * self
);

JoltC_Vec3_t * JoltC_Mat44_GetAxisY(
  JoltC_Mat44_t * self
);

JoltC_Vec3_t * JoltC_Mat44_GetAxisZ(
  JoltC_Mat44_t * self
);

JoltC_Mat44_t * JoltC_Mat44_GetRotation(
  JoltC_Mat44_t * self
);

JoltC_Quat_t * JoltC_Mat44_GetQuaternion(
  JoltC_Mat44_t * self
);

JoltC_Vec3_t * JoltC_Mat44_GetTranslation(
  JoltC_Mat44_t * self
);

bool JoltC_Mat44_IsClose(
  JoltC_Mat44_t * self,
  JoltC_Mat44_t * inM,
  float inMaxDistSq
);

JoltC_Vec3_t * JoltC_Mat44_Multiply3x3(
  JoltC_Mat44_t * self,
  JoltC_Vec3_t * inV
);

JoltC_Vec3_t * JoltC_Mat44_Multiply3x3Transposed(
  JoltC_Mat44_t * self,
  JoltC_Vec3_t * inV
);

JoltC_Mat44_t * JoltC_Mat44_Transposed(
  JoltC_Mat44_t * self
);

JoltC_Mat44_t * JoltC_Mat44_Transposed3x3(
  JoltC_Mat44_t * self
);

JoltC_Mat44_t * JoltC_Mat44_Inversed(
  JoltC_Mat44_t * self
);

JoltC_Mat44_t * JoltC_Mat44_InversedRotationTranslation(
  JoltC_Mat44_t * self
);

float JoltC_Mat44_GetDeterminant3x3(
  JoltC_Mat44_t * self
);

JoltC_Mat44_t * JoltC_Mat44_Inversed3x3(
  JoltC_Mat44_t * self
);

JoltC_Mat44_t * JoltC_Mat44_GetDirectionPreservingMatrix(
  JoltC_Mat44_t * self
);

JoltC_Mat44_t * JoltC_Mat44_PreTranslated(
  JoltC_Mat44_t * self,
  JoltC_Vec3_t * inTranslation
);

JoltC_Mat44_t * JoltC_Mat44_PostTranslated(
  JoltC_Mat44_t * self,
  JoltC_Vec3_t * inTranslation
);

JoltC_Mat44_t * JoltC_Mat44_PreScaled(
  JoltC_Mat44_t * self,
  JoltC_Vec3_t * inScale
);

JoltC_Mat44_t * JoltC_Mat44_PostScaled(
  JoltC_Mat44_t * self,
  JoltC_Vec3_t * inScale
);

void JoltC_Mat44_SetColumn3(
  JoltC_Mat44_t * self,
  long inCol,
  JoltC_Vec3_t * inV
);

void JoltC_Mat44_SetAxisX(
  JoltC_Mat44_t * self,
  JoltC_Vec3_t * inV
);

void JoltC_Mat44_SetAxisY(
  JoltC_Mat44_t * self,
  JoltC_Vec3_t * inV
);

void JoltC_Mat44_SetAxisZ(
  JoltC_Mat44_t * self,
  JoltC_Vec3_t * inV
);

void JoltC_Mat44_SetTranslation(
  JoltC_Mat44_t * self,
  JoltC_Vec3_t * inV
);

void JoltC_Mat44_SetColumn4(
  JoltC_Mat44_t * self,
  long inCol,
  JoltC_Vec4_t * inV
);

//endregion


#ifdef __cplusplus
}
#endif

