#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_CollidePointAllHitCollisionCollector_t * JPC_CollidePointAllHitCollisionCollector_new();

//endregion constructors

//region functions

void JPC_CollidePointAllHitCollisionCollector_Sort(
  JPC_CollidePointAllHitCollisionCollector_t * self
);

bool JPC_CollidePointAllHitCollisionCollector_HadHit(
  JPC_CollidePointAllHitCollisionCollector_t * self
);

void JPC_CollidePointAllHitCollisionCollector_Reset(
  JPC_CollidePointAllHitCollisionCollector_t * self
);

void JPC_CollidePointAllHitCollisionCollector_SetContext(
  JPC_CollidePointAllHitCollisionCollector_t * self,
  const JPC_TransformedShape_t * inContext
);

const JPC_TransformedShape_t * JPC_CollidePointAllHitCollisionCollector_GetContext(
  JPC_CollidePointAllHitCollisionCollector_t * self
);

void JPC_CollidePointAllHitCollisionCollector_UpdateEarlyOutFraction(
  JPC_CollidePointAllHitCollisionCollector_t * self,
  float inFraction
);

void JPC_CollidePointAllHitCollisionCollector_ResetEarlyOutFraction(
  JPC_CollidePointAllHitCollisionCollector_t * self,
  float inFraction
);

void JPC_CollidePointAllHitCollisionCollector_ForceEarlyOut(
  JPC_CollidePointAllHitCollisionCollector_t * self
);

bool JPC_CollidePointAllHitCollisionCollector_ShouldEarlyOut(
  JPC_CollidePointAllHitCollisionCollector_t * self
);

float JPC_CollidePointAllHitCollisionCollector_GetEarlyOutFraction(
  JPC_CollidePointAllHitCollisionCollector_t * self
);

float JPC_CollidePointAllHitCollisionCollector_GetPositiveEarlyOutFraction(
  JPC_CollidePointAllHitCollisionCollector_t * self
);

//endregion functions

//region properties

JPC_ArrayCollidePointResult_t * JPC_CollidePointAllHitCollisionCollector_mHits_Get(
  JPC_CollidePointAllHitCollisionCollector_t * self
);

void JPC_CollidePointAllHitCollisionCollector_mHits_Set(
  JPC_CollidePointAllHitCollisionCollector_t * self,
  JPC_ArrayCollidePointResult_t * mHits
);

//endregion properties


#ifdef __cplusplus
}
#endif

