#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ObjectLayerPairFilterMask_t * JoltC_ObjectLayerPairFilterMask_new();

//endregion

//region destructor

void JoltC_ObjectLayerPairFilterMask_destroy(
  JoltC_ObjectLayerPairFilterMask_t * self
);

//endregion
//region functions

unsigned long JoltC_ObjectLayerPairFilterMask_sGetObjectLayer(
  unsigned long inGroup,
  unsigned long inMask
);

unsigned long JoltC_ObjectLayerPairFilterMask_sGetGroup(
  unsigned long inObjectLayer
);

unsigned long JoltC_ObjectLayerPairFilterMask_sGetMask(
  unsigned long inObjectLayer
);

bool JoltC_ObjectLayerPairFilterMask_ShouldCollide(
  JoltC_ObjectLayerPairFilterMask_t * self,
  unsigned long inLayer1,
  unsigned long inLayer2
);

//endregion


#ifdef __cplusplus
}
#endif
