#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_CollideShapeResultFace_empty(
  JoltC_CollideShapeResultFace_t * self
);

long JoltC_CollideShapeResultFace_size(
  JoltC_CollideShapeResultFace_t * self
);

JoltC_Vec3_t * JoltC_CollideShapeResultFace_at(
  JoltC_CollideShapeResultFace_t * self,
  long inIndex
);

void JoltC_CollideShapeResultFace_push_back(
  JoltC_CollideShapeResultFace_t * self,
  JoltC_Vec3_t * inValue
);

void JoltC_CollideShapeResultFace_resize(
  JoltC_CollideShapeResultFace_t * self,
  unsigned long inSize
);

void JoltC_CollideShapeResultFace_clear(
  JoltC_CollideShapeResultFace_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

