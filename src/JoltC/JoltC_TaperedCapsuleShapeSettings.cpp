#include "JoltC/JoltC_TaperedCapsuleShapeSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `TaperedCapsuleShapeSettings` instance.
 */
JoltC_TaperedCapsuleShapeSettings_t * JoltC_TaperedCapsuleShapeSettings_new(
  float inHalfHeightOfTaperedCylinder,
  float inTopRadius,
  float inBottomRadius,
  JoltC_PhysicsMaterial_t * inMaterial
) {
  const PhysicsMaterial * inMaterialCpp = static_cast<const PhysicsMaterial *>(inMaterial->obj);
  JoltC_TaperedCapsuleShapeSettings_t * cInstance = new JoltC_TaperedCapsuleShapeSettings_t();
  TaperedCapsuleShapeSettings * cppInstance = new TaperedCapsuleShapeSettings(
    inHalfHeightOfTaperedCylinder,
    inTopRadius,
    inBottomRadius,
    inMaterialCpp
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

unsigned long JoltC_TaperedCapsuleShapeSettings_GetRefCount(
  JoltC_TaperedCapsuleShapeSettings_t * self
) {
  TaperedCapsuleShapeSettings * selfCpp = static_cast<TaperedCapsuleShapeSettings *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_TaperedCapsuleShapeSettings_AddRef(
  JoltC_TaperedCapsuleShapeSettings_t * self
) {
  TaperedCapsuleShapeSettings * selfCpp = static_cast<TaperedCapsuleShapeSettings *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_TaperedCapsuleShapeSettings_Release(
  JoltC_TaperedCapsuleShapeSettings_t * self
) {
  TaperedCapsuleShapeSettings * selfCpp = static_cast<TaperedCapsuleShapeSettings *>(self->obj);
  selfCpp->Release();
}

JoltC_Shape_ShapeResult_t * JoltC_TaperedCapsuleShapeSettings_Create(
  JoltC_TaperedCapsuleShapeSettings_t * self
) {
  TaperedCapsuleShapeSettings * selfCpp = static_cast<TaperedCapsuleShapeSettings *>(self->obj);
  Shape::ShapeResult * resultPtr = new Shape::ShapeResult();
  *resultPtr = selfCpp->Create();
  JoltC_Shape_ShapeResult_t * result = new JoltC_Shape_ShapeResult_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_TaperedCapsuleShapeSettings_ClearCachedResult(
  JoltC_TaperedCapsuleShapeSettings_t * self
) {
  TaperedCapsuleShapeSettings * selfCpp = static_cast<TaperedCapsuleShapeSettings *>(self->obj);
  selfCpp->ClearCachedResult();
}

//endregion

//region properties

float JoltC_TaperedCapsuleShapeSettings_mHalfHeightOfTaperedCylinder_Get(
  JoltC_TaperedCapsuleShapeSettings_t * self
) {
  TaperedCapsuleShapeSettings * selfCpp = static_cast<TaperedCapsuleShapeSettings *>(self->obj);
  return selfCpp->mHalfHeightOfTaperedCylinder;
}

void JoltC_TaperedCapsuleShapeSettings_mHalfHeightOfTaperedCylinder_Set(
  JoltC_TaperedCapsuleShapeSettings_t * self,
  float mHalfHeightOfTaperedCylinder
) {
  TaperedCapsuleShapeSettings * selfCpp = static_cast<TaperedCapsuleShapeSettings *>(self->obj);
  selfCpp->mHalfHeightOfTaperedCylinder = mHalfHeightOfTaperedCylinder;
};

float JoltC_TaperedCapsuleShapeSettings_mTopRadius_Get(
  JoltC_TaperedCapsuleShapeSettings_t * self
) {
  TaperedCapsuleShapeSettings * selfCpp = static_cast<TaperedCapsuleShapeSettings *>(self->obj);
  return selfCpp->mTopRadius;
}

void JoltC_TaperedCapsuleShapeSettings_mTopRadius_Set(
  JoltC_TaperedCapsuleShapeSettings_t * self,
  float mTopRadius
) {
  TaperedCapsuleShapeSettings * selfCpp = static_cast<TaperedCapsuleShapeSettings *>(self->obj);
  selfCpp->mTopRadius = mTopRadius;
};

float JoltC_TaperedCapsuleShapeSettings_mBottomRadius_Get(
  JoltC_TaperedCapsuleShapeSettings_t * self
) {
  TaperedCapsuleShapeSettings * selfCpp = static_cast<TaperedCapsuleShapeSettings *>(self->obj);
  return selfCpp->mBottomRadius;
}

void JoltC_TaperedCapsuleShapeSettings_mBottomRadius_Set(
  JoltC_TaperedCapsuleShapeSettings_t * self,
  float mBottomRadius
) {
  TaperedCapsuleShapeSettings * selfCpp = static_cast<TaperedCapsuleShapeSettings *>(self->obj);
  selfCpp->mBottomRadius = mBottomRadius;
};

JoltC_PhysicsMaterial_t * JoltC_TaperedCapsuleShapeSettings_mMaterial_Get(
  JoltC_TaperedCapsuleShapeSettings_t * self
) {
  TaperedCapsuleShapeSettings * selfCpp = static_cast<TaperedCapsuleShapeSettings *>(self->obj);
  const PhysicsMaterial * resultPtr = selfCpp->mMaterial;
  JoltC_PhysicsMaterial_t * result = new JoltC_PhysicsMaterial_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

void JoltC_TaperedCapsuleShapeSettings_mMaterial_Set(
  JoltC_TaperedCapsuleShapeSettings_t * self,
  JoltC_PhysicsMaterial_t * mMaterial
) {
  TaperedCapsuleShapeSettings * selfCpp = static_cast<TaperedCapsuleShapeSettings *>(self->obj);
  selfCpp->mMaterial = static_cast<const PhysicsMaterial *>(mMaterial->obj);
};

float JoltC_TaperedCapsuleShapeSettings_mDensity_Get(
  JoltC_TaperedCapsuleShapeSettings_t * self
) {
  TaperedCapsuleShapeSettings * selfCpp = static_cast<TaperedCapsuleShapeSettings *>(self->obj);
  return selfCpp->mDensity;
}

void JoltC_TaperedCapsuleShapeSettings_mDensity_Set(
  JoltC_TaperedCapsuleShapeSettings_t * self,
  float mDensity
) {
  TaperedCapsuleShapeSettings * selfCpp = static_cast<TaperedCapsuleShapeSettings *>(self->obj);
  selfCpp->mDensity = mDensity;
};

unsigned long long int JoltC_TaperedCapsuleShapeSettings_mUserData_Get(
  JoltC_TaperedCapsuleShapeSettings_t * self
) {
  TaperedCapsuleShapeSettings * selfCpp = static_cast<TaperedCapsuleShapeSettings *>(self->obj);
  return selfCpp->mUserData;
}

void JoltC_TaperedCapsuleShapeSettings_mUserData_Set(
  JoltC_TaperedCapsuleShapeSettings_t * self,
  unsigned long long int mUserData
) {
  TaperedCapsuleShapeSettings * selfCpp = static_cast<TaperedCapsuleShapeSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
};

//endregion

#ifdef __cplusplus
}
#endif

