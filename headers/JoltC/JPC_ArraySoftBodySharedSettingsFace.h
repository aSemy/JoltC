#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_ArraySoftBodySharedSettingsFace_empty(
  JPC_ArraySoftBodySharedSettingsFace_t * self
);

long JPC_ArraySoftBodySharedSettingsFace_size(
  JPC_ArraySoftBodySharedSettingsFace_t * self
);

JPC_SoftBodySharedSettingsFace_t * JPC_ArraySoftBodySharedSettingsFace_at(
  JPC_ArraySoftBodySharedSettingsFace_t * self,
  long inIndex
);

void JPC_ArraySoftBodySharedSettingsFace_push_back(
  JPC_ArraySoftBodySharedSettingsFace_t * self,
  const JPC_SoftBodySharedSettingsFace_t * inValue
);

void JPC_ArraySoftBodySharedSettingsFace_reserve(
  JPC_ArraySoftBodySharedSettingsFace_t * self,
  unsigned long inSize
);

void JPC_ArraySoftBodySharedSettingsFace_resize(
  JPC_ArraySoftBodySharedSettingsFace_t * self,
  unsigned long inSize
);

void JPC_ArraySoftBodySharedSettingsFace_clear(
  JPC_ArraySoftBodySharedSettingsFace_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

