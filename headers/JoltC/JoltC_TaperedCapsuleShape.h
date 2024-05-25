#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

float JoltC_TaperedCapsuleShape_GetDensity(
  JoltC_TaperedCapsuleShape_t * self,
  char** outErrMsg
);

void JoltC_TaperedCapsuleShape_SetDensity(
  JoltC_TaperedCapsuleShape_t * self,
  float inDensity,
  char** outErrMsg
);

unsigned long JoltC_TaperedCapsuleShape_GetRefCount(
  JoltC_TaperedCapsuleShape_t * self,
  char** outErrMsg
);

void JoltC_TaperedCapsuleShape_AddRef(
  JoltC_TaperedCapsuleShape_t * self,
  char** outErrMsg
);

void JoltC_TaperedCapsuleShape_Release(
  JoltC_TaperedCapsuleShape_t * self,
  char** outErrMsg
);

JoltC_EShapeType JoltC_TaperedCapsuleShape_GetType(
  JoltC_TaperedCapsuleShape_t * self,
  char** outErrMsg
);

JoltC_EShapeSubType JoltC_TaperedCapsuleShape_GetSubType(
  JoltC_TaperedCapsuleShape_t * self,
  char** outErrMsg
);

bool JoltC_TaperedCapsuleShape_MustBeStatic(
  JoltC_TaperedCapsuleShape_t * self,
  char** outErrMsg
);

JoltC_AABox_t * JoltC_TaperedCapsuleShape_GetLocalBounds(
  JoltC_TaperedCapsuleShape_t * self,
  char** outErrMsg
);

JoltC_AABox_t * JoltC_TaperedCapsuleShape_GetWorldSpaceBounds(
  JoltC_TaperedCapsuleShape_t * self,
  const JoltC_Mat44_t * inCenterOfMassTransform,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_TaperedCapsuleShape_GetCenterOfMass(
  JoltC_TaperedCapsuleShape_t * self,
  char** outErrMsg
);

unsigned long long int JoltC_TaperedCapsuleShape_GetUserData(
  JoltC_TaperedCapsuleShape_t * self,
  char** outErrMsg
);

void JoltC_TaperedCapsuleShape_SetUserData(
  JoltC_TaperedCapsuleShape_t * self,
  unsigned long long int inUserData,
  char** outErrMsg
);

unsigned long JoltC_TaperedCapsuleShape_GetSubShapeIDBitsRecursive(
  JoltC_TaperedCapsuleShape_t * self,
  char** outErrMsg
);

float JoltC_TaperedCapsuleShape_GetInnerRadius(
  JoltC_TaperedCapsuleShape_t * self,
  char** outErrMsg
);

JoltC_MassProperties_t * JoltC_TaperedCapsuleShape_GetMassProperties(
  JoltC_TaperedCapsuleShape_t * self,
  char** outErrMsg
);

const JoltC_PhysicsMaterial_t * JoltC_TaperedCapsuleShape_GetMaterial(
  JoltC_TaperedCapsuleShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_TaperedCapsuleShape_GetSurfaceNormal(
  JoltC_TaperedCapsuleShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inLocalSurfacePosition,
  char** outErrMsg
);

unsigned long long int JoltC_TaperedCapsuleShape_GetSubShapeUserData(
  JoltC_TaperedCapsuleShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  char** outErrMsg
);

JoltC_TransformedShape_t * JoltC_TaperedCapsuleShape_GetSubShapeTransformedShape(
  JoltC_TaperedCapsuleShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inPositionCOM,
  const JoltC_Quat_t * inRotation,
  const JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder,
  char** outErrMsg
);

float JoltC_TaperedCapsuleShape_GetVolume(
  JoltC_TaperedCapsuleShape_t * self,
  char** outErrMsg
);

bool JoltC_TaperedCapsuleShape_IsValidScale(
  JoltC_TaperedCapsuleShape_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
);

JoltC_Shape_ShapeResult_t * JoltC_TaperedCapsuleShape_ScaleShape(
  JoltC_TaperedCapsuleShape_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif
