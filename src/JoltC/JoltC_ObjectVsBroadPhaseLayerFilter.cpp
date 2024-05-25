#include "JoltC/JPC_ObjectVsBroadPhaseLayerFilter.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_ObjectVsBroadPhaseLayerFilter_t * JPC_ObjectVsBroadPhaseLayerFilter_new() {
  JPC_ObjectVsBroadPhaseLayerFilter_t * cInstance = new JPC_ObjectVsBroadPhaseLayerFilter_t();
  ObjectVsBroadPhaseLayerFilter * cppInstance = new ObjectVsBroadPhaseLayerFilter();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

#ifdef __cplusplus
}
#endif

