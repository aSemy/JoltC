#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SoftBodySharedSettingsEdge_t * JoltC_SoftBodySharedSettingsEdge_new(
  unsigned long inVertex1,
  unsigned long inVertex2,
  float inCompliance
);

//endregion

//region properties

size_t JoltC_SoftBodySharedSettingsEdge_mVertex_Get(
  JoltC_SoftBodySharedSettingsEdge_t * self,
  unsigned long * outValue
);

void JoltC_SoftBodySharedSettingsEdge_mVertex_Set(
  JoltC_SoftBodySharedSettingsEdge_t * self,
  unsigned long * mVertex,
  size_t mVertexSize
);

float JoltC_SoftBodySharedSettingsEdge_mRestLength_Get(
  JoltC_SoftBodySharedSettingsEdge_t * self
);

void JoltC_SoftBodySharedSettingsEdge_mRestLength_Set(
  JoltC_SoftBodySharedSettingsEdge_t * self,
  float mRestLength
);

float JoltC_SoftBodySharedSettingsEdge_mCompliance_Get(
  JoltC_SoftBodySharedSettingsEdge_t * self
);

void JoltC_SoftBodySharedSettingsEdge_mCompliance_Set(
  JoltC_SoftBodySharedSettingsEdge_t * self,
  float mCompliance
);

//endregion


#ifdef __cplusplus
}
#endif

