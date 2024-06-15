#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_DefaultBroadPhaseLayerFilter_t * JoltC_DefaultBroadPhaseLayerFilter_new(
  JoltC_ObjectVsBroadPhaseLayerFilter_t * inFilter,
  unsigned long inObjectLayer
);

//endregion

//region destructor

void JoltC_DefaultBroadPhaseLayerFilter_destroy(
  JoltC_DefaultBroadPhaseLayerFilter_t * self
);

//endregion

#ifdef __cplusplus
}
#endif
