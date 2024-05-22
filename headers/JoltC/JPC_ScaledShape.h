#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_ScaledShape_t * JPC_ScaledShape_new(
  JPC_Shape_t * inShape,
  const JPC_Vec3_t * inScale
);

//endregion constructors

//region functions

JPC_Vec3_t * JPC_ScaledShape_GetScale(
  JPC_ScaledShape_t * self
);

const JPC_Shape_t * JPC_ScaledShape_GetInnerShape(
  JPC_ScaledShape_t * self
);

unsigned long JPC_ScaledShape_GetRefCount(
  JPC_ScaledShape_t * self
);

void JPC_ScaledShape_AddRef(
  JPC_ScaledShape_t * self
);

void JPC_ScaledShape_Release(
  JPC_ScaledShape_t * self
);

JPC_EShapeType JPC_ScaledShape_GetType(
  JPC_ScaledShape_t * self
);

JPC_EShapeSubType JPC_ScaledShape_GetSubType(
  JPC_ScaledShape_t * self
);

bool JPC_ScaledShape_MustBeStatic(
  JPC_ScaledShape_t * self
);

JPC_AABox_t * JPC_ScaledShape_GetLocalBounds(
  JPC_ScaledShape_t * self
);

JPC_AABox_t * JPC_ScaledShape_GetWorldSpaceBounds(
  JPC_ScaledShape_t * self,
  const JPC_Mat44_t * inCenterOfMassTransform,
  const JPC_Vec3_t * inScale
);

JPC_Vec3_t * JPC_ScaledShape_GetCenterOfMass(
  JPC_ScaledShape_t * self
);

unsigned long long int JPC_ScaledShape_GetUserData(
  JPC_ScaledShape_t * self
);

void JPC_ScaledShape_SetUserData(
  JPC_ScaledShape_t * self,
  unsigned long long int inUserData
);

unsigned long JPC_ScaledShape_GetSubShapeIDBitsRecursive(
  JPC_ScaledShape_t * self
);

float JPC_ScaledShape_GetInnerRadius(
  JPC_ScaledShape_t * self
);

JPC_MassProperties_t * JPC_ScaledShape_GetMassProperties(
  JPC_ScaledShape_t * self
);

const JPC_PhysicsMaterial_t * JPC_ScaledShape_GetMaterial(
  JPC_ScaledShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
);

JPC_Vec3_t * JPC_ScaledShape_GetSurfaceNormal(
  JPC_ScaledShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inLocalSurfacePosition
);

unsigned long long int JPC_ScaledShape_GetSubShapeUserData(
  JPC_ScaledShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
);

JPC_TransformedShape_t * JPC_ScaledShape_GetSubShapeTransformedShape(
  JPC_ScaledShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inPositionCOM,
  const JPC_Quat_t * inRotation,
  const JPC_Vec3_t * inScale,
  JPC_SubShapeID_t * outRemainder
);

float JPC_ScaledShape_GetVolume(
  JPC_ScaledShape_t * self
);

bool JPC_ScaledShape_IsValidScale(
  JPC_ScaledShape_t * self,
  const JPC_Vec3_t * inScale
);

JPC_Shape_ShapeResult_t * JPC_ScaledShape_ScaleShape(
  JPC_ScaledShape_t * self,
  const JPC_Vec3_t * inScale
);

//endregion functions


#ifdef __cplusplus
}
#endif

