#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_CollideShapeAnyHitCollisionCollector_t * JPC_CollideShapeAnyHitCollisionCollector_new();

//endregion constructors

//region functions

bool JPC_CollideShapeAnyHitCollisionCollector_HadHit(
  JPC_CollideShapeAnyHitCollisionCollector_t * self
);

void JPC_CollideShapeAnyHitCollisionCollector_Reset(
  JPC_CollideShapeAnyHitCollisionCollector_t * self
);

void JPC_CollideShapeAnyHitCollisionCollector_SetContext(
  JPC_CollideShapeAnyHitCollisionCollector_t * self,
  const JPC_TransformedShape_t * inContext
);

const JPC_TransformedShape_t * JPC_CollideShapeAnyHitCollisionCollector_GetContext(
  JPC_CollideShapeAnyHitCollisionCollector_t * self
);

void JPC_CollideShapeAnyHitCollisionCollector_UpdateEarlyOutFraction(
  JPC_CollideShapeAnyHitCollisionCollector_t * self,
  float inFraction
);

void JPC_CollideShapeAnyHitCollisionCollector_ResetEarlyOutFraction(
  JPC_CollideShapeAnyHitCollisionCollector_t * self,
  float inFraction
);

void JPC_CollideShapeAnyHitCollisionCollector_ForceEarlyOut(
  JPC_CollideShapeAnyHitCollisionCollector_t * self
);

bool JPC_CollideShapeAnyHitCollisionCollector_ShouldEarlyOut(
  JPC_CollideShapeAnyHitCollisionCollector_t * self
);

float JPC_CollideShapeAnyHitCollisionCollector_GetEarlyOutFraction(
  JPC_CollideShapeAnyHitCollisionCollector_t * self
);

float JPC_CollideShapeAnyHitCollisionCollector_GetPositiveEarlyOutFraction(
  JPC_CollideShapeAnyHitCollisionCollector_t * self
);

//endregion functions

//region properties

JPC_CollideShapeResult_t * JPC_CollideShapeAnyHitCollisionCollector_mHit_Get(
  JPC_CollideShapeAnyHitCollisionCollector_t * self
);

void JPC_CollideShapeAnyHitCollisionCollector_mHit_Set(
  JPC_CollideShapeAnyHitCollisionCollector_t * self,
  JPC_CollideShapeResult_t * mHit
);

//endregion properties


#ifdef __cplusplus
}
#endif

