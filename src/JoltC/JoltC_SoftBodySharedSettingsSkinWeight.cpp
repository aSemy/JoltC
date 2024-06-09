#include "JoltC/JoltC_SoftBodySharedSettingsSkinWeight.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region properties

unsigned long JoltC_SoftBodySharedSettingsSkinWeight_mInvBindIndex_Get(
  JoltC_SoftBodySharedSettingsSkinWeight_t * self
) {
  SoftBodySharedSettingsSkinWeight * selfCpp = static_cast<SoftBodySharedSettingsSkinWeight *>(self->obj);
  return selfCpp->mInvBindIndex;
}

void JoltC_SoftBodySharedSettingsSkinWeight_mInvBindIndex_Set(
  JoltC_SoftBodySharedSettingsSkinWeight_t * self,
  unsigned long mInvBindIndex
) {
  SoftBodySharedSettingsSkinWeight * selfCpp = static_cast<SoftBodySharedSettingsSkinWeight *>(self->obj);
  selfCpp->mInvBindIndex = mInvBindIndex;
};

float JoltC_SoftBodySharedSettingsSkinWeight_mWeight_Get(
  JoltC_SoftBodySharedSettingsSkinWeight_t * self
) {
  SoftBodySharedSettingsSkinWeight * selfCpp = static_cast<SoftBodySharedSettingsSkinWeight *>(self->obj);
  return selfCpp->mWeight;
}

void JoltC_SoftBodySharedSettingsSkinWeight_mWeight_Set(
  JoltC_SoftBodySharedSettingsSkinWeight_t * self,
  float mWeight
) {
  SoftBodySharedSettingsSkinWeight * selfCpp = static_cast<SoftBodySharedSettingsSkinWeight *>(self->obj);
  selfCpp->mWeight = mWeight;
};

//endregion

#ifdef __cplusplus
}
#endif

