#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_ArraySoftBodySharedSettingsDihedralBend_empty(
  JPC_ArraySoftBodySharedSettingsDihedralBend_t * self
);

long JPC_ArraySoftBodySharedSettingsDihedralBend_size(
  JPC_ArraySoftBodySharedSettingsDihedralBend_t * self
);

JPC_SoftBodySharedSettingsDihedralBend_t * JPC_ArraySoftBodySharedSettingsDihedralBend_at(
  JPC_ArraySoftBodySharedSettingsDihedralBend_t * self,
  long inIndex
);

void JPC_ArraySoftBodySharedSettingsDihedralBend_push_back(
  JPC_ArraySoftBodySharedSettingsDihedralBend_t * self,
  const JPC_SoftBodySharedSettingsDihedralBend_t * inValue
);

void JPC_ArraySoftBodySharedSettingsDihedralBend_reserve(
  JPC_ArraySoftBodySharedSettingsDihedralBend_t * self,
  unsigned long inSize
);

void JPC_ArraySoftBodySharedSettingsDihedralBend_resize(
  JPC_ArraySoftBodySharedSettingsDihedralBend_t * self,
  unsigned long inSize
);

void JPC_ArraySoftBodySharedSettingsDihedralBend_clear(
  JPC_ArraySoftBodySharedSettingsDihedralBend_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

