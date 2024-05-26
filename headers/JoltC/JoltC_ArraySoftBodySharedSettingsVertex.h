#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArraySoftBodySharedSettingsVertex_empty(
  JoltC_ArraySoftBodySharedSettingsVertex_t * self
);

long JoltC_ArraySoftBodySharedSettingsVertex_size(
  JoltC_ArraySoftBodySharedSettingsVertex_t * self
);

JoltC_SoftBodySharedSettingsVertex_t * JoltC_ArraySoftBodySharedSettingsVertex_at(
  JoltC_ArraySoftBodySharedSettingsVertex_t * self,
  long inIndex
);

void JoltC_ArraySoftBodySharedSettingsVertex_push_back(
  JoltC_ArraySoftBodySharedSettingsVertex_t * self,
  JoltC_SoftBodySharedSettingsVertex_t * inValue
);

void JoltC_ArraySoftBodySharedSettingsVertex_reserve(
  JoltC_ArraySoftBodySharedSettingsVertex_t * self,
  unsigned long inSize
);

void JoltC_ArraySoftBodySharedSettingsVertex_resize(
  JoltC_ArraySoftBodySharedSettingsVertex_t * self,
  unsigned long inSize
);

void JoltC_ArraySoftBodySharedSettingsVertex_clear(
  JoltC_ArraySoftBodySharedSettingsVertex_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

