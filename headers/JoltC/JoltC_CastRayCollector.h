#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region converters

/**
 * Convert an instance of JoltC_CastRayAllHitCollisionCollector_t into JoltC_CastRayCollector_t.
 */
JoltC_CastRayCollector_t * JoltC_CastRayCollector_From_CastRayAllHitCollisionCollector(
  JoltC_CastRayAllHitCollisionCollector_t * subtype
);

/**
 * Convert an instance of JoltC_CastRayClosestHitCollisionCollector_t into JoltC_CastRayCollector_t.
 */
JoltC_CastRayCollector_t * JoltC_CastRayCollector_From_CastRayClosestHitCollisionCollector(
  JoltC_CastRayClosestHitCollisionCollector_t * subtype
);

/**
 * Convert an instance of JoltC_CastRayAnyHitCollisionCollector_t into JoltC_CastRayCollector_t.
 */
JoltC_CastRayCollector_t * JoltC_CastRayCollector_From_CastRayAnyHitCollisionCollector(
  JoltC_CastRayAnyHitCollisionCollector_t * subtype
);

//endregion

//region functions

void JoltC_CastRayCollector_Reset(
  JoltC_CastRayCollector_t * self
);

void JoltC_CastRayCollector_SetContext(
  JoltC_CastRayCollector_t * self,
  const JoltC_TransformedShape_t * inContext
);

const JoltC_TransformedShape_t * JoltC_CastRayCollector_GetContext(
  JoltC_CastRayCollector_t * self
);

void JoltC_CastRayCollector_UpdateEarlyOutFraction(
  JoltC_CastRayCollector_t * self,
  float inFraction
);

void JoltC_CastRayCollector_ResetEarlyOutFraction(
  JoltC_CastRayCollector_t * self,
  float inFraction
);

void JoltC_CastRayCollector_ForceEarlyOut(
  JoltC_CastRayCollector_t * self
);

bool JoltC_CastRayCollector_ShouldEarlyOut(
  JoltC_CastRayCollector_t * self
);

float JoltC_CastRayCollector_GetEarlyOutFraction(
  JoltC_CastRayCollector_t * self
);

float JoltC_CastRayCollector_GetPositiveEarlyOutFraction(
  JoltC_CastRayCollector_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

