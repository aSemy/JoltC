#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region properties

unsigned long JPC_SoftBodySharedSettingsSkinWeight_mInvBindIndex_Get(
  JPC_SoftBodySharedSettingsSkinWeight_t * self
);

void JPC_SoftBodySharedSettingsSkinWeight_mInvBindIndex_Set(
  JPC_SoftBodySharedSettingsSkinWeight_t * self,
  unsigned long mInvBindIndex
);

float JPC_SoftBodySharedSettingsSkinWeight_mWeight_Get(
  JPC_SoftBodySharedSettingsSkinWeight_t * self
);

void JPC_SoftBodySharedSettingsSkinWeight_mWeight_Set(
  JPC_SoftBodySharedSettingsSkinWeight_t * self,
  float mWeight
);

//endregion properties


#ifdef __cplusplus
}
#endif

