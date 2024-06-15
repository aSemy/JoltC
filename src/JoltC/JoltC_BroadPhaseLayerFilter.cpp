#include "JoltC/JoltC_BroadPhaseLayerFilter.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `BroadPhaseLayerFilter` instance.
 */
JoltC_BroadPhaseLayerFilter_t * JoltC_BroadPhaseLayerFilter_new() {
  JoltC_BroadPhaseLayerFilter_t * cInstance = new JoltC_BroadPhaseLayerFilter_t();
  BroadPhaseLayerFilter * cppInstance = new BroadPhaseLayerFilter();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_BroadPhaseLayerFilter_destroy(
  JoltC_BroadPhaseLayerFilter_t * self
){
  if (self == NULL) return;
  delete static_cast<BroadPhaseLayerFilter *>(self->obj);
  free(self);
}

//endregion

#ifdef __cplusplus
}
#endif
