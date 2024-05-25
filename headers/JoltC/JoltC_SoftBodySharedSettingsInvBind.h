#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region properties

unsigned long JoltC_SoftBodySharedSettingsInvBind_mJointIndex_Get(
  JoltC_SoftBodySharedSettingsInvBind_t * self,
  char** outErrMsg
);

void JoltC_SoftBodySharedSettingsInvBind_mJointIndex_Set(
  JoltC_SoftBodySharedSettingsInvBind_t * self,
  unsigned long mJointIndex,
  char** outErrMsg
);

JoltC_Mat44_t * JoltC_SoftBodySharedSettingsInvBind_mInvBind_Get(
  JoltC_SoftBodySharedSettingsInvBind_t * self,
  char** outErrMsg
);

void JoltC_SoftBodySharedSettingsInvBind_mInvBind_Set(
  JoltC_SoftBodySharedSettingsInvBind_t * self,
  JoltC_Mat44_t * mInvBind,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

