#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArraySoftBodySharedSettingsLRA_empty(
  JoltC_ArraySoftBodySharedSettingsLRA_t * self,
  char** outErrMsg
);

long JoltC_ArraySoftBodySharedSettingsLRA_size(
  JoltC_ArraySoftBodySharedSettingsLRA_t * self,
  char** outErrMsg
);

JoltC_SoftBodySharedSettingsLRA_t * JoltC_ArraySoftBodySharedSettingsLRA_at(
  JoltC_ArraySoftBodySharedSettingsLRA_t * self,
  long inIndex,
  char** outErrMsg
);

void JoltC_ArraySoftBodySharedSettingsLRA_push_back(
  JoltC_ArraySoftBodySharedSettingsLRA_t * self,
  const JoltC_SoftBodySharedSettingsLRA_t * inValue,
  char** outErrMsg
);

void JoltC_ArraySoftBodySharedSettingsLRA_reserve(
  JoltC_ArraySoftBodySharedSettingsLRA_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_ArraySoftBodySharedSettingsLRA_resize(
  JoltC_ArraySoftBodySharedSettingsLRA_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_ArraySoftBodySharedSettingsLRA_clear(
  JoltC_ArraySoftBodySharedSettingsLRA_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

