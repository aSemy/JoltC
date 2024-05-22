#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_IndexedTriangle_t * JPC_IndexedTriangle_new_0();

JPC_IndexedTriangle_t * JPC_IndexedTriangle_new_1(
  unsigned long inI1,
  unsigned long inI2,
  unsigned long inI3,
  unsigned long inMaterialIndex
);

//endregion constructors

//region properties

size_t JPC_IndexedTriangle_mIdx_Get(
  JPC_IndexedTriangle_t * self,
  unsigned long * outValue
);

void JPC_IndexedTriangle_mIdx_Set(
  JPC_IndexedTriangle_t * self,
  unsigned long * mIdx,
  size_t mIdxSize
);

unsigned long JPC_IndexedTriangle_mMaterialIndex_Get(
  JPC_IndexedTriangle_t * self
);

void JPC_IndexedTriangle_mMaterialIndex_Set(
  JPC_IndexedTriangle_t * self,
  unsigned long mMaterialIndex
);

//endregion properties


#ifdef __cplusplus
}
#endif

