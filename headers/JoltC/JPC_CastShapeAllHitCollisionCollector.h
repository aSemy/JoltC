#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_CastShapeAllHitCollisionCollector_t * JPC_CastShapeAllHitCollisionCollector_new();

//endregion constructors

//region functions

void JPC_CastShapeAllHitCollisionCollector_Sort(
  JPC_CastShapeAllHitCollisionCollector_t * self
);

bool JPC_CastShapeAllHitCollisionCollector_HadHit(
  JPC_CastShapeAllHitCollisionCollector_t * self
);

void JPC_CastShapeAllHitCollisionCollector_Reset(
  JPC_CastShapeAllHitCollisionCollector_t * self
);

void JPC_CastShapeAllHitCollisionCollector_SetContext(
  JPC_CastShapeAllHitCollisionCollector_t * self,
  const JPC_TransformedShape_t * inContext
);

const JPC_TransformedShape_t * JPC_CastShapeAllHitCollisionCollector_GetContext(
  JPC_CastShapeAllHitCollisionCollector_t * self
);

void JPC_CastShapeAllHitCollisionCollector_UpdateEarlyOutFraction(
  JPC_CastShapeAllHitCollisionCollector_t * self,
  float inFraction
);

void JPC_CastShapeAllHitCollisionCollector_ResetEarlyOutFraction(
  JPC_CastShapeAllHitCollisionCollector_t * self,
  float inFraction
);

void JPC_CastShapeAllHitCollisionCollector_ForceEarlyOut(
  JPC_CastShapeAllHitCollisionCollector_t * self
);

bool JPC_CastShapeAllHitCollisionCollector_ShouldEarlyOut(
  JPC_CastShapeAllHitCollisionCollector_t * self
);

float JPC_CastShapeAllHitCollisionCollector_GetEarlyOutFraction(
  JPC_CastShapeAllHitCollisionCollector_t * self
);

float JPC_CastShapeAllHitCollisionCollector_GetPositiveEarlyOutFraction(
  JPC_CastShapeAllHitCollisionCollector_t * self
);

//endregion functions

//region properties

JPC_ArrayShapeCastResult_t * JPC_CastShapeAllHitCollisionCollector_mHits_Get(
  JPC_CastShapeAllHitCollisionCollector_t * self
);

void JPC_CastShapeAllHitCollisionCollector_mHits_Set(
  JPC_CastShapeAllHitCollisionCollector_t * self,
  JPC_ArrayShapeCastResult_t * mHits
);

//endregion properties


#ifdef __cplusplus
}
#endif

