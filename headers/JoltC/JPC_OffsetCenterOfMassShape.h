#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_OffsetCenterOfMassShape_t * JPC_OffsetCenterOfMassShape_new(
  const JPC_Shape_t * inShape,
  const JPC_Vec3_t * inOffset
);

//endregion constructors

//region functions

const JPC_Shape_t * JPC_OffsetCenterOfMassShape_GetInnerShape(
  JPC_OffsetCenterOfMassShape_t * self
);

unsigned long JPC_OffsetCenterOfMassShape_GetRefCount(
  JPC_OffsetCenterOfMassShape_t * self
);

void JPC_OffsetCenterOfMassShape_AddRef(
  JPC_OffsetCenterOfMassShape_t * self
);

void JPC_OffsetCenterOfMassShape_Release(
  JPC_OffsetCenterOfMassShape_t * self
);

JPC_EShapeType JPC_OffsetCenterOfMassShape_GetType(
  JPC_OffsetCenterOfMassShape_t * self
);

JPC_EShapeSubType JPC_OffsetCenterOfMassShape_GetSubType(
  JPC_OffsetCenterOfMassShape_t * self
);

bool JPC_OffsetCenterOfMassShape_MustBeStatic(
  JPC_OffsetCenterOfMassShape_t * self
);

JPC_AABox_t * JPC_OffsetCenterOfMassShape_GetLocalBounds(
  JPC_OffsetCenterOfMassShape_t * self
);

JPC_AABox_t * JPC_OffsetCenterOfMassShape_GetWorldSpaceBounds(
  JPC_OffsetCenterOfMassShape_t * self,
  const JPC_Mat44_t * inCenterOfMassTransform,
  const JPC_Vec3_t * inScale
);

JPC_Vec3_t * JPC_OffsetCenterOfMassShape_GetCenterOfMass(
  JPC_OffsetCenterOfMassShape_t * self
);

unsigned long long int JPC_OffsetCenterOfMassShape_GetUserData(
  JPC_OffsetCenterOfMassShape_t * self
);

void JPC_OffsetCenterOfMassShape_SetUserData(
  JPC_OffsetCenterOfMassShape_t * self,
  unsigned long long int inUserData
);

unsigned long JPC_OffsetCenterOfMassShape_GetSubShapeIDBitsRecursive(
  JPC_OffsetCenterOfMassShape_t * self
);

float JPC_OffsetCenterOfMassShape_GetInnerRadius(
  JPC_OffsetCenterOfMassShape_t * self
);

JPC_MassProperties_t * JPC_OffsetCenterOfMassShape_GetMassProperties(
  JPC_OffsetCenterOfMassShape_t * self
);

const JPC_PhysicsMaterial_t * JPC_OffsetCenterOfMassShape_GetMaterial(
  JPC_OffsetCenterOfMassShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
);

JPC_Vec3_t * JPC_OffsetCenterOfMassShape_GetSurfaceNormal(
  JPC_OffsetCenterOfMassShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inLocalSurfacePosition
);

unsigned long long int JPC_OffsetCenterOfMassShape_GetSubShapeUserData(
  JPC_OffsetCenterOfMassShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
);

JPC_TransformedShape_t * JPC_OffsetCenterOfMassShape_GetSubShapeTransformedShape(
  JPC_OffsetCenterOfMassShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inPositionCOM,
  const JPC_Quat_t * inRotation,
  const JPC_Vec3_t * inScale,
  JPC_SubShapeID_t * outRemainder
);

float JPC_OffsetCenterOfMassShape_GetVolume(
  JPC_OffsetCenterOfMassShape_t * self
);

bool JPC_OffsetCenterOfMassShape_IsValidScale(
  JPC_OffsetCenterOfMassShape_t * self,
  const JPC_Vec3_t * inScale
);

JPC_Shape_ShapeResult_t * JPC_OffsetCenterOfMassShape_ScaleShape(
  JPC_OffsetCenterOfMassShape_t * self,
  const JPC_Vec3_t * inScale
);

//endregion functions


#ifdef __cplusplus
}
#endif

