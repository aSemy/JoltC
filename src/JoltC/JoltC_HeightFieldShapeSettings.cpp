#include "JoltC/JPC_HeightFieldShapeSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_HeightFieldShapeSettings_t * JPC_HeightFieldShapeSettings_new() {
  JPC_HeightFieldShapeSettings_t * cInstance = new JPC_HeightFieldShapeSettings_t();
  HeightFieldShapeSettings * cppInstance = new HeightFieldShapeSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

unsigned long JPC_HeightFieldShapeSettings_GetRefCount(
  JPC_HeightFieldShapeSettings_t * self
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_HeightFieldShapeSettings_AddRef(
  JPC_HeightFieldShapeSettings_t * self
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_HeightFieldShapeSettings_Release(
  JPC_HeightFieldShapeSettings_t * self
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  
  selfCpp->Release();
};

JPC_Shape_ShapeResult_t * JPC_HeightFieldShapeSettings_Create(
  JPC_HeightFieldShapeSettings_t * self
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  Shape::ShapeResult resultValue = selfCpp->Create();
  Shape::ShapeResult* result = new Shape::ShapeResult(resultValue);
  return reinterpret_cast<JPC_Shape_ShapeResult_t *>(result);
};

void JPC_HeightFieldShapeSettings_ClearCachedResult(
  JPC_HeightFieldShapeSettings_t * self
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  
  selfCpp->ClearCachedResult();
};

//endregion functions

//region properties

JPC_Vec3_t * JPC_HeightFieldShapeSettings_mOffset_Get(
  JPC_HeightFieldShapeSettings_t * self
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mOffset;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_HeightFieldShapeSettings_mOffset_Set(
  JPC_HeightFieldShapeSettings_t * self,
  JPC_Vec3_t * mOffset
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  selfCpp->mOffset = *reinterpret_cast<Vec3 *>(mOffset->obj);
};

JPC_Vec3_t * JPC_HeightFieldShapeSettings_mScale_Get(
  JPC_HeightFieldShapeSettings_t * self
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mScale;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_HeightFieldShapeSettings_mScale_Set(
  JPC_HeightFieldShapeSettings_t * self,
  JPC_Vec3_t * mScale
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  selfCpp->mScale = *reinterpret_cast<Vec3 *>(mScale->obj);
};

long JPC_HeightFieldShapeSettings_mSampleCount_Get(
  JPC_HeightFieldShapeSettings_t * self
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  long result = selfCpp->mSampleCount;
  return result;
};

void JPC_HeightFieldShapeSettings_mSampleCount_Set(
  JPC_HeightFieldShapeSettings_t * self,
  long mSampleCount
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  selfCpp->mSampleCount = mSampleCount;
};

float JPC_HeightFieldShapeSettings_mMinHeightValue_Get(
  JPC_HeightFieldShapeSettings_t * self
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  float result = selfCpp->mMinHeightValue;
  return result;
};

void JPC_HeightFieldShapeSettings_mMinHeightValue_Set(
  JPC_HeightFieldShapeSettings_t * self,
  float mMinHeightValue
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  selfCpp->mMinHeightValue = mMinHeightValue;
};

float JPC_HeightFieldShapeSettings_mMaxHeightValue_Get(
  JPC_HeightFieldShapeSettings_t * self
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  float result = selfCpp->mMaxHeightValue;
  return result;
};

void JPC_HeightFieldShapeSettings_mMaxHeightValue_Set(
  JPC_HeightFieldShapeSettings_t * self,
  float mMaxHeightValue
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  selfCpp->mMaxHeightValue = mMaxHeightValue;
};

long JPC_HeightFieldShapeSettings_mBlockSize_Get(
  JPC_HeightFieldShapeSettings_t * self
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  long result = selfCpp->mBlockSize;
  return result;
};

void JPC_HeightFieldShapeSettings_mBlockSize_Set(
  JPC_HeightFieldShapeSettings_t * self,
  long mBlockSize
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  selfCpp->mBlockSize = mBlockSize;
};

long JPC_HeightFieldShapeSettings_mBitsPerSample_Get(
  JPC_HeightFieldShapeSettings_t * self
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  long result = selfCpp->mBitsPerSample;
  return result;
};

void JPC_HeightFieldShapeSettings_mBitsPerSample_Set(
  JPC_HeightFieldShapeSettings_t * self,
  long mBitsPerSample
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  selfCpp->mBitsPerSample = mBitsPerSample;
};

JPC_ArrayFloat_t * JPC_HeightFieldShapeSettings_mHeightSamples_Get(
  JPC_HeightFieldShapeSettings_t * self
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  ArrayFloat resultValue = selfCpp->mHeightSamples;
  ArrayFloat* result = new ArrayFloat(resultValue);
  return reinterpret_cast<JPC_ArrayFloat_t *>(result);
};

void JPC_HeightFieldShapeSettings_mHeightSamples_Set(
  JPC_HeightFieldShapeSettings_t * self,
  JPC_ArrayFloat_t * mHeightSamples
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  selfCpp->mHeightSamples = *reinterpret_cast<ArrayFloat *>(mHeightSamples->obj);
};

JPC_ArrayUint8_t * JPC_HeightFieldShapeSettings_mMaterialIndices_Get(
  JPC_HeightFieldShapeSettings_t * self
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  ArrayUint8 resultValue = selfCpp->mMaterialIndices;
  ArrayUint8* result = new ArrayUint8(resultValue);
  return reinterpret_cast<JPC_ArrayUint8_t *>(result);
};

void JPC_HeightFieldShapeSettings_mMaterialIndices_Set(
  JPC_HeightFieldShapeSettings_t * self,
  JPC_ArrayUint8_t * mMaterialIndices
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  selfCpp->mMaterialIndices = *reinterpret_cast<ArrayUint8 *>(mMaterialIndices->obj);
};

JPC_PhysicsMaterialList_t * JPC_HeightFieldShapeSettings_mMaterials_Get(
  JPC_HeightFieldShapeSettings_t * self
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  PhysicsMaterialList resultValue = selfCpp->mMaterials;
  PhysicsMaterialList* result = new PhysicsMaterialList(resultValue);
  return reinterpret_cast<JPC_PhysicsMaterialList_t *>(result);
};

void JPC_HeightFieldShapeSettings_mMaterials_Set(
  JPC_HeightFieldShapeSettings_t * self,
  JPC_PhysicsMaterialList_t * mMaterials
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  selfCpp->mMaterials = *reinterpret_cast<PhysicsMaterialList *>(mMaterials->obj);
};

float JPC_HeightFieldShapeSettings_mActiveEdgeCosThresholdAngle_Get(
  JPC_HeightFieldShapeSettings_t * self
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  float result = selfCpp->mActiveEdgeCosThresholdAngle;
  return result;
};

void JPC_HeightFieldShapeSettings_mActiveEdgeCosThresholdAngle_Set(
  JPC_HeightFieldShapeSettings_t * self,
  float mActiveEdgeCosThresholdAngle
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  selfCpp->mActiveEdgeCosThresholdAngle = mActiveEdgeCosThresholdAngle;
};

unsigned long long int JPC_HeightFieldShapeSettings_mUserData_Get(
  JPC_HeightFieldShapeSettings_t * self
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  unsigned long long int result = selfCpp->mUserData;
  return result;
};

void JPC_HeightFieldShapeSettings_mUserData_Set(
  JPC_HeightFieldShapeSettings_t * self,
  unsigned long long int mUserData
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
};

//endregion properties

#ifdef __cplusplus
}
#endif

