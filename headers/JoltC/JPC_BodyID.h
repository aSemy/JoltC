#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_BodyID_t * JPC_BodyID_new_0();

JPC_BodyID_t * JPC_BodyID_new_1(
  unsigned long inIndexAndSequenceNumber
);

//endregion constructors

//region functions

unsigned long JPC_BodyID_GetIndex(
  JPC_BodyID_t * self
);

unsigned long JPC_BodyID_GetIndexAndSequenceNumber(
  JPC_BodyID_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

