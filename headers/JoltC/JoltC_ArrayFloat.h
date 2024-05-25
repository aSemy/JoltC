#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArrayFloat_empty(
  JoltC_ArrayFloat_t * self,
  char** outErrMsg
);

long JoltC_ArrayFloat_size(
  JoltC_ArrayFloat_t * self,
  char** outErrMsg
);

float JoltC_ArrayFloat_at(
  JoltC_ArrayFloat_t * self,
  long inIndex,
  char** outErrMsg
);

void JoltC_ArrayFloat_push_back(
  JoltC_ArrayFloat_t * self,
  float inValue,
  char** outErrMsg
);

void JoltC_ArrayFloat_reserve(
  JoltC_ArrayFloat_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_ArrayFloat_resize(
  JoltC_ArrayFloat_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_ArrayFloat_clear(
  JoltC_ArrayFloat_t * self,
  char** outErrMsg
);

JoltC_FloatMemRef_t * JoltC_ArrayFloat_data(
  JoltC_ArrayFloat_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

