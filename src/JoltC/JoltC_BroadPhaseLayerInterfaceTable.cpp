#include "JoltC/JoltC_BroadPhaseLayerInterfaceTable.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_BroadPhaseLayerInterfaceTable_t * JoltC_BroadPhaseLayerInterfaceTable_new(
  unsigned long inNumObjectLayers,
  unsigned long inNumBroadPhaseLayers,
  char** outErrMsg
) {
  try {
    JoltC_BroadPhaseLayerInterfaceTable_t * cInstance = new JoltC_BroadPhaseLayerInterfaceTable_t();
    BroadPhaseLayerInterfaceTable * cppInstance = new BroadPhaseLayerInterfaceTable(
      inNumObjectLayers,
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

void JoltC_BroadPhaseLayerInterfaceTable_MapObjectToBroadPhaseLayer(
  JoltC_BroadPhaseLayerInterfaceTable_t * self,
  unsigned long inObjectLayer,
  const JoltC_BroadPhaseLayer_t * inBroadPhaseLayer,
  char** outErrMsg
) {
  try {
    BroadPhaseLayerInterfaceTable * selfCpp = static_cast<BroadPhaseLayerInterfaceTable *>(self->obj);
    
    selfCpp->MapObjectToBroadPhaseLayer(
    inObjectLayer,
    *reinterpret_cast<BroadPhaseLayer *>(inBroadPhaseLayer->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

unsigned long JoltC_BroadPhaseLayerInterfaceTable_GetNumBroadPhaseLayers(
  JoltC_BroadPhaseLayerInterfaceTable_t * self,
  char** outErrMsg
) {
  try {
    BroadPhaseLayerInterfaceTable * selfCpp = static_cast<BroadPhaseLayerInterfaceTable *>(self->obj);
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

