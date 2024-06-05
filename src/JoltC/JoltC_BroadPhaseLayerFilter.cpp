#include "JoltC/JoltC_BroadPhaseLayerFilter.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_BroadPhaseLayerFilter_t * JoltC_BroadPhaseLayerFilter_new() {
  JoltC_BroadPhaseLayerFilter_t * cInstance = new JoltC_BroadPhaseLayerFilter_t();
  BroadPhaseLayerFilter * cppInstance = new BroadPhaseLayerFilter();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

#ifdef __cplusplus
}
#endif

