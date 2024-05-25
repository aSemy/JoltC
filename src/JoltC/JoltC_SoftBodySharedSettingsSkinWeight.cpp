#include "JoltC/JPC_SoftBodySharedSettingsSkinWeight.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region properties

unsigned long JPC_SoftBodySharedSettingsSkinWeight_mInvBindIndex_Get(
  JPC_SoftBodySharedSettingsSkinWeight_t * self
) {
  SoftBodySharedSettingsSkinWeight * selfCpp = static_cast<SoftBodySharedSettingsSkinWeight *>(self->obj);
  unsigned long result = selfCpp->mInvBindIndex;
  return result;
};

void JPC_SoftBodySharedSettingsSkinWeight_mInvBindIndex_Set(
  JPC_SoftBodySharedSettingsSkinWeight_t * self,
  unsigned long mInvBindIndex
) {
  SoftBodySharedSettingsSkinWeight * selfCpp = static_cast<SoftBodySharedSettingsSkinWeight *>(self->obj);
  selfCpp->mInvBindIndex = mInvBindIndex;
};

float JPC_SoftBodySharedSettingsSkinWeight_mWeight_Get(
  JPC_SoftBodySharedSettingsSkinWeight_t * self
) {
  SoftBodySharedSettingsSkinWeight * selfCpp = static_cast<SoftBodySharedSettingsSkinWeight *>(self->obj);
  float result = selfCpp->mWeight;
  return result;
};

void JPC_SoftBodySharedSettingsSkinWeight_mWeight_Set(
  JPC_SoftBodySharedSettingsSkinWeight_t * self,
  float mWeight
) {
  SoftBodySharedSettingsSkinWeight * selfCpp = static_cast<SoftBodySharedSettingsSkinWeight *>(self->obj);
  selfCpp->mWeight = mWeight;
};

//endregion properties

#ifdef __cplusplus
}
#endif

