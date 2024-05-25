#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_Vec4_t * JoltC_Vec4_new_0(
  char** outErrMsg
);

JoltC_Vec4_t * JoltC_Vec4_new_1(
  const JoltC_Vec4_t * inV,
  char** outErrMsg
);

JoltC_Vec4_t * JoltC_Vec4_new_2(
  JoltC_Vec3_t * inV,
  float inW,
  char** outErrMsg
);

JoltC_Vec4_t * JoltC_Vec4_new_3(
  float inX,
  float inY,
  float inZ,
  float inW,
  char** outErrMsg
);

//endregion constructors

//region functions

float JoltC_Vec4_GetX(
  JoltC_Vec4_t * self,
  char** outErrMsg
);

float JoltC_Vec4_GetY(
  JoltC_Vec4_t * self,
  char** outErrMsg
);

float JoltC_Vec4_GetZ(
  JoltC_Vec4_t * self,
  char** outErrMsg
);

float JoltC_Vec4_GetW(
  JoltC_Vec4_t * self,
  char** outErrMsg
);

void JoltC_Vec4_SetX(
  JoltC_Vec4_t * self,
  float inX,
  char** outErrMsg
);

void JoltC_Vec4_SetY(
  JoltC_Vec4_t * self,
  float inY,
  char** outErrMsg
);

void JoltC_Vec4_SetZ(
  JoltC_Vec4_t * self,
  float inZ,
  char** outErrMsg
);

void JoltC_Vec4_SetW(
  JoltC_Vec4_t * self,
  float inW,
  char** outErrMsg
);

void JoltC_Vec4_Set(
  JoltC_Vec4_t * self,
  float inX,
  float inY,
  float inZ,
  float inW,
  char** outErrMsg
);

float JoltC_Vec4_GetComponent(
  JoltC_Vec4_t * self,
  unsigned long inCoordinate,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

