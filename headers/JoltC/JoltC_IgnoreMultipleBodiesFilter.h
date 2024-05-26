#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_IgnoreMultipleBodiesFilter_t * JoltC_IgnoreMultipleBodiesFilter_new();

//endregion

//region functions

void JoltC_IgnoreMultipleBodiesFilter_Clear(
  JoltC_IgnoreMultipleBodiesFilter_t * self
);

void JoltC_IgnoreMultipleBodiesFilter_Reserve(
  JoltC_IgnoreMultipleBodiesFilter_t * self,
  unsigned long inSize
);

void JoltC_IgnoreMultipleBodiesFilter_IgnoreBody(
  JoltC_IgnoreMultipleBodiesFilter_t * self,
  const JoltC_BodyID_t * inBodyID
);

//endregion


#ifdef __cplusplus
}
#endif

