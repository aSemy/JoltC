#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_JoltInterface_t * JoltC_JoltInterface_new(
  JoltC_JoltSettings_t * inSettings
);

//endregion

//region functions

void JoltC_JoltInterface_Step(
  JoltC_JoltInterface_t * self,
  float inDeltaTime,
  long inCollisionSteps
);

JoltC_PhysicsSystem_t * JoltC_JoltInterface_GetPhysicsSystem(
  JoltC_JoltInterface_t * self
);

JoltC_TempAllocator_t * JoltC_JoltInterface_GetTempAllocator(
  JoltC_JoltInterface_t * self
);

JoltC_ObjectLayerPairFilter_t * JoltC_JoltInterface_GetObjectLayerPairFilter(
  JoltC_JoltInterface_t * self
);

JoltC_ObjectVsBroadPhaseLayerFilter_t * JoltC_JoltInterface_GetObjectVsBroadPhaseLayerFilter(
  JoltC_JoltInterface_t * self
);

unsigned long long int JoltC_JoltInterface_sGetTotalMemory();

unsigned long long int JoltC_JoltInterface_sGetFreeMemory();

//endregion


#ifdef __cplusplus
}
#endif

