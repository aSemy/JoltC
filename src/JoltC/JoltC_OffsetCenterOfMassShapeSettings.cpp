#include "JoltC/JoltC_OffsetCenterOfMassShapeSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `OffsetCenterOfMassShapeSettings` instance.
 */
JoltC_OffsetCenterOfMassShapeSettings_t * JoltC_OffsetCenterOfMassShapeSettings_new(
  JoltC_Vec3_t * inOffset,
  JoltC_ShapeSettings_t * inShape
) {
  const Vec3 * inOffsetCpp = static_cast<const Vec3 *>(inOffset->obj);
  ShapeSettings * inShapeCpp = static_cast<ShapeSettings *>(inShape->obj);
  JoltC_OffsetCenterOfMassShapeSettings_t * cInstance = new JoltC_OffsetCenterOfMassShapeSettings_t();
  OffsetCenterOfMassShapeSettings * cppInstance = new OffsetCenterOfMassShapeSettings(
    *inOffsetCpp,
    inShapeCpp
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_OffsetCenterOfMassShapeSettings_destroy(
  JoltC_OffsetCenterOfMassShapeSettings_t * self
){
  if (self == NULL) return;
  delete static_cast<OffsetCenterOfMassShapeSettings *>(self->obj);
  free(self);
}

//endregion
//region functions

unsigned long JoltC_OffsetCenterOfMassShapeSettings_GetRefCount(
  JoltC_OffsetCenterOfMassShapeSettings_t * self
) {
  OffsetCenterOfMassShapeSettings * selfCpp = static_cast<OffsetCenterOfMassShapeSettings *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_OffsetCenterOfMassShapeSettings_AddRef(
  JoltC_OffsetCenterOfMassShapeSettings_t * self
) {
  OffsetCenterOfMassShapeSettings * selfCpp = static_cast<OffsetCenterOfMassShapeSettings *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_OffsetCenterOfMassShapeSettings_Release(
  JoltC_OffsetCenterOfMassShapeSettings_t * self
) {
  OffsetCenterOfMassShapeSettings * selfCpp = static_cast<OffsetCenterOfMassShapeSettings *>(self->obj);
  selfCpp->Release();
}

JoltC_Shape_ShapeResult_t * JoltC_OffsetCenterOfMassShapeSettings_Create(
  JoltC_OffsetCenterOfMassShapeSettings_t * self
) {
  OffsetCenterOfMassShapeSettings * selfCpp = static_cast<OffsetCenterOfMassShapeSettings *>(self->obj);
  Shape::ShapeResult * resultPtr = new Shape::ShapeResult();
  *resultPtr = selfCpp->Create();
  JoltC_Shape_ShapeResult_t * result = new JoltC_Shape_ShapeResult_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_OffsetCenterOfMassShapeSettings_ClearCachedResult(
  JoltC_OffsetCenterOfMassShapeSettings_t * self
) {
  OffsetCenterOfMassShapeSettings * selfCpp = static_cast<OffsetCenterOfMassShapeSettings *>(self->obj);
  selfCpp->ClearCachedResult();
}

//endregion

//region properties

JoltC_Vec3_t * JoltC_OffsetCenterOfMassShapeSettings_mOffset_Get(
  JoltC_OffsetCenterOfMassShapeSettings_t * self
) {
  OffsetCenterOfMassShapeSettings * selfCpp = static_cast<OffsetCenterOfMassShapeSettings *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mOffset;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_OffsetCenterOfMassShapeSettings_mOffset_Set(
  JoltC_OffsetCenterOfMassShapeSettings_t * self,
  JoltC_Vec3_t * mOffset
) {
  OffsetCenterOfMassShapeSettings * selfCpp = static_cast<OffsetCenterOfMassShapeSettings *>(self->obj);
  selfCpp->mOffset = *static_cast<Vec3 *>(mOffset->obj);
}

unsigned long long int JoltC_OffsetCenterOfMassShapeSettings_mUserData_Get(
  JoltC_OffsetCenterOfMassShapeSettings_t * self
) {
  OffsetCenterOfMassShapeSettings * selfCpp = static_cast<OffsetCenterOfMassShapeSettings *>(self->obj);
  return selfCpp->mUserData;
}

void JoltC_OffsetCenterOfMassShapeSettings_mUserData_Set(
  JoltC_OffsetCenterOfMassShapeSettings_t * self,
  unsigned long long int mUserData
) {
  OffsetCenterOfMassShapeSettings * selfCpp = static_cast<OffsetCenterOfMassShapeSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
}

//endregion


#ifdef __cplusplus
}
#endif
