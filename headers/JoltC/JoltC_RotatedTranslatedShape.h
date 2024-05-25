#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

JPC_Quat_t * JPC_RotatedTranslatedShape_GetRotation(
  JPC_RotatedTranslatedShape_t * self
);

JPC_Vec3_t * JPC_RotatedTranslatedShape_GetPosition(
  JPC_RotatedTranslatedShape_t * self
);

const JPC_Shape_t * JPC_RotatedTranslatedShape_GetInnerShape(
  JPC_RotatedTranslatedShape_t * self
);

unsigned long JPC_RotatedTranslatedShape_GetRefCount(
  JPC_RotatedTranslatedShape_t * self
);

void JPC_RotatedTranslatedShape_AddRef(
  JPC_RotatedTranslatedShape_t * self
);

void JPC_RotatedTranslatedShape_Release(
  JPC_RotatedTranslatedShape_t * self
);

JPC_EShapeType JPC_RotatedTranslatedShape_GetType(
  JPC_RotatedTranslatedShape_t * self
);

JPC_EShapeSubType JPC_RotatedTranslatedShape_GetSubType(
  JPC_RotatedTranslatedShape_t * self
);

bool JPC_RotatedTranslatedShape_MustBeStatic(
  JPC_RotatedTranslatedShape_t * self
);

JPC_AABox_t * JPC_RotatedTranslatedShape_GetLocalBounds(
  JPC_RotatedTranslatedShape_t * self
);

JPC_AABox_t * JPC_RotatedTranslatedShape_GetWorldSpaceBounds(
  JPC_RotatedTranslatedShape_t * self,
  const JPC_Mat44_t * inCenterOfMassTransform,
  const JPC_Vec3_t * inScale
);

JPC_Vec3_t * JPC_RotatedTranslatedShape_GetCenterOfMass(
  JPC_RotatedTranslatedShape_t * self
);

unsigned long long int JPC_RotatedTranslatedShape_GetUserData(
  JPC_RotatedTranslatedShape_t * self
);

void JPC_RotatedTranslatedShape_SetUserData(
  JPC_RotatedTranslatedShape_t * self,
  unsigned long long int inUserData
);

unsigned long JPC_RotatedTranslatedShape_GetSubShapeIDBitsRecursive(
  JPC_RotatedTranslatedShape_t * self
);

float JPC_RotatedTranslatedShape_GetInnerRadius(
  JPC_RotatedTranslatedShape_t * self
);

JPC_MassProperties_t * JPC_RotatedTranslatedShape_GetMassProperties(
  JPC_RotatedTranslatedShape_t * self
);

const JPC_PhysicsMaterial_t * JPC_RotatedTranslatedShape_GetMaterial(
  JPC_RotatedTranslatedShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
);

JPC_Vec3_t * JPC_RotatedTranslatedShape_GetSurfaceNormal(
  JPC_RotatedTranslatedShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inLocalSurfacePosition
);

unsigned long long int JPC_RotatedTranslatedShape_GetSubShapeUserData(
  JPC_RotatedTranslatedShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
);

JPC_TransformedShape_t * JPC_RotatedTranslatedShape_GetSubShapeTransformedShape(
  JPC_RotatedTranslatedShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inPositionCOM,
  const JPC_Quat_t * inRotation,
  const JPC_Vec3_t * inScale,
  JPC_SubShapeID_t * outRemainder
);

float JPC_RotatedTranslatedShape_GetVolume(
  JPC_RotatedTranslatedShape_t * self
);

bool JPC_RotatedTranslatedShape_IsValidScale(
  JPC_RotatedTranslatedShape_t * self,
  const JPC_Vec3_t * inScale
);

JPC_Shape_ShapeResult_t * JPC_RotatedTranslatedShape_ScaleShape(
  JPC_RotatedTranslatedShape_t * self,
  const JPC_Vec3_t * inScale
);

//endregion functions


#ifdef __cplusplus
}
#endif

