#include "JoltC/JPC_SoftBodySharedSettingsVertexAttributes.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_SoftBodySharedSettingsVertexAttributes_t * JPC_SoftBodySharedSettingsVertexAttributes_new() {
  JPC_SoftBodySharedSettingsVertexAttributes_t * cInstance = new JPC_SoftBodySharedSettingsVertexAttributes_t();
  SoftBodySharedSettingsVertexAttributes * cppInstance = new SoftBodySharedSettingsVertexAttributes();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region properties

float JPC_SoftBodySharedSettingsVertexAttributes_mCompliance_Get(
  JPC_SoftBodySharedSettingsVertexAttributes_t * self
) {
  SoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<SoftBodySharedSettingsVertexAttributes *>(self->obj);
  float result = selfCpp->mCompliance;
  return result;
};

void JPC_SoftBodySharedSettingsVertexAttributes_mCompliance_Set(
  JPC_SoftBodySharedSettingsVertexAttributes_t * self,
  float mCompliance
) {
  SoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<SoftBodySharedSettingsVertexAttributes *>(self->obj);
  selfCpp->mCompliance = mCompliance;
};

float JPC_SoftBodySharedSettingsVertexAttributes_mShearCompliance_Get(
  JPC_SoftBodySharedSettingsVertexAttributes_t * self
) {
  SoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<SoftBodySharedSettingsVertexAttributes *>(self->obj);
  float result = selfCpp->mShearCompliance;
  return result;
};

void JPC_SoftBodySharedSettingsVertexAttributes_mShearCompliance_Set(
  JPC_SoftBodySharedSettingsVertexAttributes_t * self,
  float mShearCompliance
) {
  SoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<SoftBodySharedSettingsVertexAttributes *>(self->obj);
  selfCpp->mShearCompliance = mShearCompliance;
};

float JPC_SoftBodySharedSettingsVertexAttributes_mBendCompliance_Get(
  JPC_SoftBodySharedSettingsVertexAttributes_t * self
) {
  SoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<SoftBodySharedSettingsVertexAttributes *>(self->obj);
  float result = selfCpp->mBendCompliance;
  return result;
};

void JPC_SoftBodySharedSettingsVertexAttributes_mBendCompliance_Set(
  JPC_SoftBodySharedSettingsVertexAttributes_t * self,
  float mBendCompliance
) {
  SoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<SoftBodySharedSettingsVertexAttributes *>(self->obj);
  selfCpp->mBendCompliance = mBendCompliance;
};

JPC_SoftBodySharedSettings_ELRAType JPC_SoftBodySharedSettingsVertexAttributes_mLRAType_Get(
  JPC_SoftBodySharedSettingsVertexAttributes_t * self
) {
  SoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<SoftBodySharedSettingsVertexAttributes *>(self->obj);
  SoftBodySharedSettings_ELRAType result = selfCpp->mLRAType;
  return static_cast<JPC_SoftBodySharedSettings_ELRAType>(static_cast<int>(result));
};

void JPC_SoftBodySharedSettingsVertexAttributes_mLRAType_Set(
  JPC_SoftBodySharedSettingsVertexAttributes_t * self,
  JPC_SoftBodySharedSettings_ELRAType mLRAType
) {
  SoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<SoftBodySharedSettingsVertexAttributes *>(self->obj);
  selfCpp->mLRAType = static_cast<SoftBodySharedSettings_ELRAType>(static_cast<int>(mLRAType));
};

float JPC_SoftBodySharedSettingsVertexAttributes_mLRAMaxDistanceMultiplier_Get(
  JPC_SoftBodySharedSettingsVertexAttributes_t * self
) {
  SoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<SoftBodySharedSettingsVertexAttributes *>(self->obj);
  float result = selfCpp->mLRAMaxDistanceMultiplier;
  return result;
};

void JPC_SoftBodySharedSettingsVertexAttributes_mLRAMaxDistanceMultiplier_Set(
  JPC_SoftBodySharedSettingsVertexAttributes_t * self,
  float mLRAMaxDistanceMultiplier
) {
  SoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<SoftBodySharedSettingsVertexAttributes *>(self->obj);
  selfCpp->mLRAMaxDistanceMultiplier = mLRAMaxDistanceMultiplier;
};

//endregion properties

#ifdef __cplusplus
}
#endif

