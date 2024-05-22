#include "JoltC/JPC_TaperedCapsuleShapeSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_TaperedCapsuleShapeSettings_t * JPC_TaperedCapsuleShapeSettings_new(
  float inHalfHeightOfTaperedCylinder,
  float inTopRadius,
  float inBottomRadius,
  const JPC_PhysicsMaterial_t * inMaterial
) {
  JPC_TaperedCapsuleShapeSettings_t * cInstance = new JPC_TaperedCapsuleShapeSettings_t();
  TaperedCapsuleShapeSettings * cppInstance = new TaperedCapsuleShapeSettings(
    inHalfHeightOfTaperedCylinder,
    inTopRadius,
    inBottomRadius,
    reinterpret_cast<PhysicsMaterial *>(inMaterial->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

unsigned long JPC_TaperedCapsuleShapeSettings_GetRefCount(
  JPC_TaperedCapsuleShapeSettings_t * self
) {
  TaperedCapsuleShapeSettings * selfCpp = static_cast<TaperedCapsuleShapeSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_TaperedCapsuleShapeSettings_AddRef(
  JPC_TaperedCapsuleShapeSettings_t * self
) {
  TaperedCapsuleShapeSettings * selfCpp = static_cast<TaperedCapsuleShapeSettings *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_TaperedCapsuleShapeSettings_Release(
  JPC_TaperedCapsuleShapeSettings_t * self
) {
  TaperedCapsuleShapeSettings * selfCpp = static_cast<TaperedCapsuleShapeSettings *>(self->obj);
  
  selfCpp->Release();
};

JPC_Shape_ShapeResult_t * JPC_TaperedCapsuleShapeSettings_Create(
  JPC_TaperedCapsuleShapeSettings_t * self
) {
  TaperedCapsuleShapeSettings * selfCpp = static_cast<TaperedCapsuleShapeSettings *>(self->obj);
  Shape::ShapeResult resultValue = selfCpp->Create();
  Shape::ShapeResult* result = new Shape::ShapeResult(resultValue);
  return reinterpret_cast<JPC_Shape_ShapeResult_t *>(result);
};

void JPC_TaperedCapsuleShapeSettings_ClearCachedResult(
  JPC_TaperedCapsuleShapeSettings_t * self
) {
  TaperedCapsuleShapeSettings * selfCpp = static_cast<TaperedCapsuleShapeSettings *>(self->obj);
  
  selfCpp->ClearCachedResult();
};

//endregion functions

//region properties

float JPC_TaperedCapsuleShapeSettings_mHalfHeightOfTaperedCylinder_Get(
  JPC_TaperedCapsuleShapeSettings_t * self
) {
  TaperedCapsuleShapeSettings * selfCpp = static_cast<TaperedCapsuleShapeSettings *>(self->obj);
  float result = selfCpp->mHalfHeightOfTaperedCylinder;
  return result;
};

void JPC_TaperedCapsuleShapeSettings_mHalfHeightOfTaperedCylinder_Set(
  JPC_TaperedCapsuleShapeSettings_t * self,
  float mHalfHeightOfTaperedCylinder
) {
  TaperedCapsuleShapeSettings * selfCpp = static_cast<TaperedCapsuleShapeSettings *>(self->obj);
  selfCpp->mHalfHeightOfTaperedCylinder = mHalfHeightOfTaperedCylinder;
};

float JPC_TaperedCapsuleShapeSettings_mTopRadius_Get(
  JPC_TaperedCapsuleShapeSettings_t * self
) {
  TaperedCapsuleShapeSettings * selfCpp = static_cast<TaperedCapsuleShapeSettings *>(self->obj);
  float result = selfCpp->mTopRadius;
  return result;
};

void JPC_TaperedCapsuleShapeSettings_mTopRadius_Set(
  JPC_TaperedCapsuleShapeSettings_t * self,
  float mTopRadius
) {
  TaperedCapsuleShapeSettings * selfCpp = static_cast<TaperedCapsuleShapeSettings *>(self->obj);
  selfCpp->mTopRadius = mTopRadius;
};

float JPC_TaperedCapsuleShapeSettings_mBottomRadius_Get(
  JPC_TaperedCapsuleShapeSettings_t * self
) {
  TaperedCapsuleShapeSettings * selfCpp = static_cast<TaperedCapsuleShapeSettings *>(self->obj);
  float result = selfCpp->mBottomRadius;
  return result;
};

void JPC_TaperedCapsuleShapeSettings_mBottomRadius_Set(
  JPC_TaperedCapsuleShapeSettings_t * self,
  float mBottomRadius
) {
  TaperedCapsuleShapeSettings * selfCpp = static_cast<TaperedCapsuleShapeSettings *>(self->obj);
  selfCpp->mBottomRadius = mBottomRadius;
};

const JPC_PhysicsMaterial_t * JPC_TaperedCapsuleShapeSettings_mMaterial_Get(
  JPC_TaperedCapsuleShapeSettings_t * self
) {
  TaperedCapsuleShapeSettings * selfCpp = static_cast<TaperedCapsuleShapeSettings *>(self->obj);
  const PhysicsMaterial * result = selfCpp->mMaterial;
  return reinterpret_cast<const JPC_PhysicsMaterial_t *>(result);
};

const void JPC_TaperedCapsuleShapeSettings_mMaterial_Set(
  JPC_TaperedCapsuleShapeSettings_t * self,
  const JPC_PhysicsMaterial_t * mMaterial
) {
  TaperedCapsuleShapeSettings * selfCpp = static_cast<TaperedCapsuleShapeSettings *>(self->obj);
  selfCpp->mMaterial = reinterpret_cast<PhysicsMaterial *>(mMaterial->obj);
};

float JPC_TaperedCapsuleShapeSettings_mDensity_Get(
  JPC_TaperedCapsuleShapeSettings_t * self
) {
  TaperedCapsuleShapeSettings * selfCpp = static_cast<TaperedCapsuleShapeSettings *>(self->obj);
  float result = selfCpp->mDensity;
  return result;
};

void JPC_TaperedCapsuleShapeSettings_mDensity_Set(
  JPC_TaperedCapsuleShapeSettings_t * self,
  float mDensity
) {
  TaperedCapsuleShapeSettings * selfCpp = static_cast<TaperedCapsuleShapeSettings *>(self->obj);
  selfCpp->mDensity = mDensity;
};

unsigned long long int JPC_TaperedCapsuleShapeSettings_mUserData_Get(
  JPC_TaperedCapsuleShapeSettings_t * self
) {
  TaperedCapsuleShapeSettings * selfCpp = static_cast<TaperedCapsuleShapeSettings *>(self->obj);
  unsigned long long int result = selfCpp->mUserData;
  return result;
};

void JPC_TaperedCapsuleShapeSettings_mUserData_Set(
  JPC_TaperedCapsuleShapeSettings_t * self,
  unsigned long long int mUserData
) {
  TaperedCapsuleShapeSettings * selfCpp = static_cast<TaperedCapsuleShapeSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
};

//endregion properties

#ifdef __cplusplus
}
#endif

