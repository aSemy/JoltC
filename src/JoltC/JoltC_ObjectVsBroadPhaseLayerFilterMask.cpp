#include "JoltC/JPC_ObjectVsBroadPhaseLayerFilterMask.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_ObjectVsBroadPhaseLayerFilterMask_t * JPC_ObjectVsBroadPhaseLayerFilterMask_new(
  const JPC_BroadPhaseLayerInterfaceMask_t * inBroadPhaseLayerInterface
) {
  JPC_ObjectVsBroadPhaseLayerFilterMask_t * cInstance = new JPC_ObjectVsBroadPhaseLayerFilterMask_t();
  ObjectVsBroadPhaseLayerFilterMask * cppInstance = new ObjectVsBroadPhaseLayerFilterMask(
    *reinterpret_cast<BroadPhaseLayerInterfaceMask *>(inBroadPhaseLayerInterface->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

#ifdef __cplusplus
}
#endif

