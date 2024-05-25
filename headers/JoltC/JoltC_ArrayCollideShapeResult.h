#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArrayCollideShapeResult_empty(
  JoltC_ArrayCollideShapeResult_t * self,
  char** outErrMsg
);

long JoltC_ArrayCollideShapeResult_size(
  JoltC_ArrayCollideShapeResult_t * self,
  char** outErrMsg
);

JoltC_CollideShapeResult_t * JoltC_ArrayCollideShapeResult_at(
  JoltC_ArrayCollideShapeResult_t * self,
  long inIndex,
  char** outErrMsg
);

void JoltC_ArrayCollideShapeResult_push_back(
  JoltC_ArrayCollideShapeResult_t * self,
  const JoltC_CollideShapeResult_t * inValue,
  char** outErrMsg
);

void JoltC_ArrayCollideShapeResult_reserve(
  JoltC_ArrayCollideShapeResult_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_ArrayCollideShapeResult_resize(
  JoltC_ArrayCollideShapeResult_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_ArrayCollideShapeResult_clear(
  JoltC_ArrayCollideShapeResult_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

