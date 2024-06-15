#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_BroadPhaseLayerFilter_t * JoltC_BroadPhaseLayerFilter_new();

//endregion

//region destructor

void JoltC_BroadPhaseLayerFilter_destroy(
  JoltC_BroadPhaseLayerFilter_t * self
);

//endregion

#ifdef __cplusplus
}
#endif
