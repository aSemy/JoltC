#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CastShapeAllHitCollisionCollector_t * JoltC_CastShapeAllHitCollisionCollector_new();

//endregion

//region destructor

void JoltC_CastShapeAllHitCollisionCollector_destroy(
  JoltC_CastShapeAllHitCollisionCollector_t * self
);

//endregion
//region functions

void JoltC_CastShapeAllHitCollisionCollector_Sort(
  JoltC_CastShapeAllHitCollisionCollector_t * self
);

bool JoltC_CastShapeAllHitCollisionCollector_HadHit(
  JoltC_CastShapeAllHitCollisionCollector_t * self
);

void JoltC_CastShapeAllHitCollisionCollector_Reset(
  JoltC_CastShapeAllHitCollisionCollector_t * self
);

void JoltC_CastShapeAllHitCollisionCollector_SetContext(
  JoltC_CastShapeAllHitCollisionCollector_t * self,
  JoltC_TransformedShape_t * inContext
);

JoltC_TransformedShape_t * JoltC_CastShapeAllHitCollisionCollector_GetContext(
  JoltC_CastShapeAllHitCollisionCollector_t * self
);

void JoltC_CastShapeAllHitCollisionCollector_UpdateEarlyOutFraction(
  JoltC_CastShapeAllHitCollisionCollector_t * self,
  float inFraction
);

void JoltC_CastShapeAllHitCollisionCollector_ResetEarlyOutFraction(
  JoltC_CastShapeAllHitCollisionCollector_t * self,
  float inFraction
);

void JoltC_CastShapeAllHitCollisionCollector_ForceEarlyOut(
  JoltC_CastShapeAllHitCollisionCollector_t * self
);

bool JoltC_CastShapeAllHitCollisionCollector_ShouldEarlyOut(
  JoltC_CastShapeAllHitCollisionCollector_t * self
);

float JoltC_CastShapeAllHitCollisionCollector_GetEarlyOutFraction(
  JoltC_CastShapeAllHitCollisionCollector_t * self
);

float JoltC_CastShapeAllHitCollisionCollector_GetPositiveEarlyOutFraction(
  JoltC_CastShapeAllHitCollisionCollector_t * self
);

//endregion

//region properties

JoltC_ArrayShapeCastResult_t * JoltC_CastShapeAllHitCollisionCollector_mHits_Get(
  JoltC_CastShapeAllHitCollisionCollector_t * self
);

void JoltC_CastShapeAllHitCollisionCollector_mHits_Set(
  JoltC_CastShapeAllHitCollisionCollector_t * self,
  JoltC_ArrayShapeCastResult_t * mHits
);

//endregion


#ifdef __cplusplus
}
#endif
