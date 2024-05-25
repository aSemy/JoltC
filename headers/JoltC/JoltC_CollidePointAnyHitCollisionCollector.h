#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_CollidePointAnyHitCollisionCollector_t * JPC_CollidePointAnyHitCollisionCollector_new();

//endregion constructors

//region functions

bool JPC_CollidePointAnyHitCollisionCollector_HadHit(
  JPC_CollidePointAnyHitCollisionCollector_t * self
);

void JPC_CollidePointAnyHitCollisionCollector_Reset(
  JPC_CollidePointAnyHitCollisionCollector_t * self
);

void JPC_CollidePointAnyHitCollisionCollector_SetContext(
  JPC_CollidePointAnyHitCollisionCollector_t * self,
  const JPC_TransformedShape_t * inContext
);

const JPC_TransformedShape_t * JPC_CollidePointAnyHitCollisionCollector_GetContext(
  JPC_CollidePointAnyHitCollisionCollector_t * self
);

void JPC_CollidePointAnyHitCollisionCollector_UpdateEarlyOutFraction(
  JPC_CollidePointAnyHitCollisionCollector_t * self,
  float inFraction
);

void JPC_CollidePointAnyHitCollisionCollector_ResetEarlyOutFraction(
  JPC_CollidePointAnyHitCollisionCollector_t * self,
  float inFraction
);

void JPC_CollidePointAnyHitCollisionCollector_ForceEarlyOut(
  JPC_CollidePointAnyHitCollisionCollector_t * self
);

bool JPC_CollidePointAnyHitCollisionCollector_ShouldEarlyOut(
  JPC_CollidePointAnyHitCollisionCollector_t * self
);

float JPC_CollidePointAnyHitCollisionCollector_GetEarlyOutFraction(
  JPC_CollidePointAnyHitCollisionCollector_t * self
);

float JPC_CollidePointAnyHitCollisionCollector_GetPositiveEarlyOutFraction(
  JPC_CollidePointAnyHitCollisionCollector_t * self
);

//endregion functions

//region properties

JPC_CollidePointResult_t * JPC_CollidePointAnyHitCollisionCollector_mHit_Get(
  JPC_CollidePointAnyHitCollisionCollector_t * self
);

void JPC_CollidePointAnyHitCollisionCollector_mHit_Set(
  JPC_CollidePointAnyHitCollisionCollector_t * self,
  JPC_CollidePointResult_t * mHit
);

//endregion properties


#ifdef __cplusplus
}
#endif

