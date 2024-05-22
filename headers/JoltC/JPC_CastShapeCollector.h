#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JPC_CastShapeCollector_Reset(
  JPC_CastShapeCollector_t * self
);

void JPC_CastShapeCollector_SetContext(
  JPC_CastShapeCollector_t * self,
  const JPC_TransformedShape_t * inContext
);

const JPC_TransformedShape_t * JPC_CastShapeCollector_GetContext(
  JPC_CastShapeCollector_t * self
);

void JPC_CastShapeCollector_UpdateEarlyOutFraction(
  JPC_CastShapeCollector_t * self,
  float inFraction
);

void JPC_CastShapeCollector_ResetEarlyOutFraction(
  JPC_CastShapeCollector_t * self,
  float inFraction
);

void JPC_CastShapeCollector_ForceEarlyOut(
  JPC_CastShapeCollector_t * self
);

bool JPC_CastShapeCollector_ShouldEarlyOut(
  JPC_CastShapeCollector_t * self
);

float JPC_CastShapeCollector_GetEarlyOutFraction(
  JPC_CastShapeCollector_t * self
);

float JPC_CastShapeCollector_GetPositiveEarlyOutFraction(
  JPC_CastShapeCollector_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

