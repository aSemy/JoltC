#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_RShapeCast_t * JoltC_RShapeCast_new(
  const JoltC_Shape_t * inShape,
  const JoltC_Vec3_t * inScale,
  const JoltC_RMat44_t * inCenterOfMassStart,
  const JoltC_Vec3_t * inDirection,
  char** outErrMsg
);

//endregion constructors

//region functions

const JoltC_RVec3_t * JoltC_RShapeCast_GetPointOnRay(
  JoltC_RShapeCast_t * self,
  float inFraction,
  char** outErrMsg
);

//endregion functions

//region properties

const JoltC_Shape_t * JoltC_RShapeCast_mShape_Get(
  JoltC_RShapeCast_t * self,
  char** outErrMsg
);

const JoltC_Vec3_t * JoltC_RShapeCast_mScale_Get(
  JoltC_RShapeCast_t * self,
  char** outErrMsg
);

const JoltC_RMat44_t * JoltC_RShapeCast_mCenterOfMassStart_Get(
  JoltC_RShapeCast_t * self,
  char** outErrMsg
);

const JoltC_Vec3_t * JoltC_RShapeCast_mDirection_Get(
  JoltC_RShapeCast_t * self,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

