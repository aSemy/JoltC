#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_CylinderShape_t * JPC_CylinderShape_new(
  float inHalfHeight,
  float inRadius,
  float inConvexRadius,
  const JPC_PhysicsMaterial_t * inMaterial
);

//endregion constructors

//region functions

float JPC_CylinderShape_GetRadius(
  JPC_CylinderShape_t * self
);

float JPC_CylinderShape_GetHalfHeight(
  JPC_CylinderShape_t * self
);

float JPC_CylinderShape_GetDensity(
  JPC_CylinderShape_t * self
);

void JPC_CylinderShape_SetDensity(
  JPC_CylinderShape_t * self,
  float inDensity
);

unsigned long JPC_CylinderShape_GetRefCount(
  JPC_CylinderShape_t * self
);

void JPC_CylinderShape_AddRef(
  JPC_CylinderShape_t * self
);

void JPC_CylinderShape_Release(
  JPC_CylinderShape_t * self
);

JPC_EShapeType JPC_CylinderShape_GetType(
  JPC_CylinderShape_t * self
);

JPC_EShapeSubType JPC_CylinderShape_GetSubType(
  JPC_CylinderShape_t * self
);

bool JPC_CylinderShape_MustBeStatic(
  JPC_CylinderShape_t * self
);

JPC_AABox_t * JPC_CylinderShape_GetLocalBounds(
  JPC_CylinderShape_t * self
);

JPC_AABox_t * JPC_CylinderShape_GetWorldSpaceBounds(
  JPC_CylinderShape_t * self,
  const JPC_Mat44_t * inCenterOfMassTransform,
  const JPC_Vec3_t * inScale
);

JPC_Vec3_t * JPC_CylinderShape_GetCenterOfMass(
  JPC_CylinderShape_t * self
);

unsigned long long int JPC_CylinderShape_GetUserData(
  JPC_CylinderShape_t * self
);

void JPC_CylinderShape_SetUserData(
  JPC_CylinderShape_t * self,
  unsigned long long int inUserData
);

unsigned long JPC_CylinderShape_GetSubShapeIDBitsRecursive(
  JPC_CylinderShape_t * self
);

float JPC_CylinderShape_GetInnerRadius(
  JPC_CylinderShape_t * self
);

JPC_MassProperties_t * JPC_CylinderShape_GetMassProperties(
  JPC_CylinderShape_t * self
);

const JPC_PhysicsMaterial_t * JPC_CylinderShape_GetMaterial(
  JPC_CylinderShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
);

JPC_Vec3_t * JPC_CylinderShape_GetSurfaceNormal(
  JPC_CylinderShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inLocalSurfacePosition
);

unsigned long long int JPC_CylinderShape_GetSubShapeUserData(
  JPC_CylinderShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
);

JPC_TransformedShape_t * JPC_CylinderShape_GetSubShapeTransformedShape(
  JPC_CylinderShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inPositionCOM,
  const JPC_Quat_t * inRotation,
  const JPC_Vec3_t * inScale,
  JPC_SubShapeID_t * outRemainder
);

float JPC_CylinderShape_GetVolume(
  JPC_CylinderShape_t * self
);

bool JPC_CylinderShape_IsValidScale(
  JPC_CylinderShape_t * self,
  const JPC_Vec3_t * inScale
);

JPC_Shape_ShapeResult_t * JPC_CylinderShape_ScaleShape(
  JPC_CylinderShape_t * self,
  const JPC_Vec3_t * inScale
);

//endregion functions


#ifdef __cplusplus
}
#endif

