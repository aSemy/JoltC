#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArraySoftBodySharedSettingsDihedralBend_empty(
  JoltC_ArraySoftBodySharedSettingsDihedralBend_t * self
);

long JoltC_ArraySoftBodySharedSettingsDihedralBend_size(
  JoltC_ArraySoftBodySharedSettingsDihedralBend_t * self
);

JoltC_SoftBodySharedSettingsDihedralBend_t * JoltC_ArraySoftBodySharedSettingsDihedralBend_at(
  JoltC_ArraySoftBodySharedSettingsDihedralBend_t * self,
  long inIndex
);

void JoltC_ArraySoftBodySharedSettingsDihedralBend_push_back(
  JoltC_ArraySoftBodySharedSettingsDihedralBend_t * self,
  const JoltC_SoftBodySharedSettingsDihedralBend_t * inValue
);

void JoltC_ArraySoftBodySharedSettingsDihedralBend_reserve(
  JoltC_ArraySoftBodySharedSettingsDihedralBend_t * self,
  unsigned long inSize
);

void JoltC_ArraySoftBodySharedSettingsDihedralBend_resize(
  JoltC_ArraySoftBodySharedSettingsDihedralBend_t * self,
  unsigned long inSize
);

void JoltC_ArraySoftBodySharedSettingsDihedralBend_clear(
  JoltC_ArraySoftBodySharedSettingsDihedralBend_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

