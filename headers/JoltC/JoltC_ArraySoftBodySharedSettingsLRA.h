#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArraySoftBodySharedSettingsLRA_empty(
  JoltC_ArraySoftBodySharedSettingsLRA_t * self
);

long JoltC_ArraySoftBodySharedSettingsLRA_size(
  JoltC_ArraySoftBodySharedSettingsLRA_t * self
);

JoltC_SoftBodySharedSettingsLRA_t * JoltC_ArraySoftBodySharedSettingsLRA_at(
  JoltC_ArraySoftBodySharedSettingsLRA_t * self,
  long inIndex
);

void JoltC_ArraySoftBodySharedSettingsLRA_push_back(
  JoltC_ArraySoftBodySharedSettingsLRA_t * self,
  JoltC_SoftBodySharedSettingsLRA_t * inValue
);

void JoltC_ArraySoftBodySharedSettingsLRA_reserve(
  JoltC_ArraySoftBodySharedSettingsLRA_t * self,
  unsigned long inSize
);

void JoltC_ArraySoftBodySharedSettingsLRA_resize(
  JoltC_ArraySoftBodySharedSettingsLRA_t * self,
  unsigned long inSize
);

void JoltC_ArraySoftBodySharedSettingsLRA_clear(
  JoltC_ArraySoftBodySharedSettingsLRA_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

