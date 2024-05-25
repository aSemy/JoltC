#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_BodyID_t * JoltC_BodyID_new_0(
  char** outErrMsg
);

JoltC_BodyID_t * JoltC_BodyID_new_1(
  unsigned long inIndexAndSequenceNumber,
  char** outErrMsg
);

//endregion constructors

//region functions

unsigned long JoltC_BodyID_GetIndex(
  JoltC_BodyID_t * self,
  char** outErrMsg
);

unsigned long JoltC_BodyID_GetIndexAndSequenceNumber(
  JoltC_BodyID_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

