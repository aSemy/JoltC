#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SoftBodySharedSettingsLRA_t * JoltC_SoftBodySharedSettingsLRA_new(
  unsigned long inVertex1,
  unsigned long inVertex2,
  float inMaxDistance,
  char** outErrMsg
);

//endregion constructors

//region properties

size_t JoltC_SoftBodySharedSettingsLRA_mVertex_Get(
  JoltC_SoftBodySharedSettingsLRA_t * self,
  unsigned long * outValue,
  char** outErrMsg
);

void JoltC_SoftBodySharedSettingsLRA_mVertex_Set(
  JoltC_SoftBodySharedSettingsLRA_t * self,
  unsigned long * mVertex,
  size_t mVertexSize,
  char** outErrMsg
);

float JoltC_SoftBodySharedSettingsLRA_mMaxDistance_Get(
  JoltC_SoftBodySharedSettingsLRA_t * self,
  char** outErrMsg
);

void JoltC_SoftBodySharedSettingsLRA_mMaxDistance_Set(
  JoltC_SoftBodySharedSettingsLRA_t * self,
  float mMaxDistance,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

