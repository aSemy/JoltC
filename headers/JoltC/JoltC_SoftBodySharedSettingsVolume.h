#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_SoftBodySharedSettingsVolume_t * JPC_SoftBodySharedSettingsVolume_new(
  unsigned long inVertex1,
  unsigned long inVertex2,
  unsigned long inVertex3,
  unsigned long inVertex4,
  float inCompliance
);

//endregion constructors

//region properties

size_t JPC_SoftBodySharedSettingsVolume_mVertex_Get(
  JPC_SoftBodySharedSettingsVolume_t * self,
  unsigned long * outValue
);

void JPC_SoftBodySharedSettingsVolume_mVertex_Set(
  JPC_SoftBodySharedSettingsVolume_t * self,
  unsigned long * mVertex,
  size_t mVertexSize
);

float JPC_SoftBodySharedSettingsVolume_mSixRestVolume_Get(
  JPC_SoftBodySharedSettingsVolume_t * self
);

void JPC_SoftBodySharedSettingsVolume_mSixRestVolume_Set(
  JPC_SoftBodySharedSettingsVolume_t * self,
  float mSixRestVolume
);

float JPC_SoftBodySharedSettingsVolume_mCompliance_Get(
  JPC_SoftBodySharedSettingsVolume_t * self
);

void JPC_SoftBodySharedSettingsVolume_mCompliance_Set(
  JPC_SoftBodySharedSettingsVolume_t * self,
  float mCompliance
);

//endregion properties


#ifdef __cplusplus
}
#endif

