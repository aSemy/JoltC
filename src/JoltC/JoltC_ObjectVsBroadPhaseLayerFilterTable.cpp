#include "JoltC/JPC_ObjectVsBroadPhaseLayerFilterTable.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_ObjectVsBroadPhaseLayerFilterTable_t * JPC_ObjectVsBroadPhaseLayerFilterTable_new(
  const JPC_BroadPhaseLayerInterface_t * inBroadPhaseLayerInterface,
  unsigned long inNumBroadPhaseLayers,
  const JPC_ObjectLayerPairFilter_t * inObjectLayerPairFilter,
  unsigned long inNumObjectLayers
) {
  JPC_ObjectVsBroadPhaseLayerFilterTable_t * cInstance = new JPC_ObjectVsBroadPhaseLayerFilterTable_t();
  ObjectVsBroadPhaseLayerFilterTable * cppInstance = new ObjectVsBroadPhaseLayerFilterTable(
    *reinterpret_cast<BroadPhaseLayerInterface *>(inBroadPhaseLayerInterface->obj),
    inNumBroadPhaseLayers,
    *reinterpret_cast<ObjectLayerPairFilter *>(inObjectLayerPairFilter->obj),
    inNumObjectLayers
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

#ifdef __cplusplus
}
#endif

