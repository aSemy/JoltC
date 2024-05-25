#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region properties

unsigned long JoltC_SoftBodySharedSettingsSkinWeight_mInvBindIndex_Get(
  JoltC_SoftBodySharedSettingsSkinWeight_t * self,
  char** outErrMsg
);

void JoltC_SoftBodySharedSettingsSkinWeight_mInvBindIndex_Set(
  JoltC_SoftBodySharedSettingsSkinWeight_t * self,
  unsigned long mInvBindIndex,
  char** outErrMsg
);

float JoltC_SoftBodySharedSettingsSkinWeight_mWeight_Get(
  JoltC_SoftBodySharedSettingsSkinWeight_t * self,
  char** outErrMsg
);

void JoltC_SoftBodySharedSettingsSkinWeight_mWeight_Set(
  JoltC_SoftBodySharedSettingsSkinWeight_t * self,
  float mWeight,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

