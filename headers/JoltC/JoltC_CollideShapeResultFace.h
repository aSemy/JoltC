#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_CollideShapeResultFace_empty(
  JoltC_CollideShapeResultFace_t * self,
  char** outErrMsg
);

long JoltC_CollideShapeResultFace_size(
  JoltC_CollideShapeResultFace_t * self,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_CollideShapeResultFace_at(
  JoltC_CollideShapeResultFace_t * self,
  long inIndex,
  char** outErrMsg
);

void JoltC_CollideShapeResultFace_push_back(
  JoltC_CollideShapeResultFace_t * self,
  const JoltC_Vec3_t * inValue,
  char** outErrMsg
);

void JoltC_CollideShapeResultFace_resize(
  JoltC_CollideShapeResultFace_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_CollideShapeResultFace_clear(
  JoltC_CollideShapeResultFace_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

