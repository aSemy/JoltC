#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_RayCast_t * JPC_RayCast_new_0();

JPC_RayCast_t * JPC_RayCast_new_1(
  const JPC_Vec3_t * inOrigin,
  const JPC_Vec3_t * inDirection
);

//endregion constructors

//region functions

const JPC_RayCast_t * JPC_RayCast_Transformed(
  JPC_RayCast_t * self,
  const JPC_Mat44_t * inTransform
);

const JPC_RayCast_t * JPC_RayCast_Translated(
  JPC_RayCast_t * self,
  const JPC_Vec3_t * inTranslation
);

const JPC_Vec3_t * JPC_RayCast_GetPointOnRay(
  JPC_RayCast_t * self,
  float inFraction
);

//endregion functions

//region properties

JPC_Vec3_t * JPC_RayCast_mOrigin_Get(
  JPC_RayCast_t * self
);

void JPC_RayCast_mOrigin_Set(
  JPC_RayCast_t * self,
  JPC_Vec3_t * mOrigin
);

JPC_Vec3_t * JPC_RayCast_mDirection_Get(
  JPC_RayCast_t * self
);

void JPC_RayCast_mDirection_Set(
  JPC_RayCast_t * self,
  JPC_Vec3_t * mDirection
);

//endregion properties


#ifdef __cplusplus
}
#endif

