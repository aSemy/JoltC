#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_JoltInterface_t * JPC_JoltInterface_new(
  const JPC_JoltSettings_t * inSettings
);

//endregion constructors

//region functions

void JPC_JoltInterface_Step(
  JPC_JoltInterface_t * self,
  float inDeltaTime,
  long inCollisionSteps
);

JPC_PhysicsSystem_t * JPC_JoltInterface_GetPhysicsSystem(
  JPC_JoltInterface_t * self
);

JPC_TempAllocator_t * JPC_JoltInterface_GetTempAllocator(
  JPC_JoltInterface_t * self
);

JPC_ObjectLayerPairFilter_t * JPC_JoltInterface_GetObjectLayerPairFilter(
  JPC_JoltInterface_t * self
);

JPC_ObjectVsBroadPhaseLayerFilter_t * JPC_JoltInterface_GetObjectVsBroadPhaseLayerFilter(
  JPC_JoltInterface_t * self
);

unsigned long long int JPC_JoltInterface_sGetTotalMemory();

unsigned long long int JPC_JoltInterface_sGetFreeMemory();

//endregion functions


#ifdef __cplusplus
}
#endif

