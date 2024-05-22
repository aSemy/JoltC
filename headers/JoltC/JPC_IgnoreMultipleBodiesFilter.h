#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_IgnoreMultipleBodiesFilter_t * JPC_IgnoreMultipleBodiesFilter_new();

//endregion constructors

//region functions

void JPC_IgnoreMultipleBodiesFilter_Clear(
  JPC_IgnoreMultipleBodiesFilter_t * self
);

void JPC_IgnoreMultipleBodiesFilter_Reserve(
  JPC_IgnoreMultipleBodiesFilter_t * self,
  unsigned long inSize
);

void JPC_IgnoreMultipleBodiesFilter_IgnoreBody(
  JPC_IgnoreMultipleBodiesFilter_t * self,
  const JPC_BodyID_t * inBodyID
);

//endregion functions


#ifdef __cplusplus
}
#endif

