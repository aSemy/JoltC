#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_LinearCurve_t * JoltC_LinearCurve_new();

//endregion

//region destructor

void JoltC_LinearCurve_destroy(
  JoltC_LinearCurve_t * self
);

//endregion
//region functions

void JoltC_LinearCurve_Clear(
  JoltC_LinearCurve_t * self
);

void JoltC_LinearCurve_Reserve(
  JoltC_LinearCurve_t * self,
  unsigned long inSize
);

void JoltC_LinearCurve_AddPoint(
  JoltC_LinearCurve_t * self,
  float inX,
  float inY
);

void JoltC_LinearCurve_Sort(
  JoltC_LinearCurve_t * self
);

float JoltC_LinearCurve_GetMinX(
  JoltC_LinearCurve_t * self
);

float JoltC_LinearCurve_GetMaxX(
  JoltC_LinearCurve_t * self
);

float JoltC_LinearCurve_GetValue(
  JoltC_LinearCurve_t * self,
  float inX
);

//endregion


#ifdef __cplusplus
}
#endif
