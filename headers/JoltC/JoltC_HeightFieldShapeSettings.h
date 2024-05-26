#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_HeightFieldShapeSettings_t * JoltC_HeightFieldShapeSettings_new();

//endregion

//region functions

unsigned long JoltC_HeightFieldShapeSettings_GetRefCount(
  JoltC_HeightFieldShapeSettings_t * self
);

void JoltC_HeightFieldShapeSettings_AddRef(
  JoltC_HeightFieldShapeSettings_t * self
);

void JoltC_HeightFieldShapeSettings_Release(
  JoltC_HeightFieldShapeSettings_t * self
);

JoltC_Shape_ShapeResult_t * JoltC_HeightFieldShapeSettings_Create(
  JoltC_HeightFieldShapeSettings_t * self
);

void JoltC_HeightFieldShapeSettings_ClearCachedResult(
  JoltC_HeightFieldShapeSettings_t * self
);

//endregion

//region properties

JoltC_Vec3_t * JoltC_HeightFieldShapeSettings_mOffset_Get(
  JoltC_HeightFieldShapeSettings_t * self
);

void JoltC_HeightFieldShapeSettings_mOffset_Set(
  JoltC_HeightFieldShapeSettings_t * self,
  JoltC_Vec3_t * mOffset
);

JoltC_Vec3_t * JoltC_HeightFieldShapeSettings_mScale_Get(
  JoltC_HeightFieldShapeSettings_t * self
);

void JoltC_HeightFieldShapeSettings_mScale_Set(
  JoltC_HeightFieldShapeSettings_t * self,
  JoltC_Vec3_t * mScale
);

long JoltC_HeightFieldShapeSettings_mSampleCount_Get(
  JoltC_HeightFieldShapeSettings_t * self
);

void JoltC_HeightFieldShapeSettings_mSampleCount_Set(
  JoltC_HeightFieldShapeSettings_t * self,
  long mSampleCount
);

float JoltC_HeightFieldShapeSettings_mMinHeightValue_Get(
  JoltC_HeightFieldShapeSettings_t * self
);

void JoltC_HeightFieldShapeSettings_mMinHeightValue_Set(
  JoltC_HeightFieldShapeSettings_t * self,
  float mMinHeightValue
);

float JoltC_HeightFieldShapeSettings_mMaxHeightValue_Get(
  JoltC_HeightFieldShapeSettings_t * self
);

void JoltC_HeightFieldShapeSettings_mMaxHeightValue_Set(
  JoltC_HeightFieldShapeSettings_t * self,
  float mMaxHeightValue
);

long JoltC_HeightFieldShapeSettings_mBlockSize_Get(
  JoltC_HeightFieldShapeSettings_t * self
);

void JoltC_HeightFieldShapeSettings_mBlockSize_Set(
  JoltC_HeightFieldShapeSettings_t * self,
  long mBlockSize
);

long JoltC_HeightFieldShapeSettings_mBitsPerSample_Get(
  JoltC_HeightFieldShapeSettings_t * self
);

void JoltC_HeightFieldShapeSettings_mBitsPerSample_Set(
  JoltC_HeightFieldShapeSettings_t * self,
  long mBitsPerSample
);

JoltC_ArrayFloat_t * JoltC_HeightFieldShapeSettings_mHeightSamples_Get(
  JoltC_HeightFieldShapeSettings_t * self
);

void JoltC_HeightFieldShapeSettings_mHeightSamples_Set(
  JoltC_HeightFieldShapeSettings_t * self,
  JoltC_ArrayFloat_t * mHeightSamples
);

JoltC_ArrayUint8_t * JoltC_HeightFieldShapeSettings_mMaterialIndices_Get(
  JoltC_HeightFieldShapeSettings_t * self
);

void JoltC_HeightFieldShapeSettings_mMaterialIndices_Set(
  JoltC_HeightFieldShapeSettings_t * self,
  JoltC_ArrayUint8_t * mMaterialIndices
);

JoltC_PhysicsMaterialList_t * JoltC_HeightFieldShapeSettings_mMaterials_Get(
  JoltC_HeightFieldShapeSettings_t * self
);

void JoltC_HeightFieldShapeSettings_mMaterials_Set(
  JoltC_HeightFieldShapeSettings_t * self,
  JoltC_PhysicsMaterialList_t * mMaterials
);

float JoltC_HeightFieldShapeSettings_mActiveEdgeCosThresholdAngle_Get(
  JoltC_HeightFieldShapeSettings_t * self
);

void JoltC_HeightFieldShapeSettings_mActiveEdgeCosThresholdAngle_Set(
  JoltC_HeightFieldShapeSettings_t * self,
  float mActiveEdgeCosThresholdAngle
);

unsigned long long int JoltC_HeightFieldShapeSettings_mUserData_Get(
  JoltC_HeightFieldShapeSettings_t * self
);

void JoltC_HeightFieldShapeSettings_mUserData_Set(
  JoltC_HeightFieldShapeSettings_t * self,
  unsigned long long int mUserData
);

//endregion


#ifdef __cplusplus
}
#endif

