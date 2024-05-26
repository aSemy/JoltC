#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArraySoftBodySharedSettingsVolume_empty(
  JoltC_ArraySoftBodySharedSettingsVolume_t * self
);

long JoltC_ArraySoftBodySharedSettingsVolume_size(
  JoltC_ArraySoftBodySharedSettingsVolume_t * self
);

JoltC_SoftBodySharedSettingsVolume_t * JoltC_ArraySoftBodySharedSettingsVolume_at(
  JoltC_ArraySoftBodySharedSettingsVolume_t * self,
  long inIndex
);

void JoltC_ArraySoftBodySharedSettingsVolume_push_back(
  JoltC_ArraySoftBodySharedSettingsVolume_t * self,
  JoltC_SoftBodySharedSettingsVolume_t * inValue
);

void JoltC_ArraySoftBodySharedSettingsVolume_reserve(
  JoltC_ArraySoftBodySharedSettingsVolume_t * self,
  unsigned long inSize
);

void JoltC_ArraySoftBodySharedSettingsVolume_resize(
  JoltC_ArraySoftBodySharedSettingsVolume_t * self,
  unsigned long inSize
);

void JoltC_ArraySoftBodySharedSettingsVolume_clear(
  JoltC_ArraySoftBodySharedSettingsVolume_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

