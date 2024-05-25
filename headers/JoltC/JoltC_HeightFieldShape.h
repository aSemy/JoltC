#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

long JPC_HeightFieldShape_GetSampleCount(
  JPC_HeightFieldShape_t * self
);

long JPC_HeightFieldShape_GetBlockSize(
  JPC_HeightFieldShape_t * self
);

JPC_Vec3_t * JPC_HeightFieldShape_GetPosition(
  JPC_HeightFieldShape_t * self,
  long inX,
  long inY
);

bool JPC_HeightFieldShape_IsNoCollision(
  JPC_HeightFieldShape_t * self,
  long inX,
  long inY
);

float JPC_HeightFieldShape_GetMinHeightValue(
  JPC_HeightFieldShape_t * self
);

float JPC_HeightFieldShape_GetMaxHeightValue(
  JPC_HeightFieldShape_t * self
);

void JPC_HeightFieldShape_GetHeights(
  JPC_HeightFieldShape_t * self,
  long inX,
  long inY,
  long inSizeX,
  long inSizeY,
  JPC_FloatMemRef_t * outHeights,
  long inHeightsStride
);

void JPC_HeightFieldShape_SetHeights(
  JPC_HeightFieldShape_t * self,
  long inX,
  long inY,
  long inSizeX,
  long inSizeY,
  JPC_FloatMemRef_t * inHeights,
  long inHeightsStride,
  JPC_TempAllocator_t * inAllocator,
  float inActiveEdgeCosThresholdAngle
);

void JPC_HeightFieldShape_GetMaterials(
  JPC_HeightFieldShape_t * self,
  long inX,
  long inY,
  long inSizeX,
  long inSizeY,
  JPC_Uint8MemRef_t * outMaterials,
  long inMaterialsStride
);

bool JPC_HeightFieldShape_SetMaterials(
  JPC_HeightFieldShape_t * self,
  long inX,
  long inY,
  long inSizeX,
  long inSizeY,
  JPC_Uint8MemRef_t * inMaterials,
  long inMaterialsStride,
  JPC_PhysicsMaterialList_t * inMaterialList,
  JPC_TempAllocator_t * inAllocator
);

unsigned long JPC_HeightFieldShape_GetRefCount(
  JPC_HeightFieldShape_t * self
);

void JPC_HeightFieldShape_AddRef(
  JPC_HeightFieldShape_t * self
);

void JPC_HeightFieldShape_Release(
  JPC_HeightFieldShape_t * self
);

JPC_EShapeType JPC_HeightFieldShape_GetType(
  JPC_HeightFieldShape_t * self
);

JPC_EShapeSubType JPC_HeightFieldShape_GetSubType(
  JPC_HeightFieldShape_t * self
);

bool JPC_HeightFieldShape_MustBeStatic(
  JPC_HeightFieldShape_t * self
);

JPC_AABox_t * JPC_HeightFieldShape_GetLocalBounds(
  JPC_HeightFieldShape_t * self
);

JPC_AABox_t * JPC_HeightFieldShape_GetWorldSpaceBounds(
  JPC_HeightFieldShape_t * self,
  const JPC_Mat44_t * inCenterOfMassTransform,
  const JPC_Vec3_t * inScale
);

JPC_Vec3_t * JPC_HeightFieldShape_GetCenterOfMass(
  JPC_HeightFieldShape_t * self
);

unsigned long long int JPC_HeightFieldShape_GetUserData(
  JPC_HeightFieldShape_t * self
);

void JPC_HeightFieldShape_SetUserData(
  JPC_HeightFieldShape_t * self,
  unsigned long long int inUserData
);

unsigned long JPC_HeightFieldShape_GetSubShapeIDBitsRecursive(
  JPC_HeightFieldShape_t * self
);

float JPC_HeightFieldShape_GetInnerRadius(
  JPC_HeightFieldShape_t * self
);

JPC_MassProperties_t * JPC_HeightFieldShape_GetMassProperties(
  JPC_HeightFieldShape_t * self
);

const JPC_PhysicsMaterial_t * JPC_HeightFieldShape_GetMaterial(
  JPC_HeightFieldShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
);

JPC_Vec3_t * JPC_HeightFieldShape_GetSurfaceNormal(
  JPC_HeightFieldShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inLocalSurfacePosition
);

unsigned long long int JPC_HeightFieldShape_GetSubShapeUserData(
  JPC_HeightFieldShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
);

JPC_TransformedShape_t * JPC_HeightFieldShape_GetSubShapeTransformedShape(
  JPC_HeightFieldShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inPositionCOM,
  const JPC_Quat_t * inRotation,
  const JPC_Vec3_t * inScale,
  JPC_SubShapeID_t * outRemainder
);

float JPC_HeightFieldShape_GetVolume(
  JPC_HeightFieldShape_t * self
);

bool JPC_HeightFieldShape_IsValidScale(
  JPC_HeightFieldShape_t * self,
  const JPC_Vec3_t * inScale
);

JPC_Shape_ShapeResult_t * JPC_HeightFieldShape_ScaleShape(
  JPC_HeightFieldShape_t * self,
  const JPC_Vec3_t * inScale
);

//endregion functions


#ifdef __cplusplus
}
#endif

