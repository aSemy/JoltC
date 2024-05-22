#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_AABoxCast_t * JPC_AABoxCast_new();

//endregion constructors

//region properties

JPC_AABox_t * JPC_AABoxCast_mBox_Get(
  JPC_AABoxCast_t * self
);

void JPC_AABoxCast_mBox_Set(
  JPC_AABoxCast_t * self,
  JPC_AABox_t * mBox
);

JPC_Vec3_t * JPC_AABoxCast_mDirection_Get(
  JPC_AABoxCast_t * self
);

void JPC_AABoxCast_mDirection_Set(
  JPC_AABoxCast_t * self,
  JPC_Vec3_t * mDirection
);

//endregion properties


#ifdef __cplusplus
}
#endif

