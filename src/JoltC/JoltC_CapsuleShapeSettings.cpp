#include "JoltC/JPC_CapsuleShapeSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_CapsuleShapeSettings_t * JPC_CapsuleShapeSettings_new(
  float inHalfHeight,
  float inRadius,
  const JPC_PhysicsMaterial_t * inMaterial
) {
  JPC_CapsuleShapeSettings_t * cInstance = new JPC_CapsuleShapeSettings_t();
  CapsuleShapeSettings * cppInstance = new CapsuleShapeSettings(
    inHalfHeight,
    inRadius,
    reinterpret_cast<PhysicsMaterial *>(inMaterial->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

unsigned long JPC_CapsuleShapeSettings_GetRefCount(
  JPC_CapsuleShapeSettings_t * self
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_CapsuleShapeSettings_AddRef(
  JPC_CapsuleShapeSettings_t * self
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_CapsuleShapeSettings_Release(
  JPC_CapsuleShapeSettings_t * self
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  
  selfCpp->Release();
};

JPC_Shape_ShapeResult_t * JPC_CapsuleShapeSettings_Create(
  JPC_CapsuleShapeSettings_t * self
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  Shape::ShapeResult resultValue = selfCpp->Create();
  Shape::ShapeResult* result = new Shape::ShapeResult(resultValue);
  return reinterpret_cast<JPC_Shape_ShapeResult_t *>(result);
};

void JPC_CapsuleShapeSettings_ClearCachedResult(
  JPC_CapsuleShapeSettings_t * self
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  
  selfCpp->ClearCachedResult();
};

//endregion functions

//region properties

float JPC_CapsuleShapeSettings_mRadius_Get(
  JPC_CapsuleShapeSettings_t * self
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  float result = selfCpp->mRadius;
  return result;
};

void JPC_CapsuleShapeSettings_mRadius_Set(
  JPC_CapsuleShapeSettings_t * self,
  float mRadius
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  selfCpp->mRadius = mRadius;
};

float JPC_CapsuleShapeSettings_mHalfHeightOfCylinder_Get(
  JPC_CapsuleShapeSettings_t * self
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  float result = selfCpp->mHalfHeightOfCylinder;
  return result;
};

void JPC_CapsuleShapeSettings_mHalfHeightOfCylinder_Set(
  JPC_CapsuleShapeSettings_t * self,
  float mHalfHeightOfCylinder
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  selfCpp->mHalfHeightOfCylinder = mHalfHeightOfCylinder;
};

const JPC_PhysicsMaterial_t * JPC_CapsuleShapeSettings_mMaterial_Get(
  JPC_CapsuleShapeSettings_t * self
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  const PhysicsMaterial * result = selfCpp->mMaterial;
  return reinterpret_cast<const JPC_PhysicsMaterial_t *>(result);
};

const void JPC_CapsuleShapeSettings_mMaterial_Set(
  JPC_CapsuleShapeSettings_t * self,
  const JPC_PhysicsMaterial_t * mMaterial
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  selfCpp->mMaterial = reinterpret_cast<PhysicsMaterial *>(mMaterial->obj);
};

float JPC_CapsuleShapeSettings_mDensity_Get(
  JPC_CapsuleShapeSettings_t * self
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  float result = selfCpp->mDensity;
  return result;
};

void JPC_CapsuleShapeSettings_mDensity_Set(
  JPC_CapsuleShapeSettings_t * self,
  float mDensity
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  selfCpp->mDensity = mDensity;
};

unsigned long long int JPC_CapsuleShapeSettings_mUserData_Get(
  JPC_CapsuleShapeSettings_t * self
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  unsigned long long int result = selfCpp->mUserData;
  return result;
};

void JPC_CapsuleShapeSettings_mUserData_Set(
  JPC_CapsuleShapeSettings_t * self,
  unsigned long long int mUserData
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
};

//endregion properties

#ifdef __cplusplus
}
#endif

