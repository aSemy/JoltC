#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_LinearCurve_t * JoltC_LinearCurve_new(
  char** outErrMsg
);

//endregion constructors

//region functions

void JoltC_LinearCurve_Clear(
  JoltC_LinearCurve_t * self,
  char** outErrMsg
);

void JoltC_LinearCurve_Reserve(
  JoltC_LinearCurve_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_LinearCurve_AddPoint(
  JoltC_LinearCurve_t * self,
  float inX,
  float inY,
  char** outErrMsg
);

void JoltC_LinearCurve_Sort(
  JoltC_LinearCurve_t * self,
  char** outErrMsg
);

float JoltC_LinearCurve_GetMinX(
  JoltC_LinearCurve_t * self,
  char** outErrMsg
);

float JoltC_LinearCurve_GetMaxX(
  JoltC_LinearCurve_t * self,
  char** outErrMsg
);

float JoltC_LinearCurve_GetValue(
  JoltC_LinearCurve_t * self,
  float inX,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

