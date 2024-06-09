#include "JoltC/JoltC_CharacterBaseSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region converters

/**
 * Convert an instance of JoltC_CharacterVirtualSettings_t into JoltC_CharacterBaseSettings_t.
 */
JoltC_CharacterBaseSettings_t * JoltC_CharacterBaseSettings_From_CharacterVirtualSettings(
  JoltC_CharacterVirtualSettings_t * subtype
) {
  return (JoltC_CharacterBaseSettings_t*) subtype;
};

//endregion

//region functions

unsigned long JoltC_CharacterBaseSettings_GetRefCount(
  JoltC_CharacterBaseSettings_t * self
) {
  CharacterBaseSettings * selfCpp = static_cast<CharacterBaseSettings *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_CharacterBaseSettings_AddRef(
  JoltC_CharacterBaseSettings_t * self
) {
  CharacterBaseSettings * selfCpp = static_cast<CharacterBaseSettings *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_CharacterBaseSettings_Release(
  JoltC_CharacterBaseSettings_t * self
) {
  CharacterBaseSettings * selfCpp = static_cast<CharacterBaseSettings *>(self->obj);
  selfCpp->Release();
}

//endregion

//region properties

JoltC_Vec3_t * JoltC_CharacterBaseSettings_mUp_Get(
  JoltC_CharacterBaseSettings_t * self
) {
  CharacterBaseSettings * selfCpp = static_cast<CharacterBaseSettings *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mUp;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_CharacterBaseSettings_mUp_Set(
  JoltC_CharacterBaseSettings_t * self,
  JoltC_Vec3_t * mUp
) {
  CharacterBaseSettings * selfCpp = static_cast<CharacterBaseSettings *>(self->obj);
  selfCpp->mUp = *static_cast<Vec3 *>(mUp->obj);
};

JoltC_Plane_t * JoltC_CharacterBaseSettings_mSupportingVolume_Get(
  JoltC_CharacterBaseSettings_t * self
) {
  CharacterBaseSettings * selfCpp = static_cast<CharacterBaseSettings *>(self->obj);
  Plane * resultPtr = new Plane();
  *resultPtr = selfCpp->mSupportingVolume;
  JoltC_Plane_t * result = new JoltC_Plane_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_CharacterBaseSettings_mSupportingVolume_Set(
  JoltC_CharacterBaseSettings_t * self,
  JoltC_Plane_t * mSupportingVolume
) {
  CharacterBaseSettings * selfCpp = static_cast<CharacterBaseSettings *>(self->obj);
  selfCpp->mSupportingVolume = *static_cast<Plane *>(mSupportingVolume->obj);
};

float JoltC_CharacterBaseSettings_mMaxSlopeAngle_Get(
  JoltC_CharacterBaseSettings_t * self
) {
  CharacterBaseSettings * selfCpp = static_cast<CharacterBaseSettings *>(self->obj);
  return selfCpp->mMaxSlopeAngle;
}

void JoltC_CharacterBaseSettings_mMaxSlopeAngle_Set(
  JoltC_CharacterBaseSettings_t * self,
  float mMaxSlopeAngle
) {
  CharacterBaseSettings * selfCpp = static_cast<CharacterBaseSettings *>(self->obj);
  selfCpp->mMaxSlopeAngle = mMaxSlopeAngle;
};

JoltC_Shape_t * JoltC_CharacterBaseSettings_mShape_Get(
  JoltC_CharacterBaseSettings_t * self
) {
  CharacterBaseSettings * selfCpp = static_cast<CharacterBaseSettings *>(self->obj);
  const Shape * resultPtr = selfCpp->mShape;
  JoltC_Shape_t * result = new JoltC_Shape_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

void JoltC_CharacterBaseSettings_mShape_Set(
  JoltC_CharacterBaseSettings_t * self,
  JoltC_Shape_t * mShape
) {
  CharacterBaseSettings * selfCpp = static_cast<CharacterBaseSettings *>(self->obj);
  selfCpp->mShape = static_cast<const Shape *>(mShape->obj);
};

//endregion

#ifdef __cplusplus
}
#endif

