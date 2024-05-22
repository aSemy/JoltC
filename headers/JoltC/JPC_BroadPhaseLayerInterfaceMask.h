#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_BroadPhaseLayerInterfaceMask_t * JPC_BroadPhaseLayerInterfaceMask_new(
  unsigned long inNumBroadPhaseLayers
);

//endregion constructors

//region functions

void JPC_BroadPhaseLayerInterfaceMask_ConfigureLayer(
  JPC_BroadPhaseLayerInterfaceMask_t * self,
  const JPC_BroadPhaseLayer_t * inBroadPhaseLayer,
  unsigned long inGroupsToInclude,
  unsigned long inGroupsToExclude
);

unsigned long JPC_BroadPhaseLayerInterfaceMask_GetNumBroadPhaseLayers(
  JPC_BroadPhaseLayerInterfaceMask_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

