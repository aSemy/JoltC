#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_ArrayCollidePointResult_empty(
  JPC_ArrayCollidePointResult_t * self
);

long JPC_ArrayCollidePointResult_size(
  JPC_ArrayCollidePointResult_t * self
);

JPC_CollidePointResult_t * JPC_ArrayCollidePointResult_at(
  JPC_ArrayCollidePointResult_t * self,
  long inIndex
);

void JPC_ArrayCollidePointResult_push_back(
  JPC_ArrayCollidePointResult_t * self,
  const JPC_CollidePointResult_t * inValue
);

void JPC_ArrayCollidePointResult_reserve(
  JPC_ArrayCollidePointResult_t * self,
  unsigned long inSize
);

void JPC_ArrayCollidePointResult_resize(
  JPC_ArrayCollidePointResult_t * self,
  unsigned long inSize
);

void JPC_ArrayCollidePointResult_clear(
  JPC_ArrayCollidePointResult_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

