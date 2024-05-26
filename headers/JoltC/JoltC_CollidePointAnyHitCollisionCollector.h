#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CollidePointAnyHitCollisionCollector_t * JoltC_CollidePointAnyHitCollisionCollector_new();

//endregion

//region functions

bool JoltC_CollidePointAnyHitCollisionCollector_HadHit(
  JoltC_CollidePointAnyHitCollisionCollector_t * self
);

void JoltC_CollidePointAnyHitCollisionCollector_Reset(
  JoltC_CollidePointAnyHitCollisionCollector_t * self
);

void JoltC_CollidePointAnyHitCollisionCollector_SetContext(
  JoltC_CollidePointAnyHitCollisionCollector_t * self,
  JoltC_TransformedShape_t * inContext
);

JoltC_TransformedShape_t * JoltC_CollidePointAnyHitCollisionCollector_GetContext(
  JoltC_CollidePointAnyHitCollisionCollector_t * self
);

void JoltC_CollidePointAnyHitCollisionCollector_UpdateEarlyOutFraction(
  JoltC_CollidePointAnyHitCollisionCollector_t * self,
  float inFraction
);

void JoltC_CollidePointAnyHitCollisionCollector_ResetEarlyOutFraction(
  JoltC_CollidePointAnyHitCollisionCollector_t * self,
  float inFraction
);

void JoltC_CollidePointAnyHitCollisionCollector_ForceEarlyOut(
  JoltC_CollidePointAnyHitCollisionCollector_t * self
);

bool JoltC_CollidePointAnyHitCollisionCollector_ShouldEarlyOut(
  JoltC_CollidePointAnyHitCollisionCollector_t * self
);

float JoltC_CollidePointAnyHitCollisionCollector_GetEarlyOutFraction(
  JoltC_CollidePointAnyHitCollisionCollector_t * self
);

float JoltC_CollidePointAnyHitCollisionCollector_GetPositiveEarlyOutFraction(
  JoltC_CollidePointAnyHitCollisionCollector_t * self
);

//endregion

//region properties

JoltC_CollidePointResult_t * JoltC_CollidePointAnyHitCollisionCollector_mHit_Get(
  JoltC_CollidePointAnyHitCollisionCollector_t * self
);

void JoltC_CollidePointAnyHitCollisionCollector_mHit_Set(
  JoltC_CollidePointAnyHitCollisionCollector_t * self,
  JoltC_CollidePointResult_t * mHit
);

//endregion


#ifdef __cplusplus
}
#endif

