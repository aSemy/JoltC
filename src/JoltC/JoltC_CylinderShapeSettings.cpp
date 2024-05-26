#include "JoltC/JoltC_CylinderShapeSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CylinderShapeSettings_t * JoltC_CylinderShapeSettings_new(
  float inHalfHeight,
  float inRadius,
  float inConvexRadius,
  JoltC_PhysicsMaterial_t * inMaterial
) {
  JoltC_CylinderShapeSettings_t * cInstance = new JoltC_CylinderShapeSettings_t();
  CylinderShapeSettings * cppInstance = new CylinderShapeSettings(
    inHalfHeight,
    inRadius,
    inConvexRadius,
    reinterpret_cast<PhysicsMaterial *>(inMaterial->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

unsigned long JoltC_CylinderShapeSettings_GetRefCount(
  JoltC_CylinderShapeSettings_t * self
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_CylinderShapeSettings_AddRef(
  JoltC_CylinderShapeSettings_t * self
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  
  selfCpp->AddRef();
};

void JoltC_CylinderShapeSettings_Release(
  JoltC_CylinderShapeSettings_t * self
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  
  selfCpp->Release();
};

JoltC_Shape_ShapeResult_t * JoltC_CylinderShapeSettings_Create(
  JoltC_CylinderShapeSettings_t * self
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  static Shape::ShapeResult resultValue = selfCpp->Create();
  JoltC_Shape_ShapeResult_t* result = new JoltC_Shape_ShapeResult_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_CylinderShapeSettings_ClearCachedResult(
  JoltC_CylinderShapeSettings_t * self
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  
  selfCpp->ClearCachedResult();
};

//endregion

//region properties

float JoltC_CylinderShapeSettings_mHalfHeight_Get(
  JoltC_CylinderShapeSettings_t * self
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  float result = selfCpp->mHalfHeight;
  return result;
};

void JoltC_CylinderShapeSettings_mHalfHeight_Set(
  JoltC_CylinderShapeSettings_t * self,
  float mHalfHeight
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  selfCpp->mHalfHeight = mHalfHeight;
};

float JoltC_CylinderShapeSettings_mRadius_Get(
  JoltC_CylinderShapeSettings_t * self
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  float result = selfCpp->mRadius;
  return result;
};

void JoltC_CylinderShapeSettings_mRadius_Set(
  JoltC_CylinderShapeSettings_t * self,
  float mRadius
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  selfCpp->mRadius = mRadius;
};

float JoltC_CylinderShapeSettings_mConvexRadius_Get(
  JoltC_CylinderShapeSettings_t * self
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  float result = selfCpp->mConvexRadius;
  return result;
};

void JoltC_CylinderShapeSettings_mConvexRadius_Set(
  JoltC_CylinderShapeSettings_t * self,
  float mConvexRadius
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  selfCpp->mConvexRadius = mConvexRadius;
};

JoltC_PhysicsMaterial_t * JoltC_CylinderShapeSettings_mMaterial_Get(
  JoltC_CylinderShapeSettings_t * self
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  const PhysicsMaterial * resultValue = selfCpp->mMaterial;
  JoltC_PhysicsMaterial_t* result = new JoltC_PhysicsMaterial_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_CylinderShapeSettings_mMaterial_Set(
  JoltC_CylinderShapeSettings_t * self,
  JoltC_PhysicsMaterial_t * mMaterial
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  selfCpp->mMaterial = reinterpret_cast<PhysicsMaterial *>(mMaterial->obj);
};

float JoltC_CylinderShapeSettings_mDensity_Get(
  JoltC_CylinderShapeSettings_t * self
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  float result = selfCpp->mDensity;
  return result;
};

void JoltC_CylinderShapeSettings_mDensity_Set(
  JoltC_CylinderShapeSettings_t * self,
  float mDensity
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  selfCpp->mDensity = mDensity;
};

unsigned long long int JoltC_CylinderShapeSettings_mUserData_Get(
  JoltC_CylinderShapeSettings_t * self
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  unsigned long long int result = selfCpp->mUserData;
  return result;
};

void JoltC_CylinderShapeSettings_mUserData_Set(
  JoltC_CylinderShapeSettings_t * self,
  unsigned long long int mUserData
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
};

//endregion

#ifdef __cplusplus
}
#endif

