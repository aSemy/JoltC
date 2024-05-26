#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

float JoltC_ConvexHullShape_GetDensity(
  JoltC_ConvexHullShape_t * self
);

void JoltC_ConvexHullShape_SetDensity(
  JoltC_ConvexHullShape_t * self,
  float inDensity
);

unsigned long JoltC_ConvexHullShape_GetRefCount(
  JoltC_ConvexHullShape_t * self
);

void JoltC_ConvexHullShape_AddRef(
  JoltC_ConvexHullShape_t * self
);

void JoltC_ConvexHullShape_Release(
  JoltC_ConvexHullShape_t * self
);

JoltC_EShapeType JoltC_ConvexHullShape_GetType(
  JoltC_ConvexHullShape_t * self
);

JoltC_EShapeSubType JoltC_ConvexHullShape_GetSubType(
  JoltC_ConvexHullShape_t * self
);

bool JoltC_ConvexHullShape_MustBeStatic(
  JoltC_ConvexHullShape_t * self
);

JoltC_AABox_t * JoltC_ConvexHullShape_GetLocalBounds(
  JoltC_ConvexHullShape_t * self
);

JoltC_AABox_t * JoltC_ConvexHullShape_GetWorldSpaceBounds(
  JoltC_ConvexHullShape_t * self,
  JoltC_Mat44_t * inCenterOfMassTransform,
  JoltC_Vec3_t * inScale
);

JoltC_Vec3_t * JoltC_ConvexHullShape_GetCenterOfMass(
  JoltC_ConvexHullShape_t * self
);

unsigned long long int JoltC_ConvexHullShape_GetUserData(
  JoltC_ConvexHullShape_t * self
);

void JoltC_ConvexHullShape_SetUserData(
  JoltC_ConvexHullShape_t * self,
  unsigned long long int inUserData
);

unsigned long JoltC_ConvexHullShape_GetSubShapeIDBitsRecursive(
  JoltC_ConvexHullShape_t * self
);

float JoltC_ConvexHullShape_GetInnerRadius(
  JoltC_ConvexHullShape_t * self
);

JoltC_MassProperties_t * JoltC_ConvexHullShape_GetMassProperties(
  JoltC_ConvexHullShape_t * self
);

JoltC_PhysicsMaterial_t * JoltC_ConvexHullShape_GetMaterial(
  JoltC_ConvexHullShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
);

JoltC_Vec3_t * JoltC_ConvexHullShape_GetSurfaceNormal(
  JoltC_ConvexHullShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inLocalSurfacePosition
);

unsigned long long int JoltC_ConvexHullShape_GetSubShapeUserData(
  JoltC_ConvexHullShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
);

JoltC_TransformedShape_t * JoltC_ConvexHullShape_GetSubShapeTransformedShape(
  JoltC_ConvexHullShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inPositionCOM,
  JoltC_Quat_t * inRotation,
  JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder
);

float JoltC_ConvexHullShape_GetVolume(
  JoltC_ConvexHullShape_t * self
);

bool JoltC_ConvexHullShape_IsValidScale(
  JoltC_ConvexHullShape_t * self,
  JoltC_Vec3_t * inScale
);

JoltC_Shape_ShapeResult_t * JoltC_ConvexHullShape_ScaleShape(
  JoltC_ConvexHullShape_t * self,
  JoltC_Vec3_t * inScale
);

//endregion


#ifdef __cplusplus
}
#endif

