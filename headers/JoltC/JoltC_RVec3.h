#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_RVec3_t * JoltC_RVec3_new_0();

JoltC_RVec3_t * JoltC_RVec3_new_1(
  double inX,
  double inY,
  double inZ
);

//endregion

//region functions

JoltC_RVec3_t * JoltC_RVec3_sZero();

JoltC_RVec3_t * JoltC_RVec3_sAxisX();

JoltC_RVec3_t * JoltC_RVec3_sAxisY();

JoltC_RVec3_t * JoltC_RVec3_sAxisZ();

JoltC_RVec3_t * JoltC_RVec3_sReplicate(
  double inValue
);

JoltC_RVec3_t * JoltC_RVec3_sMin(
  const JoltC_RVec3_t * inLHS,
  const JoltC_RVec3_t * inRHS
);

JoltC_RVec3_t * JoltC_RVec3_sMax(
  const JoltC_RVec3_t * inLHS,
  const JoltC_RVec3_t * inRHS
);

JoltC_RVec3_t * JoltC_RVec3_sClamp(
  const JoltC_RVec3_t * inValue,
  const JoltC_RVec3_t * inMin,
  const JoltC_RVec3_t * inMax
);

double JoltC_RVec3_GetComponent(
  JoltC_RVec3_t * self,
  unsigned long inCoordinate
);

bool JoltC_RVec3_Equals(
  JoltC_RVec3_t * self,
  const JoltC_RVec3_t * inV
);

bool JoltC_RVec3_NotEquals(
  JoltC_RVec3_t * self,
  const JoltC_RVec3_t * inV
);

double JoltC_RVec3_LengthSq(
  JoltC_RVec3_t * self
);

double JoltC_RVec3_Length(
  JoltC_RVec3_t * self
);

JoltC_RVec3_t * JoltC_RVec3_Normalized(
  JoltC_RVec3_t * self
);

double JoltC_RVec3_GetX(
  JoltC_RVec3_t * self
);

double JoltC_RVec3_GetY(
  JoltC_RVec3_t * self
);

double JoltC_RVec3_GetZ(
  JoltC_RVec3_t * self
);

void JoltC_RVec3_SetX(
  JoltC_RVec3_t * self,
  double inX
);

void JoltC_RVec3_SetY(
  JoltC_RVec3_t * self,
  double inY
);

void JoltC_RVec3_SetZ(
  JoltC_RVec3_t * self,
  double inZ
);

void JoltC_RVec3_Set(
  JoltC_RVec3_t * self,
  double inX,
  double inY,
  double inZ
);

void JoltC_RVec3_SetComponent(
  JoltC_RVec3_t * self,
  unsigned long inCoordinate,
  double inValue
);

bool JoltC_RVec3_IsNearZero(
  JoltC_RVec3_t * self,
  double inMaxDistSq
);

bool JoltC_RVec3_IsClose(
  JoltC_RVec3_t * self,
  const JoltC_RVec3_t * inV,
  double inMaxDistSq
);

bool JoltC_RVec3_IsNormalized(
  JoltC_RVec3_t * self,
  double inTolerance
);

const JoltC_RVec3_t * JoltC_RVec3_Abs(
  JoltC_RVec3_t * self
);

const JoltC_RVec3_t * JoltC_RVec3_Reciprocal(
  JoltC_RVec3_t * self
);

const JoltC_RVec3_t * JoltC_RVec3_Cross(
  JoltC_RVec3_t * self,
  const JoltC_RVec3_t * inRHS
);

double JoltC_RVec3_Dot(
  JoltC_RVec3_t * self,
  const JoltC_RVec3_t * inRHS
);

JoltC_RVec3_t * JoltC_RVec3_Add(
  JoltC_RVec3_t * self,
  const JoltC_Vec3_t * inV
);

JoltC_RVec3_t * JoltC_RVec3_Sub(
  JoltC_RVec3_t * self,
  const JoltC_Vec3_t * inV
);

JoltC_RVec3_t * JoltC_RVec3_Mul(
  JoltC_RVec3_t * self,
  double inV
);

JoltC_RVec3_t * JoltC_RVec3_Div(
  JoltC_RVec3_t * self,
  double inV
);

const JoltC_RVec3_t * JoltC_RVec3_Sqrt(
  JoltC_RVec3_t * self
);

const JoltC_RVec3_t * JoltC_RVec3_GetSign(
  JoltC_RVec3_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

