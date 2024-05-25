#include "JoltC/JoltC_SoftBodySharedSettingsVertex.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SoftBodySharedSettingsVertex_t * JoltC_SoftBodySharedSettingsVertex_new(
  char** outErrMsg
) {
  try {
    JoltC_SoftBodySharedSettingsVertex_t * cInstance = new JoltC_SoftBodySharedSettingsVertex_t();
    SoftBodySharedSettingsVertex * cppInstance = new SoftBodySharedSettingsVertex();
    cInstance->obj = cppInstance;
    return cInstance;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

//endregion constructors

//region properties

JoltC_Float3_t * JoltC_SoftBodySharedSettingsVertex_mPosition_Get(
  JoltC_SoftBodySharedSettingsVertex_t * self,
  char** outErrMsg
) {
  SoftBodySharedSettingsVertex * selfCpp = static_cast<SoftBodySharedSettingsVertex *>(self->obj);
  Float3 resultValue = selfCpp->mPosition;
  Float3* result = new Float3(resultValue);
  return reinterpret_cast<JoltC_Float3_t *>(result);
};

void JoltC_SoftBodySharedSettingsVertex_mPosition_Set(
  JoltC_SoftBodySharedSettingsVertex_t * self,
  JoltC_Float3_t * mPosition,
  char** outErrMsg
) {
  SoftBodySharedSettingsVertex * selfCpp = static_cast<SoftBodySharedSettingsVertex *>(self->obj);
  selfCpp->mPosition = *reinterpret_cast<Float3 *>(mPosition->obj);
};

JoltC_Float3_t * JoltC_SoftBodySharedSettingsVertex_mVelocity_Get(
  JoltC_SoftBodySharedSettingsVertex_t * self,
  char** outErrMsg
) {
  SoftBodySharedSettingsVertex * selfCpp = static_cast<SoftBodySharedSettingsVertex *>(self->obj);
  Float3 resultValue = selfCpp->mVelocity;
  Float3* result = new Float3(resultValue);
  return reinterpret_cast<JoltC_Float3_t *>(result);
};

void JoltC_SoftBodySharedSettingsVertex_mVelocity_Set(
  JoltC_SoftBodySharedSettingsVertex_t * self,
  JoltC_Float3_t * mVelocity,
  char** outErrMsg
) {
  SoftBodySharedSettingsVertex * selfCpp = static_cast<SoftBodySharedSettingsVertex *>(self->obj);
  selfCpp->mVelocity = *reinterpret_cast<Float3 *>(mVelocity->obj);
};

float JoltC_SoftBodySharedSettingsVertex_mInvMass_Get(
  JoltC_SoftBodySharedSettingsVertex_t * self,
  char** outErrMsg
) {
  SoftBodySharedSettingsVertex * selfCpp = static_cast<SoftBodySharedSettingsVertex *>(self->obj);
  float result = selfCpp->mInvMass;
  return result;
};

void JoltC_SoftBodySharedSettingsVertex_mInvMass_Set(
  JoltC_SoftBodySharedSettingsVertex_t * self,
  float mInvMass,
  char** outErrMsg
) {
  SoftBodySharedSettingsVertex * selfCpp = static_cast<SoftBodySharedSettingsVertex *>(self->obj);
  selfCpp->mInvMass = mInvMass;
};

//endregion properties

#ifdef __cplusplus
}
#endif

