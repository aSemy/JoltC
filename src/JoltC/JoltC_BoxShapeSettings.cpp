#include "JoltC/JoltC_BoxShapeSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `BoxShapeSettings` instance.
 */
JoltC_BoxShapeSettings_t * JoltC_BoxShapeSettings_new(
  JoltC_Vec3_t * inHalfExtent,
  float inConvexRadius,
  JoltC_PhysicsMaterial_t * inMaterial
) {
  Vec3 * inHalfExtentCpp = static_cast<Vec3 *>(inHalfExtent->obj);
  const PhysicsMaterial * inMaterialCpp = static_cast<const PhysicsMaterial *>(inMaterial->obj);
  JoltC_BoxShapeSettings_t * cInstance = new JoltC_BoxShapeSettings_t();
  BoxShapeSettings * cppInstance = new BoxShapeSettings(
    *inHalfExtentCpp,
    inConvexRadius,
    inMaterialCpp
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
  return selfCpp->GetRefCount();
}

void JoltC_BoxShapeSettings_AddRef(
  JoltC_BoxShapeSettings_t * self
) {
  BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_BoxShapeSettings_Release(
  JoltC_BoxShapeSettings_t * self
) {
  BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
  selfCpp->Release();
}

JoltC_Shape_ShapeResult_t * JoltC_BoxShapeSettings_Create(
  JoltC_BoxShapeSettings_t * self
) {
  BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
  Shape::ShapeResult * resultPtr = new Shape::ShapeResult();
  *resultPtr = selfCpp->Create();
  JoltC_Shape_ShapeResult_t * result = new JoltC_Shape_ShapeResult_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_BoxShapeSettings_ClearCachedResult(
  JoltC_BoxShapeSettings_t * self
) {
  BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
  selfCpp->ClearCachedResult();
}

//endregion

//region properties

JoltC_Vec3_t * JoltC_BoxShapeSettings_mHalfExtent_Get(
  JoltC_BoxShapeSettings_t * self
) {
  BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mHalfExtent;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_BoxShapeSettings_mHalfExtent_Set(
  JoltC_BoxShapeSettings_t * self,
  JoltC_Vec3_t * mHalfExtent
) {
  BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
  selfCpp->mHalfExtent = *static_cast<Vec3 *>(mHalfExtent->obj);
};

float JoltC_BoxShapeSettings_mConvexRadius_Get(
  JoltC_BoxShapeSettings_t * self
) {
  BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
  return selfCpp->mConvexRadius;
}

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
  const PhysicsMaterial * resultPtr = selfCpp->mMaterial;
  JoltC_PhysicsMaterial_t * result = new JoltC_PhysicsMaterial_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

void JoltC_BoxShapeSettings_mMaterial_Set(
  JoltC_BoxShapeSettings_t * self,
  JoltC_PhysicsMaterial_t * mMaterial
) {
  BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
  selfCpp->mMaterial = static_cast<const PhysicsMaterial *>(mMaterial->obj);
};

float JoltC_BoxShapeSettings_mDensity_Get(
  JoltC_BoxShapeSettings_t * self
) {
  BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
  return selfCpp->mDensity;
}

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
  return selfCpp->mUserData;
}

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

