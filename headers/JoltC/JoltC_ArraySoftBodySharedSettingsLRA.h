#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_ArraySoftBodySharedSettingsLRA_empty(
  JPC_ArraySoftBodySharedSettingsLRA_t * self
);

long JPC_ArraySoftBodySharedSettingsLRA_size(
  JPC_ArraySoftBodySharedSettingsLRA_t * self
);

JPC_SoftBodySharedSettingsLRA_t * JPC_ArraySoftBodySharedSettingsLRA_at(
  JPC_ArraySoftBodySharedSettingsLRA_t * self,
  long inIndex
);

void JPC_ArraySoftBodySharedSettingsLRA_push_back(
  JPC_ArraySoftBodySharedSettingsLRA_t * self,
  const JPC_SoftBodySharedSettingsLRA_t * inValue
);

void JPC_ArraySoftBodySharedSettingsLRA_reserve(
  JPC_ArraySoftBodySharedSettingsLRA_t * self,
  unsigned long inSize
);

void JPC_ArraySoftBodySharedSettingsLRA_resize(
  JPC_ArraySoftBodySharedSettingsLRA_t * self,
  unsigned long inSize
);

void JPC_ArraySoftBodySharedSettingsLRA_clear(
  JPC_ArraySoftBodySharedSettingsLRA_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

