#include "JoltC/JoltC_BroadPhaseLayerInterfaceTable.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `BroadPhaseLayerInterfaceTable` instance.
 */
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

//region destructor

void JoltC_BroadPhaseLayerInterfaceTable_destroy(
  JoltC_BroadPhaseLayerInterfaceTable_t * self
){
  if (self == NULL) return;
  delete static_cast<BroadPhaseLayerInterfaceTable *>(self->obj);
  free(self);
}

//endregion
//region functions

void JoltC_BroadPhaseLayerInterfaceTable_MapObjectToBroadPhaseLayer(
  JoltC_BroadPhaseLayerInterfaceTable_t * self,
  unsigned long inObjectLayer,
  JoltC_BroadPhaseLayer_t * inBroadPhaseLayer
) {
  BroadPhaseLayerInterfaceTable * selfCpp = static_cast<BroadPhaseLayerInterfaceTable *>(self->obj);
  const BroadPhaseLayer * inBroadPhaseLayerCpp = static_cast<const BroadPhaseLayer *>(inBroadPhaseLayer->obj);
  selfCpp->MapObjectToBroadPhaseLayer(
    inObjectLayer,
    *inBroadPhaseLayerCpp
  );
}

unsigned long JoltC_BroadPhaseLayerInterfaceTable_GetNumBroadPhaseLayers(
  JoltC_BroadPhaseLayerInterfaceTable_t * self
) {
  BroadPhaseLayerInterfaceTable * selfCpp = static_cast<BroadPhaseLayerInterfaceTable *>(self->obj);
  return selfCpp->GetNumBroadPhaseLayers();
}

//endregion


#ifdef __cplusplus
}
#endif
