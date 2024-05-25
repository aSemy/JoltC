#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_IndexedTriangle_t * JoltC_IndexedTriangle_new_0(
  char** outErrMsg
);

JoltC_IndexedTriangle_t * JoltC_IndexedTriangle_new_1(
  unsigned long inI1,
  unsigned long inI2,
  unsigned long inI3,
  unsigned long inMaterialIndex,
  char** outErrMsg
);

//endregion constructors

//region properties

size_t JoltC_IndexedTriangle_mIdx_Get(
  JoltC_IndexedTriangle_t * self,
  unsigned long * outValue,
  char** outErrMsg
);

void JoltC_IndexedTriangle_mIdx_Set(
  JoltC_IndexedTriangle_t * self,
  unsigned long * mIdx,
  size_t mIdxSize,
  char** outErrMsg
);

unsigned long JoltC_IndexedTriangle_mMaterialIndex_Get(
  JoltC_IndexedTriangle_t * self,
  char** outErrMsg
);

void JoltC_IndexedTriangle_mMaterialIndex_Set(
  JoltC_IndexedTriangle_t * self,
  unsigned long mMaterialIndex,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

