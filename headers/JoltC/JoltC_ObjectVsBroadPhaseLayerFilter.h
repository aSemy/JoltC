#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ObjectVsBroadPhaseLayerFilter_t * JoltC_ObjectVsBroadPhaseLayerFilter_new();

//endregion

//region destructor

void JoltC_ObjectVsBroadPhaseLayerFilter_destroy(
  JoltC_ObjectVsBroadPhaseLayerFilter_t * self
);

//endregion
//region converters

/**
 * Convert an instance of JoltC_ObjectVsBroadPhaseLayerFilterEm_t into JoltC_ObjectVsBroadPhaseLayerFilter_t.
 */
JoltC_ObjectVsBroadPhaseLayerFilter_t * JoltC_ObjectVsBroadPhaseLayerFilter_From_ObjectVsBroadPhaseLayerFilterEm(
  JoltC_ObjectVsBroadPhaseLayerFilterEm_t * subtype
);

/**
 * Convert an instance of JoltC_ObjectVsBroadPhaseLayerFilterTable_t into JoltC_ObjectVsBroadPhaseLayerFilter_t.
 */
JoltC_ObjectVsBroadPhaseLayerFilter_t * JoltC_ObjectVsBroadPhaseLayerFilter_From_ObjectVsBroadPhaseLayerFilterTable(
  JoltC_ObjectVsBroadPhaseLayerFilterTable_t * subtype
);

/**
 * Convert an instance of JoltC_ObjectVsBroadPhaseLayerFilterMask_t into JoltC_ObjectVsBroadPhaseLayerFilter_t.
 */
JoltC_ObjectVsBroadPhaseLayerFilter_t * JoltC_ObjectVsBroadPhaseLayerFilter_From_ObjectVsBroadPhaseLayerFilterMask(
  JoltC_ObjectVsBroadPhaseLayerFilterMask_t * subtype
);

//endregion


#ifdef __cplusplus
}
#endif
