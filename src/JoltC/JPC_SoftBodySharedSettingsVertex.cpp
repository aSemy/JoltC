#include "JoltC/JPC_SoftBodySharedSettingsVertex.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_SoftBodySharedSettingsVertex_t * JPC_SoftBodySharedSettingsVertex_new() {
  JPC_SoftBodySharedSettingsVertex_t * cInstance = new JPC_SoftBodySharedSettingsVertex_t();
  SoftBodySharedSettingsVertex * cppInstance = new SoftBodySharedSettingsVertex();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region properties

JPC_Float3_t * JPC_SoftBodySharedSettingsVertex_mPosition_Get(
  JPC_SoftBodySharedSettingsVertex_t * self
) {
  SoftBodySharedSettingsVertex * selfCpp = static_cast<SoftBodySharedSettingsVertex *>(self->obj);
  Float3 resultValue = selfCpp->mPosition;
  Float3* result = new Float3(resultValue);
  return reinterpret_cast<JPC_Float3_t *>(result);
};

void JPC_SoftBodySharedSettingsVertex_mPosition_Set(
  JPC_SoftBodySharedSettingsVertex_t * self,
  JPC_Float3_t * mPosition
) {
  SoftBodySharedSettingsVertex * selfCpp = static_cast<SoftBodySharedSettingsVertex *>(self->obj);
  selfCpp->mPosition = *reinterpret_cast<Float3 *>(mPosition->obj);
};

JPC_Float3_t * JPC_SoftBodySharedSettingsVertex_mVelocity_Get(
  JPC_SoftBodySharedSettingsVertex_t * self
) {
  SoftBodySharedSettingsVertex * selfCpp = static_cast<SoftBodySharedSettingsVertex *>(self->obj);
  Float3 resultValue = selfCpp->mVelocity;
  Float3* result = new Float3(resultValue);
  return reinterpret_cast<JPC_Float3_t *>(result);
};

void JPC_SoftBodySharedSettingsVertex_mVelocity_Set(
  JPC_SoftBodySharedSettingsVertex_t * self,
  JPC_Float3_t * mVelocity
) {
  SoftBodySharedSettingsVertex * selfCpp = static_cast<SoftBodySharedSettingsVertex *>(self->obj);
  selfCpp->mVelocity = *reinterpret_cast<Float3 *>(mVelocity->obj);
};

float JPC_SoftBodySharedSettingsVertex_mInvMass_Get(
  JPC_SoftBodySharedSettingsVertex_t * self
) {
  SoftBodySharedSettingsVertex * selfCpp = static_cast<SoftBodySharedSettingsVertex *>(self->obj);
  float result = selfCpp->mInvMass;
  return result;
};

void JPC_SoftBodySharedSettingsVertex_mInvMass_Set(
  JPC_SoftBodySharedSettingsVertex_t * self,
  float mInvMass
) {
  SoftBodySharedSettingsVertex * selfCpp = static_cast<SoftBodySharedSettingsVertex *>(self->obj);
  selfCpp->mInvMass = mInvMass;
};

//endregion properties

#ifdef __cplusplus
}
#endif

