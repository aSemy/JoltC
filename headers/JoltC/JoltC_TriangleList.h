#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_TriangleList_t * JoltC_TriangleList_new(
  char** outErrMsg
);

//endregion constructors

//region functions

bool JoltC_TriangleList_empty(
  JoltC_TriangleList_t * self,
  char** outErrMsg
);

long JoltC_TriangleList_size(
  JoltC_TriangleList_t * self,
  char** outErrMsg
);

JoltC_Triangle_t * JoltC_TriangleList_at(
  JoltC_TriangleList_t * self,
  long inIndex,
  char** outErrMsg
);

void JoltC_TriangleList_push_back(
  JoltC_TriangleList_t * self,
  const JoltC_Triangle_t * inTriangle,
  char** outErrMsg
);

void JoltC_TriangleList_reserve(
  JoltC_TriangleList_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_TriangleList_resize(
  JoltC_TriangleList_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_TriangleList_clear(
  JoltC_TriangleList_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

