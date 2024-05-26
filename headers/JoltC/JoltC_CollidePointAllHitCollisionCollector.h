#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CollidePointAllHitCollisionCollector_t * JoltC_CollidePointAllHitCollisionCollector_new();

//endregion

//region functions

void JoltC_CollidePointAllHitCollisionCollector_Sort(
  JoltC_CollidePointAllHitCollisionCollector_t * self
);

bool JoltC_CollidePointAllHitCollisionCollector_HadHit(
  JoltC_CollidePointAllHitCollisionCollector_t * self
);

void JoltC_CollidePointAllHitCollisionCollector_Reset(
  JoltC_CollidePointAllHitCollisionCollector_t * self
);

void JoltC_CollidePointAllHitCollisionCollector_SetContext(
  JoltC_CollidePointAllHitCollisionCollector_t * self,
  const JoltC_TransformedShape_t * inContext
);

const JoltC_TransformedShape_t * JoltC_CollidePointAllHitCollisionCollector_GetContext(
  JoltC_CollidePointAllHitCollisionCollector_t * self
);

void JoltC_CollidePointAllHitCollisionCollector_UpdateEarlyOutFraction(
  JoltC_CollidePointAllHitCollisionCollector_t * self,
  float inFraction
);

void JoltC_CollidePointAllHitCollisionCollector_ResetEarlyOutFraction(
  JoltC_CollidePointAllHitCollisionCollector_t * self,
  float inFraction
);

void JoltC_CollidePointAllHitCollisionCollector_ForceEarlyOut(
  JoltC_CollidePointAllHitCollisionCollector_t * self
);

bool JoltC_CollidePointAllHitCollisionCollector_ShouldEarlyOut(
  JoltC_CollidePointAllHitCollisionCollector_t * self
);

float JoltC_CollidePointAllHitCollisionCollector_GetEarlyOutFraction(
  JoltC_CollidePointAllHitCollisionCollector_t * self
);

float JoltC_CollidePointAllHitCollisionCollector_GetPositiveEarlyOutFraction(
  JoltC_CollidePointAllHitCollisionCollector_t * self
);

//endregion

//region properties

JoltC_ArrayCollidePointResult_t * JoltC_CollidePointAllHitCollisionCollector_mHits_Get(
  JoltC_CollidePointAllHitCollisionCollector_t * self
);

void JoltC_CollidePointAllHitCollisionCollector_mHits_Set(
  JoltC_CollidePointAllHitCollisionCollector_t * self,
  JoltC_ArrayCollidePointResult_t * mHits
);

//endregion


#ifdef __cplusplus
}
#endif

