#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_ArrayRayCastResult_empty(
  JPC_ArrayRayCastResult_t * self
);

long JPC_ArrayRayCastResult_size(
  JPC_ArrayRayCastResult_t * self
);

JPC_RayCastResult_t * JPC_ArrayRayCastResult_at(
  JPC_ArrayRayCastResult_t * self,
  long inIndex
);

void JPC_ArrayRayCastResult_push_back(
  JPC_ArrayRayCastResult_t * self,
  const JPC_RayCastResult_t * inValue
);

void JPC_ArrayRayCastResult_reserve(
  JPC_ArrayRayCastResult_t * self,
  unsigned long inSize
);

void JPC_ArrayRayCastResult_resize(
  JPC_ArrayRayCastResult_t * self,
  unsigned long inSize
);

void JPC_ArrayRayCastResult_clear(
  JPC_ArrayRayCastResult_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

