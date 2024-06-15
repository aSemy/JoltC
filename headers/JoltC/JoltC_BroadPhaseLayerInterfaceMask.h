#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_BroadPhaseLayerInterfaceMask_t * JoltC_BroadPhaseLayerInterfaceMask_new(
  unsigned long inNumBroadPhaseLayers
);

//endregion

//region destructor

void JoltC_BroadPhaseLayerInterfaceMask_destroy(
  JoltC_BroadPhaseLayerInterfaceMask_t * self
);

//endregion
//region functions

void JoltC_BroadPhaseLayerInterfaceMask_ConfigureLayer(
  JoltC_BroadPhaseLayerInterfaceMask_t * self,
  JoltC_BroadPhaseLayer_t * inBroadPhaseLayer,
  unsigned long inGroupsToInclude,
  unsigned long inGroupsToExclude
);

unsigned long JoltC_BroadPhaseLayerInterfaceMask_GetNumBroadPhaseLayers(
  JoltC_BroadPhaseLayerInterfaceMask_t * self
);

//endregion


#ifdef __cplusplus
}
#endif
