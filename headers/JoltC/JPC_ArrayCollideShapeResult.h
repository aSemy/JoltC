#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_ArrayCollideShapeResult_empty(
  JPC_ArrayCollideShapeResult_t * self
);

long JPC_ArrayCollideShapeResult_size(
  JPC_ArrayCollideShapeResult_t * self
);

JPC_CollideShapeResult_t * JPC_ArrayCollideShapeResult_at(
  JPC_ArrayCollideShapeResult_t * self,
  long inIndex
);

void JPC_ArrayCollideShapeResult_push_back(
  JPC_ArrayCollideShapeResult_t * self,
  const JPC_CollideShapeResult_t * inValue
);

void JPC_ArrayCollideShapeResult_reserve(
  JPC_ArrayCollideShapeResult_t * self,
  unsigned long inSize
);

void JPC_ArrayCollideShapeResult_resize(
  JPC_ArrayCollideShapeResult_t * self,
  unsigned long inSize
);

void JPC_ArrayCollideShapeResult_clear(
  JPC_ArrayCollideShapeResult_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

