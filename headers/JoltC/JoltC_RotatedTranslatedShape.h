#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

JoltC_Quat_t * JoltC_RotatedTranslatedShape_GetRotation(
  JoltC_RotatedTranslatedShape_t * self,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_RotatedTranslatedShape_GetPosition(
  JoltC_RotatedTranslatedShape_t * self,
  char** outErrMsg
);

const JoltC_Shape_t * JoltC_RotatedTranslatedShape_GetInnerShape(
  JoltC_RotatedTranslatedShape_t * self,
  char** outErrMsg
);

unsigned long JoltC_RotatedTranslatedShape_GetRefCount(
  JoltC_RotatedTranslatedShape_t * self,
  char** outErrMsg
);

void JoltC_RotatedTranslatedShape_AddRef(
  JoltC_RotatedTranslatedShape_t * self,
  char** outErrMsg
);

void JoltC_RotatedTranslatedShape_Release(
  JoltC_RotatedTranslatedShape_t * self,
  char** outErrMsg
);

JoltC_EShapeType JoltC_RotatedTranslatedShape_GetType(
  JoltC_RotatedTranslatedShape_t * self,
  char** outErrMsg
);

JoltC_EShapeSubType JoltC_RotatedTranslatedShape_GetSubType(
  JoltC_RotatedTranslatedShape_t * self,
  char** outErrMsg
);

bool JoltC_RotatedTranslatedShape_MustBeStatic(
  JoltC_RotatedTranslatedShape_t * self,
  char** outErrMsg
);

JoltC_AABox_t * JoltC_RotatedTranslatedShape_GetLocalBounds(
  JoltC_RotatedTranslatedShape_t * self,
  char** outErrMsg
);

JoltC_AABox_t * JoltC_RotatedTranslatedShape_GetWorldSpaceBounds(
  JoltC_RotatedTranslatedShape_t * self,
  const JoltC_Mat44_t * inCenterOfMassTransform,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_RotatedTranslatedShape_GetCenterOfMass(
  JoltC_RotatedTranslatedShape_t * self,
  char** outErrMsg
);

unsigned long long int JoltC_RotatedTranslatedShape_GetUserData(
  JoltC_RotatedTranslatedShape_t * self,
  char** outErrMsg
);

void JoltC_RotatedTranslatedShape_SetUserData(
  JoltC_RotatedTranslatedShape_t * self,
  unsigned long long int inUserData,
  char** outErrMsg
);

unsigned long JoltC_RotatedTranslatedShape_GetSubShapeIDBitsRecursive(
  JoltC_RotatedTranslatedShape_t * self,
  char** outErrMsg
);

float JoltC_RotatedTranslatedShape_GetInnerRadius(
  JoltC_RotatedTranslatedShape_t * self,
  char** outErrMsg
);

JoltC_MassProperties_t * JoltC_RotatedTranslatedShape_GetMassProperties(
  JoltC_RotatedTranslatedShape_t * self,
  char** outErrMsg
);

const JoltC_PhysicsMaterial_t * JoltC_RotatedTranslatedShape_GetMaterial(
  JoltC_RotatedTranslatedShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_RotatedTranslatedShape_GetSurfaceNormal(
  JoltC_RotatedTranslatedShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inLocalSurfacePosition,
  char** outErrMsg
);

unsigned long long int JoltC_RotatedTranslatedShape_GetSubShapeUserData(
  JoltC_RotatedTranslatedShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  char** outErrMsg
);

JoltC_TransformedShape_t * JoltC_RotatedTranslatedShape_GetSubShapeTransformedShape(
  JoltC_RotatedTranslatedShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inPositionCOM,
  const JoltC_Quat_t * inRotation,
  const JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder,
  char** outErrMsg
);

float JoltC_RotatedTranslatedShape_GetVolume(
  JoltC_RotatedTranslatedShape_t * self,
  char** outErrMsg
);

bool JoltC_RotatedTranslatedShape_IsValidScale(
  JoltC_RotatedTranslatedShape_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
);

JoltC_Shape_ShapeResult_t * JoltC_RotatedTranslatedShape_ScaleShape(
  JoltC_RotatedTranslatedShape_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

