#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_TransformedShapeCollector_Reset(
  JoltC_TransformedShapeCollector_t * self
);

void JoltC_TransformedShapeCollector_SetContext(
  JoltC_TransformedShapeCollector_t * self,
  JoltC_TransformedShape_t * inContext
);

JoltC_TransformedShape_t * JoltC_TransformedShapeCollector_GetContext(
  JoltC_TransformedShapeCollector_t * self
);

void JoltC_TransformedShapeCollector_UpdateEarlyOutFraction(
  JoltC_TransformedShapeCollector_t * self,
  float inFraction
);

void JoltC_TransformedShapeCollector_ResetEarlyOutFraction(
  JoltC_TransformedShapeCollector_t * self,
  float inFraction
);

void JoltC_TransformedShapeCollector_ForceEarlyOut(
  JoltC_TransformedShapeCollector_t * self
);

bool JoltC_TransformedShapeCollector_ShouldEarlyOut(
  JoltC_TransformedShapeCollector_t * self
);

float JoltC_TransformedShapeCollector_GetEarlyOutFraction(
  JoltC_TransformedShapeCollector_t * self
);

float JoltC_TransformedShapeCollector_GetPositiveEarlyOutFraction(
  JoltC_TransformedShapeCollector_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

