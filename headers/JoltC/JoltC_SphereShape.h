#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SphereShape_t * JoltC_SphereShape_new(
  float inRadius,
  const JoltC_PhysicsMaterial_t * inMaterial,
  char** outErrMsg
);

//endregion constructors

//region functions

float JoltC_SphereShape_GetRadius(
  JoltC_SphereShape_t * self,
  char** outErrMsg
);

float JoltC_SphereShape_GetDensity(
  JoltC_SphereShape_t * self,
  char** outErrMsg
);

void JoltC_SphereShape_SetDensity(
  JoltC_SphereShape_t * self,
  float inDensity,
  char** outErrMsg
);

unsigned long JoltC_SphereShape_GetRefCount(
  JoltC_SphereShape_t * self,
  char** outErrMsg
);

void JoltC_SphereShape_AddRef(
  JoltC_SphereShape_t * self,
  char** outErrMsg
);

void JoltC_SphereShape_Release(
  JoltC_SphereShape_t * self,
  char** outErrMsg
);

JoltC_EShapeType JoltC_SphereShape_GetType(
  JoltC_SphereShape_t * self,
  char** outErrMsg
);

JoltC_EShapeSubType JoltC_SphereShape_GetSubType(
  JoltC_SphereShape_t * self,
  char** outErrMsg
);

bool JoltC_SphereShape_MustBeStatic(
  JoltC_SphereShape_t * self,
  char** outErrMsg
);

JoltC_AABox_t * JoltC_SphereShape_GetLocalBounds(
  JoltC_SphereShape_t * self,
  char** outErrMsg
);

JoltC_AABox_t * JoltC_SphereShape_GetWorldSpaceBounds(
  JoltC_SphereShape_t * self,
  const JoltC_Mat44_t * inCenterOfMassTransform,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_SphereShape_GetCenterOfMass(
  JoltC_SphereShape_t * self,
  char** outErrMsg
);

unsigned long long int JoltC_SphereShape_GetUserData(
  JoltC_SphereShape_t * self,
  char** outErrMsg
);

void JoltC_SphereShape_SetUserData(
  JoltC_SphereShape_t * self,
  unsigned long long int inUserData,
  char** outErrMsg
);

unsigned long JoltC_SphereShape_GetSubShapeIDBitsRecursive(
  JoltC_SphereShape_t * self,
  char** outErrMsg
);

float JoltC_SphereShape_GetInnerRadius(
  JoltC_SphereShape_t * self,
  char** outErrMsg
);

JoltC_MassProperties_t * JoltC_SphereShape_GetMassProperties(
  JoltC_SphereShape_t * self,
  char** outErrMsg
);

const JoltC_PhysicsMaterial_t * JoltC_SphereShape_GetMaterial(
  JoltC_SphereShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_SphereShape_GetSurfaceNormal(
  JoltC_SphereShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inLocalSurfacePosition,
  char** outErrMsg
);

unsigned long long int JoltC_SphereShape_GetSubShapeUserData(
  JoltC_SphereShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  char** outErrMsg
);

JoltC_TransformedShape_t * JoltC_SphereShape_GetSubShapeTransformedShape(
  JoltC_SphereShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inPositionCOM,
  const JoltC_Quat_t * inRotation,
  const JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder,
  char** outErrMsg
);

float JoltC_SphereShape_GetVolume(
  JoltC_SphereShape_t * self,
  char** outErrMsg
);

bool JoltC_SphereShape_IsValidScale(
  JoltC_SphereShape_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
);

JoltC_Shape_ShapeResult_t * JoltC_SphereShape_ScaleShape(
  JoltC_SphereShape_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

