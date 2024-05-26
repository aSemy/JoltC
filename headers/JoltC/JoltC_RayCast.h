#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_RayCast_t * JoltC_RayCast_new_0();

JoltC_RayCast_t * JoltC_RayCast_new_1(
  const JoltC_Vec3_t * inOrigin,
  const JoltC_Vec3_t * inDirection
);

//endregion

//region functions

const JoltC_RayCast_t * JoltC_RayCast_Transformed(
  JoltC_RayCast_t * self,
  const JoltC_Mat44_t * inTransform
);

const JoltC_RayCast_t * JoltC_RayCast_Translated(
  JoltC_RayCast_t * self,
  const JoltC_Vec3_t * inTranslation
);

const JoltC_Vec3_t * JoltC_RayCast_GetPointOnRay(
  JoltC_RayCast_t * self,
  float inFraction
);

//endregion

//region properties

JoltC_Vec3_t * JoltC_RayCast_mOrigin_Get(
  JoltC_RayCast_t * self
);

void JoltC_RayCast_mOrigin_Set(
  JoltC_RayCast_t * self,
  JoltC_Vec3_t * mOrigin
);

JoltC_Vec3_t * JoltC_RayCast_mDirection_Get(
  JoltC_RayCast_t * self
);

void JoltC_RayCast_mDirection_Set(
  JoltC_RayCast_t * self,
  JoltC_Vec3_t * mDirection
);

//endregion


#ifdef __cplusplus
}
#endif

