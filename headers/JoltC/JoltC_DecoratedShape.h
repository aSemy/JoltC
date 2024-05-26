#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region converters

/**
 * Convert an instance of JoltC_ScaledShape_t into JoltC_DecoratedShape_t.
 */
JoltC_DecoratedShape_t * JoltC_DecoratedShape_From_ScaledShape(
  JoltC_ScaledShape_t * subtype
);

/**
 * Convert an instance of JoltC_OffsetCenterOfMassShape_t into JoltC_DecoratedShape_t.
 */
JoltC_DecoratedShape_t * JoltC_DecoratedShape_From_OffsetCenterOfMassShape(
  JoltC_OffsetCenterOfMassShape_t * subtype
);

/**
 * Convert an instance of JoltC_RotatedTranslatedShape_t into JoltC_DecoratedShape_t.
 */
JoltC_DecoratedShape_t * JoltC_DecoratedShape_From_RotatedTranslatedShape(
  JoltC_RotatedTranslatedShape_t * subtype
);

//endregion

//region functions

JoltC_Shape_t * JoltC_DecoratedShape_GetInnerShape(
  JoltC_DecoratedShape_t * self
);

unsigned long JoltC_DecoratedShape_GetRefCount(
  JoltC_DecoratedShape_t * self
);

void JoltC_DecoratedShape_AddRef(
  JoltC_DecoratedShape_t * self
);

void JoltC_DecoratedShape_Release(
  JoltC_DecoratedShape_t * self
);

JoltC_EShapeType JoltC_DecoratedShape_GetType(
  JoltC_DecoratedShape_t * self
);

JoltC_EShapeSubType JoltC_DecoratedShape_GetSubType(
  JoltC_DecoratedShape_t * self
);

bool JoltC_DecoratedShape_MustBeStatic(
  JoltC_DecoratedShape_t * self
);

JoltC_AABox_t * JoltC_DecoratedShape_GetLocalBounds(
  JoltC_DecoratedShape_t * self
);

JoltC_AABox_t * JoltC_DecoratedShape_GetWorldSpaceBounds(
  JoltC_DecoratedShape_t * self,
  JoltC_Mat44_t * inCenterOfMassTransform,
  JoltC_Vec3_t * inScale
);

JoltC_Vec3_t * JoltC_DecoratedShape_GetCenterOfMass(
  JoltC_DecoratedShape_t * self
);

unsigned long long int JoltC_DecoratedShape_GetUserData(
  JoltC_DecoratedShape_t * self
);

void JoltC_DecoratedShape_SetUserData(
  JoltC_DecoratedShape_t * self,
  unsigned long long int inUserData
);

unsigned long JoltC_DecoratedShape_GetSubShapeIDBitsRecursive(
  JoltC_DecoratedShape_t * self
);

float JoltC_DecoratedShape_GetInnerRadius(
  JoltC_DecoratedShape_t * self
);

JoltC_MassProperties_t * JoltC_DecoratedShape_GetMassProperties(
  JoltC_DecoratedShape_t * self
);

JoltC_PhysicsMaterial_t * JoltC_DecoratedShape_GetMaterial(
  JoltC_DecoratedShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
);

JoltC_Vec3_t * JoltC_DecoratedShape_GetSurfaceNormal(
  JoltC_DecoratedShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inLocalSurfacePosition
);

unsigned long long int JoltC_DecoratedShape_GetSubShapeUserData(
  JoltC_DecoratedShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
);

JoltC_TransformedShape_t * JoltC_DecoratedShape_GetSubShapeTransformedShape(
  JoltC_DecoratedShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inPositionCOM,
  JoltC_Quat_t * inRotation,
  JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder
);

float JoltC_DecoratedShape_GetVolume(
  JoltC_DecoratedShape_t * self
);

bool JoltC_DecoratedShape_IsValidScale(
  JoltC_DecoratedShape_t * self,
  JoltC_Vec3_t * inScale
);

JoltC_Shape_ShapeResult_t * JoltC_DecoratedShape_ScaleShape(
  JoltC_DecoratedShape_t * self,
  JoltC_Vec3_t * inScale
);

//endregion


#ifdef __cplusplus
}
#endif

