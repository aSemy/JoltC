#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_HeightFieldShapeSettings_t * JPC_HeightFieldShapeSettings_new();

//endregion constructors

//region functions

unsigned long JPC_HeightFieldShapeSettings_GetRefCount(
  JPC_HeightFieldShapeSettings_t * self
);

void JPC_HeightFieldShapeSettings_AddRef(
  JPC_HeightFieldShapeSettings_t * self
);

void JPC_HeightFieldShapeSettings_Release(
  JPC_HeightFieldShapeSettings_t * self
);

JPC_Shape_ShapeResult_t * JPC_HeightFieldShapeSettings_Create(
  JPC_HeightFieldShapeSettings_t * self
);

void JPC_HeightFieldShapeSettings_ClearCachedResult(
  JPC_HeightFieldShapeSettings_t * self
);

//endregion functions

//region properties

JPC_Vec3_t * JPC_HeightFieldShapeSettings_mOffset_Get(
  JPC_HeightFieldShapeSettings_t * self
);

void JPC_HeightFieldShapeSettings_mOffset_Set(
  JPC_HeightFieldShapeSettings_t * self,
  JPC_Vec3_t * mOffset
);

JPC_Vec3_t * JPC_HeightFieldShapeSettings_mScale_Get(
  JPC_HeightFieldShapeSettings_t * self
);

void JPC_HeightFieldShapeSettings_mScale_Set(
  JPC_HeightFieldShapeSettings_t * self,
  JPC_Vec3_t * mScale
);

long JPC_HeightFieldShapeSettings_mSampleCount_Get(
  JPC_HeightFieldShapeSettings_t * self
);

void JPC_HeightFieldShapeSettings_mSampleCount_Set(
  JPC_HeightFieldShapeSettings_t * self,
  long mSampleCount
);

float JPC_HeightFieldShapeSettings_mMinHeightValue_Get(
  JPC_HeightFieldShapeSettings_t * self
);

void JPC_HeightFieldShapeSettings_mMinHeightValue_Set(
  JPC_HeightFieldShapeSettings_t * self,
  float mMinHeightValue
);

float JPC_HeightFieldShapeSettings_mMaxHeightValue_Get(
  JPC_HeightFieldShapeSettings_t * self
);

void JPC_HeightFieldShapeSettings_mMaxHeightValue_Set(
  JPC_HeightFieldShapeSettings_t * self,
  float mMaxHeightValue
);

long JPC_HeightFieldShapeSettings_mBlockSize_Get(
  JPC_HeightFieldShapeSettings_t * self
);

void JPC_HeightFieldShapeSettings_mBlockSize_Set(
  JPC_HeightFieldShapeSettings_t * self,
  long mBlockSize
);

long JPC_HeightFieldShapeSettings_mBitsPerSample_Get(
  JPC_HeightFieldShapeSettings_t * self
);

void JPC_HeightFieldShapeSettings_mBitsPerSample_Set(
  JPC_HeightFieldShapeSettings_t * self,
  long mBitsPerSample
);

JPC_ArrayFloat_t * JPC_HeightFieldShapeSettings_mHeightSamples_Get(
  JPC_HeightFieldShapeSettings_t * self
);

void JPC_HeightFieldShapeSettings_mHeightSamples_Set(
  JPC_HeightFieldShapeSettings_t * self,
  JPC_ArrayFloat_t * mHeightSamples
);

JPC_ArrayUint8_t * JPC_HeightFieldShapeSettings_mMaterialIndices_Get(
  JPC_HeightFieldShapeSettings_t * self
);

void JPC_HeightFieldShapeSettings_mMaterialIndices_Set(
  JPC_HeightFieldShapeSettings_t * self,
  JPC_ArrayUint8_t * mMaterialIndices
);

JPC_PhysicsMaterialList_t * JPC_HeightFieldShapeSettings_mMaterials_Get(
  JPC_HeightFieldShapeSettings_t * self
);

void JPC_HeightFieldShapeSettings_mMaterials_Set(
  JPC_HeightFieldShapeSettings_t * self,
  JPC_PhysicsMaterialList_t * mMaterials
);

float JPC_HeightFieldShapeSettings_mActiveEdgeCosThresholdAngle_Get(
  JPC_HeightFieldShapeSettings_t * self
);

void JPC_HeightFieldShapeSettings_mActiveEdgeCosThresholdAngle_Set(
  JPC_HeightFieldShapeSettings_t * self,
  float mActiveEdgeCosThresholdAngle
);

unsigned long long int JPC_HeightFieldShapeSettings_mUserData_Get(
  JPC_HeightFieldShapeSettings_t * self
);

void JPC_HeightFieldShapeSettings_mUserData_Set(
  JPC_HeightFieldShapeSettings_t * self,
  unsigned long long int mUserData
);

//endregion properties


#ifdef __cplusplus
}
#endif

