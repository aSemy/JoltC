#include "JoltC/JoltC_ObjectLayerFilter.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ObjectLayerFilter_t * JoltC_ObjectLayerFilter_new() {
  JoltC_ObjectLayerFilter_t * cInstance = new JoltC_ObjectLayerFilter_t();
  ObjectLayerFilter * cppInstance = new ObjectLayerFilter();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region converters

/**
 * Convert an instance of JoltC_DefaultBroadPhaseLayerFilter_t into JoltC_ObjectLayerFilter_t.
 */
JoltC_ObjectLayerFilter_t * JoltC_ObjectLayerFilter_From_DefaultBroadPhaseLayerFilter(
  JoltC_DefaultBroadPhaseLayerFilter_t * subtype
) {
  return (JoltC_ObjectLayerFilter_t*) subtype;
};

/**
 * Convert an instance of JoltC_DefaultObjectLayerFilter_t into JoltC_ObjectLayerFilter_t.
 */
JoltC_ObjectLayerFilter_t * JoltC_ObjectLayerFilter_From_DefaultObjectLayerFilter(
  JoltC_DefaultObjectLayerFilter_t * subtype
) {
  return (JoltC_ObjectLayerFilter_t*) subtype;
};

/**
 * Convert an instance of JoltC_SpecifiedObjectLayerFilter_t into JoltC_ObjectLayerFilter_t.
 */
JoltC_ObjectLayerFilter_t * JoltC_ObjectLayerFilter_From_SpecifiedObjectLayerFilter(
  JoltC_SpecifiedObjectLayerFilter_t * subtype
) {
  return (JoltC_ObjectLayerFilter_t*) subtype;
};

//endregion

#ifdef __cplusplus
}
#endif

