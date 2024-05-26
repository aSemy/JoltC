#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region converters

/**
 * Convert an instance of JoltC_CastShapeAllHitCollisionCollector_t into JoltC_CastShapeCollector_t.
 */
JoltC_CastShapeCollector_t * JoltC_CastShapeCollector_From_CastShapeAllHitCollisionCollector(
  JoltC_CastShapeAllHitCollisionCollector_t * subtype
);

/**
 * Convert an instance of JoltC_CastShapeClosestHitCollisionCollector_t into JoltC_CastShapeCollector_t.
 */
JoltC_CastShapeCollector_t * JoltC_CastShapeCollector_From_CastShapeClosestHitCollisionCollector(
  JoltC_CastShapeClosestHitCollisionCollector_t * subtype
);

/**
 * Convert an instance of JoltC_CastShapeAnyHitCollisionCollector_t into JoltC_CastShapeCollector_t.
 */
JoltC_CastShapeCollector_t * JoltC_CastShapeCollector_From_CastShapeAnyHitCollisionCollector(
  JoltC_CastShapeAnyHitCollisionCollector_t * subtype
);

//endregion

//region functions

void JoltC_CastShapeCollector_Reset(
  JoltC_CastShapeCollector_t * self
);

void JoltC_CastShapeCollector_SetContext(
  JoltC_CastShapeCollector_t * self,
  JoltC_TransformedShape_t * inContext
);

JoltC_TransformedShape_t * JoltC_CastShapeCollector_GetContext(
  JoltC_CastShapeCollector_t * self
);

void JoltC_CastShapeCollector_UpdateEarlyOutFraction(
  JoltC_CastShapeCollector_t * self,
  float inFraction
);

void JoltC_CastShapeCollector_ResetEarlyOutFraction(
  JoltC_CastShapeCollector_t * self,
  float inFraction
);

void JoltC_CastShapeCollector_ForceEarlyOut(
  JoltC_CastShapeCollector_t * self
);

bool JoltC_CastShapeCollector_ShouldEarlyOut(
  JoltC_CastShapeCollector_t * self
);

float JoltC_CastShapeCollector_GetEarlyOutFraction(
  JoltC_CastShapeCollector_t * self
);

float JoltC_CastShapeCollector_GetPositiveEarlyOutFraction(
  JoltC_CastShapeCollector_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

