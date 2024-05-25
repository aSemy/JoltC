#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_ArraySoftBodySharedSettingsVertexAttributes_empty(
  JPC_ArraySoftBodySharedSettingsVertexAttributes_t * self
);

long JPC_ArraySoftBodySharedSettingsVertexAttributes_size(
  JPC_ArraySoftBodySharedSettingsVertexAttributes_t * self
);

JPC_SoftBodySharedSettingsVertexAttributes_t * JPC_ArraySoftBodySharedSettingsVertexAttributes_at(
  JPC_ArraySoftBodySharedSettingsVertexAttributes_t * self,
  long inIndex
);

void JPC_ArraySoftBodySharedSettingsVertexAttributes_push_back(
  JPC_ArraySoftBodySharedSettingsVertexAttributes_t * self,
  const JPC_SoftBodySharedSettingsVertexAttributes_t * inValue
);

void JPC_ArraySoftBodySharedSettingsVertexAttributes_reserve(
  JPC_ArraySoftBodySharedSettingsVertexAttributes_t * self,
  unsigned long inSize
);

void JPC_ArraySoftBodySharedSettingsVertexAttributes_resize(
  JPC_ArraySoftBodySharedSettingsVertexAttributes_t * self,
  unsigned long inSize
);

void JPC_ArraySoftBodySharedSettingsVertexAttributes_clear(
  JPC_ArraySoftBodySharedSettingsVertexAttributes_t * self
);

JPC_SoftBodySharedSettingsVertexAttributes_t * JPC_ArraySoftBodySharedSettingsVertexAttributes_data(
  JPC_ArraySoftBodySharedSettingsVertexAttributes_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

