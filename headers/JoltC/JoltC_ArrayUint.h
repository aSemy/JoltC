#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArrayUint_empty(
  JoltC_ArrayUint_t * self,
  char** outErrMsg
);

long JoltC_ArrayUint_size(
  JoltC_ArrayUint_t * self,
  char** outErrMsg
);

unsigned long JoltC_ArrayUint_at(
  JoltC_ArrayUint_t * self,
  long inIndex,
  char** outErrMsg
);

void JoltC_ArrayUint_push_back(
  JoltC_ArrayUint_t * self,
  unsigned long inValue,
  char** outErrMsg
);

void JoltC_ArrayUint_reserve(
  JoltC_ArrayUint_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_ArrayUint_resize(
  JoltC_ArrayUint_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_ArrayUint_clear(
  JoltC_ArrayUint_t * self,
  char** outErrMsg
);

JoltC_UintMemRef_t * JoltC_ArrayUint_data(
  JoltC_ArrayUint_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

