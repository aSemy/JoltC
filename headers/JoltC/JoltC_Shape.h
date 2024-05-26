#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region converters

/**
 * Convert an instance of JoltC_ConvexShape_t into JoltC_Shape_t.
 */
JoltC_Shape_t * JoltC_Shape_From_ConvexShape(
  JoltC_ConvexShape_t * subtype
);

/**
 * Convert an instance of JoltC_SphereShape_t into JoltC_Shape_t.
 */
JoltC_Shape_t * JoltC_Shape_From_SphereShape(
  JoltC_SphereShape_t * subtype
);

/**
 * Convert an instance of JoltC_BoxShape_t into JoltC_Shape_t.
 */
JoltC_Shape_t * JoltC_Shape_From_BoxShape(
  JoltC_BoxShape_t * subtype
);

/**
 * Convert an instance of JoltC_CylinderShape_t into JoltC_Shape_t.
 */
JoltC_Shape_t * JoltC_Shape_From_CylinderShape(
  JoltC_CylinderShape_t * subtype
);

/**
 * Convert an instance of JoltC_CapsuleShape_t into JoltC_Shape_t.
 */
JoltC_Shape_t * JoltC_Shape_From_CapsuleShape(
  JoltC_CapsuleShape_t * subtype
);

/**
 * Convert an instance of JoltC_TaperedCapsuleShape_t into JoltC_Shape_t.
 */
JoltC_Shape_t * JoltC_Shape_From_TaperedCapsuleShape(
  JoltC_TaperedCapsuleShape_t * subtype
);

/**
 * Convert an instance of JoltC_ConvexHullShape_t into JoltC_Shape_t.
 */
JoltC_Shape_t * JoltC_Shape_From_ConvexHullShape(
  JoltC_ConvexHullShape_t * subtype
);

/**
 * Convert an instance of JoltC_CompoundShape_t into JoltC_Shape_t.
 */
JoltC_Shape_t * JoltC_Shape_From_CompoundShape(
  JoltC_CompoundShape_t * subtype
);

/**
 * Convert an instance of JoltC_StaticCompoundShape_t into JoltC_Shape_t.
 */
JoltC_Shape_t * JoltC_Shape_From_StaticCompoundShape(
  JoltC_StaticCompoundShape_t * subtype
);

/**
 * Convert an instance of JoltC_DecoratedShape_t into JoltC_Shape_t.
 */
JoltC_Shape_t * JoltC_Shape_From_DecoratedShape(
  JoltC_DecoratedShape_t * subtype
);

/**
 * Convert an instance of JoltC_ScaledShape_t into JoltC_Shape_t.
 */
JoltC_Shape_t * JoltC_Shape_From_ScaledShape(
  JoltC_ScaledShape_t * subtype
);

/**
 * Convert an instance of JoltC_OffsetCenterOfMassShape_t into JoltC_Shape_t.
 */
JoltC_Shape_t * JoltC_Shape_From_OffsetCenterOfMassShape(
  JoltC_OffsetCenterOfMassShape_t * subtype
);

/**
 * Convert an instance of JoltC_RotatedTranslatedShape_t into JoltC_Shape_t.
 */
JoltC_Shape_t * JoltC_Shape_From_RotatedTranslatedShape(
  JoltC_RotatedTranslatedShape_t * subtype
);

/**
 * Convert an instance of JoltC_MeshShape_t into JoltC_Shape_t.
 */
JoltC_Shape_t * JoltC_Shape_From_MeshShape(
  JoltC_MeshShape_t * subtype
);

/**
 * Convert an instance of JoltC_HeightFieldShape_t into JoltC_Shape_t.
 */
JoltC_Shape_t * JoltC_Shape_From_HeightFieldShape(
  JoltC_HeightFieldShape_t * subtype
);

/**
 * Convert an instance of JoltC_SoftBodyShape_t into JoltC_Shape_t.
 */
JoltC_Shape_t * JoltC_Shape_From_SoftBodyShape(
  JoltC_SoftBodyShape_t * subtype
);

//endregion

//region functions

unsigned long JoltC_Shape_GetRefCount(
  JoltC_Shape_t * self
);

void JoltC_Shape_AddRef(
  JoltC_Shape_t * self
);

void JoltC_Shape_Release(
  JoltC_Shape_t * self
);

JoltC_EShapeType JoltC_Shape_GetType(
  JoltC_Shape_t * self
);

JoltC_EShapeSubType JoltC_Shape_GetSubType(
  JoltC_Shape_t * self
);

bool JoltC_Shape_MustBeStatic(
  JoltC_Shape_t * self
);

JoltC_AABox_t * JoltC_Shape_GetLocalBounds(
  JoltC_Shape_t * self
);

JoltC_AABox_t * JoltC_Shape_GetWorldSpaceBounds(
  JoltC_Shape_t * self,
  const JoltC_Mat44_t * inCenterOfMassTransform,
  const JoltC_Vec3_t * inScale
);

JoltC_Vec3_t * JoltC_Shape_GetCenterOfMass(
  JoltC_Shape_t * self
);

unsigned long long int JoltC_Shape_GetUserData(
  JoltC_Shape_t * self
);

void JoltC_Shape_SetUserData(
  JoltC_Shape_t * self,
  unsigned long long int inUserData
);

unsigned long JoltC_Shape_GetSubShapeIDBitsRecursive(
  JoltC_Shape_t * self
);

float JoltC_Shape_GetInnerRadius(
  JoltC_Shape_t * self
);

JoltC_MassProperties_t * JoltC_Shape_GetMassProperties(
  JoltC_Shape_t * self
);

const JoltC_PhysicsMaterial_t * JoltC_Shape_GetMaterial(
  JoltC_Shape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID
);

JoltC_Vec3_t * JoltC_Shape_GetSurfaceNormal(
  JoltC_Shape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inLocalSurfacePosition
);

unsigned long long int JoltC_Shape_GetSubShapeUserData(
  JoltC_Shape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID
);

JoltC_TransformedShape_t * JoltC_Shape_GetSubShapeTransformedShape(
  JoltC_Shape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inPositionCOM,
  const JoltC_Quat_t * inRotation,
  const JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder
);

float JoltC_Shape_GetVolume(
  JoltC_Shape_t * self
);

bool JoltC_Shape_IsValidScale(
  JoltC_Shape_t * self,
  const JoltC_Vec3_t * inScale
);

JoltC_Shape_ShapeResult_t * JoltC_Shape_ScaleShape(
  JoltC_Shape_t * self,
  const JoltC_Vec3_t * inScale
);

//endregion


#ifdef __cplusplus
}
#endif

