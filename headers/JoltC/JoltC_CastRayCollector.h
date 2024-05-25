#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_CastRayCollector_Reset(
  JoltC_CastRayCollector_t * self,
  char** outErrMsg
);

void JoltC_CastRayCollector_SetContext(
  JoltC_CastRayCollector_t * self,
  const JoltC_TransformedShape_t * inContext,
  char** outErrMsg
);

const JoltC_TransformedShape_t * JoltC_CastRayCollector_GetContext(
  JoltC_CastRayCollector_t * self,
  char** outErrMsg
);

void JoltC_CastRayCollector_UpdateEarlyOutFraction(
  JoltC_CastRayCollector_t * self,
  float inFraction,
  char** outErrMsg
);

void JoltC_CastRayCollector_ResetEarlyOutFraction(
  JoltC_CastRayCollector_t * self,
  float inFraction,
  char** outErrMsg
);

void JoltC_CastRayCollector_ForceEarlyOut(
  JoltC_CastRayCollector_t * self,
  char** outErrMsg
);

bool JoltC_CastRayCollector_ShouldEarlyOut(
  JoltC_CastRayCollector_t * self,
  char** outErrMsg
);

float JoltC_CastRayCollector_GetEarlyOutFraction(
  JoltC_CastRayCollector_t * self,
  char** outErrMsg
);

float JoltC_CastRayCollector_GetPositiveEarlyOutFraction(
  JoltC_CastRayCollector_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

