#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JoltC_BroadPhaseLayerInterfaceEm_GetNumBroadPhaseLayers(
  JoltC_BroadPhaseLayerInterfaceEm_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

