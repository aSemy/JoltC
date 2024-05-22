#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JPC_CastShapeBodyCollector_Reset(
  JPC_CastShapeBodyCollector_t * self
);

void JPC_CastShapeBodyCollector_SetContext(
  JPC_CastShapeBodyCollector_t * self,
  const JPC_TransformedShape_t * inContext
);

const JPC_TransformedShape_t * JPC_CastShapeBodyCollector_GetContext(
  JPC_CastShapeBodyCollector_t * self
);

void JPC_CastShapeBodyCollector_UpdateEarlyOutFraction(
  JPC_CastShapeBodyCollector_t * self,
  float inFraction
);

void JPC_CastShapeBodyCollector_ResetEarlyOutFraction(
  JPC_CastShapeBodyCollector_t * self,
  float inFraction
);

void JPC_CastShapeBodyCollector_ForceEarlyOut(
  JPC_CastShapeBodyCollector_t * self
);

bool JPC_CastShapeBodyCollector_ShouldEarlyOut(
  JPC_CastShapeBodyCollector_t * self
);

float JPC_CastShapeBodyCollector_GetEarlyOutFraction(
  JPC_CastShapeBodyCollector_t * self
);

float JPC_CastShapeBodyCollector_GetPositiveEarlyOutFraction(
  JPC_CastShapeBodyCollector_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

