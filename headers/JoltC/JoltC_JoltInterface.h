#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_JoltInterface_t * JoltC_JoltInterface_new(
  const JoltC_JoltSettings_t * inSettings,
  char** outErrMsg
);

//endregion constructors

//region functions

void JoltC_JoltInterface_Step(
  JoltC_JoltInterface_t * self,
  float inDeltaTime,
  long inCollisionSteps,
  char** outErrMsg
);

JoltC_PhysicsSystem_t * JoltC_JoltInterface_GetPhysicsSystem(
  JoltC_JoltInterface_t * self,
  char** outErrMsg
);

JoltC_TempAllocator_t * JoltC_JoltInterface_GetTempAllocator(
  JoltC_JoltInterface_t * self,
  char** outErrMsg
);

JoltC_ObjectLayerPairFilter_t * JoltC_JoltInterface_GetObjectLayerPairFilter(
  JoltC_JoltInterface_t * self,
  char** outErrMsg
);

JoltC_ObjectVsBroadPhaseLayerFilter_t * JoltC_JoltInterface_GetObjectVsBroadPhaseLayerFilter(
  JoltC_JoltInterface_t * self,
  char** outErrMsg
);

unsigned long long int JoltC_JoltInterface_sGetTotalMemory(
  char** outErrMsg
);

unsigned long long int JoltC_JoltInterface_sGetFreeMemory(
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

