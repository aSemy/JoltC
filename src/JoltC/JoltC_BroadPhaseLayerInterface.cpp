#include "JoltC/JoltC_BroadPhaseLayerInterface.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JoltC_BroadPhaseLayerInterface_GetNumBroadPhaseLayers(
  JoltC_BroadPhaseLayerInterface_t * self,
  char** outErrMsg
) {
  try {
    BroadPhaseLayerInterface * selfCpp = static_cast<BroadPhaseLayerInterface *>(self->obj);
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

