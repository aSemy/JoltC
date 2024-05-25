#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JPC_TransformedShapeCollector_Reset(
  JPC_TransformedShapeCollector_t * self
);

void JPC_TransformedShapeCollector_SetContext(
  JPC_TransformedShapeCollector_t * self,
  const JPC_TransformedShape_t * inContext
);

const JPC_TransformedShape_t * JPC_TransformedShapeCollector_GetContext(
  JPC_TransformedShapeCollector_t * self
);

void JPC_TransformedShapeCollector_UpdateEarlyOutFraction(
  JPC_TransformedShapeCollector_t * self,
  float inFraction
);

void JPC_TransformedShapeCollector_ResetEarlyOutFraction(
  JPC_TransformedShapeCollector_t * self,
  float inFraction
);

void JPC_TransformedShapeCollector_ForceEarlyOut(
  JPC_TransformedShapeCollector_t * self
);

bool JPC_TransformedShapeCollector_ShouldEarlyOut(
  JPC_TransformedShapeCollector_t * self
);

float JPC_TransformedShapeCollector_GetEarlyOutFraction(
  JPC_TransformedShapeCollector_t * self
);

float JPC_TransformedShapeCollector_GetPositiveEarlyOutFraction(
  JPC_TransformedShapeCollector_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

