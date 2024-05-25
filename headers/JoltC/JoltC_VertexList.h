#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_VertexList_t * JoltC_VertexList_new(
  char** outErrMsg
);

//endregion constructors

//region functions

bool JoltC_VertexList_empty(
  JoltC_VertexList_t * self,
  char** outErrMsg
);

long JoltC_VertexList_size(
  JoltC_VertexList_t * self,
  char** outErrMsg
);

JoltC_Float3_t * JoltC_VertexList_at(
  JoltC_VertexList_t * self,
  long inIndex,
  char** outErrMsg
);

void JoltC_VertexList_push_back(
  JoltC_VertexList_t * self,
  const JoltC_Float3_t * inVertex,
  char** outErrMsg
);

void JoltC_VertexList_reserve(
  JoltC_VertexList_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_VertexList_resize(
  JoltC_VertexList_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_VertexList_clear(
  JoltC_VertexList_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

