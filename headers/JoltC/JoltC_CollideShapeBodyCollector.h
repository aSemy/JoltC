#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_CollideShapeBodyCollector_Reset(
  JoltC_CollideShapeBodyCollector_t * self,
  char** outErrMsg
);

void JoltC_CollideShapeBodyCollector_SetContext(
  JoltC_CollideShapeBodyCollector_t * self,
  const JoltC_TransformedShape_t * inContext,
  char** outErrMsg
);

const JoltC_TransformedShape_t * JoltC_CollideShapeBodyCollector_GetContext(
  JoltC_CollideShapeBodyCollector_t * self,
  char** outErrMsg
);

void JoltC_CollideShapeBodyCollector_UpdateEarlyOutFraction(
  JoltC_CollideShapeBodyCollector_t * self,
  float inFraction,
  char** outErrMsg
);

void JoltC_CollideShapeBodyCollector_ResetEarlyOutFraction(
  JoltC_CollideShapeBodyCollector_t * self,
  float inFraction,
  char** outErrMsg
);

void JoltC_CollideShapeBodyCollector_ForceEarlyOut(
  JoltC_CollideShapeBodyCollector_t * self,
  char** outErrMsg
);

bool JoltC_CollideShapeBodyCollector_ShouldEarlyOut(
  JoltC_CollideShapeBodyCollector_t * self,
  char** outErrMsg
);

float JoltC_CollideShapeBodyCollector_GetEarlyOutFraction(
  JoltC_CollideShapeBodyCollector_t * self,
  char** outErrMsg
);

float JoltC_CollideShapeBodyCollector_GetPositiveEarlyOutFraction(
  JoltC_CollideShapeBodyCollector_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

