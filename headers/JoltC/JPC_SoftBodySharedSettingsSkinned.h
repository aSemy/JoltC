#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region properties

unsigned long JPC_SoftBodySharedSettingsSkinned_mVertex_Get(
  JPC_SoftBodySharedSettingsSkinned_t * self
);

void JPC_SoftBodySharedSettingsSkinned_mVertex_Set(
  JPC_SoftBodySharedSettingsSkinned_t * self,
  unsigned long mVertex
);

size_t JPC_SoftBodySharedSettingsSkinned_mWeights_Get(
  JPC_SoftBodySharedSettingsSkinned_t * self,
  JPC_SoftBodySharedSettingsSkinWeight_t * * outValue
);

void JPC_SoftBodySharedSettingsSkinned_mWeights_Set(
  JPC_SoftBodySharedSettingsSkinned_t * self,
  JPC_SoftBodySharedSettingsSkinWeight_t * * mWeights,
  size_t mWeightsSize
);

float JPC_SoftBodySharedSettingsSkinned_mMaxDistance_Get(
  JPC_SoftBodySharedSettingsSkinned_t * self
);

void JPC_SoftBodySharedSettingsSkinned_mMaxDistance_Set(
  JPC_SoftBodySharedSettingsSkinned_t * self,
  float mMaxDistance
);

float JPC_SoftBodySharedSettingsSkinned_mBackStopDistance_Get(
  JPC_SoftBodySharedSettingsSkinned_t * self
);

void JPC_SoftBodySharedSettingsSkinned_mBackStopDistance_Set(
  JPC_SoftBodySharedSettingsSkinned_t * self,
  float mBackStopDistance
);

float JPC_SoftBodySharedSettingsSkinned_mBackStopRadius_Get(
  JPC_SoftBodySharedSettingsSkinned_t * self
);

void JPC_SoftBodySharedSettingsSkinned_mBackStopRadius_Set(
  JPC_SoftBodySharedSettingsSkinned_t * self,
  float mBackStopRadius
);

//endregion properties


#ifdef __cplusplus
}
#endif

