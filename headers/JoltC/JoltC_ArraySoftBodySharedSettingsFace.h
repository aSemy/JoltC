#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArraySoftBodySharedSettingsFace_empty(
  JoltC_ArraySoftBodySharedSettingsFace_t * self,
  char** outErrMsg
);

long JoltC_ArraySoftBodySharedSettingsFace_size(
  JoltC_ArraySoftBodySharedSettingsFace_t * self,
  char** outErrMsg
);

JoltC_SoftBodySharedSettingsFace_t * JoltC_ArraySoftBodySharedSettingsFace_at(
  JoltC_ArraySoftBodySharedSettingsFace_t * self,
  long inIndex,
  char** outErrMsg
);

void JoltC_ArraySoftBodySharedSettingsFace_push_back(
  JoltC_ArraySoftBodySharedSettingsFace_t * self,
  const JoltC_SoftBodySharedSettingsFace_t * inValue,
  char** outErrMsg
);

void JoltC_ArraySoftBodySharedSettingsFace_reserve(
  JoltC_ArraySoftBodySharedSettingsFace_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_ArraySoftBodySharedSettingsFace_resize(
  JoltC_ArraySoftBodySharedSettingsFace_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_ArraySoftBodySharedSettingsFace_clear(
  JoltC_ArraySoftBodySharedSettingsFace_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

