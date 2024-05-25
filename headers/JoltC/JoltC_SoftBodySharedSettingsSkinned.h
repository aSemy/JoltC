#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region properties

unsigned long JoltC_SoftBodySharedSettingsSkinned_mVertex_Get(
  JoltC_SoftBodySharedSettingsSkinned_t * self,
  char** outErrMsg
);

void JoltC_SoftBodySharedSettingsSkinned_mVertex_Set(
  JoltC_SoftBodySharedSettingsSkinned_t * self,
  unsigned long mVertex,
  char** outErrMsg
);

size_t JoltC_SoftBodySharedSettingsSkinned_mWeights_Get(
  JoltC_SoftBodySharedSettingsSkinned_t * self,
  JoltC_SoftBodySharedSettingsSkinWeight_t * * outValue,
  char** outErrMsg
);

void JoltC_SoftBodySharedSettingsSkinned_mWeights_Set(
  JoltC_SoftBodySharedSettingsSkinned_t * self,
  JoltC_SoftBodySharedSettingsSkinWeight_t * * mWeights,
  size_t mWeightsSize,
  char** outErrMsg
);

float JoltC_SoftBodySharedSettingsSkinned_mMaxDistance_Get(
  JoltC_SoftBodySharedSettingsSkinned_t * self,
  char** outErrMsg
);

void JoltC_SoftBodySharedSettingsSkinned_mMaxDistance_Set(
  JoltC_SoftBodySharedSettingsSkinned_t * self,
  float mMaxDistance,
  char** outErrMsg
);

float JoltC_SoftBodySharedSettingsSkinned_mBackStopDistance_Get(
  JoltC_SoftBodySharedSettingsSkinned_t * self,
  char** outErrMsg
);

void JoltC_SoftBodySharedSettingsSkinned_mBackStopDistance_Set(
  JoltC_SoftBodySharedSettingsSkinned_t * self,
  float mBackStopDistance,
  char** outErrMsg
);

float JoltC_SoftBodySharedSettingsSkinned_mBackStopRadius_Get(
  JoltC_SoftBodySharedSettingsSkinned_t * self,
  char** outErrMsg
);

void JoltC_SoftBodySharedSettingsSkinned_mBackStopRadius_Set(
  JoltC_SoftBodySharedSettingsSkinned_t * self,
  float mBackStopRadius,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

