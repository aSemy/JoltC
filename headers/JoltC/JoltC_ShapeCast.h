#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_ShapeCast_t * JPC_ShapeCast_new(
  const JPC_Shape_t * inShape,
  const JPC_Vec3_t * inScale,
  const JPC_Mat44_t * inCenterOfMassStart,
  const JPC_Vec3_t * inDirection
);

//endregion constructors

//region functions

const JPC_Vec3_t * JPC_ShapeCast_GetPointOnRay(
  JPC_ShapeCast_t * self,
  float inFraction
);

//endregion functions

//region properties

const JPC_Shape_t * JPC_ShapeCast_mShape_Get(
  JPC_ShapeCast_t * self
);

const JPC_Vec3_t * JPC_ShapeCast_mScale_Get(
  JPC_ShapeCast_t * self
);

const JPC_Mat44_t * JPC_ShapeCast_mCenterOfMassStart_Get(
  JPC_ShapeCast_t * self
);

const JPC_Vec3_t * JPC_ShapeCast_mDirection_Get(
  JPC_ShapeCast_t * self
);

//endregion properties


#ifdef __cplusplus
}
#endif

