#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JPC_StateRecorder_SetValidating(
  JPC_StateRecorder_t * self,
  bool inValidating
);

bool JPC_StateRecorder_IsValidating(
  JPC_StateRecorder_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

