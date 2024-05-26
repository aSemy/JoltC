#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SoftBodySharedSettingsVertex_t * JoltC_SoftBodySharedSettingsVertex_new();

//endregion

//region properties

JoltC_Float3_t * JoltC_SoftBodySharedSettingsVertex_mPosition_Get(
  JoltC_SoftBodySharedSettingsVertex_t * self
);

void JoltC_SoftBodySharedSettingsVertex_mPosition_Set(
  JoltC_SoftBodySharedSettingsVertex_t * self,
  JoltC_Float3_t * mPosition
);

JoltC_Float3_t * JoltC_SoftBodySharedSettingsVertex_mVelocity_Get(
  JoltC_SoftBodySharedSettingsVertex_t * self
);

void JoltC_SoftBodySharedSettingsVertex_mVelocity_Set(
  JoltC_SoftBodySharedSettingsVertex_t * self,
  JoltC_Float3_t * mVelocity
);

float JoltC_SoftBodySharedSettingsVertex_mInvMass_Get(
  JoltC_SoftBodySharedSettingsVertex_t * self
);

void JoltC_SoftBodySharedSettingsVertex_mInvMass_Set(
  JoltC_SoftBodySharedSettingsVertex_t * self,
  float mInvMass
);

//endregion


#ifdef __cplusplus
}
#endif

