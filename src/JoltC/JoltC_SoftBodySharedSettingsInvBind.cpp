#include "JoltC/JPC_SoftBodySharedSettingsInvBind.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region properties

unsigned long JPC_SoftBodySharedSettingsInvBind_mJointIndex_Get(
  JPC_SoftBodySharedSettingsInvBind_t * self
) {
  SoftBodySharedSettingsInvBind * selfCpp = static_cast<SoftBodySharedSettingsInvBind *>(self->obj);
  unsigned long result = selfCpp->mJointIndex;
  return result;
};

void JPC_SoftBodySharedSettingsInvBind_mJointIndex_Set(
  JPC_SoftBodySharedSettingsInvBind_t * self,
  unsigned long mJointIndex
) {
  SoftBodySharedSettingsInvBind * selfCpp = static_cast<SoftBodySharedSettingsInvBind *>(self->obj);
  selfCpp->mJointIndex = mJointIndex;
};

JPC_Mat44_t * JPC_SoftBodySharedSettingsInvBind_mInvBind_Get(
  JPC_SoftBodySharedSettingsInvBind_t * self
) {
  SoftBodySharedSettingsInvBind * selfCpp = static_cast<SoftBodySharedSettingsInvBind *>(self->obj);
  Mat44 resultValue = selfCpp->mInvBind;
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

void JPC_SoftBodySharedSettingsInvBind_mInvBind_Set(
  JPC_SoftBodySharedSettingsInvBind_t * self,
  JPC_Mat44_t * mInvBind
) {
  SoftBodySharedSettingsInvBind * selfCpp = static_cast<SoftBodySharedSettingsInvBind *>(self->obj);
  selfCpp->mInvBind = *reinterpret_cast<Mat44 *>(mInvBind->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

