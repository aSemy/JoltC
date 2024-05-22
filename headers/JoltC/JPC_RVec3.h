#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_RVec3_t * JPC_RVec3_new_0();

JPC_RVec3_t * JPC_RVec3_new_1(
  double inX,
  double inY,
  double inZ
);

//endregion constructors

//region functions

JPC_RVec3_t * JPC_RVec3_sZero();

JPC_RVec3_t * JPC_RVec3_sAxisX();

JPC_RVec3_t * JPC_RVec3_sAxisY();

JPC_RVec3_t * JPC_RVec3_sAxisZ();

JPC_RVec3_t * JPC_RVec3_sReplicate(
  double inValue
);

JPC_RVec3_t * JPC_RVec3_sMin(
  const JPC_RVec3_t * inLHS,
  const JPC_RVec3_t * inRHS
);

JPC_RVec3_t * JPC_RVec3_sMax(
  const JPC_RVec3_t * inLHS,
  const JPC_RVec3_t * inRHS
);

JPC_RVec3_t * JPC_RVec3_sClamp(
  const JPC_RVec3_t * inValue,
  const JPC_RVec3_t * inMin,
  const JPC_RVec3_t * inMax
);

double JPC_RVec3_GetComponent(
  JPC_RVec3_t * self,
  unsigned long inCoordinate
);

bool JPC_RVec3_Equals(
  JPC_RVec3_t * self,
  const JPC_RVec3_t * inV
);

bool JPC_RVec3_NotEquals(
  JPC_RVec3_t * self,
  const JPC_RVec3_t * inV
);

double JPC_RVec3_LengthSq(
  JPC_RVec3_t * self
);

double JPC_RVec3_Length(
  JPC_RVec3_t * self
);

JPC_RVec3_t * JPC_RVec3_Normalized(
  JPC_RVec3_t * self
);

double JPC_RVec3_GetX(
  JPC_RVec3_t * self
);

double JPC_RVec3_GetY(
  JPC_RVec3_t * self
);

double JPC_RVec3_GetZ(
  JPC_RVec3_t * self
);

void JPC_RVec3_SetX(
  JPC_RVec3_t * self,
  double inX
);

void JPC_RVec3_SetY(
  JPC_RVec3_t * self,
  double inY
);

void JPC_RVec3_SetZ(
  JPC_RVec3_t * self,
  double inZ
);

void JPC_RVec3_Set(
  JPC_RVec3_t * self,
  double inX,
  double inY,
  double inZ
);

void JPC_RVec3_SetComponent(
  JPC_RVec3_t * self,
  unsigned long inCoordinate,
  double inValue
);

bool JPC_RVec3_IsNearZero(
  JPC_RVec3_t * self,
  double inMaxDistSq
);

bool JPC_RVec3_IsClose(
  JPC_RVec3_t * self,
  const JPC_RVec3_t * inV,
  double inMaxDistSq
);

bool JPC_RVec3_IsNormalized(
  JPC_RVec3_t * self,
  double inTolerance
);

const JPC_RVec3_t * JPC_RVec3_Abs(
  JPC_RVec3_t * self
);

const JPC_RVec3_t * JPC_RVec3_Reciprocal(
  JPC_RVec3_t * self
);

const JPC_RVec3_t * JPC_RVec3_Cross(
  JPC_RVec3_t * self,
  const JPC_RVec3_t * inRHS
);

double JPC_RVec3_Dot(
  JPC_RVec3_t * self,
  const JPC_RVec3_t * inRHS
);

JPC_RVec3_t * JPC_RVec3_Add(
  JPC_RVec3_t * self,
  const JPC_Vec3_t * inV
);

JPC_RVec3_t * JPC_RVec3_Sub(
  JPC_RVec3_t * self,
  const JPC_Vec3_t * inV
);

JPC_RVec3_t * JPC_RVec3_Mul(
  JPC_RVec3_t * self,
  double inV
);

JPC_RVec3_t * JPC_RVec3_Div(
  JPC_RVec3_t * self,
  double inV
);

const JPC_RVec3_t * JPC_RVec3_Sqrt(
  JPC_RVec3_t * self
);

const JPC_RVec3_t * JPC_RVec3_GetSign(
  JPC_RVec3_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

