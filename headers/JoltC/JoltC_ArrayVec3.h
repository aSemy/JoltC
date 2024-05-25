#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArrayVec3_empty(
  JoltC_ArrayVec3_t * self,
  char** outErrMsg
);

long JoltC_ArrayVec3_size(
  JoltC_ArrayVec3_t * self,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_ArrayVec3_at(
  JoltC_ArrayVec3_t * self,
  long inIndex,
  char** outErrMsg
);

void JoltC_ArrayVec3_push_back(
  JoltC_ArrayVec3_t * self,
  const JoltC_Vec3_t * inValue,
  char** outErrMsg
);

void JoltC_ArrayVec3_reserve(
  JoltC_ArrayVec3_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_ArrayVec3_resize(
  JoltC_ArrayVec3_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_ArrayVec3_clear(
  JoltC_ArrayVec3_t * self,
  char** outErrMsg
);

JoltC_Vec3MemRef_t * JoltC_ArrayVec3_data(
  JoltC_ArrayVec3_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

