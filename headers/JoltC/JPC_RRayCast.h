#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_RRayCast_t * JPC_RRayCast_new_0();

JPC_RRayCast_t * JPC_RRayCast_new_1(
  const JPC_RVec3_t * inOrigin,
  const JPC_Vec3_t * inDirection
);

//endregion constructors

//region functions

const JPC_RRayCast_t * JPC_RRayCast_Transformed(
  JPC_RRayCast_t * self,
  const JPC_RMat44_t * inTransform
);

const JPC_RRayCast_t * JPC_RRayCast_Translated(
  JPC_RRayCast_t * self,
  const JPC_RVec3_t * inTranslation
);

const JPC_RVec3_t * JPC_RRayCast_GetPointOnRay(
  JPC_RRayCast_t * self,
  float inFraction
);

//endregion functions

//region properties

JPC_RVec3_t * JPC_RRayCast_mOrigin_Get(
  JPC_RRayCast_t * self
);

void JPC_RRayCast_mOrigin_Set(
  JPC_RRayCast_t * self,
  JPC_RVec3_t * mOrigin
);

JPC_Vec3_t * JPC_RRayCast_mDirection_Get(
  JPC_RRayCast_t * self
);

void JPC_RRayCast_mDirection_Set(
  JPC_RRayCast_t * self,
  JPC_Vec3_t * mDirection
);

//endregion properties


#ifdef __cplusplus
}
#endif

