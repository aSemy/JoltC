#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_BroadPhaseLayerInterfaceTable_t * JPC_BroadPhaseLayerInterfaceTable_new(
  unsigned long inNumObjectLayers,
  unsigned long inNumBroadPhaseLayers
);

//endregion constructors

//region functions

void JPC_BroadPhaseLayerInterfaceTable_MapObjectToBroadPhaseLayer(
  JPC_BroadPhaseLayerInterfaceTable_t * self,
  unsigned long inObjectLayer,
  const JPC_BroadPhaseLayer_t * inBroadPhaseLayer
);

unsigned long JPC_BroadPhaseLayerInterfaceTable_GetNumBroadPhaseLayers(
  JPC_BroadPhaseLayerInterfaceTable_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

