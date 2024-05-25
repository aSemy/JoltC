#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_CollideShapeResultFace_empty(
  JPC_CollideShapeResultFace_t * self
);

long JPC_CollideShapeResultFace_size(
  JPC_CollideShapeResultFace_t * self
);

JPC_Vec3_t * JPC_CollideShapeResultFace_at(
  JPC_CollideShapeResultFace_t * self,
  long inIndex
);

void JPC_CollideShapeResultFace_push_back(
  JPC_CollideShapeResultFace_t * self,
  const JPC_Vec3_t * inValue
);

void JPC_CollideShapeResultFace_resize(
  JPC_CollideShapeResultFace_t * self,
  unsigned long inSize
);

void JPC_CollideShapeResultFace_clear(
  JPC_CollideShapeResultFace_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

