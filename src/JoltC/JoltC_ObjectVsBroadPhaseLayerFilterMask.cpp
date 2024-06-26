#include "JoltC/JoltC_ObjectVsBroadPhaseLayerFilterMask.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `ObjectVsBroadPhaseLayerFilterMask` instance.
 */
JoltC_ObjectVsBroadPhaseLayerFilterMask_t * JoltC_ObjectVsBroadPhaseLayerFilterMask_new(
  JoltC_BroadPhaseLayerInterfaceMask_t * inBroadPhaseLayerInterface
) {
  const BroadPhaseLayerInterfaceMask * inBroadPhaseLayerInterfaceCpp = static_cast<const BroadPhaseLayerInterfaceMask *>(inBroadPhaseLayerInterface->obj);
  JoltC_ObjectVsBroadPhaseLayerFilterMask_t * cInstance = new JoltC_ObjectVsBroadPhaseLayerFilterMask_t();
  ObjectVsBroadPhaseLayerFilterMask * cppInstance = new ObjectVsBroadPhaseLayerFilterMask(
    *inBroadPhaseLayerInterfaceCpp
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_ObjectVsBroadPhaseLayerFilterMask_destroy(
  JoltC_ObjectVsBroadPhaseLayerFilterMask_t * self
){
  if (self == NULL) return;
  delete static_cast<ObjectVsBroadPhaseLayerFilterMask *>(self->obj);
  free(self);
}

//endregion

#ifdef __cplusplus
}
#endif
