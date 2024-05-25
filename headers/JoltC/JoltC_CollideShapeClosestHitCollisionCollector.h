#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_CollideShapeClosestHitCollisionCollector_t * JPC_CollideShapeClosestHitCollisionCollector_new();

//endregion constructors

//region functions

bool JPC_CollideShapeClosestHitCollisionCollector_HadHit(
  JPC_CollideShapeClosestHitCollisionCollector_t * self
);

void JPC_CollideShapeClosestHitCollisionCollector_Reset(
  JPC_CollideShapeClosestHitCollisionCollector_t * self
);

void JPC_CollideShapeClosestHitCollisionCollector_SetContext(
  JPC_CollideShapeClosestHitCollisionCollector_t * self,
  const JPC_TransformedShape_t * inContext
);

const JPC_TransformedShape_t * JPC_CollideShapeClosestHitCollisionCollector_GetContext(
  JPC_CollideShapeClosestHitCollisionCollector_t * self
);

void JPC_CollideShapeClosestHitCollisionCollector_UpdateEarlyOutFraction(
  JPC_CollideShapeClosestHitCollisionCollector_t * self,
  float inFraction
);

void JPC_CollideShapeClosestHitCollisionCollector_ResetEarlyOutFraction(
  JPC_CollideShapeClosestHitCollisionCollector_t * self,
  float inFraction
);

void JPC_CollideShapeClosestHitCollisionCollector_ForceEarlyOut(
  JPC_CollideShapeClosestHitCollisionCollector_t * self
);

bool JPC_CollideShapeClosestHitCollisionCollector_ShouldEarlyOut(
  JPC_CollideShapeClosestHitCollisionCollector_t * self
);

float JPC_CollideShapeClosestHitCollisionCollector_GetEarlyOutFraction(
  JPC_CollideShapeClosestHitCollisionCollector_t * self
);

float JPC_CollideShapeClosestHitCollisionCollector_GetPositiveEarlyOutFraction(
  JPC_CollideShapeClosestHitCollisionCollector_t * self
);

//endregion functions

//region properties

JPC_CollideShapeResult_t * JPC_CollideShapeClosestHitCollisionCollector_mHit_Get(
  JPC_CollideShapeClosestHitCollisionCollector_t * self
);

void JPC_CollideShapeClosestHitCollisionCollector_mHit_Set(
  JPC_CollideShapeClosestHitCollisionCollector_t * self,
  JPC_CollideShapeResult_t * mHit
);

//endregion properties


#ifdef __cplusplus
}
#endif

