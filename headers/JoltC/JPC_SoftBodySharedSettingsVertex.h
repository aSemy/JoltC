#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_SoftBodySharedSettingsVertex_t * JPC_SoftBodySharedSettingsVertex_new();

//endregion constructors

//region properties

JPC_Float3_t * JPC_SoftBodySharedSettingsVertex_mPosition_Get(
  JPC_SoftBodySharedSettingsVertex_t * self
);

void JPC_SoftBodySharedSettingsVertex_mPosition_Set(
  JPC_SoftBodySharedSettingsVertex_t * self,
  JPC_Float3_t * mPosition
);

JPC_Float3_t * JPC_SoftBodySharedSettingsVertex_mVelocity_Get(
  JPC_SoftBodySharedSettingsVertex_t * self
);

void JPC_SoftBodySharedSettingsVertex_mVelocity_Set(
  JPC_SoftBodySharedSettingsVertex_t * self,
  JPC_Float3_t * mVelocity
);

float JPC_SoftBodySharedSettingsVertex_mInvMass_Get(
  JPC_SoftBodySharedSettingsVertex_t * self
);

void JPC_SoftBodySharedSettingsVertex_mInvMass_Set(
  JPC_SoftBodySharedSettingsVertex_t * self,
  float mInvMass
);

//endregion properties


#ifdef __cplusplus
}
#endif

