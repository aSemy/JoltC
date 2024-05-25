#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArraySoftBodySharedSettingsDihedralBend_empty(
  JoltC_ArraySoftBodySharedSettingsDihedralBend_t * self,
  char** outErrMsg
);

long JoltC_ArraySoftBodySharedSettingsDihedralBend_size(
  JoltC_ArraySoftBodySharedSettingsDihedralBend_t * self,
  char** outErrMsg
);

JoltC_SoftBodySharedSettingsDihedralBend_t * JoltC_ArraySoftBodySharedSettingsDihedralBend_at(
  JoltC_ArraySoftBodySharedSettingsDihedralBend_t * self,
  long inIndex,
  char** outErrMsg
);

void JoltC_ArraySoftBodySharedSettingsDihedralBend_push_back(
  JoltC_ArraySoftBodySharedSettingsDihedralBend_t * self,
  const JoltC_SoftBodySharedSettingsDihedralBend_t * inValue,
  char** outErrMsg
);

void JoltC_ArraySoftBodySharedSettingsDihedralBend_reserve(
  JoltC_ArraySoftBodySharedSettingsDihedralBend_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_ArraySoftBodySharedSettingsDihedralBend_resize(
  JoltC_ArraySoftBodySharedSettingsDihedralBend_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_ArraySoftBodySharedSettingsDihedralBend_clear(
  JoltC_ArraySoftBodySharedSettingsDihedralBend_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

