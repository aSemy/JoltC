#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_ObjectLayerPairFilterMask_t * JPC_ObjectLayerPairFilterMask_new();

//endregion constructors

//region functions

unsigned long JPC_ObjectLayerPairFilterMask_sGetObjectLayer(
  unsigned long inGroup,
  unsigned long inMask
);

unsigned long JPC_ObjectLayerPairFilterMask_sGetGroup(
  unsigned long inObjectLayer
);

unsigned long JPC_ObjectLayerPairFilterMask_sGetMask(
  unsigned long inObjectLayer
);

bool JPC_ObjectLayerPairFilterMask_ShouldCollide(
  JPC_ObjectLayerPairFilterMask_t * self,
  unsigned long inLayer1,
  unsigned long inLayer2
);

//endregion functions


#ifdef __cplusplus
}
#endif

