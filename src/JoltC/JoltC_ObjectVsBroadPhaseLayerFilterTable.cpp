#include "JoltC/JoltC_ObjectVsBroadPhaseLayerFilterTable.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ObjectVsBroadPhaseLayerFilterTable_t * JoltC_ObjectVsBroadPhaseLayerFilterTable_new(
  const JoltC_BroadPhaseLayerInterface_t * inBroadPhaseLayerInterface,
  unsigned long inNumBroadPhaseLayers,
  const JoltC_ObjectLayerPairFilter_t * inObjectLayerPairFilter,
  unsigned long inNumObjectLayers,
  char** outErrMsg
) {
  try {
    JoltC_ObjectVsBroadPhaseLayerFilterTable_t * cInstance = new JoltC_ObjectVsBroadPhaseLayerFilterTable_t();
    ObjectVsBroadPhaseLayerFilterTable * cppInstance = new ObjectVsBroadPhaseLayerFilterTable(
      *reinterpret_cast<BroadPhaseLayerInterface *>(inBroadPhaseLayerInterface->obj),
      inNumBroadPhaseLayers,
      *reinterpret_cast<ObjectLayerPairFilter *>(inObjectLayerPairFilter->obj),
      inNumObjectLayers
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

