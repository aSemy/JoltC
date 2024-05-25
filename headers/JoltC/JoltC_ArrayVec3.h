#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_ArrayVec3_empty(
  JPC_ArrayVec3_t * self
);

long JPC_ArrayVec3_size(
  JPC_ArrayVec3_t * self
);

JPC_Vec3_t * JPC_ArrayVec3_at(
  JPC_ArrayVec3_t * self,
  long inIndex
);

void JPC_ArrayVec3_push_back(
  JPC_ArrayVec3_t * self,
  const JPC_Vec3_t * inValue
);

void JPC_ArrayVec3_reserve(
  JPC_ArrayVec3_t * self,
  unsigned long inSize
);

void JPC_ArrayVec3_resize(
  JPC_ArrayVec3_t * self,
  unsigned long inSize
);

void JPC_ArrayVec3_clear(
  JPC_ArrayVec3_t * self
);

JPC_Vec3MemRef_t * JPC_ArrayVec3_data(
  JPC_ArrayVec3_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

