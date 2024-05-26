#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_IndexedTriangle_t * JoltC_IndexedTriangle_new_0();

JoltC_IndexedTriangle_t * JoltC_IndexedTriangle_new_1(
  unsigned long inI1,
  unsigned long inI2,
  unsigned long inI3,
  unsigned long inMaterialIndex
);

//endregion

//region properties

size_t JoltC_IndexedTriangle_mIdx_Get(
  JoltC_IndexedTriangle_t * self,
  unsigned long * outValue
);

void JoltC_IndexedTriangle_mIdx_Set(
  JoltC_IndexedTriangle_t * self,
  unsigned long * mIdx,
  size_t mIdxSize
);

unsigned long JoltC_IndexedTriangle_mMaterialIndex_Get(
  JoltC_IndexedTriangle_t * self
);

void JoltC_IndexedTriangle_mMaterialIndex_Set(
  JoltC_IndexedTriangle_t * self,
  unsigned long mMaterialIndex
);

//endregion


#ifdef __cplusplus
}
#endif

