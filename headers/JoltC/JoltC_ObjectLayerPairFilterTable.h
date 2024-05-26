#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ObjectLayerPairFilterTable_t * JoltC_ObjectLayerPairFilterTable_new(
  unsigned long inNumObjectLayers
);

//endregion

//region functions

unsigned long JoltC_ObjectLayerPairFilterTable_GetNumObjectLayers(
  JoltC_ObjectLayerPairFilterTable_t * self
);

void JoltC_ObjectLayerPairFilterTable_DisableCollision(
  JoltC_ObjectLayerPairFilterTable_t * self,
  unsigned long inLayer1,
  unsigned long inLayer2
);

void JoltC_ObjectLayerPairFilterTable_EnableCollision(
  JoltC_ObjectLayerPairFilterTable_t * self,
  unsigned long inLayer1,
  unsigned long inLayer2
);

bool JoltC_ObjectLayerPairFilterTable_ShouldCollide(
  JoltC_ObjectLayerPairFilterTable_t * self,
  unsigned long inLayer1,
  unsigned long inLayer2
);

//endregion


#ifdef __cplusplus
}
#endif

