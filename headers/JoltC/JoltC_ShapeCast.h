#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ShapeCast_t * JoltC_ShapeCast_new(
  JoltC_Shape_t * inShape,
  JoltC_Vec3_t * inScale,
  JoltC_Mat44_t * inCenterOfMassStart,
  JoltC_Vec3_t * inDirection
);

//endregion

//region destructor

void JoltC_ShapeCast_destroy(
  JoltC_ShapeCast_t * self
);

//endregion
//region functions

JoltC_Vec3_t * JoltC_ShapeCast_GetPointOnRay(
  JoltC_ShapeCast_t * self,
  float inFraction
);

//endregion

//region properties

JoltC_Shape_t * JoltC_ShapeCast_mShape_Get(
  JoltC_ShapeCast_t * self
);

JoltC_Vec3_t * JoltC_ShapeCast_mScale_Get(
  JoltC_ShapeCast_t * self
);

JoltC_Mat44_t * JoltC_ShapeCast_mCenterOfMassStart_Get(
  JoltC_ShapeCast_t * self
);

JoltC_Vec3_t * JoltC_ShapeCast_mDirection_Get(
  JoltC_ShapeCast_t * self
);

//endregion


#ifdef __cplusplus
}
#endif
