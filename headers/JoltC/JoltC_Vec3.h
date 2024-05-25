#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_Vec3_t * JoltC_Vec3_new_0(
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_Vec3_new_1(
  const JoltC_Float3_t * inV,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_Vec3_new_2(
  float inX,
  float inY,
  float inZ,
  char** outErrMsg
);

//endregion constructors

//region functions

JoltC_Vec3_t * JoltC_Vec3_sZero(
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_Vec3_sAxisX(
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_Vec3_sAxisY(
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_Vec3_sAxisZ(
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_Vec3_sReplicate(
  float inValue,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_Vec3_sMin(
  const JoltC_Vec3_t * inLHS,
  const JoltC_Vec3_t * inRHS,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_Vec3_sMax(
  const JoltC_Vec3_t * inLHS,
  const JoltC_Vec3_t * inRHS,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_Vec3_sClamp(
  const JoltC_Vec3_t * inValue,
  const JoltC_Vec3_t * inMin,
  const JoltC_Vec3_t * inMax,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_Vec3_sUnitSpherical(
  float inTheta,
  float inPhi,
  char** outErrMsg
);

float JoltC_Vec3_GetComponent(
  JoltC_Vec3_t * self,
  unsigned long inCoordinate,
  char** outErrMsg
);

bool JoltC_Vec3_Equals(
  JoltC_Vec3_t * self,
  const JoltC_Vec3_t * inV,
  char** outErrMsg
);

bool JoltC_Vec3_NotEquals(
  JoltC_Vec3_t * self,
  const JoltC_Vec3_t * inV,
  char** outErrMsg
);

float JoltC_Vec3_LengthSq(
  JoltC_Vec3_t * self,
  char** outErrMsg
);

float JoltC_Vec3_Length(
  JoltC_Vec3_t * self,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_Vec3_Normalized(
  JoltC_Vec3_t * self,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_Vec3_NormalizedOr(
  JoltC_Vec3_t * self,
  const JoltC_Vec3_t * inZeroValue,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_Vec3_GetNormalizedPerpendicular(
  JoltC_Vec3_t * self,
  char** outErrMsg
);

float JoltC_Vec3_GetX(
  JoltC_Vec3_t * self,
  char** outErrMsg
);

float JoltC_Vec3_GetY(
  JoltC_Vec3_t * self,
  char** outErrMsg
);

float JoltC_Vec3_GetZ(
  JoltC_Vec3_t * self,
  char** outErrMsg
);

void JoltC_Vec3_SetX(
  JoltC_Vec3_t * self,
  float inX,
  char** outErrMsg
);

void JoltC_Vec3_SetY(
  JoltC_Vec3_t * self,
  float inY,
  char** outErrMsg
);

void JoltC_Vec3_SetZ(
  JoltC_Vec3_t * self,
  float inZ,
  char** outErrMsg
);

void JoltC_Vec3_Set(
  JoltC_Vec3_t * self,
  float inX,
  float inY,
  float inZ,
  char** outErrMsg
);

void JoltC_Vec3_SetComponent(
  JoltC_Vec3_t * self,
  unsigned long inCoordinate,
  float inValue,
  char** outErrMsg
);

bool JoltC_Vec3_IsNearZero(
  JoltC_Vec3_t * self,
  float inMaxDistSq,
  char** outErrMsg
);

bool JoltC_Vec3_IsClose(
  JoltC_Vec3_t * self,
  const JoltC_Vec3_t * inV,
  float inMaxDistSq,
  char** outErrMsg
);

bool JoltC_Vec3_IsNormalized(
  JoltC_Vec3_t * self,
  float inTolerance,
  char** outErrMsg
);

long JoltC_Vec3_GetLowestComponentIndex(
  JoltC_Vec3_t * self,
  char** outErrMsg
);

long JoltC_Vec3_GetHighestComponentIndex(
  JoltC_Vec3_t * self,
  char** outErrMsg
);

const JoltC_Vec3_t * JoltC_Vec3_Abs(
  JoltC_Vec3_t * self,
  char** outErrMsg
);

const JoltC_Vec3_t * JoltC_Vec3_Reciprocal(
  JoltC_Vec3_t * self,
  char** outErrMsg
);

const JoltC_Vec3_t * JoltC_Vec3_Cross(
  JoltC_Vec3_t * self,
  const JoltC_Vec3_t * inRHS,
  char** outErrMsg
);

float JoltC_Vec3_Dot(
  JoltC_Vec3_t * self,
  const JoltC_Vec3_t * inRHS,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_Vec3_Add(
  JoltC_Vec3_t * self,
  const JoltC_Vec3_t * inV,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_Vec3_Sub(
  JoltC_Vec3_t * self,
  const JoltC_Vec3_t * inV,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_Vec3_Mul(
  JoltC_Vec3_t * self,
  float inV,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_Vec3_Div(
  JoltC_Vec3_t * self,
  float inV,
  char** outErrMsg
);

float JoltC_Vec3_ReduceMin(
  JoltC_Vec3_t * self,
  char** outErrMsg
);

float JoltC_Vec3_ReduceMax(
  JoltC_Vec3_t * self,
  char** outErrMsg
);

const JoltC_Vec3_t * JoltC_Vec3_Sqrt(
  JoltC_Vec3_t * self,
  char** outErrMsg
);

const JoltC_Vec3_t * JoltC_Vec3_GetSign(
  JoltC_Vec3_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

