#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_ArraySoftBodySharedSettingsEdge_empty(
  JPC_ArraySoftBodySharedSettingsEdge_t * self
);

long JPC_ArraySoftBodySharedSettingsEdge_size(
  JPC_ArraySoftBodySharedSettingsEdge_t * self
);

JPC_SoftBodySharedSettingsEdge_t * JPC_ArraySoftBodySharedSettingsEdge_at(
  JPC_ArraySoftBodySharedSettingsEdge_t * self,
  long inIndex
);

void JPC_ArraySoftBodySharedSettingsEdge_push_back(
  JPC_ArraySoftBodySharedSettingsEdge_t * self,
  const JPC_SoftBodySharedSettingsEdge_t * inValue
);

void JPC_ArraySoftBodySharedSettingsEdge_reserve(
  JPC_ArraySoftBodySharedSettingsEdge_t * self,
  unsigned long inSize
);

void JPC_ArraySoftBodySharedSettingsEdge_resize(
  JPC_ArraySoftBodySharedSettingsEdge_t * self,
  unsigned long inSize
);

void JPC_ArraySoftBodySharedSettingsEdge_clear(
  JPC_ArraySoftBodySharedSettingsEdge_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

