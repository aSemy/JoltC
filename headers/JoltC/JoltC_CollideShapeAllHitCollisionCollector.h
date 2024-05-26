#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CollideShapeAllHitCollisionCollector_t * JoltC_CollideShapeAllHitCollisionCollector_new();

//endregion

//region functions

void JoltC_CollideShapeAllHitCollisionCollector_Sort(
  JoltC_CollideShapeAllHitCollisionCollector_t * self
);

bool JoltC_CollideShapeAllHitCollisionCollector_HadHit(
  JoltC_CollideShapeAllHitCollisionCollector_t * self
);

void JoltC_CollideShapeAllHitCollisionCollector_Reset(
  JoltC_CollideShapeAllHitCollisionCollector_t * self
);

void JoltC_CollideShapeAllHitCollisionCollector_SetContext(
  JoltC_CollideShapeAllHitCollisionCollector_t * self,
  JoltC_TransformedShape_t * inContext
);

JoltC_TransformedShape_t * JoltC_CollideShapeAllHitCollisionCollector_GetContext(
  JoltC_CollideShapeAllHitCollisionCollector_t * self
);

void JoltC_CollideShapeAllHitCollisionCollector_UpdateEarlyOutFraction(
  JoltC_CollideShapeAllHitCollisionCollector_t * self,
  float inFraction
);

void JoltC_CollideShapeAllHitCollisionCollector_ResetEarlyOutFraction(
  JoltC_CollideShapeAllHitCollisionCollector_t * self,
  float inFraction
);

void JoltC_CollideShapeAllHitCollisionCollector_ForceEarlyOut(
  JoltC_CollideShapeAllHitCollisionCollector_t * self
);

bool JoltC_CollideShapeAllHitCollisionCollector_ShouldEarlyOut(
  JoltC_CollideShapeAllHitCollisionCollector_t * self
);

float JoltC_CollideShapeAllHitCollisionCollector_GetEarlyOutFraction(
  JoltC_CollideShapeAllHitCollisionCollector_t * self
);

float JoltC_CollideShapeAllHitCollisionCollector_GetPositiveEarlyOutFraction(
  JoltC_CollideShapeAllHitCollisionCollector_t * self
);

//endregion

//region properties

JoltC_ArrayCollideShapeResult_t * JoltC_CollideShapeAllHitCollisionCollector_mHits_Get(
  JoltC_CollideShapeAllHitCollisionCollector_t * self
);

void JoltC_CollideShapeAllHitCollisionCollector_mHits_Set(
  JoltC_CollideShapeAllHitCollisionCollector_t * self,
  JoltC_ArrayCollideShapeResult_t * mHits
);

//endregion


#ifdef __cplusplus
}
#endif

