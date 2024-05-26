#include "JoltC/JoltC_OffsetCenterOfMassShapeSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_OffsetCenterOfMassShapeSettings_t * JoltC_OffsetCenterOfMassShapeSettings_new(
  const JoltC_Vec3_t * inOffset,
  JoltC_ShapeSettings_t * inShape
) {
  JoltC_OffsetCenterOfMassShapeSettings_t * cInstance = new JoltC_OffsetCenterOfMassShapeSettings_t();
  OffsetCenterOfMassShapeSettings * cppInstance = new OffsetCenterOfMassShapeSettings(
    *reinterpret_cast<Vec3 *>(inOffset->obj),
    reinterpret_cast<ShapeSettings *>(inShape->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

unsigned long JoltC_OffsetCenterOfMassShapeSettings_GetRefCount(
  JoltC_OffsetCenterOfMassShapeSettings_t * self
) {
  OffsetCenterOfMassShapeSettings * selfCpp = static_cast<OffsetCenterOfMassShapeSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_OffsetCenterOfMassShapeSettings_AddRef(
  JoltC_OffsetCenterOfMassShapeSettings_t * self
) {
  OffsetCenterOfMassShapeSettings * selfCpp = static_cast<OffsetCenterOfMassShapeSettings *>(self->obj);
  
  selfCpp->AddRef();
};

void JoltC_OffsetCenterOfMassShapeSettings_Release(
  JoltC_OffsetCenterOfMassShapeSettings_t * self
) {
  OffsetCenterOfMassShapeSettings * selfCpp = static_cast<OffsetCenterOfMassShapeSettings *>(self->obj);
  
  selfCpp->Release();
};

JoltC_Shape_ShapeResult_t * JoltC_OffsetCenterOfMassShapeSettings_Create(
  JoltC_OffsetCenterOfMassShapeSettings_t * self
) {
  OffsetCenterOfMassShapeSettings * selfCpp = static_cast<OffsetCenterOfMassShapeSettings *>(self->obj);
  Shape::ShapeResult resultValue = selfCpp->Create();
  Shape::ShapeResult* result = new Shape::ShapeResult(resultValue);
  return reinterpret_cast<JoltC_Shape_ShapeResult_t *>(result);
};

void JoltC_OffsetCenterOfMassShapeSettings_ClearCachedResult(
  JoltC_OffsetCenterOfMassShapeSettings_t * self
) {
  OffsetCenterOfMassShapeSettings * selfCpp = static_cast<OffsetCenterOfMassShapeSettings *>(self->obj);
  
  selfCpp->ClearCachedResult();
};

//endregion

//region properties

JoltC_Vec3_t * JoltC_OffsetCenterOfMassShapeSettings_mOffset_Get(
  JoltC_OffsetCenterOfMassShapeSettings_t * self
) {
  OffsetCenterOfMassShapeSettings * selfCpp = static_cast<OffsetCenterOfMassShapeSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mOffset;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_OffsetCenterOfMassShapeSettings_mOffset_Set(
  JoltC_OffsetCenterOfMassShapeSettings_t * self,
  JoltC_Vec3_t * mOffset
) {
  OffsetCenterOfMassShapeSettings * selfCpp = static_cast<OffsetCenterOfMassShapeSettings *>(self->obj);
  selfCpp->mOffset = *reinterpret_cast<Vec3 *>(mOffset->obj);
};

unsigned long long int JoltC_OffsetCenterOfMassShapeSettings_mUserData_Get(
  JoltC_OffsetCenterOfMassShapeSettings_t * self
) {
  OffsetCenterOfMassShapeSettings * selfCpp = static_cast<OffsetCenterOfMassShapeSettings *>(self->obj);
  unsigned long long int result = selfCpp->mUserData;
  return result;
};

void JoltC_OffsetCenterOfMassShapeSettings_mUserData_Set(
  JoltC_OffsetCenterOfMassShapeSettings_t * self,
  unsigned long long int mUserData
) {
  OffsetCenterOfMassShapeSettings * selfCpp = static_cast<OffsetCenterOfMassShapeSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
};

//endregion

#ifdef __cplusplus
}
#endif

