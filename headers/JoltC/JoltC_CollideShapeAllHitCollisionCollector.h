#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_CollideShapeAllHitCollisionCollector_t * JPC_CollideShapeAllHitCollisionCollector_new();

//endregion constructors

//region functions

void JPC_CollideShapeAllHitCollisionCollector_Sort(
  JPC_CollideShapeAllHitCollisionCollector_t * self
);

bool JPC_CollideShapeAllHitCollisionCollector_HadHit(
  JPC_CollideShapeAllHitCollisionCollector_t * self
);

void JPC_CollideShapeAllHitCollisionCollector_Reset(
  JPC_CollideShapeAllHitCollisionCollector_t * self
);

void JPC_CollideShapeAllHitCollisionCollector_SetContext(
  JPC_CollideShapeAllHitCollisionCollector_t * self,
  const JPC_TransformedShape_t * inContext
);

const JPC_TransformedShape_t * JPC_CollideShapeAllHitCollisionCollector_GetContext(
  JPC_CollideShapeAllHitCollisionCollector_t * self
);

void JPC_CollideShapeAllHitCollisionCollector_UpdateEarlyOutFraction(
  JPC_CollideShapeAllHitCollisionCollector_t * self,
  float inFraction
);

void JPC_CollideShapeAllHitCollisionCollector_ResetEarlyOutFraction(
  JPC_CollideShapeAllHitCollisionCollector_t * self,
  float inFraction
);

void JPC_CollideShapeAllHitCollisionCollector_ForceEarlyOut(
  JPC_CollideShapeAllHitCollisionCollector_t * self
);

bool JPC_CollideShapeAllHitCollisionCollector_ShouldEarlyOut(
  JPC_CollideShapeAllHitCollisionCollector_t * self
);

float JPC_CollideShapeAllHitCollisionCollector_GetEarlyOutFraction(
  JPC_CollideShapeAllHitCollisionCollector_t * self
);

float JPC_CollideShapeAllHitCollisionCollector_GetPositiveEarlyOutFraction(
  JPC_CollideShapeAllHitCollisionCollector_t * self
);

//endregion functions

//region properties

JPC_ArrayCollideShapeResult_t * JPC_CollideShapeAllHitCollisionCollector_mHits_Get(
  JPC_CollideShapeAllHitCollisionCollector_t * self
);

void JPC_CollideShapeAllHitCollisionCollector_mHits_Set(
  JPC_CollideShapeAllHitCollisionCollector_t * self,
  JPC_ArrayCollideShapeResult_t * mHits
);

//endregion properties


#ifdef __cplusplus
}
#endif

