#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SpecifiedObjectLayerFilter_t * JoltC_SpecifiedObjectLayerFilter_new(
  unsigned long inObjectLayer
);

//endregion

//region destructor

void JoltC_SpecifiedObjectLayerFilter_destroy(
  JoltC_SpecifiedObjectLayerFilter_t * self
);

//endregion

#ifdef __cplusplus
}
#endif
