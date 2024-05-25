#include "JoltC/JPC_RotatedTranslatedShapeSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_RotatedTranslatedShapeSettings_t * JPC_RotatedTranslatedShapeSettings_new(
  const JPC_Vec3_t * inPosition,
  const JPC_Quat_t * inRotation,
  JPC_ShapeSettings_t * inShape
) {
  JPC_RotatedTranslatedShapeSettings_t * cInstance = new JPC_RotatedTranslatedShapeSettings_t();
  RotatedTranslatedShapeSettings * cppInstance = new RotatedTranslatedShapeSettings(
    *reinterpret_cast<Vec3 *>(inPosition->obj),
    *reinterpret_cast<Quat *>(inRotation->obj),
    reinterpret_cast<ShapeSettings *>(inShape->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

unsigned long JPC_RotatedTranslatedShapeSettings_GetRefCount(
  JPC_RotatedTranslatedShapeSettings_t * self
) {
  RotatedTranslatedShapeSettings * selfCpp = static_cast<RotatedTranslatedShapeSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_RotatedTranslatedShapeSettings_AddRef(
  JPC_RotatedTranslatedShapeSettings_t * self
) {
  RotatedTranslatedShapeSettings * selfCpp = static_cast<RotatedTranslatedShapeSettings *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_RotatedTranslatedShapeSettings_Release(
  JPC_RotatedTranslatedShapeSettings_t * self
) {
  RotatedTranslatedShapeSettings * selfCpp = static_cast<RotatedTranslatedShapeSettings *>(self->obj);
  
  selfCpp->Release();
};

JPC_Shape_ShapeResult_t * JPC_RotatedTranslatedShapeSettings_Create(
  JPC_RotatedTranslatedShapeSettings_t * self
) {
  RotatedTranslatedShapeSettings * selfCpp = static_cast<RotatedTranslatedShapeSettings *>(self->obj);
  Shape::ShapeResult resultValue = selfCpp->Create();
  Shape::ShapeResult* result = new Shape::ShapeResult(resultValue);
  return reinterpret_cast<JPC_Shape_ShapeResult_t *>(result);
};

void JPC_RotatedTranslatedShapeSettings_ClearCachedResult(
  JPC_RotatedTranslatedShapeSettings_t * self
) {
  RotatedTranslatedShapeSettings * selfCpp = static_cast<RotatedTranslatedShapeSettings *>(self->obj);
  
  selfCpp->ClearCachedResult();
};

//endregion functions

//region properties

JPC_Vec3_t * JPC_RotatedTranslatedShapeSettings_mPosition_Get(
  JPC_RotatedTranslatedShapeSettings_t * self
) {
  RotatedTranslatedShapeSettings * selfCpp = static_cast<RotatedTranslatedShapeSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mPosition;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_RotatedTranslatedShapeSettings_mPosition_Set(
  JPC_RotatedTranslatedShapeSettings_t * self,
  JPC_Vec3_t * mPosition
) {
  RotatedTranslatedShapeSettings * selfCpp = static_cast<RotatedTranslatedShapeSettings *>(self->obj);
  selfCpp->mPosition = *reinterpret_cast<Vec3 *>(mPosition->obj);
};

JPC_Quat_t * JPC_RotatedTranslatedShapeSettings_mRotation_Get(
  JPC_RotatedTranslatedShapeSettings_t * self
) {
  RotatedTranslatedShapeSettings * selfCpp = static_cast<RotatedTranslatedShapeSettings *>(self->obj);
  Quat resultValue = selfCpp->mRotation;
  Quat* result = new Quat(resultValue);
  return reinterpret_cast<JPC_Quat_t *>(result);
};

void JPC_RotatedTranslatedShapeSettings_mRotation_Set(
  JPC_RotatedTranslatedShapeSettings_t * self,
  JPC_Quat_t * mRotation
) {
  RotatedTranslatedShapeSettings * selfCpp = static_cast<RotatedTranslatedShapeSettings *>(self->obj);
  selfCpp->mRotation = *reinterpret_cast<Quat *>(mRotation->obj);
};

unsigned long long int JPC_RotatedTranslatedShapeSettings_mUserData_Get(
  JPC_RotatedTranslatedShapeSettings_t * self
) {
  RotatedTranslatedShapeSettings * selfCpp = static_cast<RotatedTranslatedShapeSettings *>(self->obj);
  unsigned long long int result = selfCpp->mUserData;
  return result;
};

void JPC_RotatedTranslatedShapeSettings_mUserData_Set(
  JPC_RotatedTranslatedShapeSettings_t * self,
  unsigned long long int mUserData
) {
  RotatedTranslatedShapeSettings * selfCpp = static_cast<RotatedTranslatedShapeSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
};

//endregion properties

#ifdef __cplusplus
}
#endif

