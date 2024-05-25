#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArraySoftBodySharedSettingsInvBind_empty(
  JoltC_ArraySoftBodySharedSettingsInvBind_t * self,
  char** outErrMsg
);

long JoltC_ArraySoftBodySharedSettingsInvBind_size(
  JoltC_ArraySoftBodySharedSettingsInvBind_t * self,
  char** outErrMsg
);

JoltC_SoftBodySharedSettingsInvBind_t * JoltC_ArraySoftBodySharedSettingsInvBind_at(
  JoltC_ArraySoftBodySharedSettingsInvBind_t * self,
  long inIndex,
  char** outErrMsg
);

void JoltC_ArraySoftBodySharedSettingsInvBind_push_back(
  JoltC_ArraySoftBodySharedSettingsInvBind_t * self,
  const JoltC_SoftBodySharedSettingsInvBind_t * inValue,
  char** outErrMsg
);

void JoltC_ArraySoftBodySharedSettingsInvBind_reserve(
  JoltC_ArraySoftBodySharedSettingsInvBind_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_ArraySoftBodySharedSettingsInvBind_resize(
  JoltC_ArraySoftBodySharedSettingsInvBind_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_ArraySoftBodySharedSettingsInvBind_clear(
  JoltC_ArraySoftBodySharedSettingsInvBind_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

