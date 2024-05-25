#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_CollidePointCollector_Reset(
  JoltC_CollidePointCollector_t * self,
  char** outErrMsg
);

void JoltC_CollidePointCollector_SetContext(
  JoltC_CollidePointCollector_t * self,
  const JoltC_TransformedShape_t * inContext,
  char** outErrMsg
);

const JoltC_TransformedShape_t * JoltC_CollidePointCollector_GetContext(
  JoltC_CollidePointCollector_t * self,
  char** outErrMsg
);

void JoltC_CollidePointCollector_UpdateEarlyOutFraction(
  JoltC_CollidePointCollector_t * self,
  float inFraction,
  char** outErrMsg
);

void JoltC_CollidePointCollector_ResetEarlyOutFraction(
  JoltC_CollidePointCollector_t * self,
  float inFraction,
  char** outErrMsg
);

void JoltC_CollidePointCollector_ForceEarlyOut(
  JoltC_CollidePointCollector_t * self,
  char** outErrMsg
);

bool JoltC_CollidePointCollector_ShouldEarlyOut(
  JoltC_CollidePointCollector_t * self,
  char** outErrMsg
);

float JoltC_CollidePointCollector_GetEarlyOutFraction(
  JoltC_CollidePointCollector_t * self,
  char** outErrMsg
);

float JoltC_CollidePointCollector_GetPositiveEarlyOutFraction(
  JoltC_CollidePointCollector_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

