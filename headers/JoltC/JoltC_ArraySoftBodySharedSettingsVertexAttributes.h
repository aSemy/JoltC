#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArraySoftBodySharedSettingsVertexAttributes_empty(
  JoltC_ArraySoftBodySharedSettingsVertexAttributes_t * self,
  char** outErrMsg
);

long JoltC_ArraySoftBodySharedSettingsVertexAttributes_size(
  JoltC_ArraySoftBodySharedSettingsVertexAttributes_t * self,
  char** outErrMsg
);

JoltC_SoftBodySharedSettingsVertexAttributes_t * JoltC_ArraySoftBodySharedSettingsVertexAttributes_at(
  JoltC_ArraySoftBodySharedSettingsVertexAttributes_t * self,
  long inIndex,
  char** outErrMsg
);

void JoltC_ArraySoftBodySharedSettingsVertexAttributes_push_back(
  JoltC_ArraySoftBodySharedSettingsVertexAttributes_t * self,
  const JoltC_SoftBodySharedSettingsVertexAttributes_t * inValue,
  char** outErrMsg
);

void JoltC_ArraySoftBodySharedSettingsVertexAttributes_reserve(
  JoltC_ArraySoftBodySharedSettingsVertexAttributes_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_ArraySoftBodySharedSettingsVertexAttributes_resize(
  JoltC_ArraySoftBodySharedSettingsVertexAttributes_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_ArraySoftBodySharedSettingsVertexAttributes_clear(
  JoltC_ArraySoftBodySharedSettingsVertexAttributes_t * self,
  char** outErrMsg
);

JoltC_SoftBodySharedSettingsVertexAttributes_t * JoltC_ArraySoftBodySharedSettingsVertexAttributes_data(
  JoltC_ArraySoftBodySharedSettingsVertexAttributes_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

