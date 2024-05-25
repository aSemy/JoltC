#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_ArraySoftBodySharedSettingsVolume_empty(
  JPC_ArraySoftBodySharedSettingsVolume_t * self
);

long JPC_ArraySoftBodySharedSettingsVolume_size(
  JPC_ArraySoftBodySharedSettingsVolume_t * self
);

JPC_SoftBodySharedSettingsVolume_t * JPC_ArraySoftBodySharedSettingsVolume_at(
  JPC_ArraySoftBodySharedSettingsVolume_t * self,
  long inIndex
);

void JPC_ArraySoftBodySharedSettingsVolume_push_back(
  JPC_ArraySoftBodySharedSettingsVolume_t * self,
  const JPC_SoftBodySharedSettingsVolume_t * inValue
);

void JPC_ArraySoftBodySharedSettingsVolume_reserve(
  JPC_ArraySoftBodySharedSettingsVolume_t * self,
  unsigned long inSize
);

void JPC_ArraySoftBodySharedSettingsVolume_resize(
  JPC_ArraySoftBodySharedSettingsVolume_t * self,
  unsigned long inSize
);

void JPC_ArraySoftBodySharedSettingsVolume_clear(
  JPC_ArraySoftBodySharedSettingsVolume_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

