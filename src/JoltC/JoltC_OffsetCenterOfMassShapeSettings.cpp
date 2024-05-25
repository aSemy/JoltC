#include "JoltC/JPC_OffsetCenterOfMassShapeSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_OffsetCenterOfMassShapeSettings_t * JPC_OffsetCenterOfMassShapeSettings_new(
  const JPC_Vec3_t * inOffset,
  JPC_ShapeSettings_t * inShape
) {
  JPC_OffsetCenterOfMassShapeSettings_t * cInstance = new JPC_OffsetCenterOfMassShapeSettings_t();
  OffsetCenterOfMassShapeSettings * cppInstance = new OffsetCenterOfMassShapeSettings(
    *reinterpret_cast<Vec3 *>(inOffset->obj),
    reinterpret_cast<ShapeSettings *>(inShape->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

unsigned long JPC_OffsetCenterOfMassShapeSettings_GetRefCount(
  JPC_OffsetCenterOfMassShapeSettings_t * self
) {
  OffsetCenterOfMassShapeSettings * selfCpp = static_cast<OffsetCenterOfMassShapeSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_OffsetCenterOfMassShapeSettings_AddRef(
  JPC_OffsetCenterOfMassShapeSettings_t * self
) {
  OffsetCenterOfMassShapeSettings * selfCpp = static_cast<OffsetCenterOfMassShapeSettings *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_OffsetCenterOfMassShapeSettings_Release(
  JPC_OffsetCenterOfMassShapeSettings_t * self
) {
  OffsetCenterOfMassShapeSettings * selfCpp = static_cast<OffsetCenterOfMassShapeSettings *>(self->obj);
  
  selfCpp->Release();
};

JPC_Shape_ShapeResult_t * JPC_OffsetCenterOfMassShapeSettings_Create(
  JPC_OffsetCenterOfMassShapeSettings_t * self
) {
  OffsetCenterOfMassShapeSettings * selfCpp = static_cast<OffsetCenterOfMassShapeSettings *>(self->obj);
  Shape::ShapeResult resultValue = selfCpp->Create();
  Shape::ShapeResult* result = new Shape::ShapeResult(resultValue);
  return reinterpret_cast<JPC_Shape_ShapeResult_t *>(result);
};

void JPC_OffsetCenterOfMassShapeSettings_ClearCachedResult(
  JPC_OffsetCenterOfMassShapeSettings_t * self
) {
  OffsetCenterOfMassShapeSettings * selfCpp = static_cast<OffsetCenterOfMassShapeSettings *>(self->obj);
  
  selfCpp->ClearCachedResult();
};

//endregion functions

//region properties

JPC_Vec3_t * JPC_OffsetCenterOfMassShapeSettings_mOffset_Get(
  JPC_OffsetCenterOfMassShapeSettings_t * self
) {
  OffsetCenterOfMassShapeSettings * selfCpp = static_cast<OffsetCenterOfMassShapeSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mOffset;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_OffsetCenterOfMassShapeSettings_mOffset_Set(
  JPC_OffsetCenterOfMassShapeSettings_t * self,
  JPC_Vec3_t * mOffset
) {
  OffsetCenterOfMassShapeSettings * selfCpp = static_cast<OffsetCenterOfMassShapeSettings *>(self->obj);
  selfCpp->mOffset = *reinterpret_cast<Vec3 *>(mOffset->obj);
};

unsigned long long int JPC_OffsetCenterOfMassShapeSettings_mUserData_Get(
  JPC_OffsetCenterOfMassShapeSettings_t * self
) {
  OffsetCenterOfMassShapeSettings * selfCpp = static_cast<OffsetCenterOfMassShapeSettings *>(self->obj);
  unsigned long long int result = selfCpp->mUserData;
  return result;
};

void JPC_OffsetCenterOfMassShapeSettings_mUserData_Set(
  JPC_OffsetCenterOfMassShapeSettings_t * self,
  unsigned long long int mUserData
) {
  OffsetCenterOfMassShapeSettings * selfCpp = static_cast<OffsetCenterOfMassShapeSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
};

//endregion properties

#ifdef __cplusplus
}
#endif

