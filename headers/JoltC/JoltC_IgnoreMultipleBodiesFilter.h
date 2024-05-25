#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_IgnoreMultipleBodiesFilter_t * JoltC_IgnoreMultipleBodiesFilter_new(
  char** outErrMsg
);

//endregion constructors

//region functions

void JoltC_IgnoreMultipleBodiesFilter_Clear(
  JoltC_IgnoreMultipleBodiesFilter_t * self,
  char** outErrMsg
);

void JoltC_IgnoreMultipleBodiesFilter_Reserve(
  JoltC_IgnoreMultipleBodiesFilter_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_IgnoreMultipleBodiesFilter_IgnoreBody(
  JoltC_IgnoreMultipleBodiesFilter_t * self,
  const JoltC_BodyID_t * inBodyID,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

