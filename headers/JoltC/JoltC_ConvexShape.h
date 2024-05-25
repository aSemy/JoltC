#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

float JoltC_ConvexShape_GetDensity(
  JoltC_ConvexShape_t * self,
  char** outErrMsg
);

void JoltC_ConvexShape_SetDensity(
  JoltC_ConvexShape_t * self,
  float inDensity,
  char** outErrMsg
);

unsigned long JoltC_ConvexShape_GetRefCount(
  JoltC_ConvexShape_t * self,
  char** outErrMsg
);

void JoltC_ConvexShape_AddRef(
  JoltC_ConvexShape_t * self,
  char** outErrMsg
);

void JoltC_ConvexShape_Release(
  JoltC_ConvexShape_t * self,
  char** outErrMsg
);

JoltC_EShapeType JoltC_ConvexShape_GetType(
  JoltC_ConvexShape_t * self,
  char** outErrMsg
);

JoltC_EShapeSubType JoltC_ConvexShape_GetSubType(
  JoltC_ConvexShape_t * self,
  char** outErrMsg
);

bool JoltC_ConvexShape_MustBeStatic(
  JoltC_ConvexShape_t * self,
  char** outErrMsg
);

JoltC_AABox_t * JoltC_ConvexShape_GetLocalBounds(
  JoltC_ConvexShape_t * self,
  char** outErrMsg
);

JoltC_AABox_t * JoltC_ConvexShape_GetWorldSpaceBounds(
  JoltC_ConvexShape_t * self,
  const JoltC_Mat44_t * inCenterOfMassTransform,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_ConvexShape_GetCenterOfMass(
  JoltC_ConvexShape_t * self,
  char** outErrMsg
);

unsigned long long int JoltC_ConvexShape_GetUserData(
  JoltC_ConvexShape_t * self,
  char** outErrMsg
);

void JoltC_ConvexShape_SetUserData(
  JoltC_ConvexShape_t * self,
  unsigned long long int inUserData,
  char** outErrMsg
);

unsigned long JoltC_ConvexShape_GetSubShapeIDBitsRecursive(
  JoltC_ConvexShape_t * self,
  char** outErrMsg
);

float JoltC_ConvexShape_GetInnerRadius(
  JoltC_ConvexShape_t * self,
  char** outErrMsg
);

JoltC_MassProperties_t * JoltC_ConvexShape_GetMassProperties(
  JoltC_ConvexShape_t * self,
  char** outErrMsg
);

const JoltC_PhysicsMaterial_t * JoltC_ConvexShape_GetMaterial(
  JoltC_ConvexShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_ConvexShape_GetSurfaceNormal(
  JoltC_ConvexShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inLocalSurfacePosition,
  char** outErrMsg
);

unsigned long long int JoltC_ConvexShape_GetSubShapeUserData(
  JoltC_ConvexShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  char** outErrMsg
);

JoltC_TransformedShape_t * JoltC_ConvexShape_GetSubShapeTransformedShape(
  JoltC_ConvexShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inPositionCOM,
  const JoltC_Quat_t * inRotation,
  const JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder,
  char** outErrMsg
);

float JoltC_ConvexShape_GetVolume(
  JoltC_ConvexShape_t * self,
  char** outErrMsg
);

bool JoltC_ConvexShape_IsValidScale(
  JoltC_ConvexShape_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
);

JoltC_Shape_ShapeResult_t * JoltC_ConvexShape_ScaleShape(
  JoltC_ConvexShape_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

