#include "JoltC/JoltC_ScaledShapeSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ScaledShapeSettings_t * JoltC_ScaledShapeSettings_new(
  JoltC_ShapeSettings_t * inShape,
  const JoltC_Vec3_t * inScale
) {
  JoltC_ScaledShapeSettings_t * cInstance = new JoltC_ScaledShapeSettings_t();
  ScaledShapeSettings * cppInstance = new ScaledShapeSettings(
    reinterpret_cast<ShapeSettings *>(inShape->obj),
    *reinterpret_cast<Vec3 *>(inScale->obj)
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
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_ScaledShapeSettings_AddRef(
  JoltC_ScaledShapeSettings_t * self
) {
  ScaledShapeSettings * selfCpp = static_cast<ScaledShapeSettings *>(self->obj);
  
  selfCpp->AddRef();
};

void JoltC_ScaledShapeSettings_Release(
  JoltC_ScaledShapeSettings_t * self
) {
  ScaledShapeSettings * selfCpp = static_cast<ScaledShapeSettings *>(self->obj);
  
  selfCpp->Release();
};

JoltC_Shape_ShapeResult_t * JoltC_ScaledShapeSettings_Create(
  JoltC_ScaledShapeSettings_t * self
) {
  ScaledShapeSettings * selfCpp = static_cast<ScaledShapeSettings *>(self->obj);
  Shape::ShapeResult resultValue = selfCpp->Create();
  Shape::ShapeResult* result = new Shape::ShapeResult(resultValue);
  return reinterpret_cast<JoltC_Shape_ShapeResult_t *>(result);
};

void JoltC_ScaledShapeSettings_ClearCachedResult(
  JoltC_ScaledShapeSettings_t * self
) {
  ScaledShapeSettings * selfCpp = static_cast<ScaledShapeSettings *>(self->obj);
  
  selfCpp->ClearCachedResult();
};

//endregion

//region properties

JoltC_Vec3_t * JoltC_ScaledShapeSettings_mScale_Get(
  JoltC_ScaledShapeSettings_t * self
) {
  ScaledShapeSettings * selfCpp = static_cast<ScaledShapeSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mScale;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_ScaledShapeSettings_mScale_Set(
  JoltC_ScaledShapeSettings_t * self,
  JoltC_Vec3_t * mScale
) {
  ScaledShapeSettings * selfCpp = static_cast<ScaledShapeSettings *>(self->obj);
  selfCpp->mScale = *reinterpret_cast<Vec3 *>(mScale->obj);
};

unsigned long long int JoltC_ScaledShapeSettings_mUserData_Get(
  JoltC_ScaledShapeSettings_t * self
) {
  ScaledShapeSettings * selfCpp = static_cast<ScaledShapeSettings *>(self->obj);
  unsigned long long int result = selfCpp->mUserData;
  return result;
};

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

