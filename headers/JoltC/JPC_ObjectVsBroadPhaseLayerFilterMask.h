#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_ObjectVsBroadPhaseLayerFilterMask_t * JPC_ObjectVsBroadPhaseLayerFilterMask_new(
  const JPC_BroadPhaseLayerInterfaceMask_t * inBroadPhaseLayerInterface
);

//endregion constructors


#ifdef __cplusplus
}
#endif

