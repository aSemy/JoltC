#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

long JoltC_StaticCompoundShape_GetNumSubShapes(
  JoltC_StaticCompoundShape_t * self,
  char** outErrMsg
);

const JoltC_CompoundShapeSubShape_t * JoltC_StaticCompoundShape_GetSubShape(
  JoltC_StaticCompoundShape_t * self,
  long inIdx,
  char** outErrMsg
);

unsigned long JoltC_StaticCompoundShape_GetRefCount(
  JoltC_StaticCompoundShape_t * self,
  char** outErrMsg
);

void JoltC_StaticCompoundShape_AddRef(
  JoltC_StaticCompoundShape_t * self,
  char** outErrMsg
);

void JoltC_StaticCompoundShape_Release(
  JoltC_StaticCompoundShape_t * self,
  char** outErrMsg
);

JoltC_EShapeType JoltC_StaticCompoundShape_GetType(
  JoltC_StaticCompoundShape_t * self,
  char** outErrMsg
);

JoltC_EShapeSubType JoltC_StaticCompoundShape_GetSubType(
  JoltC_StaticCompoundShape_t * self,
  char** outErrMsg
);

bool JoltC_StaticCompoundShape_MustBeStatic(
  JoltC_StaticCompoundShape_t * self,
  char** outErrMsg
);

JoltC_AABox_t * JoltC_StaticCompoundShape_GetLocalBounds(
  JoltC_StaticCompoundShape_t * self,
  char** outErrMsg
);

JoltC_AABox_t * JoltC_StaticCompoundShape_GetWorldSpaceBounds(
  JoltC_StaticCompoundShape_t * self,
  const JoltC_Mat44_t * inCenterOfMassTransform,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_StaticCompoundShape_GetCenterOfMass(
  JoltC_StaticCompoundShape_t * self,
  char** outErrMsg
);

unsigned long long int JoltC_StaticCompoundShape_GetUserData(
  JoltC_StaticCompoundShape_t * self,
  char** outErrMsg
);

void JoltC_StaticCompoundShape_SetUserData(
  JoltC_StaticCompoundShape_t * self,
  unsigned long long int inUserData,
  char** outErrMsg
);

unsigned long JoltC_StaticCompoundShape_GetSubShapeIDBitsRecursive(
  JoltC_StaticCompoundShape_t * self,
  char** outErrMsg
);

float JoltC_StaticCompoundShape_GetInnerRadius(
  JoltC_StaticCompoundShape_t * self,
  char** outErrMsg
);

JoltC_MassProperties_t * JoltC_StaticCompoundShape_GetMassProperties(
  JoltC_StaticCompoundShape_t * self,
  char** outErrMsg
);

const JoltC_PhysicsMaterial_t * JoltC_StaticCompoundShape_GetMaterial(
  JoltC_StaticCompoundShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_StaticCompoundShape_GetSurfaceNormal(
  JoltC_StaticCompoundShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inLocalSurfacePosition,
  char** outErrMsg
);

unsigned long long int JoltC_StaticCompoundShape_GetSubShapeUserData(
  JoltC_StaticCompoundShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  char** outErrMsg
);

JoltC_TransformedShape_t * JoltC_StaticCompoundShape_GetSubShapeTransformedShape(
  JoltC_StaticCompoundShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inPositionCOM,
  const JoltC_Quat_t * inRotation,
  const JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder,
  char** outErrMsg
);

float JoltC_StaticCompoundShape_GetVolume(
  JoltC_StaticCompoundShape_t * self,
  char** outErrMsg
);

bool JoltC_StaticCompoundShape_IsValidScale(
  JoltC_StaticCompoundShape_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
);

JoltC_Shape_ShapeResult_t * JoltC_StaticCompoundShape_ScaleShape(
  JoltC_StaticCompoundShape_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

