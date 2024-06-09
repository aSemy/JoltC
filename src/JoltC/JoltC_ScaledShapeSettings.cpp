#include "JoltC/JoltC_ScaledShapeSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `ScaledShapeSettings` instance.
 */
JoltC_ScaledShapeSettings_t * JoltC_ScaledShapeSettings_new(
  JoltC_ShapeSettings_t * inShape,
  JoltC_Vec3_t * inScale
) {
  ShapeSettings * inShapeCpp = static_cast<ShapeSettings *>(inShape->obj);
  const Vec3 * inScaleCpp = static_cast<const Vec3 *>(inScale->obj);
  JoltC_ScaledShapeSettings_t * cInstance = new JoltC_ScaledShapeSettings_t();
  ScaledShapeSettings * cppInstance = new ScaledShapeSettings(
    inShapeCpp,
    *inScaleCpp
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

unsigned long JoltC_ScaledShapeSettings_GetRefCount(
  JoltC_ScaledShapeSettings_t * self
) {
  ScaledShapeSettings * selfCpp = static_cast<ScaledShapeSettings *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_ScaledShapeSettings_AddRef(
  JoltC_ScaledShapeSettings_t * self
) {
  ScaledShapeSettings * selfCpp = static_cast<ScaledShapeSettings *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_ScaledShapeSettings_Release(
  JoltC_ScaledShapeSettings_t * self
) {
  ScaledShapeSettings * selfCpp = static_cast<ScaledShapeSettings *>(self->obj);
  selfCpp->Release();
}

JoltC_Shape_ShapeResult_t * JoltC_ScaledShapeSettings_Create(
  JoltC_ScaledShapeSettings_t * self
) {
  ScaledShapeSettings * selfCpp = static_cast<ScaledShapeSettings *>(self->obj);
  Shape::ShapeResult * resultPtr = new Shape::ShapeResult();
  *resultPtr = selfCpp->Create();
  JoltC_Shape_ShapeResult_t * result = new JoltC_Shape_ShapeResult_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_ScaledShapeSettings_ClearCachedResult(
  JoltC_ScaledShapeSettings_t * self
) {
  ScaledShapeSettings * selfCpp = static_cast<ScaledShapeSettings *>(self->obj);
  selfCpp->ClearCachedResult();
}

//endregion

//region properties

JoltC_Vec3_t * JoltC_ScaledShapeSettings_mScale_Get(
  JoltC_ScaledShapeSettings_t * self
) {
  ScaledShapeSettings * selfCpp = static_cast<ScaledShapeSettings *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mScale;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_ScaledShapeSettings_mScale_Set(
  JoltC_ScaledShapeSettings_t * self,
  JoltC_Vec3_t * mScale
) {
  ScaledShapeSettings * selfCpp = static_cast<ScaledShapeSettings *>(self->obj);
  selfCpp->mScale = *static_cast<Vec3 *>(mScale->obj);
};

unsigned long long int JoltC_ScaledShapeSettings_mUserData_Get(
  JoltC_ScaledShapeSettings_t * self
) {
  ScaledShapeSettings * selfCpp = static_cast<ScaledShapeSettings *>(self->obj);
  return selfCpp->mUserData;
}

void JoltC_ScaledShapeSettings_mUserData_Set(
  JoltC_ScaledShapeSettings_t * self,
  unsigned long long int mUserData
) {
  ScaledShapeSettings * selfCpp = static_cast<ScaledShapeSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
};

//endregion

#ifdef __cplusplus
}
#endif

