#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_CastRayAnyHitCollisionCollector_t * JPC_CastRayAnyHitCollisionCollector_new();

//endregion constructors

//region functions

bool JPC_CastRayAnyHitCollisionCollector_HadHit(
  JPC_CastRayAnyHitCollisionCollector_t * self
);

void JPC_CastRayAnyHitCollisionCollector_Reset(
  JPC_CastRayAnyHitCollisionCollector_t * self
);

void JPC_CastRayAnyHitCollisionCollector_SetContext(
  JPC_CastRayAnyHitCollisionCollector_t * self,
  const JPC_TransformedShape_t * inContext
);

const JPC_TransformedShape_t * JPC_CastRayAnyHitCollisionCollector_GetContext(
  JPC_CastRayAnyHitCollisionCollector_t * self
);

void JPC_CastRayAnyHitCollisionCollector_UpdateEarlyOutFraction(
  JPC_CastRayAnyHitCollisionCollector_t * self,
  float inFraction
);

void JPC_CastRayAnyHitCollisionCollector_ResetEarlyOutFraction(
  JPC_CastRayAnyHitCollisionCollector_t * self,
  float inFraction
);

void JPC_CastRayAnyHitCollisionCollector_ForceEarlyOut(
  JPC_CastRayAnyHitCollisionCollector_t * self
);

bool JPC_CastRayAnyHitCollisionCollector_ShouldEarlyOut(
  JPC_CastRayAnyHitCollisionCollector_t * self
);

float JPC_CastRayAnyHitCollisionCollector_GetEarlyOutFraction(
  JPC_CastRayAnyHitCollisionCollector_t * self
);

float JPC_CastRayAnyHitCollisionCollector_GetPositiveEarlyOutFraction(
  JPC_CastRayAnyHitCollisionCollector_t * self
);

//endregion functions

//region properties

JPC_RayCastResult_t * JPC_CastRayAnyHitCollisionCollector_mHit_Get(
  JPC_CastRayAnyHitCollisionCollector_t * self
);

void JPC_CastRayAnyHitCollisionCollector_mHit_Set(
  JPC_CastRayAnyHitCollisionCollector_t * self,
  JPC_RayCastResult_t * mHit
);

//endregion properties


#ifdef __cplusplus
}
#endif

