#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ObjectLayerPairFilterTable_t * JoltC_ObjectLayerPairFilterTable_new(
  unsigned long inNumObjectLayers,
  char** outErrMsg
);

//endregion constructors

//region functions

unsigned long JoltC_ObjectLayerPairFilterTable_GetNumObjectLayers(
  JoltC_ObjectLayerPairFilterTable_t * self,
  char** outErrMsg
);

void JoltC_ObjectLayerPairFilterTable_DisableCollision(
  JoltC_ObjectLayerPairFilterTable_t * self,
  unsigned long inLayer1,
  unsigned long inLayer2,
  char** outErrMsg
);

void JoltC_ObjectLayerPairFilterTable_EnableCollision(
  JoltC_ObjectLayerPairFilterTable_t * self,
  unsigned long inLayer1,
  unsigned long inLayer2,
  char** outErrMsg
);

bool JoltC_ObjectLayerPairFilterTable_ShouldCollide(
  JoltC_ObjectLayerPairFilterTable_t * self,
  unsigned long inLayer1,
  unsigned long inLayer2,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

