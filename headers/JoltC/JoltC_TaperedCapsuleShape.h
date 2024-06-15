#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_TaperedCapsuleShape_destroy(
  JoltC_TaperedCapsuleShape_t * self
);

//endregion
//region functions

float JoltC_TaperedCapsuleShape_GetDensity(
  JoltC_TaperedCapsuleShape_t * self
);

void JoltC_TaperedCapsuleShape_SetDensity(
  JoltC_TaperedCapsuleShape_t * self,
  float inDensity
);

unsigned long JoltC_TaperedCapsuleShape_GetRefCount(
  JoltC_TaperedCapsuleShape_t * self
);

void JoltC_TaperedCapsuleShape_AddRef(
  JoltC_TaperedCapsuleShape_t * self
);

void JoltC_TaperedCapsuleShape_Release(
  JoltC_TaperedCapsuleShape_t * self
);

JoltC_EShapeType JoltC_TaperedCapsuleShape_GetType(
  JoltC_TaperedCapsuleShape_t * self
);

JoltC_EShapeSubType JoltC_TaperedCapsuleShape_GetSubType(
  JoltC_TaperedCapsuleShape_t * self
);

bool JoltC_TaperedCapsuleShape_MustBeStatic(
  JoltC_TaperedCapsuleShape_t * self
);

JoltC_AABox_t * JoltC_TaperedCapsuleShape_GetLocalBounds(
  JoltC_TaperedCapsuleShape_t * self
);

JoltC_AABox_t * JoltC_TaperedCapsuleShape_GetWorldSpaceBounds(
  JoltC_TaperedCapsuleShape_t * self,
  JoltC_Mat44_t * inCenterOfMassTransform,
  JoltC_Vec3_t * inScale
);

JoltC_Vec3_t * JoltC_TaperedCapsuleShape_GetCenterOfMass(
  JoltC_TaperedCapsuleShape_t * self
);

unsigned long long int JoltC_TaperedCapsuleShape_GetUserData(
  JoltC_TaperedCapsuleShape_t * self
);

void JoltC_TaperedCapsuleShape_SetUserData(
  JoltC_TaperedCapsuleShape_t * self,
  unsigned long long int inUserData
);

unsigned long JoltC_TaperedCapsuleShape_GetSubShapeIDBitsRecursive(
  JoltC_TaperedCapsuleShape_t * self
);

float JoltC_TaperedCapsuleShape_GetInnerRadius(
  JoltC_TaperedCapsuleShape_t * self
);

JoltC_MassProperties_t * JoltC_TaperedCapsuleShape_GetMassProperties(
  JoltC_TaperedCapsuleShape_t * self
);

JoltC_PhysicsMaterial_t * JoltC_TaperedCapsuleShape_GetMaterial(
  JoltC_TaperedCapsuleShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
);

JoltC_Vec3_t * JoltC_TaperedCapsuleShape_GetSurfaceNormal(
  JoltC_TaperedCapsuleShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inLocalSurfacePosition
);

unsigned long long int JoltC_TaperedCapsuleShape_GetSubShapeUserData(
  JoltC_TaperedCapsuleShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
);

JoltC_TransformedShape_t * JoltC_TaperedCapsuleShape_GetSubShapeTransformedShape(
  JoltC_TaperedCapsuleShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inPositionCOM,
  JoltC_Quat_t * inRotation,
  JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder
);

float JoltC_TaperedCapsuleShape_GetVolume(
  JoltC_TaperedCapsuleShape_t * self
);

bool JoltC_TaperedCapsuleShape_IsValidScale(
  JoltC_TaperedCapsuleShape_t * self,
  JoltC_Vec3_t * inScale
);

JoltC_Shape_ShapeResult_t * JoltC_TaperedCapsuleShape_ScaleShape(
  JoltC_TaperedCapsuleShape_t * self,
  JoltC_Vec3_t * inScale
);

//endregion


#ifdef __cplusplus
}
#endif
