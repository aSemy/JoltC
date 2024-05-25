#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

long JoltC_HeightFieldShape_GetSampleCount(
  JoltC_HeightFieldShape_t * self,
  char** outErrMsg
);

long JoltC_HeightFieldShape_GetBlockSize(
  JoltC_HeightFieldShape_t * self,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_HeightFieldShape_GetPosition(
  JoltC_HeightFieldShape_t * self,
  long inX,
  long inY,
  char** outErrMsg
);

bool JoltC_HeightFieldShape_IsNoCollision(
  JoltC_HeightFieldShape_t * self,
  long inX,
  long inY,
  char** outErrMsg
);

float JoltC_HeightFieldShape_GetMinHeightValue(
  JoltC_HeightFieldShape_t * self,
  char** outErrMsg
);

float JoltC_HeightFieldShape_GetMaxHeightValue(
  JoltC_HeightFieldShape_t * self,
  char** outErrMsg
);

void JoltC_HeightFieldShape_GetHeights(
  JoltC_HeightFieldShape_t * self,
  long inX,
  long inY,
  long inSizeX,
  long inSizeY,
  JoltC_FloatMemRef_t * outHeights,
  long inHeightsStride,
  char** outErrMsg
);

void JoltC_HeightFieldShape_SetHeights(
  JoltC_HeightFieldShape_t * self,
  long inX,
  long inY,
  long inSizeX,
  long inSizeY,
  JoltC_FloatMemRef_t * inHeights,
  long inHeightsStride,
  JoltC_TempAllocator_t * inAllocator,
  float inActiveEdgeCosThresholdAngle,
  char** outErrMsg
);

void JoltC_HeightFieldShape_GetMaterials(
  JoltC_HeightFieldShape_t * self,
  long inX,
  long inY,
  long inSizeX,
  long inSizeY,
  JoltC_Uint8MemRef_t * outMaterials,
  long inMaterialsStride,
  char** outErrMsg
);

bool JoltC_HeightFieldShape_SetMaterials(
  JoltC_HeightFieldShape_t * self,
  long inX,
  long inY,
  long inSizeX,
  long inSizeY,
  JoltC_Uint8MemRef_t * inMaterials,
  long inMaterialsStride,
  JoltC_PhysicsMaterialList_t * inMaterialList,
  JoltC_TempAllocator_t * inAllocator,
  char** outErrMsg
);

unsigned long JoltC_HeightFieldShape_GetRefCount(
  JoltC_HeightFieldShape_t * self,
  char** outErrMsg
);

void JoltC_HeightFieldShape_AddRef(
  JoltC_HeightFieldShape_t * self,
  char** outErrMsg
);

void JoltC_HeightFieldShape_Release(
  JoltC_HeightFieldShape_t * self,
  char** outErrMsg
);

JoltC_EShapeType JoltC_HeightFieldShape_GetType(
  JoltC_HeightFieldShape_t * self,
  char** outErrMsg
);

JoltC_EShapeSubType JoltC_HeightFieldShape_GetSubType(
  JoltC_HeightFieldShape_t * self,
  char** outErrMsg
);

bool JoltC_HeightFieldShape_MustBeStatic(
  JoltC_HeightFieldShape_t * self,
  char** outErrMsg
);

JoltC_AABox_t * JoltC_HeightFieldShape_GetLocalBounds(
  JoltC_HeightFieldShape_t * self,
  char** outErrMsg
);

JoltC_AABox_t * JoltC_HeightFieldShape_GetWorldSpaceBounds(
  JoltC_HeightFieldShape_t * self,
  const JoltC_Mat44_t * inCenterOfMassTransform,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_HeightFieldShape_GetCenterOfMass(
  JoltC_HeightFieldShape_t * self,
  char** outErrMsg
);

unsigned long long int JoltC_HeightFieldShape_GetUserData(
  JoltC_HeightFieldShape_t * self,
  char** outErrMsg
);

void JoltC_HeightFieldShape_SetUserData(
  JoltC_HeightFieldShape_t * self,
  unsigned long long int inUserData,
  char** outErrMsg
);

unsigned long JoltC_HeightFieldShape_GetSubShapeIDBitsRecursive(
  JoltC_HeightFieldShape_t * self,
  char** outErrMsg
);

float JoltC_HeightFieldShape_GetInnerRadius(
  JoltC_HeightFieldShape_t * self,
  char** outErrMsg
);

JoltC_MassProperties_t * JoltC_HeightFieldShape_GetMassProperties(
  JoltC_HeightFieldShape_t * self,
  char** outErrMsg
);

const JoltC_PhysicsMaterial_t * JoltC_HeightFieldShape_GetMaterial(
  JoltC_HeightFieldShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_HeightFieldShape_GetSurfaceNormal(
  JoltC_HeightFieldShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inLocalSurfacePosition,
  char** outErrMsg
);

unsigned long long int JoltC_HeightFieldShape_GetSubShapeUserData(
  JoltC_HeightFieldShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  char** outErrMsg
);

JoltC_TransformedShape_t * JoltC_HeightFieldShape_GetSubShapeTransformedShape(
  JoltC_HeightFieldShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inPositionCOM,
  const JoltC_Quat_t * inRotation,
  const JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder,
  char** outErrMsg
);

float JoltC_HeightFieldShape_GetVolume(
  JoltC_HeightFieldShape_t * self,
  char** outErrMsg
);

bool JoltC_HeightFieldShape_IsValidScale(
  JoltC_HeightFieldShape_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
);

JoltC_Shape_ShapeResult_t * JoltC_HeightFieldShape_ScaleShape(
  JoltC_HeightFieldShape_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

