#include "JoltC/JPC_BroadPhaseLayerFilter.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_BroadPhaseLayerFilter_t * JPC_BroadPhaseLayerFilter_new() {
  JPC_BroadPhaseLayerFilter_t * cInstance = new JPC_BroadPhaseLayerFilter_t();
  BroadPhaseLayerFilter * cppInstance = new BroadPhaseLayerFilter();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

#ifdef __cplusplus
}
#endif

