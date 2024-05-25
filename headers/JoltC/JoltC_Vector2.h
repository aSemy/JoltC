#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_Vector2_t * JoltC_Vector2_new(
  char** outErrMsg
);

//endregion constructors

//region functions

void JoltC_Vector2_SetZero(
  JoltC_Vector2_t * self,
  char** outErrMsg
);

void JoltC_Vector2_IsZero(
  JoltC_Vector2_t * self,
  char** outErrMsg
);

void JoltC_Vector2_IsClose(
  JoltC_Vector2_t * self,
  const JoltC_Vector2_t * inV,
  float inMaxDistSq,
  char** outErrMsg
);

void JoltC_Vector2_IsNormalized(
  JoltC_Vector2_t * self,
  float inTolerance,
  char** outErrMsg
);

const JoltC_Vector2_t * JoltC_Vector2_Normalized(
  JoltC_Vector2_t * self,
  char** outErrMsg
);

float JoltC_Vector2_GetComponent(
  JoltC_Vector2_t * self,
  unsigned long inCoordinate,
  char** outErrMsg
);

JoltC_Vector2_t * JoltC_Vector2_Add(
  JoltC_Vector2_t * self,
  const JoltC_Vector2_t * inV,
  char** outErrMsg
);

JoltC_Vector2_t * JoltC_Vector2_Sub(
  JoltC_Vector2_t * self,
  const JoltC_Vector2_t * inV,
  char** outErrMsg
);

JoltC_Vector2_t * JoltC_Vector2_Mul(
  JoltC_Vector2_t * self,
  float inV,
  char** outErrMsg
);

JoltC_Vector2_t * JoltC_Vector2_Div(
  JoltC_Vector2_t * self,
  float inV,
  char** outErrMsg
);

float JoltC_Vector2_Dot(
  JoltC_Vector2_t * self,
  const JoltC_Vector2_t * inRHS,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

