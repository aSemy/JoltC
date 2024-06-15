#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_DefaultObjectLayerFilter_t * JoltC_DefaultObjectLayerFilter_new(
  JoltC_ObjectLayerPairFilter_t * inFilter,
  unsigned long inObjectLayer
);

//endregion

//region destructor

void JoltC_DefaultObjectLayerFilter_destroy(
  JoltC_DefaultObjectLayerFilter_t * self
);

//endregion

#ifdef __cplusplus
}
#endif
