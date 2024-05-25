#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_RayCast_t * JoltC_RayCast_new_0(
  char** outErrMsg
);

JoltC_RayCast_t * JoltC_RayCast_new_1(
  const JoltC_Vec3_t * inOrigin,
  const JoltC_Vec3_t * inDirection,
  char** outErrMsg
);

//endregion constructors

//region functions

const JoltC_RayCast_t * JoltC_RayCast_Transformed(
  JoltC_RayCast_t * self,
  const JoltC_Mat44_t * inTransform,
  char** outErrMsg
);

const JoltC_RayCast_t * JoltC_RayCast_Translated(
  JoltC_RayCast_t * self,
  const JoltC_Vec3_t * inTranslation,
  char** outErrMsg
);

const JoltC_Vec3_t * JoltC_RayCast_GetPointOnRay(
  JoltC_RayCast_t * self,
  float inFraction,
  char** outErrMsg
);

//endregion functions

//region properties

JoltC_Vec3_t * JoltC_RayCast_mOrigin_Get(
  JoltC_RayCast_t * self,
  char** outErrMsg
);

void JoltC_RayCast_mOrigin_Set(
  JoltC_RayCast_t * self,
  JoltC_Vec3_t * mOrigin,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_RayCast_mDirection_Get(
  JoltC_RayCast_t * self,
  char** outErrMsg
);

void JoltC_RayCast_mDirection_Set(
  JoltC_RayCast_t * self,
  JoltC_Vec3_t * mDirection,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

