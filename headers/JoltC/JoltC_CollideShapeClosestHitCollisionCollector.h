#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CollideShapeClosestHitCollisionCollector_t * JoltC_CollideShapeClosestHitCollisionCollector_new();

//endregion

//region functions

bool JoltC_CollideShapeClosestHitCollisionCollector_HadHit(
  JoltC_CollideShapeClosestHitCollisionCollector_t * self
);

void JoltC_CollideShapeClosestHitCollisionCollector_Reset(
  JoltC_CollideShapeClosestHitCollisionCollector_t * self
);

void JoltC_CollideShapeClosestHitCollisionCollector_SetContext(
  JoltC_CollideShapeClosestHitCollisionCollector_t * self,
  JoltC_TransformedShape_t * inContext
);

JoltC_TransformedShape_t * JoltC_CollideShapeClosestHitCollisionCollector_GetContext(
  JoltC_CollideShapeClosestHitCollisionCollector_t * self
);

void JoltC_CollideShapeClosestHitCollisionCollector_UpdateEarlyOutFraction(
  JoltC_CollideShapeClosestHitCollisionCollector_t * self,
  float inFraction
);

void JoltC_CollideShapeClosestHitCollisionCollector_ResetEarlyOutFraction(
  JoltC_CollideShapeClosestHitCollisionCollector_t * self,
  float inFraction
);

void JoltC_CollideShapeClosestHitCollisionCollector_ForceEarlyOut(
  JoltC_CollideShapeClosestHitCollisionCollector_t * self
);

bool JoltC_CollideShapeClosestHitCollisionCollector_ShouldEarlyOut(
  JoltC_CollideShapeClosestHitCollisionCollector_t * self
);

float JoltC_CollideShapeClosestHitCollisionCollector_GetEarlyOutFraction(
  JoltC_CollideShapeClosestHitCollisionCollector_t * self
);

float JoltC_CollideShapeClosestHitCollisionCollector_GetPositiveEarlyOutFraction(
  JoltC_CollideShapeClosestHitCollisionCollector_t * self
);

//endregion

//region properties

JoltC_CollideShapeResult_t * JoltC_CollideShapeClosestHitCollisionCollector_mHit_Get(
  JoltC_CollideShapeClosestHitCollisionCollector_t * self
);

void JoltC_CollideShapeClosestHitCollisionCollector_mHit_Set(
  JoltC_CollideShapeClosestHitCollisionCollector_t * self,
  JoltC_CollideShapeResult_t * mHit
);

//endregion


#ifdef __cplusplus
}
#endif

