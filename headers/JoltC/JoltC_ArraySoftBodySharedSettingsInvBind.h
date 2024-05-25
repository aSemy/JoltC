#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_ArraySoftBodySharedSettingsInvBind_empty(
  JPC_ArraySoftBodySharedSettingsInvBind_t * self
);

long JPC_ArraySoftBodySharedSettingsInvBind_size(
  JPC_ArraySoftBodySharedSettingsInvBind_t * self
);

JPC_SoftBodySharedSettingsInvBind_t * JPC_ArraySoftBodySharedSettingsInvBind_at(
  JPC_ArraySoftBodySharedSettingsInvBind_t * self,
  long inIndex
);

void JPC_ArraySoftBodySharedSettingsInvBind_push_back(
  JPC_ArraySoftBodySharedSettingsInvBind_t * self,
  const JPC_SoftBodySharedSettingsInvBind_t * inValue
);

void JPC_ArraySoftBodySharedSettingsInvBind_reserve(
  JPC_ArraySoftBodySharedSettingsInvBind_t * self,
  unsigned long inSize
);

void JPC_ArraySoftBodySharedSettingsInvBind_resize(
  JPC_ArraySoftBodySharedSettingsInvBind_t * self,
  unsigned long inSize
);

void JPC_ArraySoftBodySharedSettingsInvBind_clear(
  JPC_ArraySoftBodySharedSettingsInvBind_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

