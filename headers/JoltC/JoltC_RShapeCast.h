#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_RShapeCast_t * JoltC_RShapeCast_new(
  JoltC_Shape_t * inShape,
  JoltC_Vec3_t * inScale,
  JoltC_RMat44_t * inCenterOfMassStart,
  JoltC_Vec3_t * inDirection
);

//endregion

//region functions

JoltC_RVec3_t * JoltC_RShapeCast_GetPointOnRay(
  JoltC_RShapeCast_t * self,
  float inFraction
);

//endregion

//region properties

JoltC_Shape_t * JoltC_RShapeCast_mShape_Get(
  JoltC_RShapeCast_t * self
);

JoltC_Vec3_t * JoltC_RShapeCast_mScale_Get(
  JoltC_RShapeCast_t * self
);

JoltC_RMat44_t * JoltC_RShapeCast_mCenterOfMassStart_Get(
  JoltC_RShapeCast_t * self
);

JoltC_Vec3_t * JoltC_RShapeCast_mDirection_Get(
  JoltC_RShapeCast_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

