#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region converters

/**
 * Convert an instance of JoltC_StateRecorderImpl_t into JoltC_StateRecorder_t.
 */
JoltC_StateRecorder_t * JoltC_StateRecorder_From_StateRecorderImpl(
  JoltC_StateRecorderImpl_t * subtype
);

//endregion

//region functions

void JoltC_StateRecorder_SetValidating(
  JoltC_StateRecorder_t * self,
  bool inValidating
);

bool JoltC_StateRecorder_IsValidating(
  JoltC_StateRecorder_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

