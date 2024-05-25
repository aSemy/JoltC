#include "JoltC/JoltC_BroadPhaseLayerInterfaceMask.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_BroadPhaseLayerInterfaceMask_t * JoltC_BroadPhaseLayerInterfaceMask_new(
  unsigned long inNumBroadPhaseLayers,
  char** outErrMsg
) {
  try {
    JoltC_BroadPhaseLayerInterfaceMask_t * cInstance = new JoltC_BroadPhaseLayerInterfaceMask_t();
    BroadPhaseLayerInterfaceMask * cppInstance = new BroadPhaseLayerInterfaceMask(
      inNumBroadPhaseLayers
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

//region functions

void JoltC_BroadPhaseLayerInterfaceMask_ConfigureLayer(
  JoltC_BroadPhaseLayerInterfaceMask_t * self,
  const JoltC_BroadPhaseLayer_t * inBroadPhaseLayer,
  unsigned long inGroupsToInclude,
  unsigned long inGroupsToExclude,
  char** outErrMsg
) {
  try {
    BroadPhaseLayerInterfaceMask * selfCpp = static_cast<BroadPhaseLayerInterfaceMask *>(self->obj);
    
    selfCpp->ConfigureLayer(
    *reinterpret_cast<BroadPhaseLayer *>(inBroadPhaseLayer->obj),
    inGroupsToInclude,
    inGroupsToExclude
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

unsigned long JoltC_BroadPhaseLayerInterfaceMask_GetNumBroadPhaseLayers(
  JoltC_BroadPhaseLayerInterfaceMask_t * self,
  char** outErrMsg
) {
  try {
    BroadPhaseLayerInterfaceMask * selfCpp = static_cast<BroadPhaseLayerInterfaceMask *>(self->obj);
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

