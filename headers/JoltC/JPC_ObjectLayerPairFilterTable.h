#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_ObjectLayerPairFilterTable_t * JPC_ObjectLayerPairFilterTable_new(
  unsigned long inNumObjectLayers
);

//endregion constructors

//region functions

unsigned long JPC_ObjectLayerPairFilterTable_GetNumObjectLayers(
  JPC_ObjectLayerPairFilterTable_t * self
);

void JPC_ObjectLayerPairFilterTable_DisableCollision(
  JPC_ObjectLayerPairFilterTable_t * self,
  unsigned long inLayer1,
  unsigned long inLayer2
);

void JPC_ObjectLayerPairFilterTable_EnableCollision(
  JPC_ObjectLayerPairFilterTable_t * self,
  unsigned long inLayer1,
  unsigned long inLayer2
);

bool JPC_ObjectLayerPairFilterTable_ShouldCollide(
  JPC_ObjectLayerPairFilterTable_t * self,
  unsigned long inLayer1,
  unsigned long inLayer2
);

//endregion functions


#ifdef __cplusplus
}
#endif

