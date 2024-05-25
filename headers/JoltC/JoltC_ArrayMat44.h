#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_ArrayMat44_empty(
  JPC_ArrayMat44_t * self
);

long JPC_ArrayMat44_size(
  JPC_ArrayMat44_t * self
);

JPC_Mat44_t * JPC_ArrayMat44_at(
  JPC_ArrayMat44_t * self,
  long inIndex
);

void JPC_ArrayMat44_push_back(
  JPC_ArrayMat44_t * self,
  const JPC_Mat44_t * inValue
);

void JPC_ArrayMat44_reserve(
  JPC_ArrayMat44_t * self,
  unsigned long inSize
);

void JPC_ArrayMat44_resize(
  JPC_ArrayMat44_t * self,
  unsigned long inSize
);

void JPC_ArrayMat44_clear(
  JPC_ArrayMat44_t * self
);

JPC_Mat44MemRef_t * JPC_ArrayMat44_data(
  JPC_ArrayMat44_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

