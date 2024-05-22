#include "JoltC/JPC_BroadPhaseLayerInterfaceMask.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_BroadPhaseLayerInterfaceMask_t * JPC_BroadPhaseLayerInterfaceMask_new(
  unsigned long inNumBroadPhaseLayers
) {
  JPC_BroadPhaseLayerInterfaceMask_t * cInstance = new JPC_BroadPhaseLayerInterfaceMask_t();
  BroadPhaseLayerInterfaceMask * cppInstance = new BroadPhaseLayerInterfaceMask(
    inNumBroadPhaseLayers
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

void JPC_BroadPhaseLayerInterfaceMask_ConfigureLayer(
  JPC_BroadPhaseLayerInterfaceMask_t * self,
  const JPC_BroadPhaseLayer_t * inBroadPhaseLayer,
  unsigned long inGroupsToInclude,
  unsigned long inGroupsToExclude
) {
  BroadPhaseLayerInterfaceMask * selfCpp = static_cast<BroadPhaseLayerInterfaceMask *>(self->obj);
  
  selfCpp->ConfigureLayer(
  *reinterpret_cast<BroadPhaseLayer *>(inBroadPhaseLayer->obj),
  inGroupsToInclude,
  inGroupsToExclude
  );
};

unsigned long JPC_BroadPhaseLayerInterfaceMask_GetNumBroadPhaseLayers(
  JPC_BroadPhaseLayerInterfaceMask_t * self
) {
  BroadPhaseLayerInterfaceMask * selfCpp = static_cast<BroadPhaseLayerInterfaceMask *>(self->obj);
  unsigned long result = selfCpp->GetNumBroadPhaseLayers();
  return result;
};

//endregion functions

#ifdef __cplusplus
}
#endif

