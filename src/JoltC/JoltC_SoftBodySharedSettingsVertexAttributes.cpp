#include "JoltC/JoltC_SoftBodySharedSettingsVertexAttributes.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SoftBodySharedSettingsVertexAttributes_t * JoltC_SoftBodySharedSettingsVertexAttributes_new() {
  JoltC_SoftBodySharedSettingsVertexAttributes_t * cInstance = new JoltC_SoftBodySharedSettingsVertexAttributes_t();
  SoftBodySharedSettingsVertexAttributes * cppInstance = new SoftBodySharedSettingsVertexAttributes();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region properties

float JoltC_SoftBodySharedSettingsVertexAttributes_mCompliance_Get(
  JoltC_SoftBodySharedSettingsVertexAttributes_t * self
) {
  SoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<SoftBodySharedSettingsVertexAttributes *>(self->obj);
  float result = selfCpp->mCompliance;
  return result;
};

void JoltC_SoftBodySharedSettingsVertexAttributes_mCompliance_Set(
  JoltC_SoftBodySharedSettingsVertexAttributes_t * self,
  float mCompliance
) {
  SoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<SoftBodySharedSettingsVertexAttributes *>(self->obj);
  selfCpp->mCompliance = mCompliance;
};

float JoltC_SoftBodySharedSettingsVertexAttributes_mShearCompliance_Get(
  JoltC_SoftBodySharedSettingsVertexAttributes_t * self
) {
  SoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<SoftBodySharedSettingsVertexAttributes *>(self->obj);
  float result = selfCpp->mShearCompliance;
  return result;
};

void JoltC_SoftBodySharedSettingsVertexAttributes_mShearCompliance_Set(
  JoltC_SoftBodySharedSettingsVertexAttributes_t * self,
  float mShearCompliance
) {
  SoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<SoftBodySharedSettingsVertexAttributes *>(self->obj);
  selfCpp->mShearCompliance = mShearCompliance;
};

float JoltC_SoftBodySharedSettingsVertexAttributes_mBendCompliance_Get(
  JoltC_SoftBodySharedSettingsVertexAttributes_t * self
) {
  SoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<SoftBodySharedSettingsVertexAttributes *>(self->obj);
  float result = selfCpp->mBendCompliance;
  return result;
};

void JoltC_SoftBodySharedSettingsVertexAttributes_mBendCompliance_Set(
  JoltC_SoftBodySharedSettingsVertexAttributes_t * self,
  float mBendCompliance
) {
  SoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<SoftBodySharedSettingsVertexAttributes *>(self->obj);
  selfCpp->mBendCompliance = mBendCompliance;
};

JoltC_SoftBodySharedSettings_ELRAType JoltC_SoftBodySharedSettingsVertexAttributes_mLRAType_Get(
  JoltC_SoftBodySharedSettingsVertexAttributes_t * self
) {
  SoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<SoftBodySharedSettingsVertexAttributes *>(self->obj);
  SoftBodySharedSettings_ELRAType result = selfCpp->mLRAType;
  return static_cast<JoltC_SoftBodySharedSettings_ELRAType>(static_cast<int>(result));
};

void JoltC_SoftBodySharedSettingsVertexAttributes_mLRAType_Set(
  JoltC_SoftBodySharedSettingsVertexAttributes_t * self,
  JoltC_SoftBodySharedSettings_ELRAType mLRAType
) {
  SoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<SoftBodySharedSettingsVertexAttributes *>(self->obj);
  selfCpp->mLRAType = static_cast<SoftBodySharedSettings_ELRAType>(static_cast<int>(mLRAType));
};

float JoltC_SoftBodySharedSettingsVertexAttributes_mLRAMaxDistanceMultiplier_Get(
  JoltC_SoftBodySharedSettingsVertexAttributes_t * self
) {
  SoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<SoftBodySharedSettingsVertexAttributes *>(self->obj);
  float result = selfCpp->mLRAMaxDistanceMultiplier;
  return result;
};

void JoltC_SoftBodySharedSettingsVertexAttributes_mLRAMaxDistanceMultiplier_Set(
  JoltC_SoftBodySharedSettingsVertexAttributes_t * self,
  float mLRAMaxDistanceMultiplier
) {
  SoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<SoftBodySharedSettingsVertexAttributes *>(self->obj);
  selfCpp->mLRAMaxDistanceMultiplier = mLRAMaxDistanceMultiplier;
};

//endregion

#ifdef __cplusplus
}
#endif

