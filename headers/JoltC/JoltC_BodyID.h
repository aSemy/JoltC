#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_BodyID_t * JoltC_BodyID_new_0();

JoltC_BodyID_t * JoltC_BodyID_new_1(
  unsigned long inIndexAndSequenceNumber
);

//endregion

//region functions

unsigned long JoltC_BodyID_GetIndex(
  JoltC_BodyID_t * self
);

unsigned long JoltC_BodyID_GetIndexAndSequenceNumber(
  JoltC_BodyID_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

