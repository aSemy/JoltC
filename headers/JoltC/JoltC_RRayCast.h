#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_RRayCast_t * JoltC_RRayCast_new_0();

JoltC_RRayCast_t * JoltC_RRayCast_new_1(
  JoltC_RVec3_t * inOrigin,
  JoltC_Vec3_t * inDirection
);

//endregion

//region destructor

void JoltC_RRayCast_destroy(
  JoltC_RRayCast_t * self
);

//endregion
//region functions

JoltC_RRayCast_t * JoltC_RRayCast_Transformed(
  JoltC_RRayCast_t * self,
  JoltC_RMat44_t * inTransform
);

JoltC_RRayCast_t * JoltC_RRayCast_Translated(
  JoltC_RRayCast_t * self,
  JoltC_RVec3_t * inTranslation
);

JoltC_RVec3_t * JoltC_RRayCast_GetPointOnRay(
  JoltC_RRayCast_t * self,
  float inFraction
);

//endregion

//region properties

JoltC_RVec3_t * JoltC_RRayCast_mOrigin_Get(
  JoltC_RRayCast_t * self
);

void JoltC_RRayCast_mOrigin_Set(
  JoltC_RRayCast_t * self,
  JoltC_RVec3_t * mOrigin
);

JoltC_Vec3_t * JoltC_RRayCast_mDirection_Get(
  JoltC_RRayCast_t * self
);

void JoltC_RRayCast_mDirection_Set(
  JoltC_RRayCast_t * self,
  JoltC_Vec3_t * mDirection
);

//endregion


#ifdef __cplusplus
}
#endif
