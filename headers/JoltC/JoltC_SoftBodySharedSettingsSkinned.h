#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_SoftBodySharedSettingsSkinned_destroy(
  JoltC_SoftBodySharedSettingsSkinned_t * self
);

//endregion
//region properties

unsigned long JoltC_SoftBodySharedSettingsSkinned_mVertex_Get(
  JoltC_SoftBodySharedSettingsSkinned_t * self
);

void JoltC_SoftBodySharedSettingsSkinned_mVertex_Set(
  JoltC_SoftBodySharedSettingsSkinned_t * self,
  unsigned long mVertex
);

size_t JoltC_SoftBodySharedSettingsSkinned_mWeights_Get(
  JoltC_SoftBodySharedSettingsSkinned_t * self,
  JoltC_SoftBodySharedSettingsSkinWeight_t * * outValue
);

void JoltC_SoftBodySharedSettingsSkinned_mWeights_Set(
  JoltC_SoftBodySharedSettingsSkinned_t * self,
  JoltC_SoftBodySharedSettingsSkinWeight_t * * mWeights,
  size_t mWeightsSize
);

float JoltC_SoftBodySharedSettingsSkinned_mMaxDistance_Get(
  JoltC_SoftBodySharedSettingsSkinned_t * self
);

void JoltC_SoftBodySharedSettingsSkinned_mMaxDistance_Set(
  JoltC_SoftBodySharedSettingsSkinned_t * self,
  float mMaxDistance
);

float JoltC_SoftBodySharedSettingsSkinned_mBackStopDistance_Get(
  JoltC_SoftBodySharedSettingsSkinned_t * self
);

void JoltC_SoftBodySharedSettingsSkinned_mBackStopDistance_Set(
  JoltC_SoftBodySharedSettingsSkinned_t * self,
  float mBackStopDistance
);

float JoltC_SoftBodySharedSettingsSkinned_mBackStopRadius_Get(
  JoltC_SoftBodySharedSettingsSkinned_t * self
);

void JoltC_SoftBodySharedSettingsSkinned_mBackStopRadius_Set(
  JoltC_SoftBodySharedSettingsSkinned_t * self,
  float mBackStopRadius
);

//endregion


#ifdef __cplusplus
}
#endif
