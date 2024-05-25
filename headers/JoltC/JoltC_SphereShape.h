#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_SphereShape_t * JPC_SphereShape_new(
  float inRadius,
  const JPC_PhysicsMaterial_t * inMaterial
);

//endregion constructors

//region functions

float JPC_SphereShape_GetRadius(
  JPC_SphereShape_t * self
);

float JPC_SphereShape_GetDensity(
  JPC_SphereShape_t * self
);

void JPC_SphereShape_SetDensity(
  JPC_SphereShape_t * self,
  float inDensity
);

unsigned long JPC_SphereShape_GetRefCount(
  JPC_SphereShape_t * self
);

void JPC_SphereShape_AddRef(
  JPC_SphereShape_t * self
);

void JPC_SphereShape_Release(
  JPC_SphereShape_t * self
);

JPC_EShapeType JPC_SphereShape_GetType(
  JPC_SphereShape_t * self
);

JPC_EShapeSubType JPC_SphereShape_GetSubType(
  JPC_SphereShape_t * self
);

bool JPC_SphereShape_MustBeStatic(
  JPC_SphereShape_t * self
);

JPC_AABox_t * JPC_SphereShape_GetLocalBounds(
  JPC_SphereShape_t * self
);

JPC_AABox_t * JPC_SphereShape_GetWorldSpaceBounds(
  JPC_SphereShape_t * self,
  const JPC_Mat44_t * inCenterOfMassTransform,
  const JPC_Vec3_t * inScale
);

JPC_Vec3_t * JPC_SphereShape_GetCenterOfMass(
  JPC_SphereShape_t * self
);

unsigned long long int JPC_SphereShape_GetUserData(
  JPC_SphereShape_t * self
);

void JPC_SphereShape_SetUserData(
  JPC_SphereShape_t * self,
  unsigned long long int inUserData
);

unsigned long JPC_SphereShape_GetSubShapeIDBitsRecursive(
  JPC_SphereShape_t * self
);

float JPC_SphereShape_GetInnerRadius(
  JPC_SphereShape_t * self
);

JPC_MassProperties_t * JPC_SphereShape_GetMassProperties(
  JPC_SphereShape_t * self
);

const JPC_PhysicsMaterial_t * JPC_SphereShape_GetMaterial(
  JPC_SphereShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
);

JPC_Vec3_t * JPC_SphereShape_GetSurfaceNormal(
  JPC_SphereShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inLocalSurfacePosition
);

unsigned long long int JPC_SphereShape_GetSubShapeUserData(
  JPC_SphereShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
);

JPC_TransformedShape_t * JPC_SphereShape_GetSubShapeTransformedShape(
  JPC_SphereShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inPositionCOM,
  const JPC_Quat_t * inRotation,
  const JPC_Vec3_t * inScale,
  JPC_SubShapeID_t * outRemainder
);

float JPC_SphereShape_GetVolume(
  JPC_SphereShape_t * self
);

bool JPC_SphereShape_IsValidScale(
  JPC_SphereShape_t * self,
  const JPC_Vec3_t * inScale
);

JPC_Shape_ShapeResult_t * JPC_SphereShape_ScaleShape(
  JPC_SphereShape_t * self,
  const JPC_Vec3_t * inScale
);

//endregion functions


#ifdef __cplusplus
}
#endif

