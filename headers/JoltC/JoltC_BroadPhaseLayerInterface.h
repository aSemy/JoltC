#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region converters

/**
 * Convert an instance of JoltC_BroadPhaseLayerInterfaceEm_t into JoltC_BroadPhaseLayerInterface_t.
 */
JoltC_BroadPhaseLayerInterface_t * JoltC_BroadPhaseLayerInterface_From_BroadPhaseLayerInterfaceEm(
  JoltC_BroadPhaseLayerInterfaceEm_t * subtype
);

/**
 * Convert an instance of JoltC_BroadPhaseLayerInterfaceTable_t into JoltC_BroadPhaseLayerInterface_t.
 */
JoltC_BroadPhaseLayerInterface_t * JoltC_BroadPhaseLayerInterface_From_BroadPhaseLayerInterfaceTable(
  JoltC_BroadPhaseLayerInterfaceTable_t * subtype
);

/**
 * Convert an instance of JoltC_BroadPhaseLayerInterfaceMask_t into JoltC_BroadPhaseLayerInterface_t.
 */
JoltC_BroadPhaseLayerInterface_t * JoltC_BroadPhaseLayerInterface_From_BroadPhaseLayerInterfaceMask(
  JoltC_BroadPhaseLayerInterfaceMask_t * subtype
);

//endregion

//region functions

unsigned long JoltC_BroadPhaseLayerInterface_GetNumBroadPhaseLayers(
  JoltC_BroadPhaseLayerInterface_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

