#include "JoltC/JoltC_BroadPhaseLayerInterfaceTable.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_BroadPhaseLayerInterfaceTable_t * JoltC_BroadPhaseLayerInterfaceTable_new(
  unsigned long inNumObjectLayers,
  unsigned long inNumBroadPhaseLayers
) {
  JoltC_BroadPhaseLayerInterfaceTable_t * cInstance = new JoltC_BroadPhaseLayerInterfaceTable_t();
  BroadPhaseLayerInterfaceTable * cppInstance = new BroadPhaseLayerInterfaceTable(
    inNumObjectLayers,
    inNumBroadPhaseLayers
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

void JoltC_BroadPhaseLayerInterfaceTable_MapObjectToBroadPhaseLayer(
  JoltC_BroadPhaseLayerInterfaceTable_t * self,
  unsigned long inObjectLayer,
  const JoltC_BroadPhaseLayer_t * inBroadPhaseLayer
) {
  BroadPhaseLayerInterfaceTable * selfCpp = static_cast<BroadPhaseLayerInterfaceTable *>(self->obj);
  
  selfCpp->MapObjectToBroadPhaseLayer(
  inObjectLayer,
  *reinterpret_cast<BroadPhaseLayer *>(inBroadPhaseLayer->obj)
  );
};

unsigned long JoltC_BroadPhaseLayerInterfaceTable_GetNumBroadPhaseLayers(
  JoltC_BroadPhaseLayerInterfaceTable_t * self
) {
  BroadPhaseLayerInterfaceTable * selfCpp = static_cast<BroadPhaseLayerInterfaceTable *>(self->obj);
  unsigned long result = selfCpp->GetNumBroadPhaseLayers();
  return result;
};

//endregion

#ifdef __cplusplus
}
#endif

