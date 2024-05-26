#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_Triangle_t * JoltC_Triangle_new_0();

JoltC_Triangle_t * JoltC_Triangle_new_1(
  JoltC_Vec3_t * inV1,
  JoltC_Vec3_t * inV2,
  JoltC_Vec3_t * inV3
);

//endregion

//region properties

size_t JoltC_Triangle_mV_Get(
  JoltC_Triangle_t * self,
  JoltC_Float3_t * * outValue
);

void JoltC_Triangle_mV_Set(
  JoltC_Triangle_t * self,
  JoltC_Float3_t * * mV,
  size_t mVSize
);

unsigned long JoltC_Triangle_mMaterialIndex_Get(
  JoltC_Triangle_t * self
);

void JoltC_Triangle_mMaterialIndex_Set(
  JoltC_Triangle_t * self,
  unsigned long mMaterialIndex
);

//endregion


#ifdef __cplusplus
}
#endif

