#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_Mat44_t * JoltC_Mat44_new(
  char** outErrMsg
);

//endregion constructors

//region functions

JoltC_Mat44_t * JoltC_Mat44_sZero(
  char** outErrMsg
);

JoltC_Mat44_t * JoltC_Mat44_sIdentity(
  char** outErrMsg
);

JoltC_Mat44_t * JoltC_Mat44_sRotationX(
  float inX,
  char** outErrMsg
);

JoltC_Mat44_t * JoltC_Mat44_sRotationY(
  float inY,
  char** outErrMsg
);

JoltC_Mat44_t * JoltC_Mat44_sRotationZ(
  float inZ,
  char** outErrMsg
);

JoltC_Mat44_t * JoltC_Mat44_sRotation(
  const JoltC_Quat_t * inQ,
  char** outErrMsg
);

JoltC_Mat44_t * JoltC_Mat44_sTranslation(
  const JoltC_Vec3_t * inTranslation,
  char** outErrMsg
);

JoltC_Mat44_t * JoltC_Mat44_sRotationTranslation(
  const JoltC_Quat_t * inRotation,
  const JoltC_Vec3_t * inTranslation,
  char** outErrMsg
);

JoltC_Mat44_t * JoltC_Mat44_sInverseRotationTranslation(
  const JoltC_Quat_t * inRotation,
  const JoltC_Vec3_t * inTranslation,
  char** outErrMsg
);

JoltC_Mat44_t * JoltC_Mat44_sScale(
  float inScale,
  char** outErrMsg
);

JoltC_Mat44_t * JoltC_Mat44_sPerspective(
  float inFovY,
  float inAspect,
  float inNear,
  float inFar,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_Mat44_GetAxisX(
  JoltC_Mat44_t * self,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_Mat44_GetAxisY(
  JoltC_Mat44_t * self,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_Mat44_GetAxisZ(
  JoltC_Mat44_t * self,
  char** outErrMsg
);

JoltC_Mat44_t * JoltC_Mat44_GetRotation(
  JoltC_Mat44_t * self,
  char** outErrMsg
);

JoltC_Quat_t * JoltC_Mat44_GetQuaternion(
  JoltC_Mat44_t * self,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_Mat44_GetTranslation(
  JoltC_Mat44_t * self,
  char** outErrMsg
);

bool JoltC_Mat44_IsClose(
  JoltC_Mat44_t * self,
  const JoltC_Mat44_t * inM,
  float inMaxDistSq,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_Mat44_Multiply3x3(
  JoltC_Mat44_t * self,
  const JoltC_Vec3_t * inV,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_Mat44_Multiply3x3Transposed(
  JoltC_Mat44_t * self,
  const JoltC_Vec3_t * inV,
  char** outErrMsg
);

JoltC_Mat44_t * JoltC_Mat44_Transposed(
  JoltC_Mat44_t * self,
  char** outErrMsg
);

JoltC_Mat44_t * JoltC_Mat44_Transposed3x3(
  JoltC_Mat44_t * self,
  char** outErrMsg
);

JoltC_Mat44_t * JoltC_Mat44_Inversed(
  JoltC_Mat44_t * self,
  char** outErrMsg
);

JoltC_Mat44_t * JoltC_Mat44_InversedRotationTranslation(
  JoltC_Mat44_t * self,
  char** outErrMsg
);

float JoltC_Mat44_GetDeterminant3x3(
  JoltC_Mat44_t * self,
  char** outErrMsg
);

JoltC_Mat44_t * JoltC_Mat44_Inversed3x3(
  JoltC_Mat44_t * self,
  char** outErrMsg
);

JoltC_Mat44_t * JoltC_Mat44_GetDirectionPreservingMatrix(
  JoltC_Mat44_t * self,
  char** outErrMsg
);

JoltC_Mat44_t * JoltC_Mat44_PreTranslated(
  JoltC_Mat44_t * self,
  const JoltC_Vec3_t * inTranslation,
  char** outErrMsg
);

JoltC_Mat44_t * JoltC_Mat44_PostTranslated(
  JoltC_Mat44_t * self,
  const JoltC_Vec3_t * inTranslation,
  char** outErrMsg
);

JoltC_Mat44_t * JoltC_Mat44_PreScaled(
  JoltC_Mat44_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
);

JoltC_Mat44_t * JoltC_Mat44_PostScaled(
  JoltC_Mat44_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
);

void JoltC_Mat44_SetColumn3(
  JoltC_Mat44_t * self,
  long inCol,
  const JoltC_Vec3_t * inV,
  char** outErrMsg
);

void JoltC_Mat44_SetAxisX(
  JoltC_Mat44_t * self,
  const JoltC_Vec3_t * inV,
  char** outErrMsg
);

void JoltC_Mat44_SetAxisY(
  JoltC_Mat44_t * self,
  const JoltC_Vec3_t * inV,
  char** outErrMsg
);

void JoltC_Mat44_SetAxisZ(
  JoltC_Mat44_t * self,
  const JoltC_Vec3_t * inV,
  char** outErrMsg
);

void JoltC_Mat44_SetTranslation(
  JoltC_Mat44_t * self,
  const JoltC_Vec3_t * inV,
  char** outErrMsg
);

void JoltC_Mat44_SetColumn4(
  JoltC_Mat44_t * self,
  long inCol,
  const JoltC_Vec4_t * inV,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

