#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ObjectVsBroadPhaseLayerFilterMask_t * JoltC_ObjectVsBroadPhaseLayerFilterMask_new(
  const JoltC_BroadPhaseLayerInterfaceMask_t * inBroadPhaseLayerInterface,
  char** outErrMsg
);

//endregion constructors


#ifdef __cplusplus
}
#endif
