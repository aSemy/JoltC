#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JPC_MeshShape_GetRefCount(
  JPC_MeshShape_t * self
);

void JPC_MeshShape_AddRef(
  JPC_MeshShape_t * self
);

void JPC_MeshShape_Release(
  JPC_MeshShape_t * self
);

JPC_EShapeType JPC_MeshShape_GetType(
  JPC_MeshShape_t * self
);

JPC_EShapeSubType JPC_MeshShape_GetSubType(
  JPC_MeshShape_t * self
);

bool JPC_MeshShape_MustBeStatic(
  JPC_MeshShape_t * self
);

JPC_AABox_t * JPC_MeshShape_GetLocalBounds(
  JPC_MeshShape_t * self
);

JPC_AABox_t * JPC_MeshShape_GetWorldSpaceBounds(
  JPC_MeshShape_t * self,
  const JPC_Mat44_t * inCenterOfMassTransform,
  const JPC_Vec3_t * inScale
);

JPC_Vec3_t * JPC_MeshShape_GetCenterOfMass(
  JPC_MeshShape_t * self
);

unsigned long long int JPC_MeshShape_GetUserData(
  JPC_MeshShape_t * self
);

void JPC_MeshShape_SetUserData(
  JPC_MeshShape_t * self,
  unsigned long long int inUserData
);

unsigned long JPC_MeshShape_GetSubShapeIDBitsRecursive(
  JPC_MeshShape_t * self
);

float JPC_MeshShape_GetInnerRadius(
  JPC_MeshShape_t * self
);

JPC_MassProperties_t * JPC_MeshShape_GetMassProperties(
  JPC_MeshShape_t * self
);

const JPC_PhysicsMaterial_t * JPC_MeshShape_GetMaterial(
  JPC_MeshShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
);

JPC_Vec3_t * JPC_MeshShape_GetSurfaceNormal(
  JPC_MeshShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inLocalSurfacePosition
);

unsigned long long int JPC_MeshShape_GetSubShapeUserData(
  JPC_MeshShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
);

JPC_TransformedShape_t * JPC_MeshShape_GetSubShapeTransformedShape(
  JPC_MeshShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inPositionCOM,
  const JPC_Quat_t * inRotation,
  const JPC_Vec3_t * inScale,
  JPC_SubShapeID_t * outRemainder
);

float JPC_MeshShape_GetVolume(
  JPC_MeshShape_t * self
);

bool JPC_MeshShape_IsValidScale(
  JPC_MeshShape_t * self,
  const JPC_Vec3_t * inScale
);

JPC_Shape_ShapeResult_t * JPC_MeshShape_ScaleShape(
  JPC_MeshShape_t * self,
  const JPC_Vec3_t * inScale
);

//endregion functions


#ifdef __cplusplus
}
#endif

