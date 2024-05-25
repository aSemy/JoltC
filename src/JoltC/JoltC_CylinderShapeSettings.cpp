#include "JoltC/JPC_CylinderShapeSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_CylinderShapeSettings_t * JPC_CylinderShapeSettings_new(
  float inHalfHeight,
  float inRadius,
  float inConvexRadius,
  const JPC_PhysicsMaterial_t * inMaterial
) {
  JPC_CylinderShapeSettings_t * cInstance = new JPC_CylinderShapeSettings_t();
  CylinderShapeSettings * cppInstance = new CylinderShapeSettings(
    inHalfHeight,
    inRadius,
    inConvexRadius,
    reinterpret_cast<PhysicsMaterial *>(inMaterial->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

unsigned long JPC_CylinderShapeSettings_GetRefCount(
  JPC_CylinderShapeSettings_t * self
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_CylinderShapeSettings_AddRef(
  JPC_CylinderShapeSettings_t * self
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_CylinderShapeSettings_Release(
  JPC_CylinderShapeSettings_t * self
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  
  selfCpp->Release();
};

JPC_Shape_ShapeResult_t * JPC_CylinderShapeSettings_Create(
  JPC_CylinderShapeSettings_t * self
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  Shape::ShapeResult resultValue = selfCpp->Create();
  Shape::ShapeResult* result = new Shape::ShapeResult(resultValue);
  return reinterpret_cast<JPC_Shape_ShapeResult_t *>(result);
};

void JPC_CylinderShapeSettings_ClearCachedResult(
  JPC_CylinderShapeSettings_t * self
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  
  selfCpp->ClearCachedResult();
};

//endregion functions

//region properties

float JPC_CylinderShapeSettings_mHalfHeight_Get(
  JPC_CylinderShapeSettings_t * self
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  float result = selfCpp->mHalfHeight;
  return result;
};

void JPC_CylinderShapeSettings_mHalfHeight_Set(
  JPC_CylinderShapeSettings_t * self,
  float mHalfHeight
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  selfCpp->mHalfHeight = mHalfHeight;
};

float JPC_CylinderShapeSettings_mRadius_Get(
  JPC_CylinderShapeSettings_t * self
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  float result = selfCpp->mRadius;
  return result;
};

void JPC_CylinderShapeSettings_mRadius_Set(
  JPC_CylinderShapeSettings_t * self,
  float mRadius
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  selfCpp->mRadius = mRadius;
};

float JPC_CylinderShapeSettings_mConvexRadius_Get(
  JPC_CylinderShapeSettings_t * self
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  float result = selfCpp->mConvexRadius;
  return result;
};

void JPC_CylinderShapeSettings_mConvexRadius_Set(
  JPC_CylinderShapeSettings_t * self,
  float mConvexRadius
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  selfCpp->mConvexRadius = mConvexRadius;
};

const JPC_PhysicsMaterial_t * JPC_CylinderShapeSettings_mMaterial_Get(
  JPC_CylinderShapeSettings_t * self
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  const PhysicsMaterial * result = selfCpp->mMaterial;
  return reinterpret_cast<const JPC_PhysicsMaterial_t *>(result);
};

const void JPC_CylinderShapeSettings_mMaterial_Set(
  JPC_CylinderShapeSettings_t * self,
  const JPC_PhysicsMaterial_t * mMaterial
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  selfCpp->mMaterial = reinterpret_cast<PhysicsMaterial *>(mMaterial->obj);
};

float JPC_CylinderShapeSettings_mDensity_Get(
  JPC_CylinderShapeSettings_t * self
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  float result = selfCpp->mDensity;
  return result;
};

void JPC_CylinderShapeSettings_mDensity_Set(
  JPC_CylinderShapeSettings_t * self,
  float mDensity
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  selfCpp->mDensity = mDensity;
};

unsigned long long int JPC_CylinderShapeSettings_mUserData_Get(
  JPC_CylinderShapeSettings_t * self
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  unsigned long long int result = selfCpp->mUserData;
  return result;
};

void JPC_CylinderShapeSettings_mUserData_Set(
  JPC_CylinderShapeSettings_t * self,
  unsigned long long int mUserData
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
};

//endregion properties

#ifdef __cplusplus
}
#endif

