#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_VertexList_t * JPC_VertexList_new();

//endregion constructors

//region functions

bool JPC_VertexList_empty(
  JPC_VertexList_t * self
);

long JPC_VertexList_size(
  JPC_VertexList_t * self
);

JPC_Float3_t * JPC_VertexList_at(
  JPC_VertexList_t * self,
  long inIndex
);

void JPC_VertexList_push_back(
  JPC_VertexList_t * self,
  const JPC_Float3_t * inVertex
);

void JPC_VertexList_reserve(
  JPC_VertexList_t * self,
  unsigned long inSize
);

void JPC_VertexList_resize(
  JPC_VertexList_t * self,
  unsigned long inSize
);

void JPC_VertexList_clear(
  JPC_VertexList_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

