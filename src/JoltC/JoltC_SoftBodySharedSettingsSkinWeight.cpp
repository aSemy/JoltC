#include "JoltC/JoltC_SoftBodySharedSettingsSkinWeight.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region properties

unsigned long JoltC_SoftBodySharedSettingsSkinWeight_mInvBindIndex_Get(
  JoltC_SoftBodySharedSettingsSkinWeight_t * self,
  char** outErrMsg
) {
  SoftBodySharedSettingsSkinWeight * selfCpp = static_cast<SoftBodySharedSettingsSkinWeight *>(self->obj);
  unsigned long result = selfCpp->mInvBindIndex;
  return result;
};

void JoltC_SoftBodySharedSettingsSkinWeight_mInvBindIndex_Set(
  JoltC_SoftBodySharedSettingsSkinWeight_t * self,
  unsigned long mInvBindIndex,
  char** outErrMsg
) {
  SoftBodySharedSettingsSkinWeight * selfCpp = static_cast<SoftBodySharedSettingsSkinWeight *>(self->obj);
  selfCpp->mInvBindIndex = mInvBindIndex;
};

float JoltC_SoftBodySharedSettingsSkinWeight_mWeight_Get(
  JoltC_SoftBodySharedSettingsSkinWeight_t * self,
  char** outErrMsg
) {
  SoftBodySharedSettingsSkinWeight * selfCpp = static_cast<SoftBodySharedSettingsSkinWeight *>(self->obj);
  float result = selfCpp->mWeight;
  return result;
};

void JoltC_SoftBodySharedSettingsSkinWeight_mWeight_Set(
  JoltC_SoftBodySharedSettingsSkinWeight_t * self,
  float mWeight,
  char** outErrMsg
) {
  SoftBodySharedSettingsSkinWeight * selfCpp = static_cast<SoftBodySharedSettingsSkinWeight *>(self->obj);
  selfCpp->mWeight = mWeight;
};

//endregion properties

#ifdef __cplusplus
}
#endif

