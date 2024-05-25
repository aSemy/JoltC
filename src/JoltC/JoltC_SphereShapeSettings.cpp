#include "JoltC/JPC_SphereShapeSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_SphereShapeSettings_t * JPC_SphereShapeSettings_new(
  float inRadius,
  const JPC_PhysicsMaterial_t * inMaterial
) {
  JPC_SphereShapeSettings_t * cInstance = new JPC_SphereShapeSettings_t();
  SphereShapeSettings * cppInstance = new SphereShapeSettings(
    inRadius,
    reinterpret_cast<PhysicsMaterial *>(inMaterial->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

unsigned long JPC_SphereShapeSettings_GetRefCount(
  JPC_SphereShapeSettings_t * self
) {
  SphereShapeSettings * selfCpp = static_cast<SphereShapeSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_SphereShapeSettings_AddRef(
  JPC_SphereShapeSettings_t * self
) {
  SphereShapeSettings * selfCpp = static_cast<SphereShapeSettings *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_SphereShapeSettings_Release(
  JPC_SphereShapeSettings_t * self
) {
  SphereShapeSettings * selfCpp = static_cast<SphereShapeSettings *>(self->obj);
  
  selfCpp->Release();
};

JPC_Shape_ShapeResult_t * JPC_SphereShapeSettings_Create(
  JPC_SphereShapeSettings_t * self
) {
  SphereShapeSettings * selfCpp = static_cast<SphereShapeSettings *>(self->obj);
  Shape::ShapeResult resultValue = selfCpp->Create();
  Shape::ShapeResult* result = new Shape::ShapeResult(resultValue);
  return reinterpret_cast<JPC_Shape_ShapeResult_t *>(result);
};

void JPC_SphereShapeSettings_ClearCachedResult(
  JPC_SphereShapeSettings_t * self
) {
  SphereShapeSettings * selfCpp = static_cast<SphereShapeSettings *>(self->obj);
  
  selfCpp->ClearCachedResult();
};

//endregion functions

//region properties

float JPC_SphereShapeSettings_mRadius_Get(
  JPC_SphereShapeSettings_t * self
) {
  SphereShapeSettings * selfCpp = static_cast<SphereShapeSettings *>(self->obj);
  float result = selfCpp->mRadius;
  return result;
};

void JPC_SphereShapeSettings_mRadius_Set(
  JPC_SphereShapeSettings_t * self,
  float mRadius
) {
  SphereShapeSettings * selfCpp = static_cast<SphereShapeSettings *>(self->obj);
  selfCpp->mRadius = mRadius;
};

const JPC_PhysicsMaterial_t * JPC_SphereShapeSettings_mMaterial_Get(
  JPC_SphereShapeSettings_t * self
) {
  SphereShapeSettings * selfCpp = static_cast<SphereShapeSettings *>(self->obj);
  const PhysicsMaterial * result = selfCpp->mMaterial;
  return reinterpret_cast<const JPC_PhysicsMaterial_t *>(result);
};

const void JPC_SphereShapeSettings_mMaterial_Set(
  JPC_SphereShapeSettings_t * self,
  const JPC_PhysicsMaterial_t * mMaterial
) {
  SphereShapeSettings * selfCpp = static_cast<SphereShapeSettings *>(self->obj);
  selfCpp->mMaterial = reinterpret_cast<PhysicsMaterial *>(mMaterial->obj);
};

float JPC_SphereShapeSettings_mDensity_Get(
  JPC_SphereShapeSettings_t * self
) {
  SphereShapeSettings * selfCpp = static_cast<SphereShapeSettings *>(self->obj);
  float result = selfCpp->mDensity;
  return result;
};

void JPC_SphereShapeSettings_mDensity_Set(
  JPC_SphereShapeSettings_t * self,
  float mDensity
) {
  SphereShapeSettings * selfCpp = static_cast<SphereShapeSettings *>(self->obj);
  selfCpp->mDensity = mDensity;
};

unsigned long long int JPC_SphereShapeSettings_mUserData_Get(
  JPC_SphereShapeSettings_t * self
) {
  SphereShapeSettings * selfCpp = static_cast<SphereShapeSettings *>(self->obj);
  unsigned long long int result = selfCpp->mUserData;
  return result;
};

void JPC_SphereShapeSettings_mUserData_Set(
  JPC_SphereShapeSettings_t * self,
  unsigned long long int mUserData
) {
  SphereShapeSettings * selfCpp = static_cast<SphereShapeSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
};

//endregion properties

#ifdef __cplusplus
}
#endif

