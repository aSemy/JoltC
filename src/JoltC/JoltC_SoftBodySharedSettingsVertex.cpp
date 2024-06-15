#include "JoltC/JoltC_SoftBodySharedSettingsVertex.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `SoftBodySharedSettingsVertex` instance.
 */
JoltC_SoftBodySharedSettingsVertex_t * JoltC_SoftBodySharedSettingsVertex_new() {
  JoltC_SoftBodySharedSettingsVertex_t * cInstance = new JoltC_SoftBodySharedSettingsVertex_t();
  SoftBodySharedSettingsVertex * cppInstance = new SoftBodySharedSettingsVertex();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_SoftBodySharedSettingsVertex_destroy(
  JoltC_SoftBodySharedSettingsVertex_t * self
){
  if (self == NULL) return;
  delete static_cast<SoftBodySharedSettingsVertex *>(self->obj);
  free(self);
}

//endregion
//region properties

JoltC_Float3_t * JoltC_SoftBodySharedSettingsVertex_mPosition_Get(
  JoltC_SoftBodySharedSettingsVertex_t * self
) {
  SoftBodySharedSettingsVertex * selfCpp = static_cast<SoftBodySharedSettingsVertex *>(self->obj);
  Float3 * resultPtr = new Float3();
  *resultPtr = selfCpp->mPosition;
  JoltC_Float3_t * result = new JoltC_Float3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_SoftBodySharedSettingsVertex_mPosition_Set(
  JoltC_SoftBodySharedSettingsVertex_t * self,
  JoltC_Float3_t * mPosition
) {
  SoftBodySharedSettingsVertex * selfCpp = static_cast<SoftBodySharedSettingsVertex *>(self->obj);
  selfCpp->mPosition = *static_cast<Float3 *>(mPosition->obj);
}

JoltC_Float3_t * JoltC_SoftBodySharedSettingsVertex_mVelocity_Get(
  JoltC_SoftBodySharedSettingsVertex_t * self
) {
  SoftBodySharedSettingsVertex * selfCpp = static_cast<SoftBodySharedSettingsVertex *>(self->obj);
  Float3 * resultPtr = new Float3();
  *resultPtr = selfCpp->mVelocity;
  JoltC_Float3_t * result = new JoltC_Float3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_SoftBodySharedSettingsVertex_mVelocity_Set(
  JoltC_SoftBodySharedSettingsVertex_t * self,
  JoltC_Float3_t * mVelocity
) {
  SoftBodySharedSettingsVertex * selfCpp = static_cast<SoftBodySharedSettingsVertex *>(self->obj);
  selfCpp->mVelocity = *static_cast<Float3 *>(mVelocity->obj);
}

float JoltC_SoftBodySharedSettingsVertex_mInvMass_Get(
  JoltC_SoftBodySharedSettingsVertex_t * self
) {
  SoftBodySharedSettingsVertex * selfCpp = static_cast<SoftBodySharedSettingsVertex *>(self->obj);
  return selfCpp->mInvMass;
}

void JoltC_SoftBodySharedSettingsVertex_mInvMass_Set(
  JoltC_SoftBodySharedSettingsVertex_t * self,
  float mInvMass
) {
  SoftBodySharedSettingsVertex * selfCpp = static_cast<SoftBodySharedSettingsVertex *>(self->obj);
  selfCpp->mInvMass = mInvMass;
}

//endregion


#ifdef __cplusplus
}
#endif
