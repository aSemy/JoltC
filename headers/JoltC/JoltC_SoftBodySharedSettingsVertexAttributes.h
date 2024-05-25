#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_SoftBodySharedSettingsVertexAttributes_t * JPC_SoftBodySharedSettingsVertexAttributes_new();

//endregion constructors

//region properties

float JPC_SoftBodySharedSettingsVertexAttributes_mCompliance_Get(
  JPC_SoftBodySharedSettingsVertexAttributes_t * self
);

void JPC_SoftBodySharedSettingsVertexAttributes_mCompliance_Set(
  JPC_SoftBodySharedSettingsVertexAttributes_t * self,
  float mCompliance
);

float JPC_SoftBodySharedSettingsVertexAttributes_mShearCompliance_Get(
  JPC_SoftBodySharedSettingsVertexAttributes_t * self
);

void JPC_SoftBodySharedSettingsVertexAttributes_mShearCompliance_Set(
  JPC_SoftBodySharedSettingsVertexAttributes_t * self,
  float mShearCompliance
);

float JPC_SoftBodySharedSettingsVertexAttributes_mBendCompliance_Get(
  JPC_SoftBodySharedSettingsVertexAttributes_t * self
);

void JPC_SoftBodySharedSettingsVertexAttributes_mBendCompliance_Set(
  JPC_SoftBodySharedSettingsVertexAttributes_t * self,
  float mBendCompliance
);

JPC_SoftBodySharedSettings_ELRAType JPC_SoftBodySharedSettingsVertexAttributes_mLRAType_Get(
  JPC_SoftBodySharedSettingsVertexAttributes_t * self
);

void JPC_SoftBodySharedSettingsVertexAttributes_mLRAType_Set(
  JPC_SoftBodySharedSettingsVertexAttributes_t * self,
  JPC_SoftBodySharedSettings_ELRAType mLRAType
);

float JPC_SoftBodySharedSettingsVertexAttributes_mLRAMaxDistanceMultiplier_Get(
  JPC_SoftBodySharedSettingsVertexAttributes_t * self
);

void JPC_SoftBodySharedSettingsVertexAttributes_mLRAMaxDistanceMultiplier_Set(
  JPC_SoftBodySharedSettingsVertexAttributes_t * self,
  float mLRAMaxDistanceMultiplier
);

//endregion properties


#ifdef __cplusplus
}
#endif

