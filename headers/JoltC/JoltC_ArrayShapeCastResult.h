#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArrayShapeCastResult_empty(
  JoltC_ArrayShapeCastResult_t * self
);

long JoltC_ArrayShapeCastResult_size(
  JoltC_ArrayShapeCastResult_t * self
);

JoltC_ShapeCastResult_t * JoltC_ArrayShapeCastResult_at(
  JoltC_ArrayShapeCastResult_t * self,
  long inIndex
);

void JoltC_ArrayShapeCastResult_push_back(
  JoltC_ArrayShapeCastResult_t * self,
  JoltC_ShapeCastResult_t * inValue
);

void JoltC_ArrayShapeCastResult_reserve(
  JoltC_ArrayShapeCastResult_t * self,
  unsigned long inSize
);

void JoltC_ArrayShapeCastResult_resize(
  JoltC_ArrayShapeCastResult_t * self,
  unsigned long inSize
);

void JoltC_ArrayShapeCastResult_clear(
  JoltC_ArrayShapeCastResult_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

