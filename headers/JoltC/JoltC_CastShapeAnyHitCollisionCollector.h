#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_CastShapeAnyHitCollisionCollector_t * JPC_CastShapeAnyHitCollisionCollector_new();

//endregion constructors

//region functions

bool JPC_CastShapeAnyHitCollisionCollector_HadHit(
  JPC_CastShapeAnyHitCollisionCollector_t * self
);

void JPC_CastShapeAnyHitCollisionCollector_Reset(
  JPC_CastShapeAnyHitCollisionCollector_t * self
);

void JPC_CastShapeAnyHitCollisionCollector_SetContext(
  JPC_CastShapeAnyHitCollisionCollector_t * self,
  const JPC_TransformedShape_t * inContext
);

const JPC_TransformedShape_t * JPC_CastShapeAnyHitCollisionCollector_GetContext(
  JPC_CastShapeAnyHitCollisionCollector_t * self
);

void JPC_CastShapeAnyHitCollisionCollector_UpdateEarlyOutFraction(
  JPC_CastShapeAnyHitCollisionCollector_t * self,
  float inFraction
);

void JPC_CastShapeAnyHitCollisionCollector_ResetEarlyOutFraction(
  JPC_CastShapeAnyHitCollisionCollector_t * self,
  float inFraction
);

void JPC_CastShapeAnyHitCollisionCollector_ForceEarlyOut(
  JPC_CastShapeAnyHitCollisionCollector_t * self
);

bool JPC_CastShapeAnyHitCollisionCollector_ShouldEarlyOut(
  JPC_CastShapeAnyHitCollisionCollector_t * self
);

float JPC_CastShapeAnyHitCollisionCollector_GetEarlyOutFraction(
  JPC_CastShapeAnyHitCollisionCollector_t * self
);

float JPC_CastShapeAnyHitCollisionCollector_GetPositiveEarlyOutFraction(
  JPC_CastShapeAnyHitCollisionCollector_t * self
);

//endregion functions

//region properties

JPC_ShapeCastResult_t * JPC_CastShapeAnyHitCollisionCollector_mHit_Get(
  JPC_CastShapeAnyHitCollisionCollector_t * self
);

void JPC_CastShapeAnyHitCollisionCollector_mHit_Set(
  JPC_CastShapeAnyHitCollisionCollector_t * self,
  JPC_ShapeCastResult_t * mHit
);

//endregion properties


#ifdef __cplusplus
}
#endif

