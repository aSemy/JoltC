#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_CastRayAllHitCollisionCollector_t * JPC_CastRayAllHitCollisionCollector_new();

//endregion constructors

//region functions

void JPC_CastRayAllHitCollisionCollector_Sort(
  JPC_CastRayAllHitCollisionCollector_t * self
);

bool JPC_CastRayAllHitCollisionCollector_HadHit(
  JPC_CastRayAllHitCollisionCollector_t * self
);

void JPC_CastRayAllHitCollisionCollector_Reset(
  JPC_CastRayAllHitCollisionCollector_t * self
);

void JPC_CastRayAllHitCollisionCollector_SetContext(
  JPC_CastRayAllHitCollisionCollector_t * self,
  const JPC_TransformedShape_t * inContext
);

const JPC_TransformedShape_t * JPC_CastRayAllHitCollisionCollector_GetContext(
  JPC_CastRayAllHitCollisionCollector_t * self
);

void JPC_CastRayAllHitCollisionCollector_UpdateEarlyOutFraction(
  JPC_CastRayAllHitCollisionCollector_t * self,
  float inFraction
);

void JPC_CastRayAllHitCollisionCollector_ResetEarlyOutFraction(
  JPC_CastRayAllHitCollisionCollector_t * self,
  float inFraction
);

void JPC_CastRayAllHitCollisionCollector_ForceEarlyOut(
  JPC_CastRayAllHitCollisionCollector_t * self
);

bool JPC_CastRayAllHitCollisionCollector_ShouldEarlyOut(
  JPC_CastRayAllHitCollisionCollector_t * self
);

float JPC_CastRayAllHitCollisionCollector_GetEarlyOutFraction(
  JPC_CastRayAllHitCollisionCollector_t * self
);

float JPC_CastRayAllHitCollisionCollector_GetPositiveEarlyOutFraction(
  JPC_CastRayAllHitCollisionCollector_t * self
);

//endregion functions

//region properties

JPC_ArrayRayCastResult_t * JPC_CastRayAllHitCollisionCollector_mHits_Get(
  JPC_CastRayAllHitCollisionCollector_t * self
);

void JPC_CastRayAllHitCollisionCollector_mHits_Set(
  JPC_CastRayAllHitCollisionCollector_t * self,
  JPC_ArrayRayCastResult_t * mHits
);

//endregion properties


#ifdef __cplusplus
}
#endif

