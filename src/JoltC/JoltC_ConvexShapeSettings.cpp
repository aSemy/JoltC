#include "JoltC/JPC_ConvexShapeSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JPC_ConvexShapeSettings_GetRefCount(
  JPC_ConvexShapeSettings_t * self
) {
  ConvexShapeSettings * selfCpp = static_cast<ConvexShapeSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_ConvexShapeSettings_AddRef(
  JPC_ConvexShapeSettings_t * self
) {
  ConvexShapeSettings * selfCpp = static_cast<ConvexShapeSettings *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_ConvexShapeSettings_Release(
  JPC_ConvexShapeSettings_t * self
) {
  ConvexShapeSettings * selfCpp = static_cast<ConvexShapeSettings *>(self->obj);
  
  selfCpp->Release();
};

JPC_Shape_ShapeResult_t * JPC_ConvexShapeSettings_Create(
  JPC_ConvexShapeSettings_t * self
) {
  ConvexShapeSettings * selfCpp = static_cast<ConvexShapeSettings *>(self->obj);
  Shape::ShapeResult resultValue = selfCpp->Create();
  Shape::ShapeResult* result = new Shape::ShapeResult(resultValue);
  return reinterpret_cast<JPC_Shape_ShapeResult_t *>(result);
};

void JPC_ConvexShapeSettings_ClearCachedResult(
  JPC_ConvexShapeSettings_t * self
) {
  ConvexShapeSettings * selfCpp = static_cast<ConvexShapeSettings *>(self->obj);
  
  selfCpp->ClearCachedResult();
};

//endregion functions

//region properties

const JPC_PhysicsMaterial_t * JPC_ConvexShapeSettings_mMaterial_Get(
  JPC_ConvexShapeSettings_t * self
) {
  ConvexShapeSettings * selfCpp = static_cast<ConvexShapeSettings *>(self->obj);
  const PhysicsMaterial * result = selfCpp->mMaterial;
  return reinterpret_cast<const JPC_PhysicsMaterial_t *>(result);
};

const void JPC_ConvexShapeSettings_mMaterial_Set(
  JPC_ConvexShapeSettings_t * self,
  const JPC_PhysicsMaterial_t * mMaterial
) {
  ConvexShapeSettings * selfCpp = static_cast<ConvexShapeSettings *>(self->obj);
  selfCpp->mMaterial = reinterpret_cast<PhysicsMaterial *>(mMaterial->obj);
};

float JPC_ConvexShapeSettings_mDensity_Get(
  JPC_ConvexShapeSettings_t * self
) {
  ConvexShapeSettings * selfCpp = static_cast<ConvexShapeSettings *>(self->obj);
  float result = selfCpp->mDensity;
  return result;
};

void JPC_ConvexShapeSettings_mDensity_Set(
  JPC_ConvexShapeSettings_t * self,
  float mDensity
) {
  ConvexShapeSettings * selfCpp = static_cast<ConvexShapeSettings *>(self->obj);
  selfCpp->mDensity = mDensity;
};

unsigned long long int JPC_ConvexShapeSettings_mUserData_Get(
  JPC_ConvexShapeSettings_t * self
) {
  ConvexShapeSettings * selfCpp = static_cast<ConvexShapeSettings *>(self->obj);
  unsigned long long int result = selfCpp->mUserData;
  return result;
};

void JPC_ConvexShapeSettings_mUserData_Set(
  JPC_ConvexShapeSettings_t * self,
  unsigned long long int mUserData
) {
  ConvexShapeSettings * selfCpp = static_cast<ConvexShapeSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
};

//endregion properties

#ifdef __cplusplus
}
#endif

