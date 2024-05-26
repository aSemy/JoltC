#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_Vec4_t * JoltC_Vec4_new_0();

JoltC_Vec4_t * JoltC_Vec4_new_1(
  JoltC_Vec4_t * inV
);

JoltC_Vec4_t * JoltC_Vec4_new_2(
  JoltC_Vec3_t * inV,
  float inW
);

JoltC_Vec4_t * JoltC_Vec4_new_3(
  float inX,
  float inY,
  float inZ,
  float inW
);

//endregion

//region functions

float JoltC_Vec4_GetX(
  JoltC_Vec4_t * self
);

float JoltC_Vec4_GetY(
  JoltC_Vec4_t * self
);

float JoltC_Vec4_GetZ(
  JoltC_Vec4_t * self
);

float JoltC_Vec4_GetW(
  JoltC_Vec4_t * self
);

void JoltC_Vec4_SetX(
  JoltC_Vec4_t * self,
  float inX
);

void JoltC_Vec4_SetY(
  JoltC_Vec4_t * self,
  float inY
);

void JoltC_Vec4_SetZ(
  JoltC_Vec4_t * self,
  float inZ
);

void JoltC_Vec4_SetW(
  JoltC_Vec4_t * self,
  float inW
);

void JoltC_Vec4_Set(
  JoltC_Vec4_t * self,
  float inX,
  float inY,
  float inZ,
  float inW
);

float JoltC_Vec4_GetComponent(
  JoltC_Vec4_t * self,
  unsigned long inCoordinate
);

//endregion


#ifdef __cplusplus
}
#endif

