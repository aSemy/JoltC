#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CollidePointClosestHitCollisionCollector_t * JoltC_CollidePointClosestHitCollisionCollector_new();

//endregion

//region functions

bool JoltC_CollidePointClosestHitCollisionCollector_HadHit(
  JoltC_CollidePointClosestHitCollisionCollector_t * self
);

void JoltC_CollidePointClosestHitCollisionCollector_Reset(
  JoltC_CollidePointClosestHitCollisionCollector_t * self
);

void JoltC_CollidePointClosestHitCollisionCollector_SetContext(
  JoltC_CollidePointClosestHitCollisionCollector_t * self,
  const JoltC_TransformedShape_t * inContext
);

const JoltC_TransformedShape_t * JoltC_CollidePointClosestHitCollisionCollector_GetContext(
  JoltC_CollidePointClosestHitCollisionCollector_t * self
);

void JoltC_CollidePointClosestHitCollisionCollector_UpdateEarlyOutFraction(
  JoltC_CollidePointClosestHitCollisionCollector_t * self,
  float inFraction
);

void JoltC_CollidePointClosestHitCollisionCollector_ResetEarlyOutFraction(
  JoltC_CollidePointClosestHitCollisionCollector_t * self,
  float inFraction
);

void JoltC_CollidePointClosestHitCollisionCollector_ForceEarlyOut(
  JoltC_CollidePointClosestHitCollisionCollector_t * self
);

bool JoltC_CollidePointClosestHitCollisionCollector_ShouldEarlyOut(
  JoltC_CollidePointClosestHitCollisionCollector_t * self
);

float JoltC_CollidePointClosestHitCollisionCollector_GetEarlyOutFraction(
  JoltC_CollidePointClosestHitCollisionCollector_t * self
);

float JoltC_CollidePointClosestHitCollisionCollector_GetPositiveEarlyOutFraction(
  JoltC_CollidePointClosestHitCollisionCollector_t * self
);

//endregion

//region properties

JoltC_CollidePointResult_t * JoltC_CollidePointClosestHitCollisionCollector_mHit_Get(
  JoltC_CollidePointClosestHitCollisionCollector_t * self
);

void JoltC_CollidePointClosestHitCollisionCollector_mHit_Set(
  JoltC_CollidePointClosestHitCollisionCollector_t * self,
  JoltC_CollidePointResult_t * mHit
);

//endregion


#ifdef __cplusplus
}
#endif

