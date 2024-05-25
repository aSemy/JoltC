#include "JoltC/JPC_BroadPhaseLayerInterfaceTable.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_BroadPhaseLayerInterfaceTable_t * JPC_BroadPhaseLayerInterfaceTable_new(
  unsigned long inNumObjectLayers,
  unsigned long inNumBroadPhaseLayers
) {
  JPC_BroadPhaseLayerInterfaceTable_t * cInstance = new JPC_BroadPhaseLayerInterfaceTable_t();
  BroadPhaseLayerInterfaceTable * cppInstance = new BroadPhaseLayerInterfaceTable(
    inNumObjectLayers,
    inNumBroadPhaseLayers
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

void JPC_BroadPhaseLayerInterfaceTable_MapObjectToBroadPhaseLayer(
  JPC_BroadPhaseLayerInterfaceTable_t * self,
  unsigned long inObjectLayer,
  const JPC_BroadPhaseLayer_t * inBroadPhaseLayer
) {
  BroadPhaseLayerInterfaceTable * selfCpp = static_cast<BroadPhaseLayerInterfaceTable *>(self->obj);
  
  selfCpp->MapObjectToBroadPhaseLayer(
  inObjectLayer,
  *reinterpret_cast<BroadPhaseLayer *>(inBroadPhaseLayer->obj)
  );
};

unsigned long JPC_BroadPhaseLayerInterfaceTable_GetNumBroadPhaseLayers(
  JPC_BroadPhaseLayerInterfaceTable_t * self
) {
  BroadPhaseLayerInterfaceTable * selfCpp = static_cast<BroadPhaseLayerInterfaceTable *>(self->obj);
  unsigned long result = selfCpp->GetNumBroadPhaseLayers();
  return result;
};

//endregion functions

#ifdef __cplusplus
}
#endif

