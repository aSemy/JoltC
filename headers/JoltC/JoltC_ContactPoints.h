#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_ContactPoints_empty(
  JPC_ContactPoints_t * self
);

long JPC_ContactPoints_size(
  JPC_ContactPoints_t * self
);

JPC_Vec3_t * JPC_ContactPoints_at(
  JPC_ContactPoints_t * self,
  long inIndex
);

void JPC_ContactPoints_push_back(
  JPC_ContactPoints_t * self,
  const JPC_Vec3_t * inValue
);

void JPC_ContactPoints_resize(
  JPC_ContactPoints_t * self,
  unsigned long inSize
);

void JPC_ContactPoints_clear(
  JPC_ContactPoints_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

