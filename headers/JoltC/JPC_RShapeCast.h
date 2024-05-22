#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_RShapeCast_t * JPC_RShapeCast_new(
  const JPC_Shape_t * inShape,
  const JPC_Vec3_t * inScale,
  const JPC_RMat44_t * inCenterOfMassStart,
  const JPC_Vec3_t * inDirection
);

//endregion constructors

//region functions

const JPC_RVec3_t * JPC_RShapeCast_GetPointOnRay(
  JPC_RShapeCast_t * self,
  float inFraction
);

//endregion functions

//region properties

const JPC_Shape_t * JPC_RShapeCast_mShape_Get(
  JPC_RShapeCast_t * self
);

const JPC_Vec3_t * JPC_RShapeCast_mScale_Get(
  JPC_RShapeCast_t * self
);

const JPC_RMat44_t * JPC_RShapeCast_mCenterOfMassStart_Get(
  JPC_RShapeCast_t * self
);

const JPC_Vec3_t * JPC_RShapeCast_mDirection_Get(
  JPC_RShapeCast_t * self
);

//endregion properties


#ifdef __cplusplus
}
#endif

