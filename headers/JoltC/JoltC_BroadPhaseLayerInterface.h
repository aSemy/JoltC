#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JoltC_BroadPhaseLayerInterface_GetNumBroadPhaseLayers(
  JoltC_BroadPhaseLayerInterface_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

