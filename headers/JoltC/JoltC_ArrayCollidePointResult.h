#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArrayCollidePointResult_empty(
  JoltC_ArrayCollidePointResult_t * self,
  char** outErrMsg
);

long JoltC_ArrayCollidePointResult_size(
  JoltC_ArrayCollidePointResult_t * self,
  char** outErrMsg
);

JoltC_CollidePointResult_t * JoltC_ArrayCollidePointResult_at(
  JoltC_ArrayCollidePointResult_t * self,
  long inIndex,
  char** outErrMsg
);

void JoltC_ArrayCollidePointResult_push_back(
  JoltC_ArrayCollidePointResult_t * self,
  const JoltC_CollidePointResult_t * inValue,
  char** outErrMsg
);

void JoltC_ArrayCollidePointResult_reserve(
  JoltC_ArrayCollidePointResult_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_ArrayCollidePointResult_resize(
  JoltC_ArrayCollidePointResult_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_ArrayCollidePointResult_clear(
  JoltC_ArrayCollidePointResult_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

