#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_StateRecorderImpl_t * JoltC_StateRecorderImpl_new(
  char** outErrMsg
);

//endregion constructors

//region functions

void JoltC_StateRecorderImpl_Clear(
  JoltC_StateRecorderImpl_t * self,
  char** outErrMsg
);

void JoltC_StateRecorderImpl_Rewind(
  JoltC_StateRecorderImpl_t * self,
  char** outErrMsg
);

bool JoltC_StateRecorderImpl_IsEqual(
  JoltC_StateRecorderImpl_t * self,
  JoltC_StateRecorderImpl_t * inReference,
  char** outErrMsg
);

void JoltC_StateRecorderImpl_SetValidating(
  JoltC_StateRecorderImpl_t * self,
  bool inValidating,
  char** outErrMsg
);

bool JoltC_StateRecorderImpl_IsValidating(
  JoltC_StateRecorderImpl_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

