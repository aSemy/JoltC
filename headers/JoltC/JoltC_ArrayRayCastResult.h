#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArrayRayCastResult_empty(
  JoltC_ArrayRayCastResult_t * self,
  char** outErrMsg
);

long JoltC_ArrayRayCastResult_size(
  JoltC_ArrayRayCastResult_t * self,
  char** outErrMsg
);

JoltC_RayCastResult_t * JoltC_ArrayRayCastResult_at(
  JoltC_ArrayRayCastResult_t * self,
  long inIndex,
  char** outErrMsg
);

void JoltC_ArrayRayCastResult_push_back(
  JoltC_ArrayRayCastResult_t * self,
  const JoltC_RayCastResult_t * inValue,
  char** outErrMsg
);

void JoltC_ArrayRayCastResult_reserve(
  JoltC_ArrayRayCastResult_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_ArrayRayCastResult_resize(
  JoltC_ArrayRayCastResult_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_ArrayRayCastResult_clear(
  JoltC_ArrayRayCastResult_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

