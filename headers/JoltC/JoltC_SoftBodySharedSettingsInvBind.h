#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_SoftBodySharedSettingsInvBind_destroy(
  JoltC_SoftBodySharedSettingsInvBind_t * self
);

//endregion
//region properties

unsigned long JoltC_SoftBodySharedSettingsInvBind_mJointIndex_Get(
  JoltC_SoftBodySharedSettingsInvBind_t * self
);

void JoltC_SoftBodySharedSettingsInvBind_mJointIndex_Set(
  JoltC_SoftBodySharedSettingsInvBind_t * self,
  unsigned long mJointIndex
);

JoltC_Mat44_t * JoltC_SoftBodySharedSettingsInvBind_mInvBind_Get(
  JoltC_SoftBodySharedSettingsInvBind_t * self
);

void JoltC_SoftBodySharedSettingsInvBind_mInvBind_Set(
  JoltC_SoftBodySharedSettingsInvBind_t * self,
  JoltC_Mat44_t * mInvBind
);

//endregion


#ifdef __cplusplus
}
#endif
