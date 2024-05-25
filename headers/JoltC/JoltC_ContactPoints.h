#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ContactPoints_empty(
  JoltC_ContactPoints_t * self,
  char** outErrMsg
);

long JoltC_ContactPoints_size(
  JoltC_ContactPoints_t * self,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_ContactPoints_at(
  JoltC_ContactPoints_t * self,
  long inIndex,
  char** outErrMsg
);

void JoltC_ContactPoints_push_back(
  JoltC_ContactPoints_t * self,
  const JoltC_Vec3_t * inValue,
  char** outErrMsg
);

void JoltC_ContactPoints_resize(
  JoltC_ContactPoints_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_ContactPoints_clear(
  JoltC_ContactPoints_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

