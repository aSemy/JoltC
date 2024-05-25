#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CylinderShape_t * JoltC_CylinderShape_new(
  float inHalfHeight,
  float inRadius,
  float inConvexRadius,
  const JoltC_PhysicsMaterial_t * inMaterial,
  char** outErrMsg
);

//endregion constructors

//region functions

float JoltC_CylinderShape_GetRadius(
  JoltC_CylinderShape_t * self,
  char** outErrMsg
);

float JoltC_CylinderShape_GetHalfHeight(
  JoltC_CylinderShape_t * self,
  char** outErrMsg
);

float JoltC_CylinderShape_GetDensity(
  JoltC_CylinderShape_t * self,
  char** outErrMsg
);

void JoltC_CylinderShape_SetDensity(
  JoltC_CylinderShape_t * self,
  float inDensity,
  char** outErrMsg
);

unsigned long JoltC_CylinderShape_GetRefCount(
  JoltC_CylinderShape_t * self,
  char** outErrMsg
);

void JoltC_CylinderShape_AddRef(
  JoltC_CylinderShape_t * self,
  char** outErrMsg
);

void JoltC_CylinderShape_Release(
  JoltC_CylinderShape_t * self,
  char** outErrMsg
);

JoltC_EShapeType JoltC_CylinderShape_GetType(
  JoltC_CylinderShape_t * self,
  char** outErrMsg
);

JoltC_EShapeSubType JoltC_CylinderShape_GetSubType(
  JoltC_CylinderShape_t * self,
  char** outErrMsg
);

bool JoltC_CylinderShape_MustBeStatic(
  JoltC_CylinderShape_t * self,
  char** outErrMsg
);

JoltC_AABox_t * JoltC_CylinderShape_GetLocalBounds(
  JoltC_CylinderShape_t * self,
  char** outErrMsg
);

JoltC_AABox_t * JoltC_CylinderShape_GetWorldSpaceBounds(
  JoltC_CylinderShape_t * self,
  const JoltC_Mat44_t * inCenterOfMassTransform,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_CylinderShape_GetCenterOfMass(
  JoltC_CylinderShape_t * self,
  char** outErrMsg
);

unsigned long long int JoltC_CylinderShape_GetUserData(
  JoltC_CylinderShape_t * self,
  char** outErrMsg
);

void JoltC_CylinderShape_SetUserData(
  JoltC_CylinderShape_t * self,
  unsigned long long int inUserData,
  char** outErrMsg
);

unsigned long JoltC_CylinderShape_GetSubShapeIDBitsRecursive(
  JoltC_CylinderShape_t * self,
  char** outErrMsg
);

float JoltC_CylinderShape_GetInnerRadius(
  JoltC_CylinderShape_t * self,
  char** outErrMsg
);

JoltC_MassProperties_t * JoltC_CylinderShape_GetMassProperties(
  JoltC_CylinderShape_t * self,
  char** outErrMsg
);

const JoltC_PhysicsMaterial_t * JoltC_CylinderShape_GetMaterial(
  JoltC_CylinderShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_CylinderShape_GetSurfaceNormal(
  JoltC_CylinderShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inLocalSurfacePosition,
  char** outErrMsg
);

unsigned long long int JoltC_CylinderShape_GetSubShapeUserData(
  JoltC_CylinderShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  char** outErrMsg
);

JoltC_TransformedShape_t * JoltC_CylinderShape_GetSubShapeTransformedShape(
  JoltC_CylinderShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inPositionCOM,
  const JoltC_Quat_t * inRotation,
  const JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder,
  char** outErrMsg
);

float JoltC_CylinderShape_GetVolume(
  JoltC_CylinderShape_t * self,
  char** outErrMsg
);

bool JoltC_CylinderShape_IsValidScale(
  JoltC_CylinderShape_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
);

JoltC_Shape_ShapeResult_t * JoltC_CylinderShape_ScaleShape(
  JoltC_CylinderShape_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif
