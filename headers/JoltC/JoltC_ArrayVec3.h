#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArrayVec3_empty(
  JoltC_ArrayVec3_t * self
);

long JoltC_ArrayVec3_size(
  JoltC_ArrayVec3_t * self
);

JoltC_Vec3_t * JoltC_ArrayVec3_at(
  JoltC_ArrayVec3_t * self,
  long inIndex
);

void JoltC_ArrayVec3_push_back(
  JoltC_ArrayVec3_t * self,
  JoltC_Vec3_t * inValue
);

void JoltC_ArrayVec3_reserve(
  JoltC_ArrayVec3_t * self,
  unsigned long inSize
);

void JoltC_ArrayVec3_resize(
  JoltC_ArrayVec3_t * self,
  unsigned long inSize
);

void JoltC_ArrayVec3_clear(
  JoltC_ArrayVec3_t * self
);

JoltC_Vec3MemRef_t * JoltC_ArrayVec3_data(
  JoltC_ArrayVec3_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

