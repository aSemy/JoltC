#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CylinderShape_t * JoltC_CylinderShape_new(
  float inHalfHeight,
  float inRadius,
  float inConvexRadius,
  const JoltC_PhysicsMaterial_t * inMaterial
);

//endregion

//region functions

float JoltC_CylinderShape_GetRadius(
  JoltC_CylinderShape_t * self
);

float JoltC_CylinderShape_GetHalfHeight(
  JoltC_CylinderShape_t * self
);

float JoltC_CylinderShape_GetDensity(
  JoltC_CylinderShape_t * self
);

void JoltC_CylinderShape_SetDensity(
  JoltC_CylinderShape_t * self,
  float inDensity
);

unsigned long JoltC_CylinderShape_GetRefCount(
  JoltC_CylinderShape_t * self
);

void JoltC_CylinderShape_AddRef(
  JoltC_CylinderShape_t * self
);

void JoltC_CylinderShape_Release(
  JoltC_CylinderShape_t * self
);

JoltC_EShapeType JoltC_CylinderShape_GetType(
  JoltC_CylinderShape_t * self
);

JoltC_EShapeSubType JoltC_CylinderShape_GetSubType(
  JoltC_CylinderShape_t * self
);

bool JoltC_CylinderShape_MustBeStatic(
  JoltC_CylinderShape_t * self
);

JoltC_AABox_t * JoltC_CylinderShape_GetLocalBounds(
  JoltC_CylinderShape_t * self
);

JoltC_AABox_t * JoltC_CylinderShape_GetWorldSpaceBounds(
  JoltC_CylinderShape_t * self,
  const JoltC_Mat44_t * inCenterOfMassTransform,
  const JoltC_Vec3_t * inScale
);

JoltC_Vec3_t * JoltC_CylinderShape_GetCenterOfMass(
  JoltC_CylinderShape_t * self
);

unsigned long long int JoltC_CylinderShape_GetUserData(
  JoltC_CylinderShape_t * self
);

void JoltC_CylinderShape_SetUserData(
  JoltC_CylinderShape_t * self,
  unsigned long long int inUserData
);

unsigned long JoltC_CylinderShape_GetSubShapeIDBitsRecursive(
  JoltC_CylinderShape_t * self
);

float JoltC_CylinderShape_GetInnerRadius(
  JoltC_CylinderShape_t * self
);

JoltC_MassProperties_t * JoltC_CylinderShape_GetMassProperties(
  JoltC_CylinderShape_t * self
);

const JoltC_PhysicsMaterial_t * JoltC_CylinderShape_GetMaterial(
  JoltC_CylinderShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID
);

JoltC_Vec3_t * JoltC_CylinderShape_GetSurfaceNormal(
  JoltC_CylinderShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inLocalSurfacePosition
);

unsigned long long int JoltC_CylinderShape_GetSubShapeUserData(
  JoltC_CylinderShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID
);

JoltC_TransformedShape_t * JoltC_CylinderShape_GetSubShapeTransformedShape(
  JoltC_CylinderShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inPositionCOM,
  const JoltC_Quat_t * inRotation,
  const JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder
);

float JoltC_CylinderShape_GetVolume(
  JoltC_CylinderShape_t * self
);

bool JoltC_CylinderShape_IsValidScale(
  JoltC_CylinderShape_t * self,
  const JoltC_Vec3_t * inScale
);

JoltC_Shape_ShapeResult_t * JoltC_CylinderShape_ScaleShape(
  JoltC_CylinderShape_t * self,
  const JoltC_Vec3_t * inScale
);

//endregion


#ifdef __cplusplus
}
#endif

