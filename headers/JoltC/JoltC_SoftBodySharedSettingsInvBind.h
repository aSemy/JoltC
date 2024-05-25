#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region properties

unsigned long JPC_SoftBodySharedSettingsInvBind_mJointIndex_Get(
  JPC_SoftBodySharedSettingsInvBind_t * self
);

void JPC_SoftBodySharedSettingsInvBind_mJointIndex_Set(
  JPC_SoftBodySharedSettingsInvBind_t * self,
  unsigned long mJointIndex
);

JPC_Mat44_t * JPC_SoftBodySharedSettingsInvBind_mInvBind_Get(
  JPC_SoftBodySharedSettingsInvBind_t * self
);

void JPC_SoftBodySharedSettingsInvBind_mInvBind_Set(
  JPC_SoftBodySharedSettingsInvBind_t * self,
  JPC_Mat44_t * mInvBind
);

//endregion properties


#ifdef __cplusplus
}
#endif

