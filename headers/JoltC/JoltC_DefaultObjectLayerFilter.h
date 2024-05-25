#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_DefaultObjectLayerFilter_t * JPC_DefaultObjectLayerFilter_new(
  const JPC_ObjectLayerPairFilter_t * inFilter,
  unsigned long inObjectLayer
);

//endregion constructors


#ifdef __cplusplus
}
#endif

