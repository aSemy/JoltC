#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_RayCastResult_t * JoltC_RayCastResult_new();

//endregion

//region functions

void JoltC_RayCastResult_Reset(
  JoltC_RayCastResult_t * self
);

//endregion

//region properties

JoltC_SubShapeID_t * JoltC_RayCastResult_mSubShapeID2_Get(
  JoltC_RayCastResult_t * self
);

void JoltC_RayCastResult_mSubShapeID2_Set(
  JoltC_RayCastResult_t * self,
  JoltC_SubShapeID_t * mSubShapeID2
);

JoltC_BodyID_t * JoltC_RayCastResult_mBodyID_Get(
  JoltC_RayCastResult_t * self
);

void JoltC_RayCastResult_mBodyID_Set(
  JoltC_RayCastResult_t * self,
  JoltC_BodyID_t * mBodyID
);

float JoltC_RayCastResult_mFraction_Get(
  JoltC_RayCastResult_t * self
);

void JoltC_RayCastResult_mFraction_Set(
  JoltC_RayCastResult_t * self,
  float mFraction
);

//endregion


#ifdef __cplusplus
}
#endif

