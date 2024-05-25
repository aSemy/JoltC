#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_OffsetCenterOfMassShape_t * JoltC_OffsetCenterOfMassShape_new(
  const JoltC_Shape_t * inShape,
  const JoltC_Vec3_t * inOffset,
  char** outErrMsg
);

//endregion constructors

//region functions

const JoltC_Shape_t * JoltC_OffsetCenterOfMassShape_GetInnerShape(
  JoltC_OffsetCenterOfMassShape_t * self,
  char** outErrMsg
);

unsigned long JoltC_OffsetCenterOfMassShape_GetRefCount(
  JoltC_OffsetCenterOfMassShape_t * self,
  char** outErrMsg
);

void JoltC_OffsetCenterOfMassShape_AddRef(
  JoltC_OffsetCenterOfMassShape_t * self,
  char** outErrMsg
);

void JoltC_OffsetCenterOfMassShape_Release(
  JoltC_OffsetCenterOfMassShape_t * self,
  char** outErrMsg
);

JoltC_EShapeType JoltC_OffsetCenterOfMassShape_GetType(
  JoltC_OffsetCenterOfMassShape_t * self,
  char** outErrMsg
);

JoltC_EShapeSubType JoltC_OffsetCenterOfMassShape_GetSubType(
  JoltC_OffsetCenterOfMassShape_t * self,
  char** outErrMsg
);

bool JoltC_OffsetCenterOfMassShape_MustBeStatic(
  JoltC_OffsetCenterOfMassShape_t * self,
  char** outErrMsg
);

JoltC_AABox_t * JoltC_OffsetCenterOfMassShape_GetLocalBounds(
  JoltC_OffsetCenterOfMassShape_t * self,
  char** outErrMsg
);

JoltC_AABox_t * JoltC_OffsetCenterOfMassShape_GetWorldSpaceBounds(
  JoltC_OffsetCenterOfMassShape_t * self,
  const JoltC_Mat44_t * inCenterOfMassTransform,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_OffsetCenterOfMassShape_GetCenterOfMass(
  JoltC_OffsetCenterOfMassShape_t * self,
  char** outErrMsg
);

unsigned long long int JoltC_OffsetCenterOfMassShape_GetUserData(
  JoltC_OffsetCenterOfMassShape_t * self,
  char** outErrMsg
);

void JoltC_OffsetCenterOfMassShape_SetUserData(
  JoltC_OffsetCenterOfMassShape_t * self,
  unsigned long long int inUserData,
  char** outErrMsg
);

unsigned long JoltC_OffsetCenterOfMassShape_GetSubShapeIDBitsRecursive(
  JoltC_OffsetCenterOfMassShape_t * self,
  char** outErrMsg
);

float JoltC_OffsetCenterOfMassShape_GetInnerRadius(
  JoltC_OffsetCenterOfMassShape_t * self,
  char** outErrMsg
);

JoltC_MassProperties_t * JoltC_OffsetCenterOfMassShape_GetMassProperties(
  JoltC_OffsetCenterOfMassShape_t * self,
  char** outErrMsg
);

const JoltC_PhysicsMaterial_t * JoltC_OffsetCenterOfMassShape_GetMaterial(
  JoltC_OffsetCenterOfMassShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_OffsetCenterOfMassShape_GetSurfaceNormal(
  JoltC_OffsetCenterOfMassShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inLocalSurfacePosition,
  char** outErrMsg
);

unsigned long long int JoltC_OffsetCenterOfMassShape_GetSubShapeUserData(
  JoltC_OffsetCenterOfMassShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  char** outErrMsg
);

JoltC_TransformedShape_t * JoltC_OffsetCenterOfMassShape_GetSubShapeTransformedShape(
  JoltC_OffsetCenterOfMassShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inPositionCOM,
  const JoltC_Quat_t * inRotation,
  const JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder,
  char** outErrMsg
);

float JoltC_OffsetCenterOfMassShape_GetVolume(
  JoltC_OffsetCenterOfMassShape_t * self,
  char** outErrMsg
);

bool JoltC_OffsetCenterOfMassShape_IsValidScale(
  JoltC_OffsetCenterOfMassShape_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
);

JoltC_Shape_ShapeResult_t * JoltC_OffsetCenterOfMassShape_ScaleShape(
  JoltC_OffsetCenterOfMassShape_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif
