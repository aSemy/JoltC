#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_BroadPhaseCastResult_t * JPC_BroadPhaseCastResult_new();

//endregion constructors

//region functions

void JPC_BroadPhaseCastResult_Reset(
  JPC_BroadPhaseCastResult_t * self
);

//endregion functions

//region properties

JPC_BodyID_t * JPC_BroadPhaseCastResult_mBodyID_Get(
  JPC_BroadPhaseCastResult_t * self
);

void JPC_BroadPhaseCastResult_mBodyID_Set(
  JPC_BroadPhaseCastResult_t * self,
  JPC_BodyID_t * mBodyID
);

float JPC_BroadPhaseCastResult_mFraction_Get(
  JPC_BroadPhaseCastResult_t * self
);

void JPC_BroadPhaseCastResult_mFraction_Set(
  JPC_BroadPhaseCastResult_t * self,
  float mFraction
);

//endregion properties


#ifdef __cplusplus
}
#endif

