#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_CapsuleShape_t * JPC_CapsuleShape_new(
  float inHalfHeight,
  float inRadius,
  const JPC_PhysicsMaterial_t * inMaterial
);

//endregion constructors

//region functions

float JPC_CapsuleShape_GetRadius(
  JPC_CapsuleShape_t * self
);

float JPC_CapsuleShape_GetHalfHeightOfCylinder(
  JPC_CapsuleShape_t * self
);

float JPC_CapsuleShape_GetDensity(
  JPC_CapsuleShape_t * self
);

void JPC_CapsuleShape_SetDensity(
  JPC_CapsuleShape_t * self,
  float inDensity
);

unsigned long JPC_CapsuleShape_GetRefCount(
  JPC_CapsuleShape_t * self
);

void JPC_CapsuleShape_AddRef(
  JPC_CapsuleShape_t * self
);

void JPC_CapsuleShape_Release(
  JPC_CapsuleShape_t * self
);

JPC_EShapeType JPC_CapsuleShape_GetType(
  JPC_CapsuleShape_t * self
);

JPC_EShapeSubType JPC_CapsuleShape_GetSubType(
  JPC_CapsuleShape_t * self
);

bool JPC_CapsuleShape_MustBeStatic(
  JPC_CapsuleShape_t * self
);

JPC_AABox_t * JPC_CapsuleShape_GetLocalBounds(
  JPC_CapsuleShape_t * self
);

JPC_AABox_t * JPC_CapsuleShape_GetWorldSpaceBounds(
  JPC_CapsuleShape_t * self,
  const JPC_Mat44_t * inCenterOfMassTransform,
  const JPC_Vec3_t * inScale
);

JPC_Vec3_t * JPC_CapsuleShape_GetCenterOfMass(
  JPC_CapsuleShape_t * self
);

unsigned long long int JPC_CapsuleShape_GetUserData(
  JPC_CapsuleShape_t * self
);

void JPC_CapsuleShape_SetUserData(
  JPC_CapsuleShape_t * self,
  unsigned long long int inUserData
);

unsigned long JPC_CapsuleShape_GetSubShapeIDBitsRecursive(
  JPC_CapsuleShape_t * self
);

float JPC_CapsuleShape_GetInnerRadius(
  JPC_CapsuleShape_t * self
);

JPC_MassProperties_t * JPC_CapsuleShape_GetMassProperties(
  JPC_CapsuleShape_t * self
);

const JPC_PhysicsMaterial_t * JPC_CapsuleShape_GetMaterial(
  JPC_CapsuleShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
);

JPC_Vec3_t * JPC_CapsuleShape_GetSurfaceNormal(
  JPC_CapsuleShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inLocalSurfacePosition
);

unsigned long long int JPC_CapsuleShape_GetSubShapeUserData(
  JPC_CapsuleShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
);

JPC_TransformedShape_t * JPC_CapsuleShape_GetSubShapeTransformedShape(
  JPC_CapsuleShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inPositionCOM,
  const JPC_Quat_t * inRotation,
  const JPC_Vec3_t * inScale,
  JPC_SubShapeID_t * outRemainder
);

float JPC_CapsuleShape_GetVolume(
  JPC_CapsuleShape_t * self
);

bool JPC_CapsuleShape_IsValidScale(
  JPC_CapsuleShape_t * self,
  const JPC_Vec3_t * inScale
);

JPC_Shape_ShapeResult_t * JPC_CapsuleShape_ScaleShape(
  JPC_CapsuleShape_t * self,
  const JPC_Vec3_t * inScale
);

//endregion functions


#ifdef __cplusplus
}
#endif

