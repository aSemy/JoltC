#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CastRayAnyHitCollisionCollector_t * JoltC_CastRayAnyHitCollisionCollector_new();

//endregion

//region functions

bool JoltC_CastRayAnyHitCollisionCollector_HadHit(
  JoltC_CastRayAnyHitCollisionCollector_t * self
);

void JoltC_CastRayAnyHitCollisionCollector_Reset(
  JoltC_CastRayAnyHitCollisionCollector_t * self
);

void JoltC_CastRayAnyHitCollisionCollector_SetContext(
  JoltC_CastRayAnyHitCollisionCollector_t * self,
  JoltC_TransformedShape_t * inContext
);

JoltC_TransformedShape_t * JoltC_CastRayAnyHitCollisionCollector_GetContext(
  JoltC_CastRayAnyHitCollisionCollector_t * self
);

void JoltC_CastRayAnyHitCollisionCollector_UpdateEarlyOutFraction(
  JoltC_CastRayAnyHitCollisionCollector_t * self,
  float inFraction
);

void JoltC_CastRayAnyHitCollisionCollector_ResetEarlyOutFraction(
  JoltC_CastRayAnyHitCollisionCollector_t * self,
  float inFraction
);

void JoltC_CastRayAnyHitCollisionCollector_ForceEarlyOut(
  JoltC_CastRayAnyHitCollisionCollector_t * self
);

bool JoltC_CastRayAnyHitCollisionCollector_ShouldEarlyOut(
  JoltC_CastRayAnyHitCollisionCollector_t * self
);

float JoltC_CastRayAnyHitCollisionCollector_GetEarlyOutFraction(
  JoltC_CastRayAnyHitCollisionCollector_t * self
);

float JoltC_CastRayAnyHitCollisionCollector_GetPositiveEarlyOutFraction(
  JoltC_CastRayAnyHitCollisionCollector_t * self
);

//endregion

//region properties

JoltC_RayCastResult_t * JoltC_CastRayAnyHitCollisionCollector_mHit_Get(
  JoltC_CastRayAnyHitCollisionCollector_t * self
);

void JoltC_CastRayAnyHitCollisionCollector_mHit_Set(
  JoltC_CastRayAnyHitCollisionCollector_t * self,
  JoltC_RayCastResult_t * mHit
);

//endregion


#ifdef __cplusplus
}
#endif

