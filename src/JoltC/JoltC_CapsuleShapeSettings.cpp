#include "JoltC/JoltC_CapsuleShapeSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `CapsuleShapeSettings` instance.
 */
JoltC_CapsuleShapeSettings_t * JoltC_CapsuleShapeSettings_new(
  float inHalfHeight,
  float inRadius,
  JoltC_PhysicsMaterial_t * inMaterial
) {
  const PhysicsMaterial * inMaterialCpp = static_cast<const PhysicsMaterial *>(inMaterial->obj);
  JoltC_CapsuleShapeSettings_t * cInstance = new JoltC_CapsuleShapeSettings_t();
  CapsuleShapeSettings * cppInstance = new CapsuleShapeSettings(
    inHalfHeight,
    inRadius,
    inMaterialCpp
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_CapsuleShapeSettings_destroy(
  JoltC_CapsuleShapeSettings_t * self
){
  if (self == NULL) return;
  delete static_cast<CapsuleShapeSettings *>(self->obj);
  free(self);
}

//endregion
//region functions

unsigned long JoltC_CapsuleShapeSettings_GetRefCount(
  JoltC_CapsuleShapeSettings_t * self
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_CapsuleShapeSettings_AddRef(
  JoltC_CapsuleShapeSettings_t * self
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_CapsuleShapeSettings_Release(
  JoltC_CapsuleShapeSettings_t * self
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  selfCpp->Release();
}

JoltC_Shape_ShapeResult_t * JoltC_CapsuleShapeSettings_Create(
  JoltC_CapsuleShapeSettings_t * self
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  Shape::ShapeResult * resultPtr = new Shape::ShapeResult();
  *resultPtr = selfCpp->Create();
  JoltC_Shape_ShapeResult_t * result = new JoltC_Shape_ShapeResult_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_CapsuleShapeSettings_ClearCachedResult(
  JoltC_CapsuleShapeSettings_t * self
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  selfCpp->ClearCachedResult();
}

//endregion

//region properties

float JoltC_CapsuleShapeSettings_mRadius_Get(
  JoltC_CapsuleShapeSettings_t * self
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  return selfCpp->mRadius;
}

void JoltC_CapsuleShapeSettings_mRadius_Set(
  JoltC_CapsuleShapeSettings_t * self,
  float mRadius
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  selfCpp->mRadius = mRadius;
}

float JoltC_CapsuleShapeSettings_mHalfHeightOfCylinder_Get(
  JoltC_CapsuleShapeSettings_t * self
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  return selfCpp->mHalfHeightOfCylinder;
}

void JoltC_CapsuleShapeSettings_mHalfHeightOfCylinder_Set(
  JoltC_CapsuleShapeSettings_t * self,
  float mHalfHeightOfCylinder
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  selfCpp->mHalfHeightOfCylinder = mHalfHeightOfCylinder;
}

JoltC_PhysicsMaterial_t * JoltC_CapsuleShapeSettings_mMaterial_Get(
  JoltC_CapsuleShapeSettings_t * self
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  const PhysicsMaterial * resultPtr = selfCpp->mMaterial;
  JoltC_PhysicsMaterial_t * result = new JoltC_PhysicsMaterial_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

void JoltC_CapsuleShapeSettings_mMaterial_Set(
  JoltC_CapsuleShapeSettings_t * self,
  JoltC_PhysicsMaterial_t * mMaterial
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  selfCpp->mMaterial = static_cast<const PhysicsMaterial *>(mMaterial->obj);
}

float JoltC_CapsuleShapeSettings_mDensity_Get(
  JoltC_CapsuleShapeSettings_t * self
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  return selfCpp->mDensity;
}

void JoltC_CapsuleShapeSettings_mDensity_Set(
  JoltC_CapsuleShapeSettings_t * self,
  float mDensity
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  selfCpp->mDensity = mDensity;
}

unsigned long long int JoltC_CapsuleShapeSettings_mUserData_Get(
  JoltC_CapsuleShapeSettings_t * self
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  return selfCpp->mUserData;
}

void JoltC_CapsuleShapeSettings_mUserData_Set(
  JoltC_CapsuleShapeSettings_t * self,
  unsigned long long int mUserData
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
}

//endregion


#ifdef __cplusplus
}
#endif
