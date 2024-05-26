#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArrayRayCastResult_empty(
  JoltC_ArrayRayCastResult_t * self
);

long JoltC_ArrayRayCastResult_size(
  JoltC_ArrayRayCastResult_t * self
);

JoltC_RayCastResult_t * JoltC_ArrayRayCastResult_at(
  JoltC_ArrayRayCastResult_t * self,
  long inIndex
);

void JoltC_ArrayRayCastResult_push_back(
  JoltC_ArrayRayCastResult_t * self,
  JoltC_RayCastResult_t * inValue
);

void JoltC_ArrayRayCastResult_reserve(
  JoltC_ArrayRayCastResult_t * self,
  unsigned long inSize
);

void JoltC_ArrayRayCastResult_resize(
  JoltC_ArrayRayCastResult_t * self,
  unsigned long inSize
);

void JoltC_ArrayRayCastResult_clear(
  JoltC_ArrayRayCastResult_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

