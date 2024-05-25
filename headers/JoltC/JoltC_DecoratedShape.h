#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

const JoltC_Shape_t * JoltC_DecoratedShape_GetInnerShape(
  JoltC_DecoratedShape_t * self,
  char** outErrMsg
);

unsigned long JoltC_DecoratedShape_GetRefCount(
  JoltC_DecoratedShape_t * self,
  char** outErrMsg
);

void JoltC_DecoratedShape_AddRef(
  JoltC_DecoratedShape_t * self,
  char** outErrMsg
);

void JoltC_DecoratedShape_Release(
  JoltC_DecoratedShape_t * self,
  char** outErrMsg
);

JoltC_EShapeType JoltC_DecoratedShape_GetType(
  JoltC_DecoratedShape_t * self,
  char** outErrMsg
);

JoltC_EShapeSubType JoltC_DecoratedShape_GetSubType(
  JoltC_DecoratedShape_t * self,
  char** outErrMsg
);

bool JoltC_DecoratedShape_MustBeStatic(
  JoltC_DecoratedShape_t * self,
  char** outErrMsg
);

JoltC_AABox_t * JoltC_DecoratedShape_GetLocalBounds(
  JoltC_DecoratedShape_t * self,
  char** outErrMsg
);

JoltC_AABox_t * JoltC_DecoratedShape_GetWorldSpaceBounds(
  JoltC_DecoratedShape_t * self,
  const JoltC_Mat44_t * inCenterOfMassTransform,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_DecoratedShape_GetCenterOfMass(
  JoltC_DecoratedShape_t * self,
  char** outErrMsg
);

unsigned long long int JoltC_DecoratedShape_GetUserData(
  JoltC_DecoratedShape_t * self,
  char** outErrMsg
);

void JoltC_DecoratedShape_SetUserData(
  JoltC_DecoratedShape_t * self,
  unsigned long long int inUserData,
  char** outErrMsg
);

unsigned long JoltC_DecoratedShape_GetSubShapeIDBitsRecursive(
  JoltC_DecoratedShape_t * self,
  char** outErrMsg
);

float JoltC_DecoratedShape_GetInnerRadius(
  JoltC_DecoratedShape_t * self,
  char** outErrMsg
);

JoltC_MassProperties_t * JoltC_DecoratedShape_GetMassProperties(
  JoltC_DecoratedShape_t * self,
  char** outErrMsg
);

const JoltC_PhysicsMaterial_t * JoltC_DecoratedShape_GetMaterial(
  JoltC_DecoratedShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_DecoratedShape_GetSurfaceNormal(
  JoltC_DecoratedShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inLocalSurfacePosition,
  char** outErrMsg
);

unsigned long long int JoltC_DecoratedShape_GetSubShapeUserData(
  JoltC_DecoratedShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  char** outErrMsg
);

JoltC_TransformedShape_t * JoltC_DecoratedShape_GetSubShapeTransformedShape(
  JoltC_DecoratedShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inPositionCOM,
  const JoltC_Quat_t * inRotation,
  const JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder,
  char** outErrMsg
);

float JoltC_DecoratedShape_GetVolume(
  JoltC_DecoratedShape_t * self,
  char** outErrMsg
);

bool JoltC_DecoratedShape_IsValidScale(
  JoltC_DecoratedShape_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
);

JoltC_Shape_ShapeResult_t * JoltC_DecoratedShape_ScaleShape(
  JoltC_DecoratedShape_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

