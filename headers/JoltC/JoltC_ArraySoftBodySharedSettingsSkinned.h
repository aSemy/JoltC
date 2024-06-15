#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_ArraySoftBodySharedSettingsSkinned_destroy(
  JoltC_ArraySoftBodySharedSettingsSkinned_t * self
);

//endregion
//region functions

bool JoltC_ArraySoftBodySharedSettingsSkinned_empty(
  JoltC_ArraySoftBodySharedSettingsSkinned_t * self
);

long JoltC_ArraySoftBodySharedSettingsSkinned_size(
  JoltC_ArraySoftBodySharedSettingsSkinned_t * self
);

JoltC_SoftBodySharedSettingsSkinned_t * JoltC_ArraySoftBodySharedSettingsSkinned_at(
  JoltC_ArraySoftBodySharedSettingsSkinned_t * self,
  long inIndex
);

void JoltC_ArraySoftBodySharedSettingsSkinned_push_back(
  JoltC_ArraySoftBodySharedSettingsSkinned_t * self,
  JoltC_SoftBodySharedSettingsSkinned_t * inValue
);

void JoltC_ArraySoftBodySharedSettingsSkinned_reserve(
  JoltC_ArraySoftBodySharedSettingsSkinned_t * self,
  unsigned long inSize
);

void JoltC_ArraySoftBodySharedSettingsSkinned_resize(
  JoltC_ArraySoftBodySharedSettingsSkinned_t * self,
  unsigned long inSize
);

void JoltC_ArraySoftBodySharedSettingsSkinned_clear(
  JoltC_ArraySoftBodySharedSettingsSkinned_t * self
);

//endregion


#ifdef __cplusplus
}
#endif
