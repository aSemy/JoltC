#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_LinearCurve_t * JPC_LinearCurve_new();

//endregion constructors

//region functions

void JPC_LinearCurve_Clear(
  JPC_LinearCurve_t * self
);

void JPC_LinearCurve_Reserve(
  JPC_LinearCurve_t * self,
  unsigned long inSize
);

void JPC_LinearCurve_AddPoint(
  JPC_LinearCurve_t * self,
  float inX,
  float inY
);

void JPC_LinearCurve_Sort(
  JPC_LinearCurve_t * self
);

float JPC_LinearCurve_GetMinX(
  JPC_LinearCurve_t * self
);

float JPC_LinearCurve_GetMaxX(
  JPC_LinearCurve_t * self
);

float JPC_LinearCurve_GetValue(
  JPC_LinearCurve_t * self,
  float inX
);

//endregion functions


#ifdef __cplusplus
}
#endif

