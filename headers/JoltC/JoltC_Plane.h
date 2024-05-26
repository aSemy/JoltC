#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_Plane_t * JoltC_Plane_new(
  JoltC_Vec3_t * inNormal,
  float inConstant
);

//endregion

//region functions

JoltC_Vec3_t * JoltC_Plane_GetNormal(
  JoltC_Plane_t * self
);

void JoltC_Plane_SetNormal(
  JoltC_Plane_t * self,
  JoltC_Vec3_t * inNormal
);

float JoltC_Plane_GetConstant(
  JoltC_Plane_t * self
);

void JoltC_Plane_SetConstant(
  JoltC_Plane_t * self,
  float inConstant
);

JoltC_Plane_t * JoltC_Plane_sFromPointAndNormal(
  JoltC_Plane_t * self,
  JoltC_Vec3_t * inPoint,
  JoltC_Vec3_t * inNormal
);

JoltC_Plane_t * JoltC_Plane_sFromPointsCCW(
  JoltC_Plane_t * self,
  JoltC_Vec3_t * inPoint1,
  JoltC_Vec3_t * inPoint2,
  JoltC_Vec3_t * inPoint3
);

JoltC_Plane_t * JoltC_Plane_Offset(
  JoltC_Plane_t * self,
  float inDistance
);

JoltC_Plane_t * JoltC_Plane_GetTransformed(
  JoltC_Plane_t * self,
  JoltC_Mat44_t * inTransform
);

float JoltC_Plane_SignedDistance(
  JoltC_Plane_t * self,
  JoltC_Vec3_t * inPoint
);

//endregion


#ifdef __cplusplus
}
#endif

