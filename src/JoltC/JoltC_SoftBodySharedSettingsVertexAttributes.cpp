#include "JoltC/JoltC_SoftBodySharedSettingsVertexAttributes.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SoftBodySharedSettingsVertexAttributes_t * JoltC_SoftBodySharedSettingsVertexAttributes_new(
  char** outErrMsg
) {
  try {
    JoltC_SoftBodySharedSettingsVertexAttributes_t * cInstance = new JoltC_SoftBodySharedSettingsVertexAttributes_t();
    SoftBodySharedSettingsVertexAttributes * cppInstance = new SoftBodySharedSettingsVertexAttributes();
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

float JoltC_SoftBodySharedSettingsVertexAttributes_mCompliance_Get(
  JoltC_SoftBodySharedSettingsVertexAttributes_t * self,
  char** outErrMsg
) {
  SoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<SoftBodySharedSettingsVertexAttributes *>(self->obj);
  float result = selfCpp->mCompliance;
  return result;
};

void JoltC_SoftBodySharedSettingsVertexAttributes_mCompliance_Set(
  JoltC_SoftBodySharedSettingsVertexAttributes_t * self,
  float mCompliance,
  char** outErrMsg
) {
  SoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<SoftBodySharedSettingsVertexAttributes *>(self->obj);
  selfCpp->mCompliance = mCompliance;
};

float JoltC_SoftBodySharedSettingsVertexAttributes_mShearCompliance_Get(
  JoltC_SoftBodySharedSettingsVertexAttributes_t * self,
  char** outErrMsg
) {
  SoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<SoftBodySharedSettingsVertexAttributes *>(self->obj);
  float result = selfCpp->mShearCompliance;
  return result;
};

void JoltC_SoftBodySharedSettingsVertexAttributes_mShearCompliance_Set(
  JoltC_SoftBodySharedSettingsVertexAttributes_t * self,
  float mShearCompliance,
  char** outErrMsg
) {
  SoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<SoftBodySharedSettingsVertexAttributes *>(self->obj);
  selfCpp->mShearCompliance = mShearCompliance;
};

float JoltC_SoftBodySharedSettingsVertexAttributes_mBendCompliance_Get(
  JoltC_SoftBodySharedSettingsVertexAttributes_t * self,
  char** outErrMsg
) {
  SoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<SoftBodySharedSettingsVertexAttributes *>(self->obj);
  float result = selfCpp->mBendCompliance;
  return result;
};

void JoltC_SoftBodySharedSettingsVertexAttributes_mBendCompliance_Set(
  JoltC_SoftBodySharedSettingsVertexAttributes_t * self,
  float mBendCompliance,
  char** outErrMsg
) {
  SoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<SoftBodySharedSettingsVertexAttributes *>(self->obj);
  selfCpp->mBendCompliance = mBendCompliance;
};

JoltC_SoftBodySharedSettings_ELRAType JoltC_SoftBodySharedSettingsVertexAttributes_mLRAType_Get(
  JoltC_SoftBodySharedSettingsVertexAttributes_t * self,
  char** outErrMsg
) {
  SoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<SoftBodySharedSettingsVertexAttributes *>(self->obj);
  SoftBodySharedSettings_ELRAType result = selfCpp->mLRAType;
  return static_cast<JoltC_SoftBodySharedSettings_ELRAType>(static_cast<int>(result));
};

void JoltC_SoftBodySharedSettingsVertexAttributes_mLRAType_Set(
  JoltC_SoftBodySharedSettingsVertexAttributes_t * self,
  JoltC_SoftBodySharedSettings_ELRAType mLRAType,
  char** outErrMsg
) {
  SoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<SoftBodySharedSettingsVertexAttributes *>(self->obj);
  selfCpp->mLRAType = static_cast<SoftBodySharedSettings_ELRAType>(static_cast<int>(mLRAType));
};

float JoltC_SoftBodySharedSettingsVertexAttributes_mLRAMaxDistanceMultiplier_Get(
  JoltC_SoftBodySharedSettingsVertexAttributes_t * self,
  char** outErrMsg
) {
  SoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<SoftBodySharedSettingsVertexAttributes *>(self->obj);
  float result = selfCpp->mLRAMaxDistanceMultiplier;
  return result;
};

void JoltC_SoftBodySharedSettingsVertexAttributes_mLRAMaxDistanceMultiplier_Set(
  JoltC_SoftBodySharedSettingsVertexAttributes_t * self,
  float mLRAMaxDistanceMultiplier,
  char** outErrMsg
) {
  SoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<SoftBodySharedSettingsVertexAttributes *>(self->obj);
  selfCpp->mLRAMaxDistanceMultiplier = mLRAMaxDistanceMultiplier;
};

//endregion properties

#ifdef __cplusplus
}
#endif

