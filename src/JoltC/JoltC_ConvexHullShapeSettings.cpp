#include "JoltC/JPC_ConvexHullShapeSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_ConvexHullShapeSettings_t * JPC_ConvexHullShapeSettings_new() {
  JPC_ConvexHullShapeSettings_t * cInstance = new JPC_ConvexHullShapeSettings_t();
  ConvexHullShapeSettings * cppInstance = new ConvexHullShapeSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

unsigned long JPC_ConvexHullShapeSettings_GetRefCount(
  JPC_ConvexHullShapeSettings_t * self
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_ConvexHullShapeSettings_AddRef(
  JPC_ConvexHullShapeSettings_t * self
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_ConvexHullShapeSettings_Release(
  JPC_ConvexHullShapeSettings_t * self
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  
  selfCpp->Release();
};

JPC_Shape_ShapeResult_t * JPC_ConvexHullShapeSettings_Create(
  JPC_ConvexHullShapeSettings_t * self
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  Shape::ShapeResult resultValue = selfCpp->Create();
  Shape::ShapeResult* result = new Shape::ShapeResult(resultValue);
  return reinterpret_cast<JPC_Shape_ShapeResult_t *>(result);
};

void JPC_ConvexHullShapeSettings_ClearCachedResult(
  JPC_ConvexHullShapeSettings_t * self
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  
  selfCpp->ClearCachedResult();
};

//endregion functions

//region properties

JPC_ArrayVec3_t * JPC_ConvexHullShapeSettings_mPoints_Get(
  JPC_ConvexHullShapeSettings_t * self
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  ArrayVec3 resultValue = selfCpp->mPoints;
  ArrayVec3* result = new ArrayVec3(resultValue);
  return reinterpret_cast<JPC_ArrayVec3_t *>(result);
};

void JPC_ConvexHullShapeSettings_mPoints_Set(
  JPC_ConvexHullShapeSettings_t * self,
  JPC_ArrayVec3_t * mPoints
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  selfCpp->mPoints = *reinterpret_cast<ArrayVec3 *>(mPoints->obj);
};

float JPC_ConvexHullShapeSettings_mMaxConvexRadius_Get(
  JPC_ConvexHullShapeSettings_t * self
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  float result = selfCpp->mMaxConvexRadius;
  return result;
};

void JPC_ConvexHullShapeSettings_mMaxConvexRadius_Set(
  JPC_ConvexHullShapeSettings_t * self,
  float mMaxConvexRadius
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  selfCpp->mMaxConvexRadius = mMaxConvexRadius;
};

float JPC_ConvexHullShapeSettings_mMaxErrorConvexRadius_Get(
  JPC_ConvexHullShapeSettings_t * self
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  float result = selfCpp->mMaxErrorConvexRadius;
  return result;
};

void JPC_ConvexHullShapeSettings_mMaxErrorConvexRadius_Set(
  JPC_ConvexHullShapeSettings_t * self,
  float mMaxErrorConvexRadius
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  selfCpp->mMaxErrorConvexRadius = mMaxErrorConvexRadius;
};

float JPC_ConvexHullShapeSettings_mHullTolerance_Get(
  JPC_ConvexHullShapeSettings_t * self
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  float result = selfCpp->mHullTolerance;
  return result;
};

void JPC_ConvexHullShapeSettings_mHullTolerance_Set(
  JPC_ConvexHullShapeSettings_t * self,
  float mHullTolerance
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  selfCpp->mHullTolerance = mHullTolerance;
};

const JPC_PhysicsMaterial_t * JPC_ConvexHullShapeSettings_mMaterial_Get(
  JPC_ConvexHullShapeSettings_t * self
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  const PhysicsMaterial * result = selfCpp->mMaterial;
  return reinterpret_cast<const JPC_PhysicsMaterial_t *>(result);
};

const void JPC_ConvexHullShapeSettings_mMaterial_Set(
  JPC_ConvexHullShapeSettings_t * self,
  const JPC_PhysicsMaterial_t * mMaterial
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  selfCpp->mMaterial = reinterpret_cast<PhysicsMaterial *>(mMaterial->obj);
};

float JPC_ConvexHullShapeSettings_mDensity_Get(
  JPC_ConvexHullShapeSettings_t * self
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  float result = selfCpp->mDensity;
  return result;
};

void JPC_ConvexHullShapeSettings_mDensity_Set(
  JPC_ConvexHullShapeSettings_t * self,
  float mDensity
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  selfCpp->mDensity = mDensity;
};

unsigned long long int JPC_ConvexHullShapeSettings_mUserData_Get(
  JPC_ConvexHullShapeSettings_t * self
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  unsigned long long int result = selfCpp->mUserData;
  return result;
};

void JPC_ConvexHullShapeSettings_mUserData_Set(
  JPC_ConvexHullShapeSettings_t * self,
  unsigned long long int mUserData
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
};

//endregion properties

#ifdef __cplusplus
}
#endif

