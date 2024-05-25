#include "JoltC/JPC_CharacterBaseSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JPC_CharacterBaseSettings_GetRefCount(
  JPC_CharacterBaseSettings_t * self
) {
  CharacterBaseSettings * selfCpp = static_cast<CharacterBaseSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_CharacterBaseSettings_AddRef(
  JPC_CharacterBaseSettings_t * self
) {
  CharacterBaseSettings * selfCpp = static_cast<CharacterBaseSettings *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_CharacterBaseSettings_Release(
  JPC_CharacterBaseSettings_t * self
) {
  CharacterBaseSettings * selfCpp = static_cast<CharacterBaseSettings *>(self->obj);
  
  selfCpp->Release();
};

//endregion functions

//region properties

JPC_Vec3_t * JPC_CharacterBaseSettings_mUp_Get(
  JPC_CharacterBaseSettings_t * self
) {
  CharacterBaseSettings * selfCpp = static_cast<CharacterBaseSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mUp;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_CharacterBaseSettings_mUp_Set(
  JPC_CharacterBaseSettings_t * self,
  JPC_Vec3_t * mUp
) {
  CharacterBaseSettings * selfCpp = static_cast<CharacterBaseSettings *>(self->obj);
  selfCpp->mUp = *reinterpret_cast<Vec3 *>(mUp->obj);
};

JPC_Plane_t * JPC_CharacterBaseSettings_mSupportingVolume_Get(
  JPC_CharacterBaseSettings_t * self
) {
  CharacterBaseSettings * selfCpp = static_cast<CharacterBaseSettings *>(self->obj);
  Plane resultValue = selfCpp->mSupportingVolume;
  Plane* result = new Plane(resultValue);
  return reinterpret_cast<JPC_Plane_t *>(result);
};

void JPC_CharacterBaseSettings_mSupportingVolume_Set(
  JPC_CharacterBaseSettings_t * self,
  JPC_Plane_t * mSupportingVolume
) {
  CharacterBaseSettings * selfCpp = static_cast<CharacterBaseSettings *>(self->obj);
  selfCpp->mSupportingVolume = *reinterpret_cast<Plane *>(mSupportingVolume->obj);
};

float JPC_CharacterBaseSettings_mMaxSlopeAngle_Get(
  JPC_CharacterBaseSettings_t * self
) {
  CharacterBaseSettings * selfCpp = static_cast<CharacterBaseSettings *>(self->obj);
  float result = selfCpp->mMaxSlopeAngle;
  return result;
};

void JPC_CharacterBaseSettings_mMaxSlopeAngle_Set(
  JPC_CharacterBaseSettings_t * self,
  float mMaxSlopeAngle
) {
  CharacterBaseSettings * selfCpp = static_cast<CharacterBaseSettings *>(self->obj);
  selfCpp->mMaxSlopeAngle = mMaxSlopeAngle;
};

const JPC_Shape_t * JPC_CharacterBaseSettings_mShape_Get(
  JPC_CharacterBaseSettings_t * self
) {
  CharacterBaseSettings * selfCpp = static_cast<CharacterBaseSettings *>(self->obj);
  const Shape * result = selfCpp->mShape;
  return reinterpret_cast<const JPC_Shape_t *>(result);
};

const void JPC_CharacterBaseSettings_mShape_Set(
  JPC_CharacterBaseSettings_t * self,
  const JPC_Shape_t * mShape
) {
  CharacterBaseSettings * selfCpp = static_cast<CharacterBaseSettings *>(self->obj);
  selfCpp->mShape = reinterpret_cast<Shape *>(mShape->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

