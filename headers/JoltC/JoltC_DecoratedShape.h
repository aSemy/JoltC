#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

const JPC_Shape_t * JPC_DecoratedShape_GetInnerShape(
  JPC_DecoratedShape_t * self
);

unsigned long JPC_DecoratedShape_GetRefCount(
  JPC_DecoratedShape_t * self
);

void JPC_DecoratedShape_AddRef(
  JPC_DecoratedShape_t * self
);

void JPC_DecoratedShape_Release(
  JPC_DecoratedShape_t * self
);

JPC_EShapeType JPC_DecoratedShape_GetType(
  JPC_DecoratedShape_t * self
);

JPC_EShapeSubType JPC_DecoratedShape_GetSubType(
  JPC_DecoratedShape_t * self
);

bool JPC_DecoratedShape_MustBeStatic(
  JPC_DecoratedShape_t * self
);

JPC_AABox_t * JPC_DecoratedShape_GetLocalBounds(
  JPC_DecoratedShape_t * self
);

JPC_AABox_t * JPC_DecoratedShape_GetWorldSpaceBounds(
  JPC_DecoratedShape_t * self,
  const JPC_Mat44_t * inCenterOfMassTransform,
  const JPC_Vec3_t * inScale
);

JPC_Vec3_t * JPC_DecoratedShape_GetCenterOfMass(
  JPC_DecoratedShape_t * self
);

unsigned long long int JPC_DecoratedShape_GetUserData(
  JPC_DecoratedShape_t * self
);

void JPC_DecoratedShape_SetUserData(
  JPC_DecoratedShape_t * self,
  unsigned long long int inUserData
);

unsigned long JPC_DecoratedShape_GetSubShapeIDBitsRecursive(
  JPC_DecoratedShape_t * self
);

float JPC_DecoratedShape_GetInnerRadius(
  JPC_DecoratedShape_t * self
);

JPC_MassProperties_t * JPC_DecoratedShape_GetMassProperties(
  JPC_DecoratedShape_t * self
);

const JPC_PhysicsMaterial_t * JPC_DecoratedShape_GetMaterial(
  JPC_DecoratedShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
);

JPC_Vec3_t * JPC_DecoratedShape_GetSurfaceNormal(
  JPC_DecoratedShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inLocalSurfacePosition
);

unsigned long long int JPC_DecoratedShape_GetSubShapeUserData(
  JPC_DecoratedShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
);

JPC_TransformedShape_t * JPC_DecoratedShape_GetSubShapeTransformedShape(
  JPC_DecoratedShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inPositionCOM,
  const JPC_Quat_t * inRotation,
  const JPC_Vec3_t * inScale,
  JPC_SubShapeID_t * outRemainder
);

float JPC_DecoratedShape_GetVolume(
  JPC_DecoratedShape_t * self
);

bool JPC_DecoratedShape_IsValidScale(
  JPC_DecoratedShape_t * self,
  const JPC_Vec3_t * inScale
);

JPC_Shape_ShapeResult_t * JPC_DecoratedShape_ScaleShape(
  JPC_DecoratedShape_t * self,
  const JPC_Vec3_t * inScale
);

//endregion functions


#ifdef __cplusplus
}
#endif

