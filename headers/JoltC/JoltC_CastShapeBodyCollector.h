#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_CastShapeBodyCollector_Reset(
  JoltC_CastShapeBodyCollector_t * self,
  char** outErrMsg
);

void JoltC_CastShapeBodyCollector_SetContext(
  JoltC_CastShapeBodyCollector_t * self,
  const JoltC_TransformedShape_t * inContext,
  char** outErrMsg
);

const JoltC_TransformedShape_t * JoltC_CastShapeBodyCollector_GetContext(
  JoltC_CastShapeBodyCollector_t * self,
  char** outErrMsg
);

void JoltC_CastShapeBodyCollector_UpdateEarlyOutFraction(
  JoltC_CastShapeBodyCollector_t * self,
  float inFraction,
  char** outErrMsg
);

void JoltC_CastShapeBodyCollector_ResetEarlyOutFraction(
  JoltC_CastShapeBodyCollector_t * self,
  float inFraction,
  char** outErrMsg
);

void JoltC_CastShapeBodyCollector_ForceEarlyOut(
  JoltC_CastShapeBodyCollector_t * self,
  char** outErrMsg
);

bool JoltC_CastShapeBodyCollector_ShouldEarlyOut(
  JoltC_CastShapeBodyCollector_t * self,
  char** outErrMsg
);

float JoltC_CastShapeBodyCollector_GetEarlyOutFraction(
  JoltC_CastShapeBodyCollector_t * self,
  char** outErrMsg
);

float JoltC_CastShapeBodyCollector_GetPositiveEarlyOutFraction(
  JoltC_CastShapeBodyCollector_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

