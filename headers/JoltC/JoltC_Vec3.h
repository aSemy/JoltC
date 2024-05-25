#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_Vec3_t * JPC_Vec3_new_0();

JPC_Vec3_t * JPC_Vec3_new_1(
  const JPC_Float3_t * inV
);

JPC_Vec3_t * JPC_Vec3_new_2(
  float inX,
  float inY,
  float inZ
);

//endregion constructors

//region functions

JPC_Vec3_t * JPC_Vec3_sZero();

JPC_Vec3_t * JPC_Vec3_sAxisX();

JPC_Vec3_t * JPC_Vec3_sAxisY();

JPC_Vec3_t * JPC_Vec3_sAxisZ();

JPC_Vec3_t * JPC_Vec3_sReplicate(
  float inValue
);

JPC_Vec3_t * JPC_Vec3_sMin(
  const JPC_Vec3_t * inLHS,
  const JPC_Vec3_t * inRHS
);

JPC_Vec3_t * JPC_Vec3_sMax(
  const JPC_Vec3_t * inLHS,
  const JPC_Vec3_t * inRHS
);

JPC_Vec3_t * JPC_Vec3_sClamp(
  const JPC_Vec3_t * inValue,
  const JPC_Vec3_t * inMin,
  const JPC_Vec3_t * inMax
);

JPC_Vec3_t * JPC_Vec3_sUnitSpherical(
  float inTheta,
  float inPhi
);

float JPC_Vec3_GetComponent(
  JPC_Vec3_t * self,
  unsigned long inCoordinate
);

bool JPC_Vec3_Equals(
  JPC_Vec3_t * self,
  const JPC_Vec3_t * inV
);

bool JPC_Vec3_NotEquals(
  JPC_Vec3_t * self,
  const JPC_Vec3_t * inV
);

float JPC_Vec3_LengthSq(
  JPC_Vec3_t * self
);

float JPC_Vec3_Length(
  JPC_Vec3_t * self
);

JPC_Vec3_t * JPC_Vec3_Normalized(
  JPC_Vec3_t * self
);

JPC_Vec3_t * JPC_Vec3_NormalizedOr(
  JPC_Vec3_t * self,
  const JPC_Vec3_t * inZeroValue
);

JPC_Vec3_t * JPC_Vec3_GetNormalizedPerpendicular(
  JPC_Vec3_t * self
);

float JPC_Vec3_GetX(
  JPC_Vec3_t * self
);

float JPC_Vec3_GetY(
  JPC_Vec3_t * self
);

float JPC_Vec3_GetZ(
  JPC_Vec3_t * self
);

void JPC_Vec3_SetX(
  JPC_Vec3_t * self,
  float inX
);

void JPC_Vec3_SetY(
  JPC_Vec3_t * self,
  float inY
);

void JPC_Vec3_SetZ(
  JPC_Vec3_t * self,
  float inZ
);

void JPC_Vec3_Set(
  JPC_Vec3_t * self,
  float inX,
  float inY,
  float inZ
);

void JPC_Vec3_SetComponent(
  JPC_Vec3_t * self,
  unsigned long inCoordinate,
  float inValue
);

bool JPC_Vec3_IsNearZero(
  JPC_Vec3_t * self,
  float inMaxDistSq
);

bool JPC_Vec3_IsClose(
  JPC_Vec3_t * self,
  const JPC_Vec3_t * inV,
  float inMaxDistSq
);

bool JPC_Vec3_IsNormalized(
  JPC_Vec3_t * self,
  float inTolerance
);

long JPC_Vec3_GetLowestComponentIndex(
  JPC_Vec3_t * self
);

long JPC_Vec3_GetHighestComponentIndex(
  JPC_Vec3_t * self
);

const JPC_Vec3_t * JPC_Vec3_Abs(
  JPC_Vec3_t * self
);

const JPC_Vec3_t * JPC_Vec3_Reciprocal(
  JPC_Vec3_t * self
);

const JPC_Vec3_t * JPC_Vec3_Cross(
  JPC_Vec3_t * self,
  const JPC_Vec3_t * inRHS
);

float JPC_Vec3_Dot(
  JPC_Vec3_t * self,
  const JPC_Vec3_t * inRHS
);

JPC_Vec3_t * JPC_Vec3_Add(
  JPC_Vec3_t * self,
  const JPC_Vec3_t * inV
);

JPC_Vec3_t * JPC_Vec3_Sub(
  JPC_Vec3_t * self,
  const JPC_Vec3_t * inV
);

JPC_Vec3_t * JPC_Vec3_Mul(
  JPC_Vec3_t * self,
  float inV
);

JPC_Vec3_t * JPC_Vec3_Div(
  JPC_Vec3_t * self,
  float inV
);

float JPC_Vec3_ReduceMin(
  JPC_Vec3_t * self
);

float JPC_Vec3_ReduceMax(
  JPC_Vec3_t * self
);

const JPC_Vec3_t * JPC_Vec3_Sqrt(
  JPC_Vec3_t * self
);

const JPC_Vec3_t * JPC_Vec3_GetSign(
  JPC_Vec3_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

