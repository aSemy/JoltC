#include "JoltC/JPC_BroadPhaseLayerInterfaceEm.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JPC_BroadPhaseLayerInterfaceEm_GetNumBroadPhaseLayers(
  JPC_BroadPhaseLayerInterfaceEm_t * self
) {
  BroadPhaseLayerInterfaceEm * selfCpp = static_cast<BroadPhaseLayerInterfaceEm *>(self->obj);
  unsigned long result = selfCpp->GetNumBroadPhaseLayers();
  return result;
};

//endregion functions

#ifdef __cplusplus
}
#endif

