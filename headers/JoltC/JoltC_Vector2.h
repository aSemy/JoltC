#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_Vector2_t * JPC_Vector2_new();

//endregion constructors

//region functions

void JPC_Vector2_SetZero(
  JPC_Vector2_t * self
);

void JPC_Vector2_IsZero(
  JPC_Vector2_t * self
);

void JPC_Vector2_IsClose(
  JPC_Vector2_t * self,
  const JPC_Vector2_t * inV,
  float inMaxDistSq
);

void JPC_Vector2_IsNormalized(
  JPC_Vector2_t * self,
  float inTolerance
);

const JPC_Vector2_t * JPC_Vector2_Normalized(
  JPC_Vector2_t * self
);

float JPC_Vector2_GetComponent(
  JPC_Vector2_t * self,
  unsigned long inCoordinate
);

JPC_Vector2_t * JPC_Vector2_Add(
  JPC_Vector2_t * self,
  const JPC_Vector2_t * inV
);

JPC_Vector2_t * JPC_Vector2_Sub(
  JPC_Vector2_t * self,
  const JPC_Vector2_t * inV
);

JPC_Vector2_t * JPC_Vector2_Mul(
  JPC_Vector2_t * self,
  float inV
);

JPC_Vector2_t * JPC_Vector2_Div(
  JPC_Vector2_t * self,
  float inV
);

float JPC_Vector2_Dot(
  JPC_Vector2_t * self,
  const JPC_Vector2_t * inRHS
);

//endregion functions


#ifdef __cplusplus
}
#endif

