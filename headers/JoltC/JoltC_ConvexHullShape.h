#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

float JPC_ConvexHullShape_GetDensity(
  JPC_ConvexHullShape_t * self
);

void JPC_ConvexHullShape_SetDensity(
  JPC_ConvexHullShape_t * self,
  float inDensity
);

unsigned long JPC_ConvexHullShape_GetRefCount(
  JPC_ConvexHullShape_t * self
);

void JPC_ConvexHullShape_AddRef(
  JPC_ConvexHullShape_t * self
);

void JPC_ConvexHullShape_Release(
  JPC_ConvexHullShape_t * self
);

JPC_EShapeType JPC_ConvexHullShape_GetType(
  JPC_ConvexHullShape_t * self
);

JPC_EShapeSubType JPC_ConvexHullShape_GetSubType(
  JPC_ConvexHullShape_t * self
);

bool JPC_ConvexHullShape_MustBeStatic(
  JPC_ConvexHullShape_t * self
);

JPC_AABox_t * JPC_ConvexHullShape_GetLocalBounds(
  JPC_ConvexHullShape_t * self
);

JPC_AABox_t * JPC_ConvexHullShape_GetWorldSpaceBounds(
  JPC_ConvexHullShape_t * self,
  const JPC_Mat44_t * inCenterOfMassTransform,
  const JPC_Vec3_t * inScale
);

JPC_Vec3_t * JPC_ConvexHullShape_GetCenterOfMass(
  JPC_ConvexHullShape_t * self
);

unsigned long long int JPC_ConvexHullShape_GetUserData(
  JPC_ConvexHullShape_t * self
);

void JPC_ConvexHullShape_SetUserData(
  JPC_ConvexHullShape_t * self,
  unsigned long long int inUserData
);

unsigned long JPC_ConvexHullShape_GetSubShapeIDBitsRecursive(
  JPC_ConvexHullShape_t * self
);

float JPC_ConvexHullShape_GetInnerRadius(
  JPC_ConvexHullShape_t * self
);

JPC_MassProperties_t * JPC_ConvexHullShape_GetMassProperties(
  JPC_ConvexHullShape_t * self
);

const JPC_PhysicsMaterial_t * JPC_ConvexHullShape_GetMaterial(
  JPC_ConvexHullShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
);

JPC_Vec3_t * JPC_ConvexHullShape_GetSurfaceNormal(
  JPC_ConvexHullShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inLocalSurfacePosition
);

unsigned long long int JPC_ConvexHullShape_GetSubShapeUserData(
  JPC_ConvexHullShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
);

JPC_TransformedShape_t * JPC_ConvexHullShape_GetSubShapeTransformedShape(
  JPC_ConvexHullShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inPositionCOM,
  const JPC_Quat_t * inRotation,
  const JPC_Vec3_t * inScale,
  JPC_SubShapeID_t * outRemainder
);

float JPC_ConvexHullShape_GetVolume(
  JPC_ConvexHullShape_t * self
);

bool JPC_ConvexHullShape_IsValidScale(
  JPC_ConvexHullShape_t * self,
  const JPC_Vec3_t * inScale
);

JPC_Shape_ShapeResult_t * JPC_ConvexHullShape_ScaleShape(
  JPC_ConvexHullShape_t * self,
  const JPC_Vec3_t * inScale
);

//endregion functions


#ifdef __cplusplus
}
#endif

