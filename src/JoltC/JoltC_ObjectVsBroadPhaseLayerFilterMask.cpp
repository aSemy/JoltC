#include "JoltC/JoltC_ObjectVsBroadPhaseLayerFilterMask.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ObjectVsBroadPhaseLayerFilterMask_t * JoltC_ObjectVsBroadPhaseLayerFilterMask_new(
  const JoltC_BroadPhaseLayerInterfaceMask_t * inBroadPhaseLayerInterface,
  char** outErrMsg
) {
  try {
    JoltC_ObjectVsBroadPhaseLayerFilterMask_t * cInstance = new JoltC_ObjectVsBroadPhaseLayerFilterMask_t();
    ObjectVsBroadPhaseLayerFilterMask * cppInstance = new ObjectVsBroadPhaseLayerFilterMask(
      *reinterpret_cast<BroadPhaseLayerInterfaceMask *>(inBroadPhaseLayerInterface->obj)
    );
    cInstance->obj = cppInstance;
    return cInstance;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

//endregion constructors

#ifdef __cplusplus
}
#endif

