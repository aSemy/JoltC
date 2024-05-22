#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_ObjectVsBroadPhaseLayerFilterTable_t * JPC_ObjectVsBroadPhaseLayerFilterTable_new(
  const JPC_BroadPhaseLayerInterface_t * inBroadPhaseLayerInterface,
  unsigned long inNumBroadPhaseLayers,
  const JPC_ObjectLayerPairFilter_t * inObjectLayerPairFilter,
  unsigned long inNumObjectLayers
);

//endregion constructors


#ifdef __cplusplus
}
#endif

