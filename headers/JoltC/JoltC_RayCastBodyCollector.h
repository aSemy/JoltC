#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_RayCastBodyCollector_Reset(
  JoltC_RayCastBodyCollector_t * self,
  char** outErrMsg
);

void JoltC_RayCastBodyCollector_SetContext(
  JoltC_RayCastBodyCollector_t * self,
  const JoltC_TransformedShape_t * inContext,
  char** outErrMsg
);

const JoltC_TransformedShape_t * JoltC_RayCastBodyCollector_GetContext(
  JoltC_RayCastBodyCollector_t * self,
  char** outErrMsg
);

void JoltC_RayCastBodyCollector_UpdateEarlyOutFraction(
  JoltC_RayCastBodyCollector_t * self,
  float inFraction,
  char** outErrMsg
);

void JoltC_RayCastBodyCollector_ResetEarlyOutFraction(
  JoltC_RayCastBodyCollector_t * self,
  float inFraction,
  char** outErrMsg
);

void JoltC_RayCastBodyCollector_ForceEarlyOut(
  JoltC_RayCastBodyCollector_t * self,
  char** outErrMsg
);

bool JoltC_RayCastBodyCollector_ShouldEarlyOut(
  JoltC_RayCastBodyCollector_t * self,
  char** outErrMsg
);

float JoltC_RayCastBodyCollector_GetEarlyOutFraction(
  JoltC_RayCastBodyCollector_t * self,
  char** outErrMsg
);

float JoltC_RayCastBodyCollector_GetPositiveEarlyOutFraction(
  JoltC_RayCastBodyCollector_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

