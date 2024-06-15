#include "JoltC/JoltC_CylinderShapeSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `CylinderShapeSettings` instance.
 */
JoltC_CylinderShapeSettings_t * JoltC_CylinderShapeSettings_new(
  float inHalfHeight,
  float inRadius,
  float inConvexRadius,
  JoltC_PhysicsMaterial_t * inMaterial
) {
  const PhysicsMaterial * inMaterialCpp = static_cast<const PhysicsMaterial *>(inMaterial->obj);
  JoltC_CylinderShapeSettings_t * cInstance = new JoltC_CylinderShapeSettings_t();
  CylinderShapeSettings * cppInstance = new CylinderShapeSettings(
    inHalfHeight,
    inRadius,
    inConvexRadius,
    inMaterialCpp
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_CylinderShapeSettings_destroy(
  JoltC_CylinderShapeSettings_t * self
){
  if (self == NULL) return;
  delete static_cast<CylinderShapeSettings *>(self->obj);
  free(self);
}

//endregion
//region functions

unsigned long JoltC_CylinderShapeSettings_GetRefCount(
  JoltC_CylinderShapeSettings_t * self
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_CylinderShapeSettings_AddRef(
  JoltC_CylinderShapeSettings_t * self
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_CylinderShapeSettings_Release(
  JoltC_CylinderShapeSettings_t * self
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  selfCpp->Release();
}

JoltC_Shape_ShapeResult_t * JoltC_CylinderShapeSettings_Create(
  JoltC_CylinderShapeSettings_t * self
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  Shape::ShapeResult * resultPtr = new Shape::ShapeResult();
  *resultPtr = selfCpp->Create();
  JoltC_Shape_ShapeResult_t * result = new JoltC_Shape_ShapeResult_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_CylinderShapeSettings_ClearCachedResult(
  JoltC_CylinderShapeSettings_t * self
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  selfCpp->ClearCachedResult();
}

//endregion

//region properties

float JoltC_CylinderShapeSettings_mHalfHeight_Get(
  JoltC_CylinderShapeSettings_t * self
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  return selfCpp->mHalfHeight;
}

void JoltC_CylinderShapeSettings_mHalfHeight_Set(
  JoltC_CylinderShapeSettings_t * self,
  float mHalfHeight
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  selfCpp->mHalfHeight = mHalfHeight;
}

float JoltC_CylinderShapeSettings_mRadius_Get(
  JoltC_CylinderShapeSettings_t * self
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  return selfCpp->mRadius;
}

void JoltC_CylinderShapeSettings_mRadius_Set(
  JoltC_CylinderShapeSettings_t * self,
  float mRadius
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  selfCpp->mRadius = mRadius;
}

float JoltC_CylinderShapeSettings_mConvexRadius_Get(
  JoltC_CylinderShapeSettings_t * self
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  return selfCpp->mConvexRadius;
}

void JoltC_CylinderShapeSettings_mConvexRadius_Set(
  JoltC_CylinderShapeSettings_t * self,
  float mConvexRadius
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  selfCpp->mConvexRadius = mConvexRadius;
}

JoltC_PhysicsMaterial_t * JoltC_CylinderShapeSettings_mMaterial_Get(
  JoltC_CylinderShapeSettings_t * self
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  const PhysicsMaterial * resultPtr = selfCpp->mMaterial;
  JoltC_PhysicsMaterial_t * result = new JoltC_PhysicsMaterial_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

void JoltC_CylinderShapeSettings_mMaterial_Set(
  JoltC_CylinderShapeSettings_t * self,
  JoltC_PhysicsMaterial_t * mMaterial
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  selfCpp->mMaterial = static_cast<const PhysicsMaterial *>(mMaterial->obj);
}

float JoltC_CylinderShapeSettings_mDensity_Get(
  JoltC_CylinderShapeSettings_t * self
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  return selfCpp->mDensity;
}

void JoltC_CylinderShapeSettings_mDensity_Set(
  JoltC_CylinderShapeSettings_t * self,
  float mDensity
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  selfCpp->mDensity = mDensity;
}

unsigned long long int JoltC_CylinderShapeSettings_mUserData_Get(
  JoltC_CylinderShapeSettings_t * self
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  return selfCpp->mUserData;
}

void JoltC_CylinderShapeSettings_mUserData_Set(
  JoltC_CylinderShapeSettings_t * self,
  unsigned long long int mUserData
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
}

//endregion


#ifdef __cplusplus
}
#endif
