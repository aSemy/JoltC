#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JoltC_MeshShape_GetRefCount(
  JoltC_MeshShape_t * self,
  char** outErrMsg
);

void JoltC_MeshShape_AddRef(
  JoltC_MeshShape_t * self,
  char** outErrMsg
);

void JoltC_MeshShape_Release(
  JoltC_MeshShape_t * self,
  char** outErrMsg
);

JoltC_EShapeType JoltC_MeshShape_GetType(
  JoltC_MeshShape_t * self,
  char** outErrMsg
);

JoltC_EShapeSubType JoltC_MeshShape_GetSubType(
  JoltC_MeshShape_t * self,
  char** outErrMsg
);

bool JoltC_MeshShape_MustBeStatic(
  JoltC_MeshShape_t * self,
  char** outErrMsg
);

JoltC_AABox_t * JoltC_MeshShape_GetLocalBounds(
  JoltC_MeshShape_t * self,
  char** outErrMsg
);

JoltC_AABox_t * JoltC_MeshShape_GetWorldSpaceBounds(
  JoltC_MeshShape_t * self,
  const JoltC_Mat44_t * inCenterOfMassTransform,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_MeshShape_GetCenterOfMass(
  JoltC_MeshShape_t * self,
  char** outErrMsg
);

unsigned long long int JoltC_MeshShape_GetUserData(
  JoltC_MeshShape_t * self,
  char** outErrMsg
);

void JoltC_MeshShape_SetUserData(
  JoltC_MeshShape_t * self,
  unsigned long long int inUserData,
  char** outErrMsg
);

unsigned long JoltC_MeshShape_GetSubShapeIDBitsRecursive(
  JoltC_MeshShape_t * self,
  char** outErrMsg
);

float JoltC_MeshShape_GetInnerRadius(
  JoltC_MeshShape_t * self,
  char** outErrMsg
);

JoltC_MassProperties_t * JoltC_MeshShape_GetMassProperties(
  JoltC_MeshShape_t * self,
  char** outErrMsg
);

const JoltC_PhysicsMaterial_t * JoltC_MeshShape_GetMaterial(
  JoltC_MeshShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_MeshShape_GetSurfaceNormal(
  JoltC_MeshShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inLocalSurfacePosition,
  char** outErrMsg
);

unsigned long long int JoltC_MeshShape_GetSubShapeUserData(
  JoltC_MeshShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  char** outErrMsg
);

JoltC_TransformedShape_t * JoltC_MeshShape_GetSubShapeTransformedShape(
  JoltC_MeshShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inPositionCOM,
  const JoltC_Quat_t * inRotation,
  const JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder,
  char** outErrMsg
);

float JoltC_MeshShape_GetVolume(
  JoltC_MeshShape_t * self,
  char** outErrMsg
);

bool JoltC_MeshShape_IsValidScale(
  JoltC_MeshShape_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
);

JoltC_Shape_ShapeResult_t * JoltC_MeshShape_ScaleShape(
  JoltC_MeshShape_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

