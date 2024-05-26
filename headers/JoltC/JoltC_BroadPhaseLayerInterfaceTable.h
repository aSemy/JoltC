#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_BroadPhaseLayerInterfaceTable_t * JoltC_BroadPhaseLayerInterfaceTable_new(
  unsigned long inNumObjectLayers,
  unsigned long inNumBroadPhaseLayers
);

//endregion

//region functions

void JoltC_BroadPhaseLayerInterfaceTable_MapObjectToBroadPhaseLayer(
  JoltC_BroadPhaseLayerInterfaceTable_t * self,
  unsigned long inObjectLayer,
  JoltC_BroadPhaseLayer_t * inBroadPhaseLayer
);

unsigned long JoltC_BroadPhaseLayerInterfaceTable_GetNumBroadPhaseLayers(
  JoltC_BroadPhaseLayerInterfaceTable_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

