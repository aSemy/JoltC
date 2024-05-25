#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_Plane_t * JoltC_Plane_new(
  const JoltC_Vec3_t * inNormal,
  float inConstant,
  char** outErrMsg
);

//endregion constructors

//region functions

JoltC_Vec3_t * JoltC_Plane_GetNormal(
  JoltC_Plane_t * self,
  char** outErrMsg
);

void JoltC_Plane_SetNormal(
  JoltC_Plane_t * self,
  const JoltC_Vec3_t * inNormal,
  char** outErrMsg
);

float JoltC_Plane_GetConstant(
  JoltC_Plane_t * self,
  char** outErrMsg
);

void JoltC_Plane_SetConstant(
  JoltC_Plane_t * self,
  float inConstant,
  char** outErrMsg
);

const JoltC_Plane_t * JoltC_Plane_sFromPointAndNormal(
  JoltC_Plane_t * self,
  const JoltC_Vec3_t * inPoint,
  const JoltC_Vec3_t * inNormal,
  char** outErrMsg
);

const JoltC_Plane_t * JoltC_Plane_sFromPointsCCW(
  JoltC_Plane_t * self,
  const JoltC_Vec3_t * inPoint1,
  const JoltC_Vec3_t * inPoint2,
  const JoltC_Vec3_t * inPoint3,
  char** outErrMsg
);

const JoltC_Plane_t * JoltC_Plane_Offset(
  JoltC_Plane_t * self,
  float inDistance,
  char** outErrMsg
);

const JoltC_Plane_t * JoltC_Plane_GetTransformed(
  JoltC_Plane_t * self,
  const JoltC_Mat44_t * inTransform,
  char** outErrMsg
);

float JoltC_Plane_SignedDistance(
  JoltC_Plane_t * self,
  const JoltC_Vec3_t * inPoint,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

