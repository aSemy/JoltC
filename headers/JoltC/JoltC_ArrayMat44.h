#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArrayMat44_empty(
  JoltC_ArrayMat44_t * self
);

long JoltC_ArrayMat44_size(
  JoltC_ArrayMat44_t * self
);

JoltC_Mat44_t * JoltC_ArrayMat44_at(
  JoltC_ArrayMat44_t * self,
  long inIndex
);

void JoltC_ArrayMat44_push_back(
  JoltC_ArrayMat44_t * self,
  JoltC_Mat44_t * inValue
);

void JoltC_ArrayMat44_reserve(
  JoltC_ArrayMat44_t * self,
  unsigned long inSize
);

void JoltC_ArrayMat44_resize(
  JoltC_ArrayMat44_t * self,
  unsigned long inSize
);

void JoltC_ArrayMat44_clear(
  JoltC_ArrayMat44_t * self
);

JoltC_Mat44MemRef_t * JoltC_ArrayMat44_data(
  JoltC_ArrayMat44_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

