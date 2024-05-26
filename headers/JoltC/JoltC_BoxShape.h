#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_BoxShape_t * JoltC_BoxShape_new(
  JoltC_Vec3_t * inHalfExtent,
  float inConvexRadius,
  const JoltC_PhysicsMaterial_t * inMaterial
);

//endregion

//region functions

JoltC_Vec3_t * JoltC_BoxShape_GetHalfExtent(
  JoltC_BoxShape_t * self
);

float JoltC_BoxShape_GetDensity(
  JoltC_BoxShape_t * self
);

void JoltC_BoxShape_SetDensity(
  JoltC_BoxShape_t * self,
  float inDensity
);

unsigned long JoltC_BoxShape_GetRefCount(
  JoltC_BoxShape_t * self
);

void JoltC_BoxShape_AddRef(
  JoltC_BoxShape_t * self
);

void JoltC_BoxShape_Release(
  JoltC_BoxShape_t * self
);

JoltC_EShapeType JoltC_BoxShape_GetType(
  JoltC_BoxShape_t * self
);

JoltC_EShapeSubType JoltC_BoxShape_GetSubType(
  JoltC_BoxShape_t * self
);

bool JoltC_BoxShape_MustBeStatic(
  JoltC_BoxShape_t * self
);

JoltC_AABox_t * JoltC_BoxShape_GetLocalBounds(
  JoltC_BoxShape_t * self
);

JoltC_AABox_t * JoltC_BoxShape_GetWorldSpaceBounds(
  JoltC_BoxShape_t * self,
  const JoltC_Mat44_t * inCenterOfMassTransform,
  const JoltC_Vec3_t * inScale
);

JoltC_Vec3_t * JoltC_BoxShape_GetCenterOfMass(
  JoltC_BoxShape_t * self
);

unsigned long long int JoltC_BoxShape_GetUserData(
  JoltC_BoxShape_t * self
);

void JoltC_BoxShape_SetUserData(
  JoltC_BoxShape_t * self,
  unsigned long long int inUserData
);

unsigned long JoltC_BoxShape_GetSubShapeIDBitsRecursive(
  JoltC_BoxShape_t * self
);

float JoltC_BoxShape_GetInnerRadius(
  JoltC_BoxShape_t * self
);

JoltC_MassProperties_t * JoltC_BoxShape_GetMassProperties(
  JoltC_BoxShape_t * self
);

const JoltC_PhysicsMaterial_t * JoltC_BoxShape_GetMaterial(
  JoltC_BoxShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID
);

JoltC_Vec3_t * JoltC_BoxShape_GetSurfaceNormal(
  JoltC_BoxShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inLocalSurfacePosition
);

unsigned long long int JoltC_BoxShape_GetSubShapeUserData(
  JoltC_BoxShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID
);

JoltC_TransformedShape_t * JoltC_BoxShape_GetSubShapeTransformedShape(
  JoltC_BoxShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inPositionCOM,
  const JoltC_Quat_t * inRotation,
  const JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder
);

float JoltC_BoxShape_GetVolume(
  JoltC_BoxShape_t * self
);

bool JoltC_BoxShape_IsValidScale(
  JoltC_BoxShape_t * self,
  const JoltC_Vec3_t * inScale
);

JoltC_Shape_ShapeResult_t * JoltC_BoxShape_ScaleShape(
  JoltC_BoxShape_t * self,
  const JoltC_Vec3_t * inScale
);

//endregion


#ifdef __cplusplus
}
#endif

