#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_TriangleList_t * JPC_TriangleList_new();

//endregion constructors

//region functions

bool JPC_TriangleList_empty(
  JPC_TriangleList_t * self
);

long JPC_TriangleList_size(
  JPC_TriangleList_t * self
);

JPC_Triangle_t * JPC_TriangleList_at(
  JPC_TriangleList_t * self,
  long inIndex
);

void JPC_TriangleList_push_back(
  JPC_TriangleList_t * self,
  const JPC_Triangle_t * inTriangle
);

void JPC_TriangleList_reserve(
  JPC_TriangleList_t * self,
  unsigned long inSize
);

void JPC_TriangleList_resize(
  JPC_TriangleList_t * self,
  unsigned long inSize
);

void JPC_TriangleList_clear(
  JPC_TriangleList_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

