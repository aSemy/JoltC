#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_ArraySoftBodySharedSettingsVertex_empty(
  JPC_ArraySoftBodySharedSettingsVertex_t * self
);

long JPC_ArraySoftBodySharedSettingsVertex_size(
  JPC_ArraySoftBodySharedSettingsVertex_t * self
);

JPC_SoftBodySharedSettingsVertex_t * JPC_ArraySoftBodySharedSettingsVertex_at(
  JPC_ArraySoftBodySharedSettingsVertex_t * self,
  long inIndex
);

void JPC_ArraySoftBodySharedSettingsVertex_push_back(
  JPC_ArraySoftBodySharedSettingsVertex_t * self,
  const JPC_SoftBodySharedSettingsVertex_t * inValue
);

void JPC_ArraySoftBodySharedSettingsVertex_reserve(
  JPC_ArraySoftBodySharedSettingsVertex_t * self,
  unsigned long inSize
);

void JPC_ArraySoftBodySharedSettingsVertex_resize(
  JPC_ArraySoftBodySharedSettingsVertex_t * self,
  unsigned long inSize
);

void JPC_ArraySoftBodySharedSettingsVertex_clear(
  JPC_ArraySoftBodySharedSettingsVertex_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

