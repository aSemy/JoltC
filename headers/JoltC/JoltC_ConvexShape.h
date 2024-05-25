#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

float JPC_ConvexShape_GetDensity(
  JPC_ConvexShape_t * self
);

void JPC_ConvexShape_SetDensity(
  JPC_ConvexShape_t * self,
  float inDensity
);

unsigned long JPC_ConvexShape_GetRefCount(
  JPC_ConvexShape_t * self
);

void JPC_ConvexShape_AddRef(
  JPC_ConvexShape_t * self
);

void JPC_ConvexShape_Release(
  JPC_ConvexShape_t * self
);

JPC_EShapeType JPC_ConvexShape_GetType(
  JPC_ConvexShape_t * self
);

JPC_EShapeSubType JPC_ConvexShape_GetSubType(
  JPC_ConvexShape_t * self
);

bool JPC_ConvexShape_MustBeStatic(
  JPC_ConvexShape_t * self
);

JPC_AABox_t * JPC_ConvexShape_GetLocalBounds(
  JPC_ConvexShape_t * self
);

JPC_AABox_t * JPC_ConvexShape_GetWorldSpaceBounds(
  JPC_ConvexShape_t * self,
  const JPC_Mat44_t * inCenterOfMassTransform,
  const JPC_Vec3_t * inScale
);

JPC_Vec3_t * JPC_ConvexShape_GetCenterOfMass(
  JPC_ConvexShape_t * self
);

unsigned long long int JPC_ConvexShape_GetUserData(
  JPC_ConvexShape_t * self
);

void JPC_ConvexShape_SetUserData(
  JPC_ConvexShape_t * self,
  unsigned long long int inUserData
);

unsigned long JPC_ConvexShape_GetSubShapeIDBitsRecursive(
  JPC_ConvexShape_t * self
);

float JPC_ConvexShape_GetInnerRadius(
  JPC_ConvexShape_t * self
);

JPC_MassProperties_t * JPC_ConvexShape_GetMassProperties(
  JPC_ConvexShape_t * self
);

const JPC_PhysicsMaterial_t * JPC_ConvexShape_GetMaterial(
  JPC_ConvexShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
);

JPC_Vec3_t * JPC_ConvexShape_GetSurfaceNormal(
  JPC_ConvexShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inLocalSurfacePosition
);

unsigned long long int JPC_ConvexShape_GetSubShapeUserData(
  JPC_ConvexShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
);

JPC_TransformedShape_t * JPC_ConvexShape_GetSubShapeTransformedShape(
  JPC_ConvexShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inPositionCOM,
  const JPC_Quat_t * inRotation,
  const JPC_Vec3_t * inScale,
  JPC_SubShapeID_t * outRemainder
);

float JPC_ConvexShape_GetVolume(
  JPC_ConvexShape_t * self
);

bool JPC_ConvexShape_IsValidScale(
  JPC_ConvexShape_t * self,
  const JPC_Vec3_t * inScale
);

JPC_Shape_ShapeResult_t * JPC_ConvexShape_ScaleShape(
  JPC_ConvexShape_t * self,
  const JPC_Vec3_t * inScale
);

//endregion functions


#ifdef __cplusplus
}
#endif

