#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region converters

/**
 * Convert an instance of JoltC_CollideShapeAllHitCollisionCollector_t into JoltC_CollideShapeCollector_t.
 */
JoltC_CollideShapeCollector_t * JoltC_CollideShapeCollector_From_CollideShapeAllHitCollisionCollector(
  JoltC_CollideShapeAllHitCollisionCollector_t * subtype
);

/**
 * Convert an instance of JoltC_CollideShapeClosestHitCollisionCollector_t into JoltC_CollideShapeCollector_t.
 */
JoltC_CollideShapeCollector_t * JoltC_CollideShapeCollector_From_CollideShapeClosestHitCollisionCollector(
  JoltC_CollideShapeClosestHitCollisionCollector_t * subtype
);

/**
 * Convert an instance of JoltC_CollideShapeAnyHitCollisionCollector_t into JoltC_CollideShapeCollector_t.
 */
JoltC_CollideShapeCollector_t * JoltC_CollideShapeCollector_From_CollideShapeAnyHitCollisionCollector(
  JoltC_CollideShapeAnyHitCollisionCollector_t * subtype
);

//endregion

//region functions

void JoltC_CollideShapeCollector_Reset(
  JoltC_CollideShapeCollector_t * self
);

void JoltC_CollideShapeCollector_SetContext(
  JoltC_CollideShapeCollector_t * self,
  const JoltC_TransformedShape_t * inContext
);

const JoltC_TransformedShape_t * JoltC_CollideShapeCollector_GetContext(
  JoltC_CollideShapeCollector_t * self
);

void JoltC_CollideShapeCollector_UpdateEarlyOutFraction(
  JoltC_CollideShapeCollector_t * self,
  float inFraction
);

void JoltC_CollideShapeCollector_ResetEarlyOutFraction(
  JoltC_CollideShapeCollector_t * self,
  float inFraction
);

void JoltC_CollideShapeCollector_ForceEarlyOut(
  JoltC_CollideShapeCollector_t * self
);

bool JoltC_CollideShapeCollector_ShouldEarlyOut(
  JoltC_CollideShapeCollector_t * self
);

float JoltC_CollideShapeCollector_GetEarlyOutFraction(
  JoltC_CollideShapeCollector_t * self
);

float JoltC_CollideShapeCollector_GetPositiveEarlyOutFraction(
  JoltC_CollideShapeCollector_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

