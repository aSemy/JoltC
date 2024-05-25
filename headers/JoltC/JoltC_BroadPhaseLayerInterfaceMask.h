#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_BroadPhaseLayerInterfaceMask_t * JoltC_BroadPhaseLayerInterfaceMask_new(
  unsigned long inNumBroadPhaseLayers,
  char** outErrMsg
);

//endregion constructors

//region functions

void JoltC_BroadPhaseLayerInterfaceMask_ConfigureLayer(
  JoltC_BroadPhaseLayerInterfaceMask_t * self,
  const JoltC_BroadPhaseLayer_t * inBroadPhaseLayer,
  unsigned long inGroupsToInclude,
  unsigned long inGroupsToExclude,
  char** outErrMsg
);

unsigned long JoltC_BroadPhaseLayerInterfaceMask_GetNumBroadPhaseLayers(
  JoltC_BroadPhaseLayerInterfaceMask_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

