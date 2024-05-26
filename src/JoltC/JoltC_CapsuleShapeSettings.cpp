#include "JoltC/JoltC_CapsuleShapeSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CapsuleShapeSettings_t * JoltC_CapsuleShapeSettings_new(
  float inHalfHeight,
  float inRadius,
  JoltC_PhysicsMaterial_t * inMaterial
) {
  JoltC_CapsuleShapeSettings_t * cInstance = new JoltC_CapsuleShapeSettings_t();
  CapsuleShapeSettings * cppInstance = new CapsuleShapeSettings(
    inHalfHeight,
    inRadius,
    reinterpret_cast<PhysicsMaterial *>(inMaterial->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

unsigned long JoltC_CapsuleShapeSettings_GetRefCount(
  JoltC_CapsuleShapeSettings_t * self
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_CapsuleShapeSettings_AddRef(
  JoltC_CapsuleShapeSettings_t * self
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  
  selfCpp->AddRef();
};

void JoltC_CapsuleShapeSettings_Release(
  JoltC_CapsuleShapeSettings_t * self
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  
  selfCpp->Release();
};

JoltC_Shape_ShapeResult_t * JoltC_CapsuleShapeSettings_Create(
  JoltC_CapsuleShapeSettings_t * self
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  static Shape::ShapeResult resultValue = selfCpp->Create();
  JoltC_Shape_ShapeResult_t* result = new JoltC_Shape_ShapeResult_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_CapsuleShapeSettings_ClearCachedResult(
  JoltC_CapsuleShapeSettings_t * self
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  
  selfCpp->ClearCachedResult();
};

//endregion

//region properties

float JoltC_CapsuleShapeSettings_mRadius_Get(
  JoltC_CapsuleShapeSettings_t * self
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  float result = selfCpp->mRadius;
  return result;
};

void JoltC_CapsuleShapeSettings_mRadius_Set(
  JoltC_CapsuleShapeSettings_t * self,
  float mRadius
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  selfCpp->mRadius = mRadius;
};

float JoltC_CapsuleShapeSettings_mHalfHeightOfCylinder_Get(
  JoltC_CapsuleShapeSettings_t * self
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  float result = selfCpp->mHalfHeightOfCylinder;
  return result;
};

void JoltC_CapsuleShapeSettings_mHalfHeightOfCylinder_Set(
  JoltC_CapsuleShapeSettings_t * self,
  float mHalfHeightOfCylinder
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  selfCpp->mHalfHeightOfCylinder = mHalfHeightOfCylinder;
};

JoltC_PhysicsMaterial_t * JoltC_CapsuleShapeSettings_mMaterial_Get(
  JoltC_CapsuleShapeSettings_t * self
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  const PhysicsMaterial * resultValue = selfCpp->mMaterial;
  JoltC_PhysicsMaterial_t* result = new JoltC_PhysicsMaterial_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_CapsuleShapeSettings_mMaterial_Set(
  JoltC_CapsuleShapeSettings_t * self,
  JoltC_PhysicsMaterial_t * mMaterial
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  selfCpp->mMaterial = reinterpret_cast<PhysicsMaterial *>(mMaterial->obj);
};

float JoltC_CapsuleShapeSettings_mDensity_Get(
  JoltC_CapsuleShapeSettings_t * self
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  float result = selfCpp->mDensity;
  return result;
};

void JoltC_CapsuleShapeSettings_mDensity_Set(
  JoltC_CapsuleShapeSettings_t * self,
  float mDensity
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  selfCpp->mDensity = mDensity;
};

unsigned long long int JoltC_CapsuleShapeSettings_mUserData_Get(
  JoltC_CapsuleShapeSettings_t * self
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  unsigned long long int result = selfCpp->mUserData;
  return result;
};

void JoltC_CapsuleShapeSettings_mUserData_Set(
  JoltC_CapsuleShapeSettings_t * self,
  unsigned long long int mUserData
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
};

//endregion

#ifdef __cplusplus
}
#endif

