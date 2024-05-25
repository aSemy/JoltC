#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_CastShapeCollector_Reset(
  JoltC_CastShapeCollector_t * self,
  char** outErrMsg
);

void JoltC_CastShapeCollector_SetContext(
  JoltC_CastShapeCollector_t * self,
  const JoltC_TransformedShape_t * inContext,
  char** outErrMsg
);

const JoltC_TransformedShape_t * JoltC_CastShapeCollector_GetContext(
  JoltC_CastShapeCollector_t * self,
  char** outErrMsg
);

void JoltC_CastShapeCollector_UpdateEarlyOutFraction(
  JoltC_CastShapeCollector_t * self,
  float inFraction,
  char** outErrMsg
);

void JoltC_CastShapeCollector_ResetEarlyOutFraction(
  JoltC_CastShapeCollector_t * self,
  float inFraction,
  char** outErrMsg
);

void JoltC_CastShapeCollector_ForceEarlyOut(
  JoltC_CastShapeCollector_t * self,
  char** outErrMsg
);

bool JoltC_CastShapeCollector_ShouldEarlyOut(
  JoltC_CastShapeCollector_t * self,
  char** outErrMsg
);

float JoltC_CastShapeCollector_GetEarlyOutFraction(
  JoltC_CastShapeCollector_t * self,
  char** outErrMsg
);

float JoltC_CastShapeCollector_GetPositiveEarlyOutFraction(
  JoltC_CastShapeCollector_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

