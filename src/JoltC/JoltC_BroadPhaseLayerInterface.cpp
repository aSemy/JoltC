#include "JoltC/JPC_BroadPhaseLayerInterface.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JPC_BroadPhaseLayerInterface_GetNumBroadPhaseLayers(
  JPC_BroadPhaseLayerInterface_t * self
) {
  BroadPhaseLayerInterface * selfCpp = static_cast<BroadPhaseLayerInterface *>(self->obj);
  unsigned long result = selfCpp->GetNumBroadPhaseLayers();
  return result;
};

//endregion functions

#ifdef __cplusplus
}
#endif

