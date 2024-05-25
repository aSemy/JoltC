#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region properties

JoltC_Vec3_t * JoltC_SoftBodyVertex_mPreviousPosition_Get(
  JoltC_SoftBodyVertex_t * self,
  char** outErrMsg
);

void JoltC_SoftBodyVertex_mPreviousPosition_Set(
  JoltC_SoftBodyVertex_t * self,
  JoltC_Vec3_t * mPreviousPosition,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_SoftBodyVertex_mPosition_Get(
  JoltC_SoftBodyVertex_t * self,
  char** outErrMsg
);

void JoltC_SoftBodyVertex_mPosition_Set(
  JoltC_SoftBodyVertex_t * self,
  JoltC_Vec3_t * mPosition,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_SoftBodyVertex_mVelocity_Get(
  JoltC_SoftBodyVertex_t * self,
  char** outErrMsg
);

void JoltC_SoftBodyVertex_mVelocity_Set(
  JoltC_SoftBodyVertex_t * self,
  JoltC_Vec3_t * mVelocity,
  char** outErrMsg
);

float JoltC_SoftBodyVertex_mInvMass_Get(
  JoltC_SoftBodyVertex_t * self,
  char** outErrMsg
);

void JoltC_SoftBodyVertex_mInvMass_Set(
  JoltC_SoftBodyVertex_t * self,
  float mInvMass,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

