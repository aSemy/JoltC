#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_StateRecorderImpl_t * JPC_StateRecorderImpl_new();

//endregion constructors

//region functions

void JPC_StateRecorderImpl_Clear(
  JPC_StateRecorderImpl_t * self
);

void JPC_StateRecorderImpl_Rewind(
  JPC_StateRecorderImpl_t * self
);

bool JPC_StateRecorderImpl_IsEqual(
  JPC_StateRecorderImpl_t * self,
  JPC_StateRecorderImpl_t * inReference
);

void JPC_StateRecorderImpl_SetValidating(
  JPC_StateRecorderImpl_t * self,
  bool inValidating
);

bool JPC_StateRecorderImpl_IsValidating(
  JPC_StateRecorderImpl_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

