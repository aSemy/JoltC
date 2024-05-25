#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JPC_CastRayCollector_Reset(
  JPC_CastRayCollector_t * self
);

void JPC_CastRayCollector_SetContext(
  JPC_CastRayCollector_t * self,
  const JPC_TransformedShape_t * inContext
);

const JPC_TransformedShape_t * JPC_CastRayCollector_GetContext(
  JPC_CastRayCollector_t * self
);

void JPC_CastRayCollector_UpdateEarlyOutFraction(
  JPC_CastRayCollector_t * self,
  float inFraction
);

void JPC_CastRayCollector_ResetEarlyOutFraction(
  JPC_CastRayCollector_t * self,
  float inFraction
);

void JPC_CastRayCollector_ForceEarlyOut(
  JPC_CastRayCollector_t * self
);

bool JPC_CastRayCollector_ShouldEarlyOut(
  JPC_CastRayCollector_t * self
);

float JPC_CastRayCollector_GetEarlyOutFraction(
  JPC_CastRayCollector_t * self
);

float JPC_CastRayCollector_GetPositiveEarlyOutFraction(
  JPC_CastRayCollector_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

