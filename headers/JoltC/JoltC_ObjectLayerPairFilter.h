#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ObjectLayerPairFilter_t * JoltC_ObjectLayerPairFilter_new();

//endregion

//region destructor

void JoltC_ObjectLayerPairFilter_destroy(
  JoltC_ObjectLayerPairFilter_t * self
);

//endregion
//region converters

/**
 * Convert an instance of JoltC_ObjectLayerPairFilterTable_t into JoltC_ObjectLayerPairFilter_t.
 */
JoltC_ObjectLayerPairFilter_t * JoltC_ObjectLayerPairFilter_From_ObjectLayerPairFilterTable(
  JoltC_ObjectLayerPairFilterTable_t * subtype
);

/**
 * Convert an instance of JoltC_ObjectLayerPairFilterMask_t into JoltC_ObjectLayerPairFilter_t.
 */
JoltC_ObjectLayerPairFilter_t * JoltC_ObjectLayerPairFilter_From_ObjectLayerPairFilterMask(
  JoltC_ObjectLayerPairFilterMask_t * subtype
);

//endregion

//region functions

bool JoltC_ObjectLayerPairFilter_ShouldCollide(
  JoltC_ObjectLayerPairFilter_t * self,
  unsigned long inLayer1,
  unsigned long inLayer2
);

//endregion


#ifdef __cplusplus
}
#endif
