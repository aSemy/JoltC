#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_DefaultBroadPhaseLayerFilter_t * JPC_DefaultBroadPhaseLayerFilter_new(
  const JPC_ObjectVsBroadPhaseLayerFilter_t * inFilter,
  unsigned long inObjectLayer
);

//endregion constructors


#ifdef __cplusplus
}
#endif

