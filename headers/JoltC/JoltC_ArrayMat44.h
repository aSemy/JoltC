#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArrayMat44_empty(
  JoltC_ArrayMat44_t * self,
  char** outErrMsg
);

long JoltC_ArrayMat44_size(
  JoltC_ArrayMat44_t * self,
  char** outErrMsg
);

JoltC_Mat44_t * JoltC_ArrayMat44_at(
  JoltC_ArrayMat44_t * self,
  long inIndex,
  char** outErrMsg
);

void JoltC_ArrayMat44_push_back(
  JoltC_ArrayMat44_t * self,
  const JoltC_Mat44_t * inValue,
  char** outErrMsg
);

void JoltC_ArrayMat44_reserve(
  JoltC_ArrayMat44_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_ArrayMat44_resize(
  JoltC_ArrayMat44_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_ArrayMat44_clear(
  JoltC_ArrayMat44_t * self,
  char** outErrMsg
);

JoltC_Mat44MemRef_t * JoltC_ArrayMat44_data(
  JoltC_ArrayMat44_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

