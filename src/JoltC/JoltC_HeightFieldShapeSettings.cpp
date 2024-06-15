#include "JoltC/JoltC_HeightFieldShapeSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `HeightFieldShapeSettings` instance.
 */
JoltC_HeightFieldShapeSettings_t * JoltC_HeightFieldShapeSettings_new() {
  JoltC_HeightFieldShapeSettings_t * cInstance = new JoltC_HeightFieldShapeSettings_t();
  HeightFieldShapeSettings * cppInstance = new HeightFieldShapeSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_HeightFieldShapeSettings_destroy(
  JoltC_HeightFieldShapeSettings_t * self
){
  if (self == NULL) return;
  delete static_cast<HeightFieldShapeSettings *>(self->obj);
  free(self);
}

//endregion
//region functions

unsigned long JoltC_HeightFieldShapeSettings_GetRefCount(
  JoltC_HeightFieldShapeSettings_t * self
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_HeightFieldShapeSettings_AddRef(
  JoltC_HeightFieldShapeSettings_t * self
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_HeightFieldShapeSettings_Release(
  JoltC_HeightFieldShapeSettings_t * self
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  selfCpp->Release();
}

JoltC_Shape_ShapeResult_t * JoltC_HeightFieldShapeSettings_Create(
  JoltC_HeightFieldShapeSettings_t * self
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  Shape::ShapeResult * resultPtr = new Shape::ShapeResult();
  *resultPtr = selfCpp->Create();
  JoltC_Shape_ShapeResult_t * result = new JoltC_Shape_ShapeResult_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_HeightFieldShapeSettings_ClearCachedResult(
  JoltC_HeightFieldShapeSettings_t * self
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  selfCpp->ClearCachedResult();
}

//endregion

//region properties

JoltC_Vec3_t * JoltC_HeightFieldShapeSettings_mOffset_Get(
  JoltC_HeightFieldShapeSettings_t * self
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mOffset;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_HeightFieldShapeSettings_mOffset_Set(
  JoltC_HeightFieldShapeSettings_t * self,
  JoltC_Vec3_t * mOffset
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  selfCpp->mOffset = *static_cast<Vec3 *>(mOffset->obj);
}

JoltC_Vec3_t * JoltC_HeightFieldShapeSettings_mScale_Get(
  JoltC_HeightFieldShapeSettings_t * self
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mScale;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_HeightFieldShapeSettings_mScale_Set(
  JoltC_HeightFieldShapeSettings_t * self,
  JoltC_Vec3_t * mScale
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  selfCpp->mScale = *static_cast<Vec3 *>(mScale->obj);
}

long JoltC_HeightFieldShapeSettings_mSampleCount_Get(
  JoltC_HeightFieldShapeSettings_t * self
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  return selfCpp->mSampleCount;
}

void JoltC_HeightFieldShapeSettings_mSampleCount_Set(
  JoltC_HeightFieldShapeSettings_t * self,
  long mSampleCount
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  selfCpp->mSampleCount = mSampleCount;
}

float JoltC_HeightFieldShapeSettings_mMinHeightValue_Get(
  JoltC_HeightFieldShapeSettings_t * self
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  return selfCpp->mMinHeightValue;
}

void JoltC_HeightFieldShapeSettings_mMinHeightValue_Set(
  JoltC_HeightFieldShapeSettings_t * self,
  float mMinHeightValue
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  selfCpp->mMinHeightValue = mMinHeightValue;
}

float JoltC_HeightFieldShapeSettings_mMaxHeightValue_Get(
  JoltC_HeightFieldShapeSettings_t * self
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  return selfCpp->mMaxHeightValue;
}

void JoltC_HeightFieldShapeSettings_mMaxHeightValue_Set(
  JoltC_HeightFieldShapeSettings_t * self,
  float mMaxHeightValue
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  selfCpp->mMaxHeightValue = mMaxHeightValue;
}

long JoltC_HeightFieldShapeSettings_mBlockSize_Get(
  JoltC_HeightFieldShapeSettings_t * self
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  return selfCpp->mBlockSize;
}

void JoltC_HeightFieldShapeSettings_mBlockSize_Set(
  JoltC_HeightFieldShapeSettings_t * self,
  long mBlockSize
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  selfCpp->mBlockSize = mBlockSize;
}

long JoltC_HeightFieldShapeSettings_mBitsPerSample_Get(
  JoltC_HeightFieldShapeSettings_t * self
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  return selfCpp->mBitsPerSample;
}

void JoltC_HeightFieldShapeSettings_mBitsPerSample_Set(
  JoltC_HeightFieldShapeSettings_t * self,
  long mBitsPerSample
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  selfCpp->mBitsPerSample = mBitsPerSample;
}

JoltC_ArrayFloat_t * JoltC_HeightFieldShapeSettings_mHeightSamples_Get(
  JoltC_HeightFieldShapeSettings_t * self
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  ArrayFloat * resultPtr = new ArrayFloat();
  *resultPtr = selfCpp->mHeightSamples;
  JoltC_ArrayFloat_t * result = new JoltC_ArrayFloat_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_HeightFieldShapeSettings_mHeightSamples_Set(
  JoltC_HeightFieldShapeSettings_t * self,
  JoltC_ArrayFloat_t * mHeightSamples
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  selfCpp->mHeightSamples = *static_cast<ArrayFloat *>(mHeightSamples->obj);
}

JoltC_ArrayUint8_t * JoltC_HeightFieldShapeSettings_mMaterialIndices_Get(
  JoltC_HeightFieldShapeSettings_t * self
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  ArrayUint8 * resultPtr = new ArrayUint8();
  *resultPtr = selfCpp->mMaterialIndices;
  JoltC_ArrayUint8_t * result = new JoltC_ArrayUint8_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_HeightFieldShapeSettings_mMaterialIndices_Set(
  JoltC_HeightFieldShapeSettings_t * self,
  JoltC_ArrayUint8_t * mMaterialIndices
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  selfCpp->mMaterialIndices = *static_cast<ArrayUint8 *>(mMaterialIndices->obj);
}

JoltC_PhysicsMaterialList_t * JoltC_HeightFieldShapeSettings_mMaterials_Get(
  JoltC_HeightFieldShapeSettings_t * self
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  PhysicsMaterialList * resultPtr = new PhysicsMaterialList();
  *resultPtr = selfCpp->mMaterials;
  JoltC_PhysicsMaterialList_t * result = new JoltC_PhysicsMaterialList_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_HeightFieldShapeSettings_mMaterials_Set(
  JoltC_HeightFieldShapeSettings_t * self,
  JoltC_PhysicsMaterialList_t * mMaterials
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  selfCpp->mMaterials = *static_cast<PhysicsMaterialList *>(mMaterials->obj);
}

float JoltC_HeightFieldShapeSettings_mActiveEdgeCosThresholdAngle_Get(
  JoltC_HeightFieldShapeSettings_t * self
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  return selfCpp->mActiveEdgeCosThresholdAngle;
}

void JoltC_HeightFieldShapeSettings_mActiveEdgeCosThresholdAngle_Set(
  JoltC_HeightFieldShapeSettings_t * self,
  float mActiveEdgeCosThresholdAngle
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  selfCpp->mActiveEdgeCosThresholdAngle = mActiveEdgeCosThresholdAngle;
}

unsigned long long int JoltC_HeightFieldShapeSettings_mUserData_Get(
  JoltC_HeightFieldShapeSettings_t * self
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  return selfCpp->mUserData;
}

void JoltC_HeightFieldShapeSettings_mUserData_Set(
  JoltC_HeightFieldShapeSettings_t * self,
  unsigned long long int mUserData
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
}

//endregion


#ifdef __cplusplus
}
#endif
