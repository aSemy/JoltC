#include "JoltC/JoltC_SphereShapeSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SphereShapeSettings_t * JoltC_SphereShapeSettings_new(
  float inRadius,
  JoltC_PhysicsMaterial_t * inMaterial
) {
  JoltC_SphereShapeSettings_t * cInstance = new JoltC_SphereShapeSettings_t();
  SphereShapeSettings * cppInstance = new SphereShapeSettings(
    inRadius,
    reinterpret_cast<PhysicsMaterial *>(inMaterial->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

unsigned long JoltC_SphereShapeSettings_GetRefCount(
  JoltC_SphereShapeSettings_t * self
) {
  SphereShapeSettings * selfCpp = static_cast<SphereShapeSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_SphereShapeSettings_AddRef(
  JoltC_SphereShapeSettings_t * self
) {
  SphereShapeSettings * selfCpp = static_cast<SphereShapeSettings *>(self->obj);
  
  selfCpp->AddRef();
};

void JoltC_SphereShapeSettings_Release(
  JoltC_SphereShapeSettings_t * self
) {
  SphereShapeSettings * selfCpp = static_cast<SphereShapeSettings *>(self->obj);
  
  selfCpp->Release();
};

JoltC_Shape_ShapeResult_t * JoltC_SphereShapeSettings_Create(
  JoltC_SphereShapeSettings_t * self
) {
  SphereShapeSettings * selfCpp = static_cast<SphereShapeSettings *>(self->obj);
  static Shape::ShapeResult resultValue = selfCpp->Create();
  JoltC_Shape_ShapeResult_t* result = new JoltC_Shape_ShapeResult_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_SphereShapeSettings_ClearCachedResult(
  JoltC_SphereShapeSettings_t * self
) {
  SphereShapeSettings * selfCpp = static_cast<SphereShapeSettings *>(self->obj);
  
  selfCpp->ClearCachedResult();
};

//endregion

//region properties

float JoltC_SphereShapeSettings_mRadius_Get(
  JoltC_SphereShapeSettings_t * self
) {
  SphereShapeSettings * selfCpp = static_cast<SphereShapeSettings *>(self->obj);
  float result = selfCpp->mRadius;
  return result;
};

void JoltC_SphereShapeSettings_mRadius_Set(
  JoltC_SphereShapeSettings_t * self,
  float mRadius
) {
  SphereShapeSettings * selfCpp = static_cast<SphereShapeSettings *>(self->obj);
  selfCpp->mRadius = mRadius;
};

JoltC_PhysicsMaterial_t * JoltC_SphereShapeSettings_mMaterial_Get(
  JoltC_SphereShapeSettings_t * self
) {
  SphereShapeSettings * selfCpp = static_cast<SphereShapeSettings *>(self->obj);
  const PhysicsMaterial * resultValue = selfCpp->mMaterial;
  JoltC_PhysicsMaterial_t* result = new JoltC_PhysicsMaterial_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_SphereShapeSettings_mMaterial_Set(
  JoltC_SphereShapeSettings_t * self,
  JoltC_PhysicsMaterial_t * mMaterial
) {
  SphereShapeSettings * selfCpp = static_cast<SphereShapeSettings *>(self->obj);
  selfCpp->mMaterial = reinterpret_cast<PhysicsMaterial *>(mMaterial->obj);
};

float JoltC_SphereShapeSettings_mDensity_Get(
  JoltC_SphereShapeSettings_t * self
) {
  SphereShapeSettings * selfCpp = static_cast<SphereShapeSettings *>(self->obj);
  float result = selfCpp->mDensity;
  return result;
};

void JoltC_SphereShapeSettings_mDensity_Set(
  JoltC_SphereShapeSettings_t * self,
  float mDensity
) {
  SphereShapeSettings * selfCpp = static_cast<SphereShapeSettings *>(self->obj);
  selfCpp->mDensity = mDensity;
};

unsigned long long int JoltC_SphereShapeSettings_mUserData_Get(
  JoltC_SphereShapeSettings_t * self
) {
  SphereShapeSettings * selfCpp = static_cast<SphereShapeSettings *>(self->obj);
  unsigned long long int result = selfCpp->mUserData;
  return result;
};

void JoltC_SphereShapeSettings_mUserData_Set(
  JoltC_SphereShapeSettings_t * self,
  unsigned long long int mUserData
) {
  SphereShapeSettings * selfCpp = static_cast<SphereShapeSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
};

//endregion

#ifdef __cplusplus
}
#endif

