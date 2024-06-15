#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_IndexedTriangleList_t * JoltC_IndexedTriangleList_new();

//endregion

//region destructor

void JoltC_IndexedTriangleList_destroy(
  JoltC_IndexedTriangleList_t * self
);

//endregion
//region functions

bool JoltC_IndexedTriangleList_empty(
  JoltC_IndexedTriangleList_t * self
);

long JoltC_IndexedTriangleList_size(
  JoltC_IndexedTriangleList_t * self
);

JoltC_IndexedTriangle_t * JoltC_IndexedTriangleList_at(
  JoltC_IndexedTriangleList_t * self,
  long inIndex
);

void JoltC_IndexedTriangleList_push_back(
  JoltC_IndexedTriangleList_t * self,
  JoltC_IndexedTriangle_t * inTriangle
);

void JoltC_IndexedTriangleList_reserve(
  JoltC_IndexedTriangleList_t * self,
  unsigned long inSize
);

void JoltC_IndexedTriangleList_resize(
  JoltC_IndexedTriangleList_t * self,
  unsigned long inSize
);

void JoltC_IndexedTriangleList_clear(
  JoltC_IndexedTriangleList_t * self
);

//endregion


#ifdef __cplusplus
}
#endif
