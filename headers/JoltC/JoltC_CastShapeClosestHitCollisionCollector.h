#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CastShapeClosestHitCollisionCollector_t * JoltC_CastShapeClosestHitCollisionCollector_new();

//endregion

//region destructor

void JoltC_CastShapeClosestHitCollisionCollector_destroy(
  JoltC_CastShapeClosestHitCollisionCollector_t * self
);

//endregion
//region functions

bool JoltC_CastShapeClosestHitCollisionCollector_HadHit(
  JoltC_CastShapeClosestHitCollisionCollector_t * self
);

void JoltC_CastShapeClosestHitCollisionCollector_Reset(
  JoltC_CastShapeClosestHitCollisionCollector_t * self
);

void JoltC_CastShapeClosestHitCollisionCollector_SetContext(
  JoltC_CastShapeClosestHitCollisionCollector_t * self,
  JoltC_TransformedShape_t * inContext
);

JoltC_TransformedShape_t * JoltC_CastShapeClosestHitCollisionCollector_GetContext(
  JoltC_CastShapeClosestHitCollisionCollector_t * self
);

void JoltC_CastShapeClosestHitCollisionCollector_UpdateEarlyOutFraction(
  JoltC_CastShapeClosestHitCollisionCollector_t * self,
  float inFraction
);

void JoltC_CastShapeClosestHitCollisionCollector_ResetEarlyOutFraction(
  JoltC_CastShapeClosestHitCollisionCollector_t * self,
  float inFraction
);

void JoltC_CastShapeClosestHitCollisionCollector_ForceEarlyOut(
  JoltC_CastShapeClosestHitCollisionCollector_t * self
);

bool JoltC_CastShapeClosestHitCollisionCollector_ShouldEarlyOut(
  JoltC_CastShapeClosestHitCollisionCollector_t * self
);

float JoltC_CastShapeClosestHitCollisionCollector_GetEarlyOutFraction(
  JoltC_CastShapeClosestHitCollisionCollector_t * self
);

float JoltC_CastShapeClosestHitCollisionCollector_GetPositiveEarlyOutFraction(
  JoltC_CastShapeClosestHitCollisionCollector_t * self
);

//endregion

//region properties

JoltC_ShapeCastResult_t * JoltC_CastShapeClosestHitCollisionCollector_mHit_Get(
  JoltC_CastShapeClosestHitCollisionCollector_t * self
);

void JoltC_CastShapeClosestHitCollisionCollector_mHit_Set(
  JoltC_CastShapeClosestHitCollisionCollector_t * self,
  JoltC_ShapeCastResult_t * mHit
);

//endregion


#ifdef __cplusplus
}
#endif
