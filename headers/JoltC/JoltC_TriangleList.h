#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_TriangleList_t * JoltC_TriangleList_new();

//endregion

//region destructor

void JoltC_TriangleList_destroy(
  JoltC_TriangleList_t * self
);

//endregion
//region functions

bool JoltC_TriangleList_empty(
  JoltC_TriangleList_t * self
);

long JoltC_TriangleList_size(
  JoltC_TriangleList_t * self
);

JoltC_Triangle_t * JoltC_TriangleList_at(
  JoltC_TriangleList_t * self,
  long inIndex
);

void JoltC_TriangleList_push_back(
  JoltC_TriangleList_t * self,
  JoltC_Triangle_t * inTriangle
);

void JoltC_TriangleList_reserve(
  JoltC_TriangleList_t * self,
  unsigned long inSize
);

void JoltC_TriangleList_resize(
  JoltC_TriangleList_t * self,
  unsigned long inSize
);

void JoltC_TriangleList_clear(
  JoltC_TriangleList_t * self
);

//endregion


#ifdef __cplusplus
}
#endif
