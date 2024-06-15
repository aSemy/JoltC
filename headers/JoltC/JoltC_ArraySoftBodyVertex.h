#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_ArraySoftBodyVertex_destroy(
  JoltC_ArraySoftBodyVertex_t * self
);

//endregion
//region functions

bool JoltC_ArraySoftBodyVertex_empty(
  JoltC_ArraySoftBodyVertex_t * self
);

long JoltC_ArraySoftBodyVertex_size(
  JoltC_ArraySoftBodyVertex_t * self
);

JoltC_SoftBodyVertex_t * JoltC_ArraySoftBodyVertex_at(
  JoltC_ArraySoftBodyVertex_t * self,
  long inIndex
);

void JoltC_ArraySoftBodyVertex_push_back(
  JoltC_ArraySoftBodyVertex_t * self,
  JoltC_SoftBodyVertex_t * inValue
);

void JoltC_ArraySoftBodyVertex_reserve(
  JoltC_ArraySoftBodyVertex_t * self,
  unsigned long inSize
);

void JoltC_ArraySoftBodyVertex_resize(
  JoltC_ArraySoftBodyVertex_t * self,
  unsigned long inSize
);

void JoltC_ArraySoftBodyVertex_clear(
  JoltC_ArraySoftBodyVertex_t * self
);

//endregion


#ifdef __cplusplus
}
#endif
