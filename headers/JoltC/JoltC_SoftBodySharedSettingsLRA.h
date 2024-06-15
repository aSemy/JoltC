#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SoftBodySharedSettingsLRA_t * JoltC_SoftBodySharedSettingsLRA_new(
  unsigned long inVertex1,
  unsigned long inVertex2,
  float inMaxDistance
);

//endregion

//region destructor

void JoltC_SoftBodySharedSettingsLRA_destroy(
  JoltC_SoftBodySharedSettingsLRA_t * self
);

//endregion
//region properties

size_t JoltC_SoftBodySharedSettingsLRA_mVertex_Get(
  JoltC_SoftBodySharedSettingsLRA_t * self,
  unsigned long * outValue
);

void JoltC_SoftBodySharedSettingsLRA_mVertex_Set(
  JoltC_SoftBodySharedSettingsLRA_t * self,
  unsigned long * mVertex,
  size_t mVertexSize
);

float JoltC_SoftBodySharedSettingsLRA_mMaxDistance_Get(
  JoltC_SoftBodySharedSettingsLRA_t * self
);

void JoltC_SoftBodySharedSettingsLRA_mMaxDistance_Set(
  JoltC_SoftBodySharedSettingsLRA_t * self,
  float mMaxDistance
);

//endregion


#ifdef __cplusplus
}
#endif
