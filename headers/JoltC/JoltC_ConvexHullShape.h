#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

float JoltC_ConvexHullShape_GetDensity(
  JoltC_ConvexHullShape_t * self,
  char** outErrMsg
);

void JoltC_ConvexHullShape_SetDensity(
  JoltC_ConvexHullShape_t * self,
  float inDensity,
  char** outErrMsg
);

unsigned long JoltC_ConvexHullShape_GetRefCount(
  JoltC_ConvexHullShape_t * self,
  char** outErrMsg
);

void JoltC_ConvexHullShape_AddRef(
  JoltC_ConvexHullShape_t * self,
  char** outErrMsg
);

void JoltC_ConvexHullShape_Release(
  JoltC_ConvexHullShape_t * self,
  char** outErrMsg
);

JoltC_EShapeType JoltC_ConvexHullShape_GetType(
  JoltC_ConvexHullShape_t * self,
  char** outErrMsg
);

JoltC_EShapeSubType JoltC_ConvexHullShape_GetSubType(
  JoltC_ConvexHullShape_t * self,
  char** outErrMsg
);

bool JoltC_ConvexHullShape_MustBeStatic(
  JoltC_ConvexHullShape_t * self,
  char** outErrMsg
);

JoltC_AABox_t * JoltC_ConvexHullShape_GetLocalBounds(
  JoltC_ConvexHullShape_t * self,
  char** outErrMsg
);

JoltC_AABox_t * JoltC_ConvexHullShape_GetWorldSpaceBounds(
  JoltC_ConvexHullShape_t * self,
  const JoltC_Mat44_t * inCenterOfMassTransform,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_ConvexHullShape_GetCenterOfMass(
  JoltC_ConvexHullShape_t * self,
  char** outErrMsg
);

unsigned long long int JoltC_ConvexHullShape_GetUserData(
  JoltC_ConvexHullShape_t * self,
  char** outErrMsg
);

void JoltC_ConvexHullShape_SetUserData(
  JoltC_ConvexHullShape_t * self,
  unsigned long long int inUserData,
  char** outErrMsg
);

unsigned long JoltC_ConvexHullShape_GetSubShapeIDBitsRecursive(
  JoltC_ConvexHullShape_t * self,
  char** outErrMsg
);

float JoltC_ConvexHullShape_GetInnerRadius(
  JoltC_ConvexHullShape_t * self,
  char** outErrMsg
);

JoltC_MassProperties_t * JoltC_ConvexHullShape_GetMassProperties(
  JoltC_ConvexHullShape_t * self,
  char** outErrMsg
);

const JoltC_PhysicsMaterial_t * JoltC_ConvexHullShape_GetMaterial(
  JoltC_ConvexHullShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_ConvexHullShape_GetSurfaceNormal(
  JoltC_ConvexHullShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inLocalSurfacePosition,
  char** outErrMsg
);

unsigned long long int JoltC_ConvexHullShape_GetSubShapeUserData(
  JoltC_ConvexHullShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  char** outErrMsg
);

JoltC_TransformedShape_t * JoltC_ConvexHullShape_GetSubShapeTransformedShape(
  JoltC_ConvexHullShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inPositionCOM,
  const JoltC_Quat_t * inRotation,
  const JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder,
  char** outErrMsg
);

float JoltC_ConvexHullShape_GetVolume(
  JoltC_ConvexHullShape_t * self,
  char** outErrMsg
);

bool JoltC_ConvexHullShape_IsValidScale(
  JoltC_ConvexHullShape_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
);

JoltC_Shape_ShapeResult_t * JoltC_ConvexHullShape_ScaleShape(
  JoltC_ConvexHullShape_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

