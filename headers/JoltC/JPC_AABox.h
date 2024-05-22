#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_AABox_t * JPC_AABox_new_0();

JPC_AABox_t * JPC_AABox_new_1(
  const JPC_Vec3_t * inMin,
  const JPC_Vec3_t * inMax
);

//endregion constructors

//region functions

JPC_AABox_t * JPC_AABox_sBiggest();

bool JPC_AABox_Overlaps(
  JPC_AABox_t * self,
  const JPC_AABox_t * inOther
);

//endregion functions

//region properties

JPC_Vec3_t * JPC_AABox_mMin_Get(
  JPC_AABox_t * self
);

void JPC_AABox_mMin_Set(
  JPC_AABox_t * self,
  JPC_Vec3_t * mMin
);

JPC_Vec3_t * JPC_AABox_mMax_Get(
  JPC_AABox_t * self
);

void JPC_AABox_mMax_Set(
  JPC_AABox_t * self,
  JPC_Vec3_t * mMax
);

//endregion properties


#ifdef __cplusplus
}
#endif

