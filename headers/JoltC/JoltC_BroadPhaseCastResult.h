#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_BroadPhaseCastResult_t * JoltC_BroadPhaseCastResult_new();

//endregion

//region destructor

void JoltC_BroadPhaseCastResult_destroy(
  JoltC_BroadPhaseCastResult_t * self
);

//endregion
//region converters

/**
 * Convert an instance of JoltC_RayCastResult_t into JoltC_BroadPhaseCastResult_t.
 */
JoltC_BroadPhaseCastResult_t * JoltC_BroadPhaseCastResult_From_RayCastResult(
  JoltC_RayCastResult_t * subtype
);

//endregion

//region functions

void JoltC_BroadPhaseCastResult_Reset(
  JoltC_BroadPhaseCastResult_t * self
);

//endregion

//region properties

JoltC_BodyID_t * JoltC_BroadPhaseCastResult_mBodyID_Get(
  JoltC_BroadPhaseCastResult_t * self
);

void JoltC_BroadPhaseCastResult_mBodyID_Set(
  JoltC_BroadPhaseCastResult_t * self,
  JoltC_BodyID_t * mBodyID
);

float JoltC_BroadPhaseCastResult_mFraction_Get(
  JoltC_BroadPhaseCastResult_t * self
);

void JoltC_BroadPhaseCastResult_mFraction_Set(
  JoltC_BroadPhaseCastResult_t * self,
  float mFraction
);

//endregion


#ifdef __cplusplus
}
#endif
