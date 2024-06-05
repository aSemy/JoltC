#include "JoltC/JoltC_BoxShapeSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_BoxShapeSettings_t * JoltC_BoxShapeSettings_new(
  JoltC_Vec3_t * inHalfExtent,
  float inConvexRadius,
  JoltC_PhysicsMaterial_t * inMaterial
) {
  JoltC_BoxShapeSettings_t * cInstance = new JoltC_BoxShapeSettings_t();
  BoxShapeSettings * cppInstance = new BoxShapeSettings(
    *reinterpret_cast<Vec3 *>(inHalfExtent->obj),
    inConvexRadius,
    reinterpret_cast<PhysicsMaterial *>(inMaterial->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

unsigned long JoltC_BoxShapeSettings_GetRefCount(
  JoltC_BoxShapeSettings_t * self
) {
  BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_BoxShapeSettings_AddRef(
  JoltC_BoxShapeSettings_t * self
) {
  BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
  selfCpp->AddRef();
};

void JoltC_BoxShapeSettings_Release(
  JoltC_BoxShapeSettings_t * self
) {
  BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
  selfCpp->Release();
};

JoltC_Shape_ShapeResult_t * JoltC_BoxShapeSettings_Create(
  JoltC_BoxShapeSettings_t * self
) {
  BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
  const Shape::ShapeResult& resultValue = selfCpp->Create();
  JoltC_Shape_ShapeResult_t* result = new JoltC_Shape_ShapeResult_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_BoxShapeSettings_ClearCachedResult(
  JoltC_BoxShapeSettings_t * self
) {
  BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
  selfCpp->ClearCachedResult();
};

//endregion

//region properties

JoltC_Vec3_t * JoltC_BoxShapeSettings_mHalfExtent_Get(
  JoltC_BoxShapeSettings_t * self
) {
  BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
  const Vec3& resultValue = selfCpp->mHalfExtent;
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_BoxShapeSettings_mHalfExtent_Set(
  JoltC_BoxShapeSettings_t * self,
  JoltC_Vec3_t * mHalfExtent
) {
  BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
  selfCpp->mHalfExtent = *reinterpret_cast<Vec3 *>(mHalfExtent->obj);
};

float JoltC_BoxShapeSettings_mConvexRadius_Get(
  JoltC_BoxShapeSettings_t * self
) {
  BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
  float result = selfCpp->mConvexRadius;
  return result;
};

void JoltC_BoxShapeSettings_mConvexRadius_Set(
  JoltC_BoxShapeSettings_t * self,
  float mConvexRadius
) {
  BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
  selfCpp->mConvexRadius = mConvexRadius;
};

JoltC_PhysicsMaterial_t * JoltC_BoxShapeSettings_mMaterial_Get(
  JoltC_BoxShapeSettings_t * self
) {
  BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
  const PhysicsMaterial * resultValue = selfCpp->mMaterial;
  JoltC_PhysicsMaterial_t* result = new JoltC_PhysicsMaterial_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_BoxShapeSettings_mMaterial_Set(
  JoltC_BoxShapeSettings_t * self,
  JoltC_PhysicsMaterial_t * mMaterial
) {
  BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
  selfCpp->mMaterial = reinterpret_cast<PhysicsMaterial *>(mMaterial->obj);
};

float JoltC_BoxShapeSettings_mDensity_Get(
  JoltC_BoxShapeSettings_t * self
) {
  BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
  float result = selfCpp->mDensity;
  return result;
};

void JoltC_BoxShapeSettings_mDensity_Set(
  JoltC_BoxShapeSettings_t * self,
  float mDensity
) {
  BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
  selfCpp->mDensity = mDensity;
};

unsigned long long int JoltC_BoxShapeSettings_mUserData_Get(
  JoltC_BoxShapeSettings_t * self
) {
  BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
  unsigned long long int result = selfCpp->mUserData;
  return result;
};

void JoltC_BoxShapeSettings_mUserData_Set(
  JoltC_BoxShapeSettings_t * self,
  unsigned long long int mUserData
) {
  BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
};

//endregion

#ifdef __cplusplus
}
#endif

