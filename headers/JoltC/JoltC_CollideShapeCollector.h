#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_CollideShapeCollector_Reset(
  JoltC_CollideShapeCollector_t * self,
  char** outErrMsg
);

void JoltC_CollideShapeCollector_SetContext(
  JoltC_CollideShapeCollector_t * self,
  const JoltC_TransformedShape_t * inContext,
  char** outErrMsg
);

const JoltC_TransformedShape_t * JoltC_CollideShapeCollector_GetContext(
  JoltC_CollideShapeCollector_t * self,
  char** outErrMsg
);

void JoltC_CollideShapeCollector_UpdateEarlyOutFraction(
  JoltC_CollideShapeCollector_t * self,
  float inFraction,
  char** outErrMsg
);

void JoltC_CollideShapeCollector_ResetEarlyOutFraction(
  JoltC_CollideShapeCollector_t * self,
  float inFraction,
  char** outErrMsg
);

void JoltC_CollideShapeCollector_ForceEarlyOut(
  JoltC_CollideShapeCollector_t * self,
  char** outErrMsg
);

bool JoltC_CollideShapeCollector_ShouldEarlyOut(
  JoltC_CollideShapeCollector_t * self,
  char** outErrMsg
);

float JoltC_CollideShapeCollector_GetEarlyOutFraction(
  JoltC_CollideShapeCollector_t * self,
  char** outErrMsg
);

float JoltC_CollideShapeCollector_GetPositiveEarlyOutFraction(
  JoltC_CollideShapeCollector_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

