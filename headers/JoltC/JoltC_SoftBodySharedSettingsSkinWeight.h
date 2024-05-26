#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region properties

unsigned long JoltC_SoftBodySharedSettingsSkinWeight_mInvBindIndex_Get(
  JoltC_SoftBodySharedSettingsSkinWeight_t * self
);

void JoltC_SoftBodySharedSettingsSkinWeight_mInvBindIndex_Set(
  JoltC_SoftBodySharedSettingsSkinWeight_t * self,
  unsigned long mInvBindIndex
);

float JoltC_SoftBodySharedSettingsSkinWeight_mWeight_Get(
  JoltC_SoftBodySharedSettingsSkinWeight_t * self
);

void JoltC_SoftBodySharedSettingsSkinWeight_mWeight_Set(
  JoltC_SoftBodySharedSettingsSkinWeight_t * self,
  float mWeight
);

//endregion


#ifdef __cplusplus
}
#endif

