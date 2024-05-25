#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_RRayCast_t * JoltC_RRayCast_new_0(
  char** outErrMsg
);

JoltC_RRayCast_t * JoltC_RRayCast_new_1(
  const JoltC_RVec3_t * inOrigin,
  const JoltC_Vec3_t * inDirection,
  char** outErrMsg
);

//endregion constructors

//region functions

const JoltC_RRayCast_t * JoltC_RRayCast_Transformed(
  JoltC_RRayCast_t * self,
  const JoltC_RMat44_t * inTransform,
  char** outErrMsg
);

const JoltC_RRayCast_t * JoltC_RRayCast_Translated(
  JoltC_RRayCast_t * self,
  const JoltC_RVec3_t * inTranslation,
  char** outErrMsg
);

const JoltC_RVec3_t * JoltC_RRayCast_GetPointOnRay(
  JoltC_RRayCast_t * self,
  float inFraction,
  char** outErrMsg
);

//endregion functions

//region properties

JoltC_RVec3_t * JoltC_RRayCast_mOrigin_Get(
  JoltC_RRayCast_t * self,
  char** outErrMsg
);

void JoltC_RRayCast_mOrigin_Set(
  JoltC_RRayCast_t * self,
  JoltC_RVec3_t * mOrigin,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_RRayCast_mDirection_Get(
  JoltC_RRayCast_t * self,
  char** outErrMsg
);

void JoltC_RRayCast_mDirection_Set(
  JoltC_RRayCast_t * self,
  JoltC_Vec3_t * mDirection,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

