#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_RVec3_t * JoltC_RVec3_new_0(
  char** outErrMsg
);

JoltC_RVec3_t * JoltC_RVec3_new_1(
  double inX,
  double inY,
  double inZ,
  char** outErrMsg
);

//endregion constructors

//region functions

JoltC_RVec3_t * JoltC_RVec3_sZero(
  char** outErrMsg
);

JoltC_RVec3_t * JoltC_RVec3_sAxisX(
  char** outErrMsg
);

JoltC_RVec3_t * JoltC_RVec3_sAxisY(
  char** outErrMsg
);

JoltC_RVec3_t * JoltC_RVec3_sAxisZ(
  char** outErrMsg
);

JoltC_RVec3_t * JoltC_RVec3_sReplicate(
  double inValue,
  char** outErrMsg
);

JoltC_RVec3_t * JoltC_RVec3_sMin(
  const JoltC_RVec3_t * inLHS,
  const JoltC_RVec3_t * inRHS,
  char** outErrMsg
);

JoltC_RVec3_t * JoltC_RVec3_sMax(
  const JoltC_RVec3_t * inLHS,
  const JoltC_RVec3_t * inRHS,
  char** outErrMsg
);

JoltC_RVec3_t * JoltC_RVec3_sClamp(
  const JoltC_RVec3_t * inValue,
  const JoltC_RVec3_t * inMin,
  const JoltC_RVec3_t * inMax,
  char** outErrMsg
);

double JoltC_RVec3_GetComponent(
  JoltC_RVec3_t * self,
  unsigned long inCoordinate,
  char** outErrMsg
);

bool JoltC_RVec3_Equals(
  JoltC_RVec3_t * self,
  const JoltC_RVec3_t * inV,
  char** outErrMsg
);

bool JoltC_RVec3_NotEquals(
  JoltC_RVec3_t * self,
  const JoltC_RVec3_t * inV,
  char** outErrMsg
);

double JoltC_RVec3_LengthSq(
  JoltC_RVec3_t * self,
  char** outErrMsg
);

double JoltC_RVec3_Length(
  JoltC_RVec3_t * self,
  char** outErrMsg
);

JoltC_RVec3_t * JoltC_RVec3_Normalized(
  JoltC_RVec3_t * self,
  char** outErrMsg
);

double JoltC_RVec3_GetX(
  JoltC_RVec3_t * self,
  char** outErrMsg
);

double JoltC_RVec3_GetY(
  JoltC_RVec3_t * self,
  char** outErrMsg
);

double JoltC_RVec3_GetZ(
  JoltC_RVec3_t * self,
  char** outErrMsg
);

void JoltC_RVec3_SetX(
  JoltC_RVec3_t * self,
  double inX,
  char** outErrMsg
);

void JoltC_RVec3_SetY(
  JoltC_RVec3_t * self,
  double inY,
  char** outErrMsg
);

void JoltC_RVec3_SetZ(
  JoltC_RVec3_t * self,
  double inZ,
  char** outErrMsg
);

void JoltC_RVec3_Set(
  JoltC_RVec3_t * self,
  double inX,
  double inY,
  double inZ,
  char** outErrMsg
);

void JoltC_RVec3_SetComponent(
  JoltC_RVec3_t * self,
  unsigned long inCoordinate,
  double inValue,
  char** outErrMsg
);

bool JoltC_RVec3_IsNearZero(
  JoltC_RVec3_t * self,
  double inMaxDistSq,
  char** outErrMsg
);

bool JoltC_RVec3_IsClose(
  JoltC_RVec3_t * self,
  const JoltC_RVec3_t * inV,
  double inMaxDistSq,
  char** outErrMsg
);

bool JoltC_RVec3_IsNormalized(
  JoltC_RVec3_t * self,
  double inTolerance,
  char** outErrMsg
);

const JoltC_RVec3_t * JoltC_RVec3_Abs(
  JoltC_RVec3_t * self,
  char** outErrMsg
);

const JoltC_RVec3_t * JoltC_RVec3_Reciprocal(
  JoltC_RVec3_t * self,
  char** outErrMsg
);

const JoltC_RVec3_t * JoltC_RVec3_Cross(
  JoltC_RVec3_t * self,
  const JoltC_RVec3_t * inRHS,
  char** outErrMsg
);

double JoltC_RVec3_Dot(
  JoltC_RVec3_t * self,
  const JoltC_RVec3_t * inRHS,
  char** outErrMsg
);

JoltC_RVec3_t * JoltC_RVec3_Add(
  JoltC_RVec3_t * self,
  const JoltC_Vec3_t * inV,
  char** outErrMsg
);

JoltC_RVec3_t * JoltC_RVec3_Sub(
  JoltC_RVec3_t * self,
  const JoltC_Vec3_t * inV,
  char** outErrMsg
);

JoltC_RVec3_t * JoltC_RVec3_Mul(
  JoltC_RVec3_t * self,
  double inV,
  char** outErrMsg
);

JoltC_RVec3_t * JoltC_RVec3_Div(
  JoltC_RVec3_t * self,
  double inV,
  char** outErrMsg
);

const JoltC_RVec3_t * JoltC_RVec3_Sqrt(
  JoltC_RVec3_t * self,
  char** outErrMsg
);

const JoltC_RVec3_t * JoltC_RVec3_GetSign(
  JoltC_RVec3_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

