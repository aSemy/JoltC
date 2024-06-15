#include "JoltC/JoltC_ConvexHullShapeSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `ConvexHullShapeSettings` instance.
 */
JoltC_ConvexHullShapeSettings_t * JoltC_ConvexHullShapeSettings_new() {
  JoltC_ConvexHullShapeSettings_t * cInstance = new JoltC_ConvexHullShapeSettings_t();
  ConvexHullShapeSettings * cppInstance = new ConvexHullShapeSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_ConvexHullShapeSettings_destroy(
  JoltC_ConvexHullShapeSettings_t * self
){
  if (self == NULL) return;
  delete static_cast<ConvexHullShapeSettings *>(self->obj);
  free(self);
}

//endregion
//region functions

unsigned long JoltC_ConvexHullShapeSettings_GetRefCount(
  JoltC_ConvexHullShapeSettings_t * self
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_ConvexHullShapeSettings_AddRef(
  JoltC_ConvexHullShapeSettings_t * self
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_ConvexHullShapeSettings_Release(
  JoltC_ConvexHullShapeSettings_t * self
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  selfCpp->Release();
}

JoltC_Shape_ShapeResult_t * JoltC_ConvexHullShapeSettings_Create(
  JoltC_ConvexHullShapeSettings_t * self
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  Shape::ShapeResult * resultPtr = new Shape::ShapeResult();
  *resultPtr = selfCpp->Create();
  JoltC_Shape_ShapeResult_t * result = new JoltC_Shape_ShapeResult_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_ConvexHullShapeSettings_ClearCachedResult(
  JoltC_ConvexHullShapeSettings_t * self
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  selfCpp->ClearCachedResult();
}

//endregion

//region properties

JoltC_ArrayVec3_t * JoltC_ConvexHullShapeSettings_mPoints_Get(
  JoltC_ConvexHullShapeSettings_t * self
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  ArrayVec3 * resultPtr = new ArrayVec3();
  *resultPtr = selfCpp->mPoints;
  JoltC_ArrayVec3_t * result = new JoltC_ArrayVec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_ConvexHullShapeSettings_mPoints_Set(
  JoltC_ConvexHullShapeSettings_t * self,
  JoltC_ArrayVec3_t * mPoints
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  selfCpp->mPoints = *static_cast<ArrayVec3 *>(mPoints->obj);
}

float JoltC_ConvexHullShapeSettings_mMaxConvexRadius_Get(
  JoltC_ConvexHullShapeSettings_t * self
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  return selfCpp->mMaxConvexRadius;
}

void JoltC_ConvexHullShapeSettings_mMaxConvexRadius_Set(
  JoltC_ConvexHullShapeSettings_t * self,
  float mMaxConvexRadius
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  selfCpp->mMaxConvexRadius = mMaxConvexRadius;
}

float JoltC_ConvexHullShapeSettings_mMaxErrorConvexRadius_Get(
  JoltC_ConvexHullShapeSettings_t * self
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  return selfCpp->mMaxErrorConvexRadius;
}

void JoltC_ConvexHullShapeSettings_mMaxErrorConvexRadius_Set(
  JoltC_ConvexHullShapeSettings_t * self,
  float mMaxErrorConvexRadius
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  selfCpp->mMaxErrorConvexRadius = mMaxErrorConvexRadius;
}

float JoltC_ConvexHullShapeSettings_mHullTolerance_Get(
  JoltC_ConvexHullShapeSettings_t * self
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  return selfCpp->mHullTolerance;
}

void JoltC_ConvexHullShapeSettings_mHullTolerance_Set(
  JoltC_ConvexHullShapeSettings_t * self,
  float mHullTolerance
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  selfCpp->mHullTolerance = mHullTolerance;
}

JoltC_PhysicsMaterial_t * JoltC_ConvexHullShapeSettings_mMaterial_Get(
  JoltC_ConvexHullShapeSettings_t * self
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  const PhysicsMaterial * resultPtr = selfCpp->mMaterial;
  JoltC_PhysicsMaterial_t * result = new JoltC_PhysicsMaterial_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

void JoltC_ConvexHullShapeSettings_mMaterial_Set(
  JoltC_ConvexHullShapeSettings_t * self,
  JoltC_PhysicsMaterial_t * mMaterial
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  selfCpp->mMaterial = static_cast<const PhysicsMaterial *>(mMaterial->obj);
}

float JoltC_ConvexHullShapeSettings_mDensity_Get(
  JoltC_ConvexHullShapeSettings_t * self
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  return selfCpp->mDensity;
}

void JoltC_ConvexHullShapeSettings_mDensity_Set(
  JoltC_ConvexHullShapeSettings_t * self,
  float mDensity
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  selfCpp->mDensity = mDensity;
}

unsigned long long int JoltC_ConvexHullShapeSettings_mUserData_Get(
  JoltC_ConvexHullShapeSettings_t * self
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  return selfCpp->mUserData;
}

void JoltC_ConvexHullShapeSettings_mUserData_Set(
  JoltC_ConvexHullShapeSettings_t * self,
  unsigned long long int mUserData
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
}

//endregion


#ifdef __cplusplus
}
#endif
