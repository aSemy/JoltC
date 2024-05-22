#include "JoltC/JPC_BoxShapeSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_BoxShapeSettings_t * JPC_BoxShapeSettings_new(
  JPC_Vec3_t * inHalfExtent,
  float inConvexRadius,
  const JPC_PhysicsMaterial_t * inMaterial
) {
  JPC_BoxShapeSettings_t * cInstance = new JPC_BoxShapeSettings_t();
  BoxShapeSettings * cppInstance = new BoxShapeSettings(
    *reinterpret_cast<Vec3 *>(inHalfExtent->obj),
    inConvexRadius,
    reinterpret_cast<PhysicsMaterial *>(inMaterial->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

unsigned long JPC_BoxShapeSettings_GetRefCount(
  JPC_BoxShapeSettings_t * self
) {
  BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_BoxShapeSettings_AddRef(
  JPC_BoxShapeSettings_t * self
) {
  BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_BoxShapeSettings_Release(
  JPC_BoxShapeSettings_t * self
) {
  BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
  
  selfCpp->Release();
};

JPC_Shape_ShapeResult_t * JPC_BoxShapeSettings_Create(
  JPC_BoxShapeSettings_t * self
) {
  BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
  Shape::ShapeResult resultValue = selfCpp->Create();
  Shape::ShapeResult* result = new Shape::ShapeResult(resultValue);
  return reinterpret_cast<JPC_Shape_ShapeResult_t *>(result);
};

void JPC_BoxShapeSettings_ClearCachedResult(
  JPC_BoxShapeSettings_t * self
) {
  BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
  
  selfCpp->ClearCachedResult();
};

//endregion functions

//region properties

JPC_Vec3_t * JPC_BoxShapeSettings_mHalfExtent_Get(
  JPC_BoxShapeSettings_t * self
) {
  BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mHalfExtent;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_BoxShapeSettings_mHalfExtent_Set(
  JPC_BoxShapeSettings_t * self,
  JPC_Vec3_t * mHalfExtent
) {
  BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
  selfCpp->mHalfExtent = *reinterpret_cast<Vec3 *>(mHalfExtent->obj);
};

float JPC_BoxShapeSettings_mConvexRadius_Get(
  JPC_BoxShapeSettings_t * self
) {
  BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
  float result = selfCpp->mConvexRadius;
  return result;
};

void JPC_BoxShapeSettings_mConvexRadius_Set(
  JPC_BoxShapeSettings_t * self,
  float mConvexRadius
) {
  BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
  selfCpp->mConvexRadius = mConvexRadius;
};

const JPC_PhysicsMaterial_t * JPC_BoxShapeSettings_mMaterial_Get(
  JPC_BoxShapeSettings_t * self
) {
  BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
  const PhysicsMaterial * result = selfCpp->mMaterial;
  return reinterpret_cast<const JPC_PhysicsMaterial_t *>(result);
};

const void JPC_BoxShapeSettings_mMaterial_Set(
  JPC_BoxShapeSettings_t * self,
  const JPC_PhysicsMaterial_t * mMaterial
) {
  BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
  selfCpp->mMaterial = reinterpret_cast<PhysicsMaterial *>(mMaterial->obj);
};

float JPC_BoxShapeSettings_mDensity_Get(
  JPC_BoxShapeSettings_t * self
) {
  BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
  float result = selfCpp->mDensity;
  return result;
};

void JPC_BoxShapeSettings_mDensity_Set(
  JPC_BoxShapeSettings_t * self,
  float mDensity
) {
  BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
  selfCpp->mDensity = mDensity;
};

unsigned long long int JPC_BoxShapeSettings_mUserData_Get(
  JPC_BoxShapeSettings_t * self
) {
  BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
  unsigned long long int result = selfCpp->mUserData;
  return result;
};

void JPC_BoxShapeSettings_mUserData_Set(
  JPC_BoxShapeSettings_t * self,
  unsigned long long int mUserData
) {
  BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
};

//endregion properties

#ifdef __cplusplus
}
#endif

