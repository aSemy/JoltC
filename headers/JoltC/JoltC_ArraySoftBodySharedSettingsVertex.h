#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArraySoftBodySharedSettingsVertex_empty(
  JoltC_ArraySoftBodySharedSettingsVertex_t * self,
  char** outErrMsg
);

long JoltC_ArraySoftBodySharedSettingsVertex_size(
  JoltC_ArraySoftBodySharedSettingsVertex_t * self,
  char** outErrMsg
);

JoltC_SoftBodySharedSettingsVertex_t * JoltC_ArraySoftBodySharedSettingsVertex_at(
  JoltC_ArraySoftBodySharedSettingsVertex_t * self,
  long inIndex,
  char** outErrMsg
);

void JoltC_ArraySoftBodySharedSettingsVertex_push_back(
  JoltC_ArraySoftBodySharedSettingsVertex_t * self,
  const JoltC_SoftBodySharedSettingsVertex_t * inValue,
  char** outErrMsg
);

void JoltC_ArraySoftBodySharedSettingsVertex_reserve(
  JoltC_ArraySoftBodySharedSettingsVertex_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_ArraySoftBodySharedSettingsVertex_resize(
  JoltC_ArraySoftBodySharedSettingsVertex_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_ArraySoftBodySharedSettingsVertex_clear(
  JoltC_ArraySoftBodySharedSettingsVertex_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

