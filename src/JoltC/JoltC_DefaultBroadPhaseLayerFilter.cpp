#include "JoltC/JoltC_DefaultBroadPhaseLayerFilter.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `DefaultBroadPhaseLayerFilter` instance.
 */
JoltC_DefaultBroadPhaseLayerFilter_t * JoltC_DefaultBroadPhaseLayerFilter_new(
  JoltC_ObjectVsBroadPhaseLayerFilter_t * inFilter,
  unsigned long inObjectLayer
) {
  const ObjectVsBroadPhaseLayerFilter * inFilterCpp = static_cast<const ObjectVsBroadPhaseLayerFilter *>(inFilter->obj);
  JoltC_DefaultBroadPhaseLayerFilter_t * cInstance = new JoltC_DefaultBroadPhaseLayerFilter_t();
  DefaultBroadPhaseLayerFilter * cppInstance = new DefaultBroadPhaseLayerFilter(
    *inFilterCpp,
    inObjectLayer
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

#ifdef __cplusplus
}
#endif

