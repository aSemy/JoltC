#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_IndexedTriangleList_t * JPC_IndexedTriangleList_new();

//endregion constructors

//region functions

bool JPC_IndexedTriangleList_empty(
  JPC_IndexedTriangleList_t * self
);

long JPC_IndexedTriangleList_size(
  JPC_IndexedTriangleList_t * self
);

JPC_IndexedTriangle_t * JPC_IndexedTriangleList_at(
  JPC_IndexedTriangleList_t * self,
  long inIndex
);

void JPC_IndexedTriangleList_push_back(
  JPC_IndexedTriangleList_t * self,
  const JPC_IndexedTriangle_t * inTriangle
);

void JPC_IndexedTriangleList_reserve(
  JPC_IndexedTriangleList_t * self,
  unsigned long inSize
);

void JPC_IndexedTriangleList_resize(
  JPC_IndexedTriangleList_t * self,
  unsigned long inSize
);

void JPC_IndexedTriangleList_clear(
  JPC_IndexedTriangleList_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

