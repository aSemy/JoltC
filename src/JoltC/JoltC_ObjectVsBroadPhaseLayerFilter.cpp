#include "JoltC/JoltC_ObjectVsBroadPhaseLayerFilter.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `ObjectVsBroadPhaseLayerFilter` instance.
 */
JoltC_ObjectVsBroadPhaseLayerFilter_t * JoltC_ObjectVsBroadPhaseLayerFilter_new() {
  JoltC_ObjectVsBroadPhaseLayerFilter_t * cInstance = new JoltC_ObjectVsBroadPhaseLayerFilter_t();
  ObjectVsBroadPhaseLayerFilter * cppInstance = new ObjectVsBroadPhaseLayerFilter();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region converters

/**
 * Convert an instance of JoltC_ObjectVsBroadPhaseLayerFilterEm_t into JoltC_ObjectVsBroadPhaseLayerFilter_t.
 */
JoltC_ObjectVsBroadPhaseLayerFilter_t * JoltC_ObjectVsBroadPhaseLayerFilter_From_ObjectVsBroadPhaseLayerFilterEm(
  JoltC_ObjectVsBroadPhaseLayerFilterEm_t * subtype
) {
  return (JoltC_ObjectVsBroadPhaseLayerFilter_t*) subtype;
};

/**
 * Convert an instance of JoltC_ObjectVsBroadPhaseLayerFilterTable_t into JoltC_ObjectVsBroadPhaseLayerFilter_t.
 */
JoltC_ObjectVsBroadPhaseLayerFilter_t * JoltC_ObjectVsBroadPhaseLayerFilter_From_ObjectVsBroadPhaseLayerFilterTable(
  JoltC_ObjectVsBroadPhaseLayerFilterTable_t * subtype
) {
  return (JoltC_ObjectVsBroadPhaseLayerFilter_t*) subtype;
};

/**
 * Convert an instance of JoltC_ObjectVsBroadPhaseLayerFilterMask_t into JoltC_ObjectVsBroadPhaseLayerFilter_t.
 */
JoltC_ObjectVsBroadPhaseLayerFilter_t * JoltC_ObjectVsBroadPhaseLayerFilter_From_ObjectVsBroadPhaseLayerFilterMask(
  JoltC_ObjectVsBroadPhaseLayerFilterMask_t * subtype
) {
  return (JoltC_ObjectVsBroadPhaseLayerFilter_t*) subtype;
};

//endregion

#ifdef __cplusplus
}
#endif

