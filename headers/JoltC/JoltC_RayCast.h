#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_RayCast_t * JoltC_RayCast_new_0();

JoltC_RayCast_t * JoltC_RayCast_new_1(
  JoltC_Vec3_t * inOrigin,
  JoltC_Vec3_t * inDirection
);

//endregion

//region destructor

void JoltC_RayCast_destroy(
  JoltC_RayCast_t * self
);

//endregion
//region functions

JoltC_RayCast_t * JoltC_RayCast_Transformed(
  JoltC_RayCast_t * self,
  JoltC_Mat44_t * inTransform
);

JoltC_RayCast_t * JoltC_RayCast_Translated(
  JoltC_RayCast_t * self,
  JoltC_Vec3_t * inTranslation
);

JoltC_Vec3_t * JoltC_RayCast_GetPointOnRay(
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
