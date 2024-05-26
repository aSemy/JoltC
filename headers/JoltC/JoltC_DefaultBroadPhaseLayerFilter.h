#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_DefaultBroadPhaseLayerFilter_t * JoltC_DefaultBroadPhaseLayerFilter_new(
  const JoltC_ObjectVsBroadPhaseLayerFilter_t * inFilter,
  unsigned long inObjectLayer
);

//endregion


#ifdef __cplusplus
}
#endif

