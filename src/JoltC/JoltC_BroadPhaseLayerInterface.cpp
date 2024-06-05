#include "JoltC/JoltC_BroadPhaseLayerInterface.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region converters

/**
 * Convert an instance of JoltC_BroadPhaseLayerInterfaceEm_t into JoltC_BroadPhaseLayerInterface_t.
 */
JoltC_BroadPhaseLayerInterface_t * JoltC_BroadPhaseLayerInterface_From_BroadPhaseLayerInterfaceEm(
  JoltC_BroadPhaseLayerInterfaceEm_t * subtype
) {
  return (JoltC_BroadPhaseLayerInterface_t*) subtype;
};

/**
 * Convert an instance of JoltC_BroadPhaseLayerInterfaceTable_t into JoltC_BroadPhaseLayerInterface_t.
 */
JoltC_BroadPhaseLayerInterface_t * JoltC_BroadPhaseLayerInterface_From_BroadPhaseLayerInterfaceTable(
  JoltC_BroadPhaseLayerInterfaceTable_t * subtype
) {
  return (JoltC_BroadPhaseLayerInterface_t*) subtype;
};

/**
 * Convert an instance of JoltC_BroadPhaseLayerInterfaceMask_t into JoltC_BroadPhaseLayerInterface_t.
 */
JoltC_BroadPhaseLayerInterface_t * JoltC_BroadPhaseLayerInterface_From_BroadPhaseLayerInterfaceMask(
  JoltC_BroadPhaseLayerInterfaceMask_t * subtype
) {
  return (JoltC_BroadPhaseLayerInterface_t*) subtype;
};

//endregion

//region functions

unsigned long JoltC_BroadPhaseLayerInterface_GetNumBroadPhaseLayers(
  JoltC_BroadPhaseLayerInterface_t * self
) {
  BroadPhaseLayerInterface * selfCpp = static_cast<BroadPhaseLayerInterface *>(self->obj);
  unsigned long result = selfCpp->GetNumBroadPhaseLayers();
  return result;
};

//endregion

#ifdef __cplusplus
}
#endif

