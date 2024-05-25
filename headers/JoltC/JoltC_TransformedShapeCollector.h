#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_TransformedShapeCollector_Reset(
  JoltC_TransformedShapeCollector_t * self,
  char** outErrMsg
);

void JoltC_TransformedShapeCollector_SetContext(
  JoltC_TransformedShapeCollector_t * self,
  const JoltC_TransformedShape_t * inContext,
  char** outErrMsg
);

const JoltC_TransformedShape_t * JoltC_TransformedShapeCollector_GetContext(
  JoltC_TransformedShapeCollector_t * self,
  char** outErrMsg
);

void JoltC_TransformedShapeCollector_UpdateEarlyOutFraction(
  JoltC_TransformedShapeCollector_t * self,
  float inFraction,
  char** outErrMsg
);

void JoltC_TransformedShapeCollector_ResetEarlyOutFraction(
  JoltC_TransformedShapeCollector_t * self,
  float inFraction,
  char** outErrMsg
);

void JoltC_TransformedShapeCollector_ForceEarlyOut(
  JoltC_TransformedShapeCollector_t * self,
  char** outErrMsg
);

bool JoltC_TransformedShapeCollector_ShouldEarlyOut(
  JoltC_TransformedShapeCollector_t * self,
  char** outErrMsg
);

float JoltC_TransformedShapeCollector_GetEarlyOutFraction(
  JoltC_TransformedShapeCollector_t * self,
  char** outErrMsg
);

float JoltC_TransformedShapeCollector_GetPositiveEarlyOutFraction(
  JoltC_TransformedShapeCollector_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

