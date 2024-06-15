#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_MeshShape_destroy(
  JoltC_MeshShape_t * self
);

//endregion
//region functions

unsigned long JoltC_MeshShape_GetRefCount(
  JoltC_MeshShape_t * self
);

void JoltC_MeshShape_AddRef(
  JoltC_MeshShape_t * self
);

void JoltC_MeshShape_Release(
  JoltC_MeshShape_t * self
);

JoltC_EShapeType JoltC_MeshShape_GetType(
  JoltC_MeshShape_t * self
);

JoltC_EShapeSubType JoltC_MeshShape_GetSubType(
  JoltC_MeshShape_t * self
);

bool JoltC_MeshShape_MustBeStatic(
  JoltC_MeshShape_t * self
);

JoltC_AABox_t * JoltC_MeshShape_GetLocalBounds(
  JoltC_MeshShape_t * self
);

JoltC_AABox_t * JoltC_MeshShape_GetWorldSpaceBounds(
  JoltC_MeshShape_t * self,
  JoltC_Mat44_t * inCenterOfMassTransform,
  JoltC_Vec3_t * inScale
);

JoltC_Vec3_t * JoltC_MeshShape_GetCenterOfMass(
  JoltC_MeshShape_t * self
);

unsigned long long int JoltC_MeshShape_GetUserData(
  JoltC_MeshShape_t * self
);

void JoltC_MeshShape_SetUserData(
  JoltC_MeshShape_t * self,
  unsigned long long int inUserData
);

unsigned long JoltC_MeshShape_GetSubShapeIDBitsRecursive(
  JoltC_MeshShape_t * self
);

float JoltC_MeshShape_GetInnerRadius(
  JoltC_MeshShape_t * self
);

JoltC_MassProperties_t * JoltC_MeshShape_GetMassProperties(
  JoltC_MeshShape_t * self
);

JoltC_PhysicsMaterial_t * JoltC_MeshShape_GetMaterial(
  JoltC_MeshShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
);

JoltC_Vec3_t * JoltC_MeshShape_GetSurfaceNormal(
  JoltC_MeshShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inLocalSurfacePosition
);

unsigned long long int JoltC_MeshShape_GetSubShapeUserData(
  JoltC_MeshShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
);

JoltC_TransformedShape_t * JoltC_MeshShape_GetSubShapeTransformedShape(
  JoltC_MeshShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inPositionCOM,
  JoltC_Quat_t * inRotation,
  JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder
);

float JoltC_MeshShape_GetVolume(
  JoltC_MeshShape_t * self
);

bool JoltC_MeshShape_IsValidScale(
  JoltC_MeshShape_t * self,
  JoltC_Vec3_t * inScale
);

JoltC_Shape_ShapeResult_t * JoltC_MeshShape_ScaleShape(
  JoltC_MeshShape_t * self,
  JoltC_Vec3_t * inScale
);

//endregion


#ifdef __cplusplus
}
#endif
