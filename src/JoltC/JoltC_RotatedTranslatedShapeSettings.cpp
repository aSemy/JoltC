#include "JoltC/JoltC_RotatedTranslatedShapeSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `RotatedTranslatedShapeSettings` instance.
 */
JoltC_RotatedTranslatedShapeSettings_t * JoltC_RotatedTranslatedShapeSettings_new(
  JoltC_Vec3_t * inPosition,
  JoltC_Quat_t * inRotation,
  JoltC_ShapeSettings_t * inShape
) {
  const Vec3 * inPositionCpp = static_cast<const Vec3 *>(inPosition->obj);
  const Quat * inRotationCpp = static_cast<const Quat *>(inRotation->obj);
  ShapeSettings * inShapeCpp = static_cast<ShapeSettings *>(inShape->obj);
  JoltC_RotatedTranslatedShapeSettings_t * cInstance = new JoltC_RotatedTranslatedShapeSettings_t();
  RotatedTranslatedShapeSettings * cppInstance = new RotatedTranslatedShapeSettings(
    *inPositionCpp,
    *inRotationCpp,
    inShapeCpp
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_RotatedTranslatedShapeSettings_destroy(
  JoltC_RotatedTranslatedShapeSettings_t * self
){
  if (self == NULL) return;
  delete static_cast<RotatedTranslatedShapeSettings *>(self->obj);
  free(self);
}

//endregion
//region functions

unsigned long JoltC_RotatedTranslatedShapeSettings_GetRefCount(
  JoltC_RotatedTranslatedShapeSettings_t * self
) {
  RotatedTranslatedShapeSettings * selfCpp = static_cast<RotatedTranslatedShapeSettings *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_RotatedTranslatedShapeSettings_AddRef(
  JoltC_RotatedTranslatedShapeSettings_t * self
) {
  RotatedTranslatedShapeSettings * selfCpp = static_cast<RotatedTranslatedShapeSettings *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_RotatedTranslatedShapeSettings_Release(
  JoltC_RotatedTranslatedShapeSettings_t * self
) {
  RotatedTranslatedShapeSettings * selfCpp = static_cast<RotatedTranslatedShapeSettings *>(self->obj);
  selfCpp->Release();
}

JoltC_Shape_ShapeResult_t * JoltC_RotatedTranslatedShapeSettings_Create(
  JoltC_RotatedTranslatedShapeSettings_t * self
) {
  RotatedTranslatedShapeSettings * selfCpp = static_cast<RotatedTranslatedShapeSettings *>(self->obj);
  Shape::ShapeResult * resultPtr = new Shape::ShapeResult();
  *resultPtr = selfCpp->Create();
  JoltC_Shape_ShapeResult_t * result = new JoltC_Shape_ShapeResult_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_RotatedTranslatedShapeSettings_ClearCachedResult(
  JoltC_RotatedTranslatedShapeSettings_t * self
) {
  RotatedTranslatedShapeSettings * selfCpp = static_cast<RotatedTranslatedShapeSettings *>(self->obj);
  selfCpp->ClearCachedResult();
}

//endregion

//region properties

JoltC_Vec3_t * JoltC_RotatedTranslatedShapeSettings_mPosition_Get(
  JoltC_RotatedTranslatedShapeSettings_t * self
) {
  RotatedTranslatedShapeSettings * selfCpp = static_cast<RotatedTranslatedShapeSettings *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mPosition;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_RotatedTranslatedShapeSettings_mPosition_Set(
  JoltC_RotatedTranslatedShapeSettings_t * self,
  JoltC_Vec3_t * mPosition
) {
  RotatedTranslatedShapeSettings * selfCpp = static_cast<RotatedTranslatedShapeSettings *>(self->obj);
  selfCpp->mPosition = *static_cast<Vec3 *>(mPosition->obj);
}

JoltC_Quat_t * JoltC_RotatedTranslatedShapeSettings_mRotation_Get(
  JoltC_RotatedTranslatedShapeSettings_t * self
) {
  RotatedTranslatedShapeSettings * selfCpp = static_cast<RotatedTranslatedShapeSettings *>(self->obj);
  Quat * resultPtr = new Quat();
  *resultPtr = selfCpp->mRotation;
  JoltC_Quat_t * result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_RotatedTranslatedShapeSettings_mRotation_Set(
  JoltC_RotatedTranslatedShapeSettings_t * self,
  JoltC_Quat_t * mRotation
) {
  RotatedTranslatedShapeSettings * selfCpp = static_cast<RotatedTranslatedShapeSettings *>(self->obj);
  selfCpp->mRotation = *static_cast<Quat *>(mRotation->obj);
}

unsigned long long int JoltC_RotatedTranslatedShapeSettings_mUserData_Get(
  JoltC_RotatedTranslatedShapeSettings_t * self
) {
  RotatedTranslatedShapeSettings * selfCpp = static_cast<RotatedTranslatedShapeSettings *>(self->obj);
  return selfCpp->mUserData;
}

void JoltC_RotatedTranslatedShapeSettings_mUserData_Set(
  JoltC_RotatedTranslatedShapeSettings_t * self,
  unsigned long long int mUserData
) {
  RotatedTranslatedShapeSettings * selfCpp = static_cast<RotatedTranslatedShapeSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
}

//endregion


#ifdef __cplusplus
}
#endif
