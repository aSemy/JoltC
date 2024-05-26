#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArraySoftBodySharedSettingsEdge_empty(
  JoltC_ArraySoftBodySharedSettingsEdge_t * self
);

long JoltC_ArraySoftBodySharedSettingsEdge_size(
  JoltC_ArraySoftBodySharedSettingsEdge_t * self
);

JoltC_SoftBodySharedSettingsEdge_t * JoltC_ArraySoftBodySharedSettingsEdge_at(
  JoltC_ArraySoftBodySharedSettingsEdge_t * self,
  long inIndex
);

void JoltC_ArraySoftBodySharedSettingsEdge_push_back(
  JoltC_ArraySoftBodySharedSettingsEdge_t * self,
  const JoltC_SoftBodySharedSettingsEdge_t * inValue
);

void JoltC_ArraySoftBodySharedSettingsEdge_reserve(
  JoltC_ArraySoftBodySharedSettingsEdge_t * self,
  unsigned long inSize
);

void JoltC_ArraySoftBodySharedSettingsEdge_resize(
  JoltC_ArraySoftBodySharedSettingsEdge_t * self,
  unsigned long inSize
);

void JoltC_ArraySoftBodySharedSettingsEdge_clear(
  JoltC_ArraySoftBodySharedSettingsEdge_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

