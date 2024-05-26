#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArraySoftBodySharedSettingsFace_empty(
  JoltC_ArraySoftBodySharedSettingsFace_t * self
);

long JoltC_ArraySoftBodySharedSettingsFace_size(
  JoltC_ArraySoftBodySharedSettingsFace_t * self
);

JoltC_SoftBodySharedSettingsFace_t * JoltC_ArraySoftBodySharedSettingsFace_at(
  JoltC_ArraySoftBodySharedSettingsFace_t * self,
  long inIndex
);

void JoltC_ArraySoftBodySharedSettingsFace_push_back(
  JoltC_ArraySoftBodySharedSettingsFace_t * self,
  const JoltC_SoftBodySharedSettingsFace_t * inValue
);

void JoltC_ArraySoftBodySharedSettingsFace_reserve(
  JoltC_ArraySoftBodySharedSettingsFace_t * self,
  unsigned long inSize
);

void JoltC_ArraySoftBodySharedSettingsFace_resize(
  JoltC_ArraySoftBodySharedSettingsFace_t * self,
  unsigned long inSize
);

void JoltC_ArraySoftBodySharedSettingsFace_clear(
  JoltC_ArraySoftBodySharedSettingsFace_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

