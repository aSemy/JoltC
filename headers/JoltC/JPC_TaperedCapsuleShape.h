#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

float JPC_TaperedCapsuleShape_GetDensity(
  JPC_TaperedCapsuleShape_t * self
);

void JPC_TaperedCapsuleShape_SetDensity(
  JPC_TaperedCapsuleShape_t * self,
  float inDensity
);

unsigned long JPC_TaperedCapsuleShape_GetRefCount(
  JPC_TaperedCapsuleShape_t * self
);

void JPC_TaperedCapsuleShape_AddRef(
  JPC_TaperedCapsuleShape_t * self
);

void JPC_TaperedCapsuleShape_Release(
  JPC_TaperedCapsuleShape_t * self
);

JPC_EShapeType JPC_TaperedCapsuleShape_GetType(
  JPC_TaperedCapsuleShape_t * self
);

JPC_EShapeSubType JPC_TaperedCapsuleShape_GetSubType(
  JPC_TaperedCapsuleShape_t * self
);

bool JPC_TaperedCapsuleShape_MustBeStatic(
  JPC_TaperedCapsuleShape_t * self
);

JPC_AABox_t * JPC_TaperedCapsuleShape_GetLocalBounds(
  JPC_TaperedCapsuleShape_t * self
);

JPC_AABox_t * JPC_TaperedCapsuleShape_GetWorldSpaceBounds(
  JPC_TaperedCapsuleShape_t * self,
  const JPC_Mat44_t * inCenterOfMassTransform,
  const JPC_Vec3_t * inScale
);

JPC_Vec3_t * JPC_TaperedCapsuleShape_GetCenterOfMass(
  JPC_TaperedCapsuleShape_t * self
);

unsigned long long int JPC_TaperedCapsuleShape_GetUserData(
  JPC_TaperedCapsuleShape_t * self
);

void JPC_TaperedCapsuleShape_SetUserData(
  JPC_TaperedCapsuleShape_t * self,
  unsigned long long int inUserData
);

unsigned long JPC_TaperedCapsuleShape_GetSubShapeIDBitsRecursive(
  JPC_TaperedCapsuleShape_t * self
);

float JPC_TaperedCapsuleShape_GetInnerRadius(
  JPC_TaperedCapsuleShape_t * self
);

JPC_MassProperties_t * JPC_TaperedCapsuleShape_GetMassProperties(
  JPC_TaperedCapsuleShape_t * self
);

const JPC_PhysicsMaterial_t * JPC_TaperedCapsuleShape_GetMaterial(
  JPC_TaperedCapsuleShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
);

JPC_Vec3_t * JPC_TaperedCapsuleShape_GetSurfaceNormal(
  JPC_TaperedCapsuleShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inLocalSurfacePosition
);

unsigned long long int JPC_TaperedCapsuleShape_GetSubShapeUserData(
  JPC_TaperedCapsuleShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
);

JPC_TransformedShape_t * JPC_TaperedCapsuleShape_GetSubShapeTransformedShape(
  JPC_TaperedCapsuleShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inPositionCOM,
  const JPC_Quat_t * inRotation,
  const JPC_Vec3_t * inScale,
  JPC_SubShapeID_t * outRemainder
);

float JPC_TaperedCapsuleShape_GetVolume(
  JPC_TaperedCapsuleShape_t * self
);

bool JPC_TaperedCapsuleShape_IsValidScale(
  JPC_TaperedCapsuleShape_t * self,
  const JPC_Vec3_t * inScale
);

JPC_Shape_ShapeResult_t * JPC_TaperedCapsuleShape_ScaleShape(
  JPC_TaperedCapsuleShape_t * self,
  const JPC_Vec3_t * inScale
);

//endregion functions


#ifdef __cplusplus
}
#endif

