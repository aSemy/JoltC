#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_ArraySoftBodySharedSettingsSkinned_empty(
  JPC_ArraySoftBodySharedSettingsSkinned_t * self
);

long JPC_ArraySoftBodySharedSettingsSkinned_size(
  JPC_ArraySoftBodySharedSettingsSkinned_t * self
);

JPC_SoftBodySharedSettingsSkinned_t * JPC_ArraySoftBodySharedSettingsSkinned_at(
  JPC_ArraySoftBodySharedSettingsSkinned_t * self,
  long inIndex
);

void JPC_ArraySoftBodySharedSettingsSkinned_push_back(
  JPC_ArraySoftBodySharedSettingsSkinned_t * self,
  const JPC_SoftBodySharedSettingsSkinned_t * inValue
);

void JPC_ArraySoftBodySharedSettingsSkinned_reserve(
  JPC_ArraySoftBodySharedSettingsSkinned_t * self,
  unsigned long inSize
);

void JPC_ArraySoftBodySharedSettingsSkinned_resize(
  JPC_ArraySoftBodySharedSettingsSkinned_t * self,
  unsigned long inSize
);

void JPC_ArraySoftBodySharedSettingsSkinned_clear(
  JPC_ArraySoftBodySharedSettingsSkinned_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

