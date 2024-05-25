#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_Triangle_t * JoltC_Triangle_new_0(
  char** outErrMsg
);

JoltC_Triangle_t * JoltC_Triangle_new_1(
  const JoltC_Vec3_t * inV1,
  const JoltC_Vec3_t * inV2,
  const JoltC_Vec3_t * inV3,
  char** outErrMsg
);

//endregion constructors

//region properties

size_t JoltC_Triangle_mV_Get(
  JoltC_Triangle_t * self,
  JoltC_Float3_t * * outValue,
  char** outErrMsg
);

void JoltC_Triangle_mV_Set(
  JoltC_Triangle_t * self,
  JoltC_Float3_t * * mV,
  size_t mVSize,
  char** outErrMsg
);

unsigned long JoltC_Triangle_mMaterialIndex_Get(
  JoltC_Triangle_t * self,
  char** outErrMsg
);

void JoltC_Triangle_mMaterialIndex_Set(
  JoltC_Triangle_t * self,
  unsigned long mMaterialIndex,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

