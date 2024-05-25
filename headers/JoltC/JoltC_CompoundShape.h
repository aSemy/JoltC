#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

long JoltC_CompoundShape_GetNumSubShapes(
  JoltC_CompoundShape_t * self,
  char** outErrMsg
);

const JoltC_CompoundShapeSubShape_t * JoltC_CompoundShape_GetSubShape(
  JoltC_CompoundShape_t * self,
  long inIdx,
  char** outErrMsg
);

unsigned long JoltC_CompoundShape_GetRefCount(
  JoltC_CompoundShape_t * self,
  char** outErrMsg
);

void JoltC_CompoundShape_AddRef(
  JoltC_CompoundShape_t * self,
  char** outErrMsg
);

void JoltC_CompoundShape_Release(
  JoltC_CompoundShape_t * self,
  char** outErrMsg
);

JoltC_EShapeType JoltC_CompoundShape_GetType(
  JoltC_CompoundShape_t * self,
  char** outErrMsg
);

JoltC_EShapeSubType JoltC_CompoundShape_GetSubType(
  JoltC_CompoundShape_t * self,
  char** outErrMsg
);

bool JoltC_CompoundShape_MustBeStatic(
  JoltC_CompoundShape_t * self,
  char** outErrMsg
);

JoltC_AABox_t * JoltC_CompoundShape_GetLocalBounds(
  JoltC_CompoundShape_t * self,
  char** outErrMsg
);

JoltC_AABox_t * JoltC_CompoundShape_GetWorldSpaceBounds(
  JoltC_CompoundShape_t * self,
  const JoltC_Mat44_t * inCenterOfMassTransform,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_CompoundShape_GetCenterOfMass(
  JoltC_CompoundShape_t * self,
  char** outErrMsg
);

unsigned long long int JoltC_CompoundShape_GetUserData(
  JoltC_CompoundShape_t * self,
  char** outErrMsg
);

void JoltC_CompoundShape_SetUserData(
  JoltC_CompoundShape_t * self,
  unsigned long long int inUserData,
  char** outErrMsg
);

unsigned long JoltC_CompoundShape_GetSubShapeIDBitsRecursive(
  JoltC_CompoundShape_t * self,
  char** outErrMsg
);

float JoltC_CompoundShape_GetInnerRadius(
  JoltC_CompoundShape_t * self,
  char** outErrMsg
);

JoltC_MassProperties_t * JoltC_CompoundShape_GetMassProperties(
  JoltC_CompoundShape_t * self,
  char** outErrMsg
);

const JoltC_PhysicsMaterial_t * JoltC_CompoundShape_GetMaterial(
  JoltC_CompoundShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_CompoundShape_GetSurfaceNormal(
  JoltC_CompoundShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inLocalSurfacePosition,
  char** outErrMsg
);

unsigned long long int JoltC_CompoundShape_GetSubShapeUserData(
  JoltC_CompoundShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  char** outErrMsg
);

JoltC_TransformedShape_t * JoltC_CompoundShape_GetSubShapeTransformedShape(
  JoltC_CompoundShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inPositionCOM,
  const JoltC_Quat_t * inRotation,
  const JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder,
  char** outErrMsg
);

float JoltC_CompoundShape_GetVolume(
  JoltC_CompoundShape_t * self,
  char** outErrMsg
);

bool JoltC_CompoundShape_IsValidScale(
  JoltC_CompoundShape_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
);

JoltC_Shape_ShapeResult_t * JoltC_CompoundShape_ScaleShape(
  JoltC_CompoundShape_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

