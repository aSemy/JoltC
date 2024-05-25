#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JoltC_Shape_GetRefCount(
  JoltC_Shape_t * self,
  char** outErrMsg
);

void JoltC_Shape_AddRef(
  JoltC_Shape_t * self,
  char** outErrMsg
);

void JoltC_Shape_Release(
  JoltC_Shape_t * self,
  char** outErrMsg
);

JoltC_EShapeType JoltC_Shape_GetType(
  JoltC_Shape_t * self,
  char** outErrMsg
);

JoltC_EShapeSubType JoltC_Shape_GetSubType(
  JoltC_Shape_t * self,
  char** outErrMsg
);

bool JoltC_Shape_MustBeStatic(
  JoltC_Shape_t * self,
  char** outErrMsg
);

JoltC_AABox_t * JoltC_Shape_GetLocalBounds(
  JoltC_Shape_t * self,
  char** outErrMsg
);

JoltC_AABox_t * JoltC_Shape_GetWorldSpaceBounds(
  JoltC_Shape_t * self,
  const JoltC_Mat44_t * inCenterOfMassTransform,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_Shape_GetCenterOfMass(
  JoltC_Shape_t * self,
  char** outErrMsg
);

unsigned long long int JoltC_Shape_GetUserData(
  JoltC_Shape_t * self,
  char** outErrMsg
);

void JoltC_Shape_SetUserData(
  JoltC_Shape_t * self,
  unsigned long long int inUserData,
  char** outErrMsg
);

unsigned long JoltC_Shape_GetSubShapeIDBitsRecursive(
  JoltC_Shape_t * self,
  char** outErrMsg
);

float JoltC_Shape_GetInnerRadius(
  JoltC_Shape_t * self,
  char** outErrMsg
);

JoltC_MassProperties_t * JoltC_Shape_GetMassProperties(
  JoltC_Shape_t * self,
  char** outErrMsg
);

const JoltC_PhysicsMaterial_t * JoltC_Shape_GetMaterial(
  JoltC_Shape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_Shape_GetSurfaceNormal(
  JoltC_Shape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inLocalSurfacePosition,
  char** outErrMsg
);

unsigned long long int JoltC_Shape_GetSubShapeUserData(
  JoltC_Shape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  char** outErrMsg
);

JoltC_TransformedShape_t * JoltC_Shape_GetSubShapeTransformedShape(
  JoltC_Shape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inPositionCOM,
  const JoltC_Quat_t * inRotation,
  const JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder,
  char** outErrMsg
);

float JoltC_Shape_GetVolume(
  JoltC_Shape_t * self,
  char** outErrMsg
);

bool JoltC_Shape_IsValidScale(
  JoltC_Shape_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
);

JoltC_Shape_ShapeResult_t * JoltC_Shape_ScaleShape(
  JoltC_Shape_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

