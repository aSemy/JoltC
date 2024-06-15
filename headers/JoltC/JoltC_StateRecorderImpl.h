#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_StateRecorderImpl_t * JoltC_StateRecorderImpl_new();

//endregion

//region destructor

void JoltC_StateRecorderImpl_destroy(
  JoltC_StateRecorderImpl_t * self
);

//endregion
//region functions

void JoltC_StateRecorderImpl_Clear(
  JoltC_StateRecorderImpl_t * self
);

void JoltC_StateRecorderImpl_Rewind(
  JoltC_StateRecorderImpl_t * self
);

bool JoltC_StateRecorderImpl_IsEqual(
  JoltC_StateRecorderImpl_t * self,
  JoltC_StateRecorderImpl_t * inReference
);

void JoltC_StateRecorderImpl_SetValidating(
  JoltC_StateRecorderImpl_t * self,
  bool inValidating
);

bool JoltC_StateRecorderImpl_IsValidating(
  JoltC_StateRecorderImpl_t * self
);

//endregion


#ifdef __cplusplus
}
#endif
