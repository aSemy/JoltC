#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_BroadPhaseLayerInterfaceEm_destroy(
  JoltC_BroadPhaseLayerInterfaceEm_t * self
);

//endregion
//region functions

unsigned long JoltC_BroadPhaseLayerInterfaceEm_GetNumBroadPhaseLayers(
  JoltC_BroadPhaseLayerInterfaceEm_t * self
);

//endregion


#ifdef __cplusplus
}
#endif
