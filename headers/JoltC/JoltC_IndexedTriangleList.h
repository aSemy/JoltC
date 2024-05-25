#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_IndexedTriangleList_t * JoltC_IndexedTriangleList_new(
  char** outErrMsg
);

//endregion constructors

//region functions

bool JoltC_IndexedTriangleList_empty(
  JoltC_IndexedTriangleList_t * self,
  char** outErrMsg
);

long JoltC_IndexedTriangleList_size(
  JoltC_IndexedTriangleList_t * self,
  char** outErrMsg
);

JoltC_IndexedTriangle_t * JoltC_IndexedTriangleList_at(
  JoltC_IndexedTriangleList_t * self,
  long inIndex,
  char** outErrMsg
);

void JoltC_IndexedTriangleList_push_back(
  JoltC_IndexedTriangleList_t * self,
  const JoltC_IndexedTriangle_t * inTriangle,
  char** outErrMsg
);

void JoltC_IndexedTriangleList_reserve(
  JoltC_IndexedTriangleList_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_IndexedTriangleList_resize(
  JoltC_IndexedTriangleList_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_IndexedTriangleList_clear(
  JoltC_IndexedTriangleList_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

