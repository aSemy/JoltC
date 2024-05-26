#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_VertexList_t * JoltC_VertexList_new();

//endregion

//region functions

bool JoltC_VertexList_empty(
  JoltC_VertexList_t * self
);

long JoltC_VertexList_size(
  JoltC_VertexList_t * self
);

JoltC_Float3_t * JoltC_VertexList_at(
  JoltC_VertexList_t * self,
  long inIndex
);

void JoltC_VertexList_push_back(
  JoltC_VertexList_t * self,
  JoltC_Float3_t * inVertex
);

void JoltC_VertexList_reserve(
  JoltC_VertexList_t * self,
  unsigned long inSize
);

void JoltC_VertexList_resize(
  JoltC_VertexList_t * self,
  unsigned long inSize
);

void JoltC_VertexList_clear(
  JoltC_VertexList_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

