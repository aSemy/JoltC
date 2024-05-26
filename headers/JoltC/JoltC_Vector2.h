#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_Vector2_t * JoltC_Vector2_new();

//endregion

//region functions

void JoltC_Vector2_SetZero(
  JoltC_Vector2_t * self
);

void JoltC_Vector2_IsZero(
  JoltC_Vector2_t * self
);

void JoltC_Vector2_IsClose(
  JoltC_Vector2_t * self,
  JoltC_Vector2_t * inV,
  float inMaxDistSq
);

void JoltC_Vector2_IsNormalized(
  JoltC_Vector2_t * self,
  float inTolerance
);

JoltC_Vector2_t * JoltC_Vector2_Normalized(
  JoltC_Vector2_t * self
);

float JoltC_Vector2_GetComponent(
  JoltC_Vector2_t * self,
  unsigned long inCoordinate
);

JoltC_Vector2_t * JoltC_Vector2_Add(
  JoltC_Vector2_t * self,
  JoltC_Vector2_t * inV
);

JoltC_Vector2_t * JoltC_Vector2_Sub(
  JoltC_Vector2_t * self,
  JoltC_Vector2_t * inV
);

JoltC_Vector2_t * JoltC_Vector2_Mul(
  JoltC_Vector2_t * self,
  float inV
);

JoltC_Vector2_t * JoltC_Vector2_Div(
  JoltC_Vector2_t * self,
  float inV
);

float JoltC_Vector2_Dot(
  JoltC_Vector2_t * self,
  JoltC_Vector2_t * inRHS
);

//endregion


#ifdef __cplusplus
}
#endif

