#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_CastShapeClosestHitCollisionCollector_t * JPC_CastShapeClosestHitCollisionCollector_new();

//endregion constructors

//region functions

bool JPC_CastShapeClosestHitCollisionCollector_HadHit(
  JPC_CastShapeClosestHitCollisionCollector_t * self
);

void JPC_CastShapeClosestHitCollisionCollector_Reset(
  JPC_CastShapeClosestHitCollisionCollector_t * self
);

void JPC_CastShapeClosestHitCollisionCollector_SetContext(
  JPC_CastShapeClosestHitCollisionCollector_t * self,
  const JPC_TransformedShape_t * inContext
);

const JPC_TransformedShape_t * JPC_CastShapeClosestHitCollisionCollector_GetContext(
  JPC_CastShapeClosestHitCollisionCollector_t * self
);

void JPC_CastShapeClosestHitCollisionCollector_UpdateEarlyOutFraction(
  JPC_CastShapeClosestHitCollisionCollector_t * self,
  float inFraction
);

void JPC_CastShapeClosestHitCollisionCollector_ResetEarlyOutFraction(
  JPC_CastShapeClosestHitCollisionCollector_t * self,
  float inFraction
);

void JPC_CastShapeClosestHitCollisionCollector_ForceEarlyOut(
  JPC_CastShapeClosestHitCollisionCollector_t * self
);

bool JPC_CastShapeClosestHitCollisionCollector_ShouldEarlyOut(
  JPC_CastShapeClosestHitCollisionCollector_t * self
);

float JPC_CastShapeClosestHitCollisionCollector_GetEarlyOutFraction(
  JPC_CastShapeClosestHitCollisionCollector_t * self
);

float JPC_CastShapeClosestHitCollisionCollector_GetPositiveEarlyOutFraction(
  JPC_CastShapeClosestHitCollisionCollector_t * self
);

//endregion functions

//region properties

JPC_ShapeCastResult_t * JPC_CastShapeClosestHitCollisionCollector_mHit_Get(
  JPC_CastShapeClosestHitCollisionCollector_t * self
);

void JPC_CastShapeClosestHitCollisionCollector_mHit_Set(
  JPC_CastShapeClosestHitCollisionCollector_t * self,
  JPC_ShapeCastResult_t * mHit
);

//endregion properties


#ifdef __cplusplus
}
#endif

