#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_BroadPhaseLayer_t * JoltC_BroadPhaseLayer_new(
  unsigned short inLayer
);

//endregion

//region functions

unsigned short JoltC_BroadPhaseLayer_GetValue(
  JoltC_BroadPhaseLayer_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

