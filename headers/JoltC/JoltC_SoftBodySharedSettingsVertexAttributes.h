#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SoftBodySharedSettingsVertexAttributes_t * JoltC_SoftBodySharedSettingsVertexAttributes_new(
  char** outErrMsg
);

//endregion constructors

//region properties

float JoltC_SoftBodySharedSettingsVertexAttributes_mCompliance_Get(
  JoltC_SoftBodySharedSettingsVertexAttributes_t * self,
  char** outErrMsg
);

void JoltC_SoftBodySharedSettingsVertexAttributes_mCompliance_Set(
  JoltC_SoftBodySharedSettingsVertexAttributes_t * self,
  float mCompliance,
  char** outErrMsg
);

float JoltC_SoftBodySharedSettingsVertexAttributes_mShearCompliance_Get(
  JoltC_SoftBodySharedSettingsVertexAttributes_t * self,
  char** outErrMsg
);

void JoltC_SoftBodySharedSettingsVertexAttributes_mShearCompliance_Set(
  JoltC_SoftBodySharedSettingsVertexAttributes_t * self,
  float mShearCompliance,
  char** outErrMsg
);

float JoltC_SoftBodySharedSettingsVertexAttributes_mBendCompliance_Get(
  JoltC_SoftBodySharedSettingsVertexAttributes_t * self,
  char** outErrMsg
);

void JoltC_SoftBodySharedSettingsVertexAttributes_mBendCompliance_Set(
  JoltC_SoftBodySharedSettingsVertexAttributes_t * self,
  float mBendCompliance,
  char** outErrMsg
);

JoltC_SoftBodySharedSettings_ELRAType JoltC_SoftBodySharedSettingsVertexAttributes_mLRAType_Get(
  JoltC_SoftBodySharedSettingsVertexAttributes_t * self,
  char** outErrMsg
);

void JoltC_SoftBodySharedSettingsVertexAttributes_mLRAType_Set(
  JoltC_SoftBodySharedSettingsVertexAttributes_t * self,
  JoltC_SoftBodySharedSettings_ELRAType mLRAType,
  char** outErrMsg
);

float JoltC_SoftBodySharedSettingsVertexAttributes_mLRAMaxDistanceMultiplier_Get(
  JoltC_SoftBodySharedSettingsVertexAttributes_t * self,
  char** outErrMsg
);

void JoltC_SoftBodySharedSettingsVertexAttributes_mLRAMaxDistanceMultiplier_Set(
  JoltC_SoftBodySharedSettingsVertexAttributes_t * self,
  float mLRAMaxDistanceMultiplier,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

