#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_BroadPhaseLayer_t * JPC_BroadPhaseLayer_new(
  unsigned short inLayer
);

//endregion constructors

//region functions

unsigned short JPC_BroadPhaseLayer_GetValue(
  JPC_BroadPhaseLayer_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

