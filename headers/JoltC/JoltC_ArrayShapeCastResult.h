#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_ArrayShapeCastResult_empty(
  JPC_ArrayShapeCastResult_t * self
);

long JPC_ArrayShapeCastResult_size(
  JPC_ArrayShapeCastResult_t * self
);

JPC_ShapeCastResult_t * JPC_ArrayShapeCastResult_at(
  JPC_ArrayShapeCastResult_t * self,
  long inIndex
);

void JPC_ArrayShapeCastResult_push_back(
  JPC_ArrayShapeCastResult_t * self,
  const JPC_ShapeCastResult_t * inValue
);

void JPC_ArrayShapeCastResult_reserve(
  JPC_ArrayShapeCastResult_t * self,
  unsigned long inSize
);

void JPC_ArrayShapeCastResult_resize(
  JPC_ArrayShapeCastResult_t * self,
  unsigned long inSize
);

void JPC_ArrayShapeCastResult_clear(
  JPC_ArrayShapeCastResult_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

