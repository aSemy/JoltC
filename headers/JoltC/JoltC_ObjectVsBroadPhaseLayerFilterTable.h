#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ObjectVsBroadPhaseLayerFilterTable_t * JoltC_ObjectVsBroadPhaseLayerFilterTable_new(
  JoltC_BroadPhaseLayerInterface_t * inBroadPhaseLayerInterface,
  unsigned long inNumBroadPhaseLayers,
  JoltC_ObjectLayerPairFilter_t * inObjectLayerPairFilter,
  unsigned long inNumObjectLayers
);

//endregion

//region destructor

void JoltC_ObjectVsBroadPhaseLayerFilterTable_destroy(
  JoltC_ObjectVsBroadPhaseLayerFilterTable_t * self
);

//endregion

#ifdef __cplusplus
}
#endif
