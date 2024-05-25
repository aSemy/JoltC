#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArraySoftBodyVertex_empty(
  JoltC_ArraySoftBodyVertex_t * self,
  char** outErrMsg
);

long JoltC_ArraySoftBodyVertex_size(
  JoltC_ArraySoftBodyVertex_t * self,
  char** outErrMsg
);

JoltC_SoftBodyVertex_t * JoltC_ArraySoftBodyVertex_at(
  JoltC_ArraySoftBodyVertex_t * self,
  long inIndex,
  char** outErrMsg
);

void JoltC_ArraySoftBodyVertex_push_back(
  JoltC_ArraySoftBodyVertex_t * self,
  const JoltC_SoftBodyVertex_t * inValue,
  char** outErrMsg
);

void JoltC_ArraySoftBodyVertex_reserve(
  JoltC_ArraySoftBodyVertex_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_ArraySoftBodyVertex_resize(
  JoltC_ArraySoftBodyVertex_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_ArraySoftBodyVertex_clear(
  JoltC_ArraySoftBodyVertex_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

