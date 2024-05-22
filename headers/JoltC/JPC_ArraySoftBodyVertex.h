#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_ArraySoftBodyVertex_empty(
  JPC_ArraySoftBodyVertex_t * self
);

long JPC_ArraySoftBodyVertex_size(
  JPC_ArraySoftBodyVertex_t * self
);

JPC_SoftBodyVertex_t * JPC_ArraySoftBodyVertex_at(
  JPC_ArraySoftBodyVertex_t * self,
  long inIndex
);

void JPC_ArraySoftBodyVertex_push_back(
  JPC_ArraySoftBodyVertex_t * self,
  const JPC_SoftBodyVertex_t * inValue
);

void JPC_ArraySoftBodyVertex_reserve(
  JPC_ArraySoftBodyVertex_t * self,
  unsigned long inSize
);

void JPC_ArraySoftBodyVertex_resize(
  JPC_ArraySoftBodyVertex_t * self,
  unsigned long inSize
);

void JPC_ArraySoftBodyVertex_clear(
  JPC_ArraySoftBodyVertex_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

