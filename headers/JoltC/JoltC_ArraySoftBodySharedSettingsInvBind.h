#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArraySoftBodySharedSettingsInvBind_empty(
  JoltC_ArraySoftBodySharedSettingsInvBind_t * self
);

long JoltC_ArraySoftBodySharedSettingsInvBind_size(
  JoltC_ArraySoftBodySharedSettingsInvBind_t * self
);

JoltC_SoftBodySharedSettingsInvBind_t * JoltC_ArraySoftBodySharedSettingsInvBind_at(
  JoltC_ArraySoftBodySharedSettingsInvBind_t * self,
  long inIndex
);

void JoltC_ArraySoftBodySharedSettingsInvBind_push_back(
  JoltC_ArraySoftBodySharedSettingsInvBind_t * self,
  JoltC_SoftBodySharedSettingsInvBind_t * inValue
);

void JoltC_ArraySoftBodySharedSettingsInvBind_reserve(
  JoltC_ArraySoftBodySharedSettingsInvBind_t * self,
  unsigned long inSize
);

void JoltC_ArraySoftBodySharedSettingsInvBind_resize(
  JoltC_ArraySoftBodySharedSettingsInvBind_t * self,
  unsigned long inSize
);

void JoltC_ArraySoftBodySharedSettingsInvBind_clear(
  JoltC_ArraySoftBodySharedSettingsInvBind_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

