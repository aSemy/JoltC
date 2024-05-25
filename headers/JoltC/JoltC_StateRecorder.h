#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_StateRecorder_SetValidating(
  JoltC_StateRecorder_t * self,
  bool inValidating,
  char** outErrMsg
);

bool JoltC_StateRecorder_IsValidating(
  JoltC_StateRecorder_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

