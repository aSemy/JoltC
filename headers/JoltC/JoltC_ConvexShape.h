#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region converters

/**
 * Convert an instance of JoltC_SphereShape_t into JoltC_ConvexShape_t.
 */
JoltC_ConvexShape_t * JoltC_ConvexShape_From_SphereShape(
  JoltC_SphereShape_t * subtype
);

/**
 * Convert an instance of JoltC_BoxShape_t into JoltC_ConvexShape_t.
 */
JoltC_ConvexShape_t * JoltC_ConvexShape_From_BoxShape(
  JoltC_BoxShape_t * subtype
);

/**
 * Convert an instance of JoltC_CylinderShape_t into JoltC_ConvexShape_t.
 */
JoltC_ConvexShape_t * JoltC_ConvexShape_From_CylinderShape(
  JoltC_CylinderShape_t * subtype
);

/**
 * Convert an instance of JoltC_CapsuleShape_t into JoltC_ConvexShape_t.
 */
JoltC_ConvexShape_t * JoltC_ConvexShape_From_CapsuleShape(
  JoltC_CapsuleShape_t * subtype
);

/**
 * Convert an instance of JoltC_TaperedCapsuleShape_t into JoltC_ConvexShape_t.
 */
JoltC_ConvexShape_t * JoltC_ConvexShape_From_TaperedCapsuleShape(
  JoltC_TaperedCapsuleShape_t * subtype
);

/**
 * Convert an instance of JoltC_ConvexHullShape_t into JoltC_ConvexShape_t.
 */
JoltC_ConvexShape_t * JoltC_ConvexShape_From_ConvexHullShape(
  JoltC_ConvexHullShape_t * subtype
);

//endregion

//region functions

float JoltC_ConvexShape_GetDensity(
  JoltC_ConvexShape_t * self
);

void JoltC_ConvexShape_SetDensity(
  JoltC_ConvexShape_t * self,
  float inDensity
);

unsigned long JoltC_ConvexShape_GetRefCount(
  JoltC_ConvexShape_t * self
);

void JoltC_ConvexShape_AddRef(
  JoltC_ConvexShape_t * self
);

void JoltC_ConvexShape_Release(
  JoltC_ConvexShape_t * self
);

JoltC_EShapeType JoltC_ConvexShape_GetType(
  JoltC_ConvexShape_t * self
);

JoltC_EShapeSubType JoltC_ConvexShape_GetSubType(
  JoltC_ConvexShape_t * self
);

bool JoltC_ConvexShape_MustBeStatic(
  JoltC_ConvexShape_t * self
);

JoltC_AABox_t * JoltC_ConvexShape_GetLocalBounds(
  JoltC_ConvexShape_t * self
);

JoltC_AABox_t * JoltC_ConvexShape_GetWorldSpaceBounds(
  JoltC_ConvexShape_t * self,
  const JoltC_Mat44_t * inCenterOfMassTransform,
  const JoltC_Vec3_t * inScale
);

JoltC_Vec3_t * JoltC_ConvexShape_GetCenterOfMass(
  JoltC_ConvexShape_t * self
);

unsigned long long int JoltC_ConvexShape_GetUserData(
  JoltC_ConvexShape_t * self
);

void JoltC_ConvexShape_SetUserData(
  JoltC_ConvexShape_t * self,
  unsigned long long int inUserData
);

unsigned long JoltC_ConvexShape_GetSubShapeIDBitsRecursive(
  JoltC_ConvexShape_t * self
);

float JoltC_ConvexShape_GetInnerRadius(
  JoltC_ConvexShape_t * self
);

JoltC_MassProperties_t * JoltC_ConvexShape_GetMassProperties(
  JoltC_ConvexShape_t * self
);

const JoltC_PhysicsMaterial_t * JoltC_ConvexShape_GetMaterial(
  JoltC_ConvexShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID
);

JoltC_Vec3_t * JoltC_ConvexShape_GetSurfaceNormal(
  JoltC_ConvexShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inLocalSurfacePosition
);

unsigned long long int JoltC_ConvexShape_GetSubShapeUserData(
  JoltC_ConvexShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID
);

JoltC_TransformedShape_t * JoltC_ConvexShape_GetSubShapeTransformedShape(
  JoltC_ConvexShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inPositionCOM,
  const JoltC_Quat_t * inRotation,
  const JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder
);

float JoltC_ConvexShape_GetVolume(
  JoltC_ConvexShape_t * self
);

bool JoltC_ConvexShape_IsValidScale(
  JoltC_ConvexShape_t * self,
  const JoltC_Vec3_t * inScale
);

JoltC_Shape_ShapeResult_t * JoltC_ConvexShape_ScaleShape(
  JoltC_ConvexShape_t * self,
  const JoltC_Vec3_t * inScale
);

//endregion


#ifdef __cplusplus
}
#endif

