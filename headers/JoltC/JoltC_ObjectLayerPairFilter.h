#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_ObjectLayerPairFilter_t * JPC_ObjectLayerPairFilter_new();

//endregion constructors

//region functions

bool JPC_ObjectLayerPairFilter_ShouldCollide(
  JPC_ObjectLayerPairFilter_t * self,
  unsigned long inLayer1,
  unsigned long inLayer2
);

//endregion functions


#ifdef __cplusplus
}
#endif

