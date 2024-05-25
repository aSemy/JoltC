#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SoftBodySharedSettingsDihedralBend_t * JoltC_SoftBodySharedSettingsDihedralBend_new(
  unsigned long inVertex1,
  unsigned long inVertex2,
  unsigned long inVertex3,
  unsigned long inVertex4,
  float inCompliance,
  char** outErrMsg
);

//endregion constructors

//region properties

size_t JoltC_SoftBodySharedSettingsDihedralBend_mVertex_Get(
  JoltC_SoftBodySharedSettingsDihedralBend_t * self,
  unsigned long * outValue,
  char** outErrMsg
);

void JoltC_SoftBodySharedSettingsDihedralBend_mVertex_Set(
  JoltC_SoftBodySharedSettingsDihedralBend_t * self,
  unsigned long * mVertex,
  size_t mVertexSize,
  char** outErrMsg
);

float JoltC_SoftBodySharedSettingsDihedralBend_mCompliance_Get(
  JoltC_SoftBodySharedSettingsDihedralBend_t * self,
  char** outErrMsg
);

void JoltC_SoftBodySharedSettingsDihedralBend_mCompliance_Set(
  JoltC_SoftBodySharedSettingsDihedralBend_t * self,
  float mCompliance,
  char** outErrMsg
);

float JoltC_SoftBodySharedSettingsDihedralBend_mInitialAngle_Get(
  JoltC_SoftBodySharedSettingsDihedralBend_t * self,
  char** outErrMsg
);

void JoltC_SoftBodySharedSettingsDihedralBend_mInitialAngle_Set(
  JoltC_SoftBodySharedSettingsDihedralBend_t * self,
  float mInitialAngle,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

