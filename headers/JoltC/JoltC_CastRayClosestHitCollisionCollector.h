#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_CastRayClosestHitCollisionCollector_t * JPC_CastRayClosestHitCollisionCollector_new();

//endregion constructors

//region functions

bool JPC_CastRayClosestHitCollisionCollector_HadHit(
  JPC_CastRayClosestHitCollisionCollector_t * self
);

void JPC_CastRayClosestHitCollisionCollector_Reset(
  JPC_CastRayClosestHitCollisionCollector_t * self
);

void JPC_CastRayClosestHitCollisionCollector_SetContext(
  JPC_CastRayClosestHitCollisionCollector_t * self,
  const JPC_TransformedShape_t * inContext
);

const JPC_TransformedShape_t * JPC_CastRayClosestHitCollisionCollector_GetContext(
  JPC_CastRayClosestHitCollisionCollector_t * self
);

void JPC_CastRayClosestHitCollisionCollector_UpdateEarlyOutFraction(
  JPC_CastRayClosestHitCollisionCollector_t * self,
  float inFraction
);

void JPC_CastRayClosestHitCollisionCollector_ResetEarlyOutFraction(
  JPC_CastRayClosestHitCollisionCollector_t * self,
  float inFraction
);

void JPC_CastRayClosestHitCollisionCollector_ForceEarlyOut(
  JPC_CastRayClosestHitCollisionCollector_t * self
);

bool JPC_CastRayClosestHitCollisionCollector_ShouldEarlyOut(
  JPC_CastRayClosestHitCollisionCollector_t * self
);

float JPC_CastRayClosestHitCollisionCollector_GetEarlyOutFraction(
  JPC_CastRayClosestHitCollisionCollector_t * self
);

float JPC_CastRayClosestHitCollisionCollector_GetPositiveEarlyOutFraction(
  JPC_CastRayClosestHitCollisionCollector_t * self
);

//endregion functions

//region properties

JPC_RayCastResult_t * JPC_CastRayClosestHitCollisionCollector_mHit_Get(
  JPC_CastRayClosestHitCollisionCollector_t * self
);

void JPC_CastRayClosestHitCollisionCollector_mHit_Set(
  JPC_CastRayClosestHitCollisionCollector_t * self,
  JPC_RayCastResult_t * mHit
);

//endregion properties


#ifdef __cplusplus
}
#endif

