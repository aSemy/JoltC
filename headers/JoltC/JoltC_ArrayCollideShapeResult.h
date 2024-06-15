#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_ArrayCollideShapeResult_destroy(
  JoltC_ArrayCollideShapeResult_t * self
);

//endregion
//region functions

bool JoltC_ArrayCollideShapeResult_empty(
  JoltC_ArrayCollideShapeResult_t * self
);

long JoltC_ArrayCollideShapeResult_size(
  JoltC_ArrayCollideShapeResult_t * self
);

JoltC_CollideShapeResult_t * JoltC_ArrayCollideShapeResult_at(
  JoltC_ArrayCollideShapeResult_t * self,
  long inIndex
);

void JoltC_ArrayCollideShapeResult_push_back(
  JoltC_ArrayCollideShapeResult_t * self,
  JoltC_CollideShapeResult_t * inValue
);

void JoltC_ArrayCollideShapeResult_reserve(
  JoltC_ArrayCollideShapeResult_t * self,
  unsigned long inSize
);

void JoltC_ArrayCollideShapeResult_resize(
  JoltC_ArrayCollideShapeResult_t * self,
  unsigned long inSize
);

void JoltC_ArrayCollideShapeResult_clear(
  JoltC_ArrayCollideShapeResult_t * self
);

//endregion


#ifdef __cplusplus
}
#endif
