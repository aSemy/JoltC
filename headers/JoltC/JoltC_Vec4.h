#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_Vec4_t * JPC_Vec4_new_0();

JPC_Vec4_t * JPC_Vec4_new_1(
  const JPC_Vec4_t * inV
);

JPC_Vec4_t * JPC_Vec4_new_2(
  JPC_Vec3_t * inV,
  float inW
);

JPC_Vec4_t * JPC_Vec4_new_3(
  float inX,
  float inY,
  float inZ,
  float inW
);

//endregion constructors

//region functions

float JPC_Vec4_GetX(
  JPC_Vec4_t * self
);

float JPC_Vec4_GetY(
  JPC_Vec4_t * self
);

float JPC_Vec4_GetZ(
  JPC_Vec4_t * self
);

float JPC_Vec4_GetW(
  JPC_Vec4_t * self
);

void JPC_Vec4_SetX(
  JPC_Vec4_t * self,
  float inX
);

void JPC_Vec4_SetY(
  JPC_Vec4_t * self,
  float inY
);

void JPC_Vec4_SetZ(
  JPC_Vec4_t * self,
  float inZ
);

void JPC_Vec4_SetW(
  JPC_Vec4_t * self,
  float inW
);

void JPC_Vec4_Set(
  JPC_Vec4_t * self,
  float inX,
  float inY,
  float inZ,
  float inW
);

float JPC_Vec4_GetComponent(
  JPC_Vec4_t * self,
  unsigned long inCoordinate
);

//endregion functions


#ifdef __cplusplus
}
#endif

