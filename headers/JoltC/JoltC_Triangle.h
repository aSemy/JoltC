#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_Triangle_t * JPC_Triangle_new_0();

JPC_Triangle_t * JPC_Triangle_new_1(
  const JPC_Vec3_t * inV1,
  const JPC_Vec3_t * inV2,
  const JPC_Vec3_t * inV3
);

//endregion constructors

//region properties

size_t JPC_Triangle_mV_Get(
  JPC_Triangle_t * self,
  JPC_Float3_t * * outValue
);

void JPC_Triangle_mV_Set(
  JPC_Triangle_t * self,
  JPC_Float3_t * * mV,
  size_t mVSize
);

unsigned long JPC_Triangle_mMaterialIndex_Get(
  JPC_Triangle_t * self
);

void JPC_Triangle_mMaterialIndex_Set(
  JPC_Triangle_t * self,
  unsigned long mMaterialIndex
);

//endregion properties


#ifdef __cplusplus
}
#endif

