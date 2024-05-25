#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SoftBodySharedSettingsEdge_t * JoltC_SoftBodySharedSettingsEdge_new(
  unsigned long inVertex1,
  unsigned long inVertex2,
  float inCompliance,
  char** outErrMsg
);

//endregion constructors

//region properties

size_t JoltC_SoftBodySharedSettingsEdge_mVertex_Get(
  JoltC_SoftBodySharedSettingsEdge_t * self,
  unsigned long * outValue,
  char** outErrMsg
);

void JoltC_SoftBodySharedSettingsEdge_mVertex_Set(
  JoltC_SoftBodySharedSettingsEdge_t * self,
  unsigned long * mVertex,
  size_t mVertexSize,
  char** outErrMsg
);

float JoltC_SoftBodySharedSettingsEdge_mRestLength_Get(
  JoltC_SoftBodySharedSettingsEdge_t * self,
  char** outErrMsg
);

void JoltC_SoftBodySharedSettingsEdge_mRestLength_Set(
  JoltC_SoftBodySharedSettingsEdge_t * self,
  float mRestLength,
  char** outErrMsg
);

float JoltC_SoftBodySharedSettingsEdge_mCompliance_Get(
  JoltC_SoftBodySharedSettingsEdge_t * self,
  char** outErrMsg
);

void JoltC_SoftBodySharedSettingsEdge_mCompliance_Set(
  JoltC_SoftBodySharedSettingsEdge_t * self,
  float mCompliance,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

