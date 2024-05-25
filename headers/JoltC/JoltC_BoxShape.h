#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_BoxShape_t * JPC_BoxShape_new(
  JPC_Vec3_t * inHalfExtent,
  float inConvexRadius,
  const JPC_PhysicsMaterial_t * inMaterial
);

//endregion constructors

//region functions

JPC_Vec3_t * JPC_BoxShape_GetHalfExtent(
  JPC_BoxShape_t * self
);

float JPC_BoxShape_GetDensity(
  JPC_BoxShape_t * self
);

void JPC_BoxShape_SetDensity(
  JPC_BoxShape_t * self,
  float inDensity
);

unsigned long JPC_BoxShape_GetRefCount(
  JPC_BoxShape_t * self
);

void JPC_BoxShape_AddRef(
  JPC_BoxShape_t * self
);

void JPC_BoxShape_Release(
  JPC_BoxShape_t * self
);

JPC_EShapeType JPC_BoxShape_GetType(
  JPC_BoxShape_t * self
);

JPC_EShapeSubType JPC_BoxShape_GetSubType(
  JPC_BoxShape_t * self
);

bool JPC_BoxShape_MustBeStatic(
  JPC_BoxShape_t * self
);

JPC_AABox_t * JPC_BoxShape_GetLocalBounds(
  JPC_BoxShape_t * self
);

JPC_AABox_t * JPC_BoxShape_GetWorldSpaceBounds(
  JPC_BoxShape_t * self,
  const JPC_Mat44_t * inCenterOfMassTransform,
  const JPC_Vec3_t * inScale
);

JPC_Vec3_t * JPC_BoxShape_GetCenterOfMass(
  JPC_BoxShape_t * self
);

unsigned long long int JPC_BoxShape_GetUserData(
  JPC_BoxShape_t * self
);

void JPC_BoxShape_SetUserData(
  JPC_BoxShape_t * self,
  unsigned long long int inUserData
);

unsigned long JPC_BoxShape_GetSubShapeIDBitsRecursive(
  JPC_BoxShape_t * self
);

float JPC_BoxShape_GetInnerRadius(
  JPC_BoxShape_t * self
);

JPC_MassProperties_t * JPC_BoxShape_GetMassProperties(
  JPC_BoxShape_t * self
);

const JPC_PhysicsMaterial_t * JPC_BoxShape_GetMaterial(
  JPC_BoxShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
);

JPC_Vec3_t * JPC_BoxShape_GetSurfaceNormal(
  JPC_BoxShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inLocalSurfacePosition
);

unsigned long long int JPC_BoxShape_GetSubShapeUserData(
  JPC_BoxShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
);

JPC_TransformedShape_t * JPC_BoxShape_GetSubShapeTransformedShape(
  JPC_BoxShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inPositionCOM,
  const JPC_Quat_t * inRotation,
  const JPC_Vec3_t * inScale,
  JPC_SubShapeID_t * outRemainder
);

float JPC_BoxShape_GetVolume(
  JPC_BoxShape_t * self
);

bool JPC_BoxShape_IsValidScale(
  JPC_BoxShape_t * self,
  const JPC_Vec3_t * inScale
);

JPC_Shape_ShapeResult_t * JPC_BoxShape_ScaleShape(
  JPC_BoxShape_t * self,
  const JPC_Vec3_t * inScale
);

//endregion functions


#ifdef __cplusplus
}
#endif

