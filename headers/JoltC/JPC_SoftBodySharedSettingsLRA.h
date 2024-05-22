#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_SoftBodySharedSettingsLRA_t * JPC_SoftBodySharedSettingsLRA_new(
  unsigned long inVertex1,
  unsigned long inVertex2,
  float inMaxDistance
);

//endregion constructors

//region properties

size_t JPC_SoftBodySharedSettingsLRA_mVertex_Get(
  JPC_SoftBodySharedSettingsLRA_t * self,
  unsigned long * outValue
);

void JPC_SoftBodySharedSettingsLRA_mVertex_Set(
  JPC_SoftBodySharedSettingsLRA_t * self,
  unsigned long * mVertex,
  size_t mVertexSize
);

float JPC_SoftBodySharedSettingsLRA_mMaxDistance_Get(
  JPC_SoftBodySharedSettingsLRA_t * self
);

void JPC_SoftBodySharedSettingsLRA_mMaxDistance_Set(
  JPC_SoftBodySharedSettingsLRA_t * self,
  float mMaxDistance
);

//endregion properties


#ifdef __cplusplus
}
#endif

