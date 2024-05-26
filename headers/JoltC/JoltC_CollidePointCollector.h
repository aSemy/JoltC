#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region converters

/**
 * Convert an instance of JoltC_CollidePointAllHitCollisionCollector_t into JoltC_CollidePointCollector_t.
 */
JoltC_CollidePointCollector_t * JoltC_CollidePointCollector_From_CollidePointAllHitCollisionCollector(
  JoltC_CollidePointAllHitCollisionCollector_t * subtype
);

/**
 * Convert an instance of JoltC_CollidePointClosestHitCollisionCollector_t into JoltC_CollidePointCollector_t.
 */
JoltC_CollidePointCollector_t * JoltC_CollidePointCollector_From_CollidePointClosestHitCollisionCollector(
  JoltC_CollidePointClosestHitCollisionCollector_t * subtype
);

/**
 * Convert an instance of JoltC_CollidePointAnyHitCollisionCollector_t into JoltC_CollidePointCollector_t.
 */
JoltC_CollidePointCollector_t * JoltC_CollidePointCollector_From_CollidePointAnyHitCollisionCollector(
  JoltC_CollidePointAnyHitCollisionCollector_t * subtype
);

//endregion

//region functions

void JoltC_CollidePointCollector_Reset(
  JoltC_CollidePointCollector_t * self
);

void JoltC_CollidePointCollector_SetContext(
  JoltC_CollidePointCollector_t * self,
  const JoltC_TransformedShape_t * inContext
);

const JoltC_TransformedShape_t * JoltC_CollidePointCollector_GetContext(
  JoltC_CollidePointCollector_t * self
);

void JoltC_CollidePointCollector_UpdateEarlyOutFraction(
  JoltC_CollidePointCollector_t * self,
  float inFraction
);

void JoltC_CollidePointCollector_ResetEarlyOutFraction(
  JoltC_CollidePointCollector_t * self,
  float inFraction
);

void JoltC_CollidePointCollector_ForceEarlyOut(
  JoltC_CollidePointCollector_t * self
);

bool JoltC_CollidePointCollector_ShouldEarlyOut(
  JoltC_CollidePointCollector_t * self
);

float JoltC_CollidePointCollector_GetEarlyOutFraction(
  JoltC_CollidePointCollector_t * self
);

float JoltC_CollidePointCollector_GetPositiveEarlyOutFraction(
  JoltC_CollidePointCollector_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

