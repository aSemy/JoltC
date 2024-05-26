#include "JoltC/JoltC_HeightFieldShapeSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_HeightFieldShapeSettings_t * JoltC_HeightFieldShapeSettings_new() {
  JoltC_HeightFieldShapeSettings_t * cInstance = new JoltC_HeightFieldShapeSettings_t();
  HeightFieldShapeSettings * cppInstance = new HeightFieldShapeSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

unsigned long JoltC_HeightFieldShapeSettings_GetRefCount(
  JoltC_HeightFieldShapeSettings_t * self
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_HeightFieldShapeSettings_AddRef(
  JoltC_HeightFieldShapeSettings_t * self
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  
  selfCpp->AddRef();
};

void JoltC_HeightFieldShapeSettings_Release(
  JoltC_HeightFieldShapeSettings_t * self
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  
  selfCpp->Release();
};

JoltC_Shape_ShapeResult_t * JoltC_HeightFieldShapeSettings_Create(
  JoltC_HeightFieldShapeSettings_t * self
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  static Shape::ShapeResult resultValue = selfCpp->Create();
  JoltC_Shape_ShapeResult_t* result = new JoltC_Shape_ShapeResult_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_HeightFieldShapeSettings_ClearCachedResult(
  JoltC_HeightFieldShapeSettings_t * self
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  
  selfCpp->ClearCachedResult();
};

//endregion

//region properties

JoltC_Vec3_t * JoltC_HeightFieldShapeSettings_mOffset_Get(
  JoltC_HeightFieldShapeSettings_t * self
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  static Vec3 resultValue = selfCpp->mOffset;
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_HeightFieldShapeSettings_mOffset_Set(
  JoltC_HeightFieldShapeSettings_t * self,
  JoltC_Vec3_t * mOffset
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  selfCpp->mOffset = *reinterpret_cast<Vec3 *>(mOffset->obj);
};

JoltC_Vec3_t * JoltC_HeightFieldShapeSettings_mScale_Get(
  JoltC_HeightFieldShapeSettings_t * self
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  static Vec3 resultValue = selfCpp->mScale;
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_HeightFieldShapeSettings_mScale_Set(
  JoltC_HeightFieldShapeSettings_t * self,
  JoltC_Vec3_t * mScale
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  selfCpp->mScale = *reinterpret_cast<Vec3 *>(mScale->obj);
};

long JoltC_HeightFieldShapeSettings_mSampleCount_Get(
  JoltC_HeightFieldShapeSettings_t * self
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  long result = selfCpp->mSampleCount;
  return result;
};

void JoltC_HeightFieldShapeSettings_mSampleCount_Set(
  JoltC_HeightFieldShapeSettings_t * self,
  long mSampleCount
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  selfCpp->mSampleCount = mSampleCount;
};

float JoltC_HeightFieldShapeSettings_mMinHeightValue_Get(
  JoltC_HeightFieldShapeSettings_t * self
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  float result = selfCpp->mMinHeightValue;
  return result;
};

void JoltC_HeightFieldShapeSettings_mMinHeightValue_Set(
  JoltC_HeightFieldShapeSettings_t * self,
  float mMinHeightValue
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  selfCpp->mMinHeightValue = mMinHeightValue;
};

float JoltC_HeightFieldShapeSettings_mMaxHeightValue_Get(
  JoltC_HeightFieldShapeSettings_t * self
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  float result = selfCpp->mMaxHeightValue;
  return result;
};

void JoltC_HeightFieldShapeSettings_mMaxHeightValue_Set(
  JoltC_HeightFieldShapeSettings_t * self,
  float mMaxHeightValue
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  selfCpp->mMaxHeightValue = mMaxHeightValue;
};

long JoltC_HeightFieldShapeSettings_mBlockSize_Get(
  JoltC_HeightFieldShapeSettings_t * self
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  long result = selfCpp->mBlockSize;
  return result;
};

void JoltC_HeightFieldShapeSettings_mBlockSize_Set(
  JoltC_HeightFieldShapeSettings_t * self,
  long mBlockSize
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  selfCpp->mBlockSize = mBlockSize;
};

long JoltC_HeightFieldShapeSettings_mBitsPerSample_Get(
  JoltC_HeightFieldShapeSettings_t * self
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  long result = selfCpp->mBitsPerSample;
  return result;
};

void JoltC_HeightFieldShapeSettings_mBitsPerSample_Set(
  JoltC_HeightFieldShapeSettings_t * self,
  long mBitsPerSample
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  selfCpp->mBitsPerSample = mBitsPerSample;
};

JoltC_ArrayFloat_t * JoltC_HeightFieldShapeSettings_mHeightSamples_Get(
  JoltC_HeightFieldShapeSettings_t * self
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  static ArrayFloat resultValue = selfCpp->mHeightSamples;
  JoltC_ArrayFloat_t* result = new JoltC_ArrayFloat_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_HeightFieldShapeSettings_mHeightSamples_Set(
  JoltC_HeightFieldShapeSettings_t * self,
  JoltC_ArrayFloat_t * mHeightSamples
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  selfCpp->mHeightSamples = *reinterpret_cast<ArrayFloat *>(mHeightSamples->obj);
};

JoltC_ArrayUint8_t * JoltC_HeightFieldShapeSettings_mMaterialIndices_Get(
  JoltC_HeightFieldShapeSettings_t * self
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  static ArrayUint8 resultValue = selfCpp->mMaterialIndices;
  JoltC_ArrayUint8_t* result = new JoltC_ArrayUint8_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_HeightFieldShapeSettings_mMaterialIndices_Set(
  JoltC_HeightFieldShapeSettings_t * self,
  JoltC_ArrayUint8_t * mMaterialIndices
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  selfCpp->mMaterialIndices = *reinterpret_cast<ArrayUint8 *>(mMaterialIndices->obj);
};

JoltC_PhysicsMaterialList_t * JoltC_HeightFieldShapeSettings_mMaterials_Get(
  JoltC_HeightFieldShapeSettings_t * self
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  static PhysicsMaterialList resultValue = selfCpp->mMaterials;
  JoltC_PhysicsMaterialList_t* result = new JoltC_PhysicsMaterialList_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_HeightFieldShapeSettings_mMaterials_Set(
  JoltC_HeightFieldShapeSettings_t * self,
  JoltC_PhysicsMaterialList_t * mMaterials
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  selfCpp->mMaterials = *reinterpret_cast<PhysicsMaterialList *>(mMaterials->obj);
};

float JoltC_HeightFieldShapeSettings_mActiveEdgeCosThresholdAngle_Get(
  JoltC_HeightFieldShapeSettings_t * self
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  float result = selfCpp->mActiveEdgeCosThresholdAngle;
  return result;
};

void JoltC_HeightFieldShapeSettings_mActiveEdgeCosThresholdAngle_Set(
  JoltC_HeightFieldShapeSettings_t * self,
  float mActiveEdgeCosThresholdAngle
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  selfCpp->mActiveEdgeCosThresholdAngle = mActiveEdgeCosThresholdAngle;
};

unsigned long long int JoltC_HeightFieldShapeSettings_mUserData_Get(
  JoltC_HeightFieldShapeSettings_t * self
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  unsigned long long int result = selfCpp->mUserData;
  return result;
};

void JoltC_HeightFieldShapeSettings_mUserData_Set(
  JoltC_HeightFieldShapeSettings_t * self,
  unsigned long long int mUserData
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
};

//endregion

#ifdef __cplusplus
}
#endif

