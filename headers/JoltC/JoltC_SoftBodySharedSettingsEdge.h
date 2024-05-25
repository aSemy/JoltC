#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_SoftBodySharedSettingsEdge_t * JPC_SoftBodySharedSettingsEdge_new(
  unsigned long inVertex1,
  unsigned long inVertex2,
  float inCompliance
);

//endregion constructors

//region properties

size_t JPC_SoftBodySharedSettingsEdge_mVertex_Get(
  JPC_SoftBodySharedSettingsEdge_t * self,
  unsigned long * outValue
);

void JPC_SoftBodySharedSettingsEdge_mVertex_Set(
  JPC_SoftBodySharedSettingsEdge_t * self,
  unsigned long * mVertex,
  size_t mVertexSize
);

float JPC_SoftBodySharedSettingsEdge_mRestLength_Get(
  JPC_SoftBodySharedSettingsEdge_t * self
);

void JPC_SoftBodySharedSettingsEdge_mRestLength_Set(
  JPC_SoftBodySharedSettingsEdge_t * self,
  float mRestLength
);

float JPC_SoftBodySharedSettingsEdge_mCompliance_Get(
  JPC_SoftBodySharedSettingsEdge_t * self
);

void JPC_SoftBodySharedSettingsEdge_mCompliance_Set(
  JPC_SoftBodySharedSettingsEdge_t * self,
  float mCompliance
);

//endregion properties


#ifdef __cplusplus
}
#endif

