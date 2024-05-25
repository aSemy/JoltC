#include "JoltC/JoltC_BroadPhaseLayerInterfaceEm.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JoltC_BroadPhaseLayerInterfaceEm_GetNumBroadPhaseLayers(
  JoltC_BroadPhaseLayerInterfaceEm_t * self,
  char** outErrMsg
) {
  try {
    BroadPhaseLayerInterfaceEm * selfCpp = static_cast<BroadPhaseLayerInterfaceEm *>(self->obj);
    unsigned long result = selfCpp->GetNumBroadPhaseLayers();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

//endregion functions

#ifdef __cplusplus
}
#endif

