#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArrayCollidePointResult_empty(
  JoltC_ArrayCollidePointResult_t * self
);

long JoltC_ArrayCollidePointResult_size(
  JoltC_ArrayCollidePointResult_t * self
);

JoltC_CollidePointResult_t * JoltC_ArrayCollidePointResult_at(
  JoltC_ArrayCollidePointResult_t * self,
  long inIndex
);

void JoltC_ArrayCollidePointResult_push_back(
  JoltC_ArrayCollidePointResult_t * self,
  const JoltC_CollidePointResult_t * inValue
);

void JoltC_ArrayCollidePointResult_reserve(
  JoltC_ArrayCollidePointResult_t * self,
  unsigned long inSize
);

void JoltC_ArrayCollidePointResult_resize(
  JoltC_ArrayCollidePointResult_t * self,
  unsigned long inSize
);

void JoltC_ArrayCollidePointResult_clear(
  JoltC_ArrayCollidePointResult_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

