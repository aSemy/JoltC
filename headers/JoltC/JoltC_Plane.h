#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_Plane_t * JPC_Plane_new(
  const JPC_Vec3_t * inNormal,
  float inConstant
);

//endregion constructors

//region functions

JPC_Vec3_t * JPC_Plane_GetNormal(
  JPC_Plane_t * self
);

void JPC_Plane_SetNormal(
  JPC_Plane_t * self,
  const JPC_Vec3_t * inNormal
);

float JPC_Plane_GetConstant(
  JPC_Plane_t * self
);

void JPC_Plane_SetConstant(
  JPC_Plane_t * self,
  float inConstant
);

const JPC_Plane_t * JPC_Plane_sFromPointAndNormal(
  JPC_Plane_t * self,
  const JPC_Vec3_t * inPoint,
  const JPC_Vec3_t * inNormal
);

const JPC_Plane_t * JPC_Plane_sFromPointsCCW(
  JPC_Plane_t * self,
  const JPC_Vec3_t * inPoint1,
  const JPC_Vec3_t * inPoint2,
  const JPC_Vec3_t * inPoint3
);

const JPC_Plane_t * JPC_Plane_Offset(
  JPC_Plane_t * self,
  float inDistance
);

const JPC_Plane_t * JPC_Plane_GetTransformed(
  JPC_Plane_t * self,
  const JPC_Mat44_t * inTransform
);

float JPC_Plane_SignedDistance(
  JPC_Plane_t * self,
  const JPC_Vec3_t * inPoint
);

//endregion functions


#ifdef __cplusplus
}
#endif

