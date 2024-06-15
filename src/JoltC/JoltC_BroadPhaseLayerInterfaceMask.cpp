#include "JoltC/JoltC_BroadPhaseLayerInterfaceMask.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `BroadPhaseLayerInterfaceMask` instance.
 */
JoltC_BroadPhaseLayerInterfaceMask_t * JoltC_BroadPhaseLayerInterfaceMask_new(
  unsigned long inNumBroadPhaseLayers
) {
  JoltC_BroadPhaseLayerInterfaceMask_t * cInstance = new JoltC_BroadPhaseLayerInterfaceMask_t();
  BroadPhaseLayerInterfaceMask * cppInstance = new BroadPhaseLayerInterfaceMask(
    inNumBroadPhaseLayers
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_BroadPhaseLayerInterfaceMask_destroy(
  JoltC_BroadPhaseLayerInterfaceMask_t * self
){
  if (self == NULL) return;
  delete static_cast<BroadPhaseLayerInterfaceMask *>(self->obj);
  free(self);
}

//endregion
//region functions

void JoltC_BroadPhaseLayerInterfaceMask_ConfigureLayer(
  JoltC_BroadPhaseLayerInterfaceMask_t * self,
  JoltC_BroadPhaseLayer_t * inBroadPhaseLayer,
  unsigned long inGroupsToInclude,
  unsigned long inGroupsToExclude
) {
  BroadPhaseLayerInterfaceMask * selfCpp = static_cast<BroadPhaseLayerInterfaceMask *>(self->obj);
  const BroadPhaseLayer * inBroadPhaseLayerCpp = static_cast<const BroadPhaseLayer *>(inBroadPhaseLayer->obj);
  selfCpp->ConfigureLayer(
    *inBroadPhaseLayerCpp,
    inGroupsToInclude,
    inGroupsToExclude
  );
}

unsigned long JoltC_BroadPhaseLayerInterfaceMask_GetNumBroadPhaseLayers(
  JoltC_BroadPhaseLayerInterfaceMask_t * self
) {
  BroadPhaseLayerInterfaceMask * selfCpp = static_cast<BroadPhaseLayerInterfaceMask *>(self->obj);
  return selfCpp->GetNumBroadPhaseLayers();
}

//endregion


#ifdef __cplusplus
}
#endif
