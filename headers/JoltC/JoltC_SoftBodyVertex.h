#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region properties

JPC_Vec3_t * JPC_SoftBodyVertex_mPreviousPosition_Get(
  JPC_SoftBodyVertex_t * self
);

void JPC_SoftBodyVertex_mPreviousPosition_Set(
  JPC_SoftBodyVertex_t * self,
  JPC_Vec3_t * mPreviousPosition
);

JPC_Vec3_t * JPC_SoftBodyVertex_mPosition_Get(
  JPC_SoftBodyVertex_t * self
);

void JPC_SoftBodyVertex_mPosition_Set(
  JPC_SoftBodyVertex_t * self,
  JPC_Vec3_t * mPosition
);

JPC_Vec3_t * JPC_SoftBodyVertex_mVelocity_Get(
  JPC_SoftBodyVertex_t * self
);

void JPC_SoftBodyVertex_mVelocity_Set(
  JPC_SoftBodyVertex_t * self,
  JPC_Vec3_t * mVelocity
);

float JPC_SoftBodyVertex_mInvMass_Get(
  JPC_SoftBodyVertex_t * self
);

void JPC_SoftBodyVertex_mInvMass_Set(
  JPC_SoftBodyVertex_t * self,
  float mInvMass
);

//endregion properties


#ifdef __cplusplus
}
#endif

