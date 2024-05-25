#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArraySoftBodySharedSettingsSkinned_empty(
  JoltC_ArraySoftBodySharedSettingsSkinned_t * self,
  char** outErrMsg
);

long JoltC_ArraySoftBodySharedSettingsSkinned_size(
  JoltC_ArraySoftBodySharedSettingsSkinned_t * self,
  char** outErrMsg
);

JoltC_SoftBodySharedSettingsSkinned_t * JoltC_ArraySoftBodySharedSettingsSkinned_at(
  JoltC_ArraySoftBodySharedSettingsSkinned_t * self,
  long inIndex,
  char** outErrMsg
);

void JoltC_ArraySoftBodySharedSettingsSkinned_push_back(
  JoltC_ArraySoftBodySharedSettingsSkinned_t * self,
  const JoltC_SoftBodySharedSettingsSkinned_t * inValue,
  char** outErrMsg
);

void JoltC_ArraySoftBodySharedSettingsSkinned_reserve(
  JoltC_ArraySoftBodySharedSettingsSkinned_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_ArraySoftBodySharedSettingsSkinned_resize(
  JoltC_ArraySoftBodySharedSettingsSkinned_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_ArraySoftBodySharedSettingsSkinned_clear(
  JoltC_ArraySoftBodySharedSettingsSkinned_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

