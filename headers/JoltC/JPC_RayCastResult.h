#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_RayCastResult_t * JPC_RayCastResult_new();

//endregion constructors

//region functions

void JPC_RayCastResult_Reset(
  JPC_RayCastResult_t * self
);

//endregion functions

//region properties

JPC_SubShapeID_t * JPC_RayCastResult_mSubShapeID2_Get(
  JPC_RayCastResult_t * self
);

void JPC_RayCastResult_mSubShapeID2_Set(
  JPC_RayCastResult_t * self,
  JPC_SubShapeID_t * mSubShapeID2
);

JPC_BodyID_t * JPC_RayCastResult_mBodyID_Get(
  JPC_RayCastResult_t * self
);

void JPC_RayCastResult_mBodyID_Set(
  JPC_RayCastResult_t * self,
  JPC_BodyID_t * mBodyID
);

float JPC_RayCastResult_mFraction_Get(
  JPC_RayCastResult_t * self
);

void JPC_RayCastResult_mFraction_Set(
  JPC_RayCastResult_t * self,
  float mFraction
);

//endregion properties


#ifdef __cplusplus
}
#endif

