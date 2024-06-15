#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ObjectLayerFilter_t * JoltC_ObjectLayerFilter_new();

//endregion

//region destructor

void JoltC_ObjectLayerFilter_destroy(
  JoltC_ObjectLayerFilter_t * self
);

//endregion
//region converters

/**
 * Convert an instance of JoltC_DefaultBroadPhaseLayerFilter_t into JoltC_ObjectLayerFilter_t.
 */
JoltC_ObjectLayerFilter_t * JoltC_ObjectLayerFilter_From_DefaultBroadPhaseLayerFilter(
  JoltC_DefaultBroadPhaseLayerFilter_t * subtype
);

/**
 * Convert an instance of JoltC_DefaultObjectLayerFilter_t into JoltC_ObjectLayerFilter_t.
 */
JoltC_ObjectLayerFilter_t * JoltC_ObjectLayerFilter_From_DefaultObjectLayerFilter(
  JoltC_DefaultObjectLayerFilter_t * subtype
);

/**
 * Convert an instance of JoltC_SpecifiedObjectLayerFilter_t into JoltC_ObjectLayerFilter_t.
 */
JoltC_ObjectLayerFilter_t * JoltC_ObjectLayerFilter_From_SpecifiedObjectLayerFilter(
  JoltC_SpecifiedObjectLayerFilter_t * subtype
);

//endregion


#ifdef __cplusplus
}
#endif
