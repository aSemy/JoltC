#include "JoltC/JoltC_ObjectVsBroadPhaseLayerFilterTable.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `ObjectVsBroadPhaseLayerFilterTable` instance.
 */
JoltC_ObjectVsBroadPhaseLayerFilterTable_t * JoltC_ObjectVsBroadPhaseLayerFilterTable_new(
  JoltC_BroadPhaseLayerInterface_t * inBroadPhaseLayerInterface,
  unsigned long inNumBroadPhaseLayers,
  JoltC_ObjectLayerPairFilter_t * inObjectLayerPairFilter,
  unsigned long inNumObjectLayers
) {
  const BroadPhaseLayerInterface * inBroadPhaseLayerInterfaceCpp = static_cast<const BroadPhaseLayerInterface *>(inBroadPhaseLayerInterface->obj);
  const ObjectLayerPairFilter * inObjectLayerPairFilterCpp = static_cast<const ObjectLayerPairFilter *>(inObjectLayerPairFilter->obj);
  JoltC_ObjectVsBroadPhaseLayerFilterTable_t * cInstance = new JoltC_ObjectVsBroadPhaseLayerFilterTable_t();
  ObjectVsBroadPhaseLayerFilterTable * cppInstance = new ObjectVsBroadPhaseLayerFilterTable(
    *inBroadPhaseLayerInterfaceCpp,
    inNumBroadPhaseLayers,
    *inObjectLayerPairFilterCpp,
    inNumObjectLayers
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

#ifdef __cplusplus
}
#endif

