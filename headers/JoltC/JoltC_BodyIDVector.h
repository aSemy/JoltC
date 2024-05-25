#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_BodyIDVector_t * JoltC_BodyIDVector_new(
  char** outErrMsg
);

//endregion constructors

//region functions

bool JoltC_BodyIDVector_empty(
  JoltC_BodyIDVector_t * self,
  char** outErrMsg
);

long JoltC_BodyIDVector_size(
  JoltC_BodyIDVector_t * self,
  char** outErrMsg
);

JoltC_BodyID_t * JoltC_BodyIDVector_at(
  JoltC_BodyIDVector_t * self,
  long inIndex,
  char** outErrMsg
);

void JoltC_BodyIDVector_push_back(
  JoltC_BodyIDVector_t * self,
  const JoltC_BodyID_t * inBodyID,
  char** outErrMsg
);

void JoltC_BodyIDVector_reserve(
  JoltC_BodyIDVector_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_BodyIDVector_resize(
  JoltC_BodyIDVector_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_BodyIDVector_clear(
  JoltC_BodyIDVector_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif
