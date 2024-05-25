#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CapsuleShape_t * JoltC_CapsuleShape_new(
  float inHalfHeight,
  float inRadius,
  const JoltC_PhysicsMaterial_t * inMaterial,
  char** outErrMsg
);

//endregion constructors

//region functions

float JoltC_CapsuleShape_GetRadius(
  JoltC_CapsuleShape_t * self,
  char** outErrMsg
);

float JoltC_CapsuleShape_GetHalfHeightOfCylinder(
  JoltC_CapsuleShape_t * self,
  char** outErrMsg
);

float JoltC_CapsuleShape_GetDensity(
  JoltC_CapsuleShape_t * self,
  char** outErrMsg
);

void JoltC_CapsuleShape_SetDensity(
  JoltC_CapsuleShape_t * self,
  float inDensity,
  char** outErrMsg
);

unsigned long JoltC_CapsuleShape_GetRefCount(
  JoltC_CapsuleShape_t * self,
  char** outErrMsg
);

void JoltC_CapsuleShape_AddRef(
  JoltC_CapsuleShape_t * self,
  char** outErrMsg
);

void JoltC_CapsuleShape_Release(
  JoltC_CapsuleShape_t * self,
  char** outErrMsg
);

JoltC_EShapeType JoltC_CapsuleShape_GetType(
  JoltC_CapsuleShape_t * self,
  char** outErrMsg
);

JoltC_EShapeSubType JoltC_CapsuleShape_GetSubType(
  JoltC_CapsuleShape_t * self,
  char** outErrMsg
);

bool JoltC_CapsuleShape_MustBeStatic(
  JoltC_CapsuleShape_t * self,
  char** outErrMsg
);

JoltC_AABox_t * JoltC_CapsuleShape_GetLocalBounds(
  JoltC_CapsuleShape_t * self,
  char** outErrMsg
);

JoltC_AABox_t * JoltC_CapsuleShape_GetWorldSpaceBounds(
  JoltC_CapsuleShape_t * self,
  const JoltC_Mat44_t * inCenterOfMassTransform,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_CapsuleShape_GetCenterOfMass(
  JoltC_CapsuleShape_t * self,
  char** outErrMsg
);

unsigned long long int JoltC_CapsuleShape_GetUserData(
  JoltC_CapsuleShape_t * self,
  char** outErrMsg
);

void JoltC_CapsuleShape_SetUserData(
  JoltC_CapsuleShape_t * self,
  unsigned long long int inUserData,
  char** outErrMsg
);

unsigned long JoltC_CapsuleShape_GetSubShapeIDBitsRecursive(
  JoltC_CapsuleShape_t * self,
  char** outErrMsg
);

float JoltC_CapsuleShape_GetInnerRadius(
  JoltC_CapsuleShape_t * self,
  char** outErrMsg
);

JoltC_MassProperties_t * JoltC_CapsuleShape_GetMassProperties(
  JoltC_CapsuleShape_t * self,
  char** outErrMsg
);

const JoltC_PhysicsMaterial_t * JoltC_CapsuleShape_GetMaterial(
  JoltC_CapsuleShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_CapsuleShape_GetSurfaceNormal(
  JoltC_CapsuleShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inLocalSurfacePosition,
  char** outErrMsg
);

unsigned long long int JoltC_CapsuleShape_GetSubShapeUserData(
  JoltC_CapsuleShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  char** outErrMsg
);

JoltC_TransformedShape_t * JoltC_CapsuleShape_GetSubShapeTransformedShape(
  JoltC_CapsuleShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inPositionCOM,
  const JoltC_Quat_t * inRotation,
  const JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder,
  char** outErrMsg
);

float JoltC_CapsuleShape_GetVolume(
  JoltC_CapsuleShape_t * self,
  char** outErrMsg
);

bool JoltC_CapsuleShape_IsValidScale(
  JoltC_CapsuleShape_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
);

JoltC_Shape_ShapeResult_t * JoltC_CapsuleShape_ScaleShape(
  JoltC_CapsuleShape_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

