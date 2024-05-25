#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_CollidePointClosestHitCollisionCollector_t * JPC_CollidePointClosestHitCollisionCollector_new();

//endregion constructors

//region functions

bool JPC_CollidePointClosestHitCollisionCollector_HadHit(
  JPC_CollidePointClosestHitCollisionCollector_t * self
);

void JPC_CollidePointClosestHitCollisionCollector_Reset(
  JPC_CollidePointClosestHitCollisionCollector_t * self
);

void JPC_CollidePointClosestHitCollisionCollector_SetContext(
  JPC_CollidePointClosestHitCollisionCollector_t * self,
  const JPC_TransformedShape_t * inContext
);

const JPC_TransformedShape_t * JPC_CollidePointClosestHitCollisionCollector_GetContext(
  JPC_CollidePointClosestHitCollisionCollector_t * self
);

void JPC_CollidePointClosestHitCollisionCollector_UpdateEarlyOutFraction(
  JPC_CollidePointClosestHitCollisionCollector_t * self,
  float inFraction
);

void JPC_CollidePointClosestHitCollisionCollector_ResetEarlyOutFraction(
  JPC_CollidePointClosestHitCollisionCollector_t * self,
  float inFraction
);

void JPC_CollidePointClosestHitCollisionCollector_ForceEarlyOut(
  JPC_CollidePointClosestHitCollisionCollector_t * self
);

bool JPC_CollidePointClosestHitCollisionCollector_ShouldEarlyOut(
  JPC_CollidePointClosestHitCollisionCollector_t * self
);

float JPC_CollidePointClosestHitCollisionCollector_GetEarlyOutFraction(
  JPC_CollidePointClosestHitCollisionCollector_t * self
);

float JPC_CollidePointClosestHitCollisionCollector_GetPositiveEarlyOutFraction(
  JPC_CollidePointClosestHitCollisionCollector_t * self
);

//endregion functions

//region properties

JPC_CollidePointResult_t * JPC_CollidePointClosestHitCollisionCollector_mHit_Get(
  JPC_CollidePointClosestHitCollisionCollector_t * self
);

void JPC_CollidePointClosestHitCollisionCollector_mHit_Set(
  JPC_CollidePointClosestHitCollisionCollector_t * self,
  JPC_CollidePointResult_t * mHit
);

//endregion properties


#ifdef __cplusplus
}
#endif

