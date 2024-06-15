#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_ArraySoftBodySharedSettingsVertexAttributes_destroy(
  JoltC_ArraySoftBodySharedSettingsVertexAttributes_t * self
);

//endregion
//region functions

bool JoltC_ArraySoftBodySharedSettingsVertexAttributes_empty(
  JoltC_ArraySoftBodySharedSettingsVertexAttributes_t * self
);

long JoltC_ArraySoftBodySharedSettingsVertexAttributes_size(
  JoltC_ArraySoftBodySharedSettingsVertexAttributes_t * self
);

JoltC_SoftBodySharedSettingsVertexAttributes_t * JoltC_ArraySoftBodySharedSettingsVertexAttributes_at(
  JoltC_ArraySoftBodySharedSettingsVertexAttributes_t * self,
  long inIndex
);

void JoltC_ArraySoftBodySharedSettingsVertexAttributes_push_back(
  JoltC_ArraySoftBodySharedSettingsVertexAttributes_t * self,
  JoltC_SoftBodySharedSettingsVertexAttributes_t * inValue
);

void JoltC_ArraySoftBodySharedSettingsVertexAttributes_reserve(
  JoltC_ArraySoftBodySharedSettingsVertexAttributes_t * self,
  unsigned long inSize
);

void JoltC_ArraySoftBodySharedSettingsVertexAttributes_resize(
  JoltC_ArraySoftBodySharedSettingsVertexAttributes_t * self,
  unsigned long inSize
);

void JoltC_ArraySoftBodySharedSettingsVertexAttributes_clear(
  JoltC_ArraySoftBodySharedSettingsVertexAttributes_t * self
);

JoltC_SoftBodySharedSettingsVertexAttributes_t * JoltC_ArraySoftBodySharedSettingsVertexAttributes_data(
  JoltC_ArraySoftBodySharedSettingsVertexAttributes_t * self
);

//endregion


#ifdef __cplusplus
}
#endif
