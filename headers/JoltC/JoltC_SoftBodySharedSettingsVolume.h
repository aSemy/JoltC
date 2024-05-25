#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SoftBodySharedSettingsVolume_t * JoltC_SoftBodySharedSettingsVolume_new(
  unsigned long inVertex1,
  unsigned long inVertex2,
  unsigned long inVertex3,
  unsigned long inVertex4,
  float inCompliance,
  char** outErrMsg
);

//endregion constructors

//region properties

size_t JoltC_SoftBodySharedSettingsVolume_mVertex_Get(
  JoltC_SoftBodySharedSettingsVolume_t * self,
  unsigned long * outValue,
  char** outErrMsg
);

void JoltC_SoftBodySharedSettingsVolume_mVertex_Set(
  JoltC_SoftBodySharedSettingsVolume_t * self,
  unsigned long * mVertex,
  size_t mVertexSize,
  char** outErrMsg
);

float JoltC_SoftBodySharedSettingsVolume_mSixRestVolume_Get(
  JoltC_SoftBodySharedSettingsVolume_t * self,
  char** outErrMsg
);

void JoltC_SoftBodySharedSettingsVolume_mSixRestVolume_Set(
  JoltC_SoftBodySharedSettingsVolume_t * self,
  float mSixRestVolume,
  char** outErrMsg
);

float JoltC_SoftBodySharedSettingsVolume_mCompliance_Get(
  JoltC_SoftBodySharedSettingsVolume_t * self,
  char** outErrMsg
);

void JoltC_SoftBodySharedSettingsVolume_mCompliance_Set(
  JoltC_SoftBodySharedSettingsVolume_t * self,
  float mCompliance,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

