#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ShapeCast_t * JoltC_ShapeCast_new(
  const JoltC_Shape_t * inShape,
  const JoltC_Vec3_t * inScale,
  const JoltC_Mat44_t * inCenterOfMassStart,
  const JoltC_Vec3_t * inDirection,
  char** outErrMsg
);

//endregion constructors

//region functions

const JoltC_Vec3_t * JoltC_ShapeCast_GetPointOnRay(
  JoltC_ShapeCast_t * self,
  float inFraction,
  char** outErrMsg
);

//endregion functions

//region properties

const JoltC_Shape_t * JoltC_ShapeCast_mShape_Get(
  JoltC_ShapeCast_t * self,
  char** outErrMsg
);

const JoltC_Vec3_t * JoltC_ShapeCast_mScale_Get(
  JoltC_ShapeCast_t * self,
  char** outErrMsg
);

const JoltC_Mat44_t * JoltC_ShapeCast_mCenterOfMassStart_Get(
  JoltC_ShapeCast_t * self,
  char** outErrMsg
);

const JoltC_Vec3_t * JoltC_ShapeCast_mDirection_Get(
  JoltC_ShapeCast_t * self,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

