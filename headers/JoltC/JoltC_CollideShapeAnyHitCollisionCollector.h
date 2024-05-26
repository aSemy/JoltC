#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CollideShapeAnyHitCollisionCollector_t * JoltC_CollideShapeAnyHitCollisionCollector_new();

//endregion

//region functions

bool JoltC_CollideShapeAnyHitCollisionCollector_HadHit(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self
);

void JoltC_CollideShapeAnyHitCollisionCollector_Reset(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self
);

void JoltC_CollideShapeAnyHitCollisionCollector_SetContext(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self,
  const JoltC_TransformedShape_t * inContext
);

const JoltC_TransformedShape_t * JoltC_CollideShapeAnyHitCollisionCollector_GetContext(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self
);

void JoltC_CollideShapeAnyHitCollisionCollector_UpdateEarlyOutFraction(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self,
  float inFraction
);

void JoltC_CollideShapeAnyHitCollisionCollector_ResetEarlyOutFraction(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self,
  float inFraction
);

void JoltC_CollideShapeAnyHitCollisionCollector_ForceEarlyOut(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self
);

bool JoltC_CollideShapeAnyHitCollisionCollector_ShouldEarlyOut(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self
);

float JoltC_CollideShapeAnyHitCollisionCollector_GetEarlyOutFraction(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self
);

float JoltC_CollideShapeAnyHitCollisionCollector_GetPositiveEarlyOutFraction(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self
);

//endregion

//region properties

JoltC_CollideShapeResult_t * JoltC_CollideShapeAnyHitCollisionCollector_mHit_Get(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self
);

void JoltC_CollideShapeAnyHitCollisionCollector_mHit_Set(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self,
  JoltC_CollideShapeResult_t * mHit
);

//endregion


#ifdef __cplusplus
}
#endif

