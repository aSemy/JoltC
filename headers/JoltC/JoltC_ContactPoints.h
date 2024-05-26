#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ContactPoints_empty(
  JoltC_ContactPoints_t * self
);

long JoltC_ContactPoints_size(
  JoltC_ContactPoints_t * self
);

JoltC_Vec3_t * JoltC_ContactPoints_at(
  JoltC_ContactPoints_t * self,
  long inIndex
);

void JoltC_ContactPoints_push_back(
  JoltC_ContactPoints_t * self,
  const JoltC_Vec3_t * inValue
);

void JoltC_ContactPoints_resize(
  JoltC_ContactPoints_t * self,
  unsigned long inSize
);

void JoltC_ContactPoints_clear(
  JoltC_ContactPoints_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

