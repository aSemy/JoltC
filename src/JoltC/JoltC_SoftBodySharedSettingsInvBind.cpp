#include "JoltC/JoltC_SoftBodySharedSettingsInvBind.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region properties

unsigned long JoltC_SoftBodySharedSettingsInvBind_mJointIndex_Get(
  JoltC_SoftBodySharedSettingsInvBind_t * self
) {
  SoftBodySharedSettingsInvBind * selfCpp = static_cast<SoftBodySharedSettingsInvBind *>(self->obj);
  unsigned long result = selfCpp->mJointIndex;
  return result;
};

void JoltC_SoftBodySharedSettingsInvBind_mJointIndex_Set(
  JoltC_SoftBodySharedSettingsInvBind_t * self,
  unsigned long mJointIndex
) {
  SoftBodySharedSettingsInvBind * selfCpp = static_cast<SoftBodySharedSettingsInvBind *>(self->obj);
  selfCpp->mJointIndex = mJointIndex;
};

JoltC_Mat44_t * JoltC_SoftBodySharedSettingsInvBind_mInvBind_Get(
  JoltC_SoftBodySharedSettingsInvBind_t * self
) {
  SoftBodySharedSettingsInvBind * selfCpp = static_cast<SoftBodySharedSettingsInvBind *>(self->obj);
  static Mat44 resultValue = selfCpp->mInvBind;
  JoltC_Mat44_t* result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_SoftBodySharedSettingsInvBind_mInvBind_Set(
  JoltC_SoftBodySharedSettingsInvBind_t * self,
  JoltC_Mat44_t * mInvBind
) {
  SoftBodySharedSettingsInvBind * selfCpp = static_cast<SoftBodySharedSettingsInvBind *>(self->obj);
  selfCpp->mInvBind = *reinterpret_cast<Mat44 *>(mInvBind->obj);
};

//endregion

#ifdef __cplusplus
}
#endif

