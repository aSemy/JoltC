#include "JoltC/JoltC_BroadPhaseLayerInterfaceEm.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_BroadPhaseLayerInterfaceEm_destroy(
  JoltC_BroadPhaseLayerInterfaceEm_t * self
){
  if (self == NULL) return;
  delete static_cast<BroadPhaseLayerInterfaceEm *>(self->obj);
  free(self);
}

//endregion
//region functions

unsigned long JoltC_BroadPhaseLayerInterfaceEm_GetNumBroadPhaseLayers(
  JoltC_BroadPhaseLayerInterfaceEm_t * self
) {
  BroadPhaseLayerInterfaceEm * selfCpp = static_cast<BroadPhaseLayerInterfaceEm *>(self->obj);
  return selfCpp->GetNumBroadPhaseLayers();
}

//endregion


#ifdef __cplusplus
}
#endif
