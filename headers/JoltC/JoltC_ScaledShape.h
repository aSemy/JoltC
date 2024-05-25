#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ScaledShape_t * JoltC_ScaledShape_new(
  JoltC_Shape_t * inShape,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
);

//endregion constructors

//region functions

JoltC_Vec3_t * JoltC_ScaledShape_GetScale(
  JoltC_ScaledShape_t * self,
  char** outErrMsg
);

const JoltC_Shape_t * JoltC_ScaledShape_GetInnerShape(
  JoltC_ScaledShape_t * self,
  char** outErrMsg
);

unsigned long JoltC_ScaledShape_GetRefCount(
  JoltC_ScaledShape_t * self,
  char** outErrMsg
);

void JoltC_ScaledShape_AddRef(
  JoltC_ScaledShape_t * self,
  char** outErrMsg
);

void JoltC_ScaledShape_Release(
  JoltC_ScaledShape_t * self,
  char** outErrMsg
);

JoltC_EShapeType JoltC_ScaledShape_GetType(
  JoltC_ScaledShape_t * self,
  char** outErrMsg
);

JoltC_EShapeSubType JoltC_ScaledShape_GetSubType(
  JoltC_ScaledShape_t * self,
  char** outErrMsg
);

bool JoltC_ScaledShape_MustBeStatic(
  JoltC_ScaledShape_t * self,
  char** outErrMsg
);

JoltC_AABox_t * JoltC_ScaledShape_GetLocalBounds(
  JoltC_ScaledShape_t * self,
  char** outErrMsg
);

JoltC_AABox_t * JoltC_ScaledShape_GetWorldSpaceBounds(
  JoltC_ScaledShape_t * self,
  const JoltC_Mat44_t * inCenterOfMassTransform,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_ScaledShape_GetCenterOfMass(
  JoltC_ScaledShape_t * self,
  char** outErrMsg
);

unsigned long long int JoltC_ScaledShape_GetUserData(
  JoltC_ScaledShape_t * self,
  char** outErrMsg
);

void JoltC_ScaledShape_SetUserData(
  JoltC_ScaledShape_t * self,
  unsigned long long int inUserData,
  char** outErrMsg
);

unsigned long JoltC_ScaledShape_GetSubShapeIDBitsRecursive(
  JoltC_ScaledShape_t * self,
  char** outErrMsg
);

float JoltC_ScaledShape_GetInnerRadius(
  JoltC_ScaledShape_t * self,
  char** outErrMsg
);

JoltC_MassProperties_t * JoltC_ScaledShape_GetMassProperties(
  JoltC_ScaledShape_t * self,
  char** outErrMsg
);

const JoltC_PhysicsMaterial_t * JoltC_ScaledShape_GetMaterial(
  JoltC_ScaledShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_ScaledShape_GetSurfaceNormal(
  JoltC_ScaledShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inLocalSurfacePosition,
  char** outErrMsg
);

unsigned long long int JoltC_ScaledShape_GetSubShapeUserData(
  JoltC_ScaledShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  char** outErrMsg
);

JoltC_TransformedShape_t * JoltC_ScaledShape_GetSubShapeTransformedShape(
  JoltC_ScaledShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inPositionCOM,
  const JoltC_Quat_t * inRotation,
  const JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder,
  char** outErrMsg
);

float JoltC_ScaledShape_GetVolume(
  JoltC_ScaledShape_t * self,
  char** outErrMsg
);

bool JoltC_ScaledShape_IsValidScale(
  JoltC_ScaledShape_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
);

JoltC_Shape_ShapeResult_t * JoltC_ScaledShape_ScaleShape(
  JoltC_ScaledShape_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

