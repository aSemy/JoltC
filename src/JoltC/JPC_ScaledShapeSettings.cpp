#include "JoltC/JPC_ScaledShapeSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_ScaledShapeSettings_t * JPC_ScaledShapeSettings_new(
  JPC_ShapeSettings_t * inShape,
  const JPC_Vec3_t * inScale
) {
  JPC_ScaledShapeSettings_t * cInstance = new JPC_ScaledShapeSettings_t();
  ScaledShapeSettings * cppInstance = new ScaledShapeSettings(
    reinterpret_cast<ShapeSettings *>(inShape->obj),
    *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

unsigned long JPC_ScaledShapeSettings_GetRefCount(
  JPC_ScaledShapeSettings_t * self
) {
  ScaledShapeSettings * selfCpp = static_cast<ScaledShapeSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_ScaledShapeSettings_AddRef(
  JPC_ScaledShapeSettings_t * self
) {
  ScaledShapeSettings * selfCpp = static_cast<ScaledShapeSettings *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_ScaledShapeSettings_Release(
  JPC_ScaledShapeSettings_t * self
) {
  ScaledShapeSettings * selfCpp = static_cast<ScaledShapeSettings *>(self->obj);
  
  selfCpp->Release();
};

JPC_Shape_ShapeResult_t * JPC_ScaledShapeSettings_Create(
  JPC_ScaledShapeSettings_t * self
) {
  ScaledShapeSettings * selfCpp = static_cast<ScaledShapeSettings *>(self->obj);
  Shape::ShapeResult resultValue = selfCpp->Create();
  Shape::ShapeResult* result = new Shape::ShapeResult(resultValue);
  return reinterpret_cast<JPC_Shape_ShapeResult_t *>(result);
};

void JPC_ScaledShapeSettings_ClearCachedResult(
  JPC_ScaledShapeSettings_t * self
) {
  ScaledShapeSettings * selfCpp = static_cast<ScaledShapeSettings *>(self->obj);
  
  selfCpp->ClearCachedResult();
};

//endregion functions

//region properties

JPC_Vec3_t * JPC_ScaledShapeSettings_mScale_Get(
  JPC_ScaledShapeSettings_t * self
) {
  ScaledShapeSettings * selfCpp = static_cast<ScaledShapeSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mScale;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_ScaledShapeSettings_mScale_Set(
  JPC_ScaledShapeSettings_t * self,
  JPC_Vec3_t * mScale
) {
  ScaledShapeSettings * selfCpp = static_cast<ScaledShapeSettings *>(self->obj);
  selfCpp->mScale = *reinterpret_cast<Vec3 *>(mScale->obj);
};

unsigned long long int JPC_ScaledShapeSettings_mUserData_Get(
  JPC_ScaledShapeSettings_t * self
) {
  ScaledShapeSettings * selfCpp = static_cast<ScaledShapeSettings *>(self->obj);
  unsigned long long int result = selfCpp->mUserData;
  return result;
};

void JPC_ScaledShapeSettings_mUserData_Set(
  JPC_ScaledShapeSettings_t * self,
  unsigned long long int mUserData
) {
  ScaledShapeSettings * selfCpp = static_cast<ScaledShapeSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
};

//endregion properties

#ifdef __cplusplus
}
#endif

