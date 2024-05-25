#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArraySoftBodySharedSettingsVolume_empty(
  JoltC_ArraySoftBodySharedSettingsVolume_t * self,
  char** outErrMsg
);

long JoltC_ArraySoftBodySharedSettingsVolume_size(
  JoltC_ArraySoftBodySharedSettingsVolume_t * self,
  char** outErrMsg
);

JoltC_SoftBodySharedSettingsVolume_t * JoltC_ArraySoftBodySharedSettingsVolume_at(
  JoltC_ArraySoftBodySharedSettingsVolume_t * self,
  long inIndex,
  char** outErrMsg
);

void JoltC_ArraySoftBodySharedSettingsVolume_push_back(
  JoltC_ArraySoftBodySharedSettingsVolume_t * self,
  const JoltC_SoftBodySharedSettingsVolume_t * inValue,
  char** outErrMsg
);

void JoltC_ArraySoftBodySharedSettingsVolume_reserve(
  JoltC_ArraySoftBodySharedSettingsVolume_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_ArraySoftBodySharedSettingsVolume_resize(
  JoltC_ArraySoftBodySharedSettingsVolume_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_ArraySoftBodySharedSettingsVolume_clear(
  JoltC_ArraySoftBodySharedSettingsVolume_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

