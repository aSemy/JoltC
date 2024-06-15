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
  float inCompliance
);

//endregion

//region destructor

void JoltC_SoftBodySharedSettingsVolume_destroy(
  JoltC_SoftBodySharedSettingsVolume_t * self
);

//endregion
//region properties

size_t JoltC_SoftBodySharedSettingsVolume_mVertex_Get(
  JoltC_SoftBodySharedSettingsVolume_t * self,
  unsigned long * outValue
);

void JoltC_SoftBodySharedSettingsVolume_mVertex_Set(
  JoltC_SoftBodySharedSettingsVolume_t * self,
  unsigned long * mVertex,
  size_t mVertexSize
);

float JoltC_SoftBodySharedSettingsVolume_mSixRestVolume_Get(
  JoltC_SoftBodySharedSettingsVolume_t * self
);

void JoltC_SoftBodySharedSettingsVolume_mSixRestVolume_Set(
  JoltC_SoftBodySharedSettingsVolume_t * self,
  float mSixRestVolume
);

float JoltC_SoftBodySharedSettingsVolume_mCompliance_Get(
  JoltC_SoftBodySharedSettingsVolume_t * self
);

void JoltC_SoftBodySharedSettingsVolume_mCompliance_Set(
  JoltC_SoftBodySharedSettingsVolume_t * self,
  float mCompliance
);

//endregion


#ifdef __cplusplus
}
#endif
