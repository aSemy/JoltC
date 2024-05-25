#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_PhysicsSystem_SetGravity(
  JoltC_PhysicsSystem_t * self,
  const JoltC_Vec3_t * inGravity,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_PhysicsSystem_GetGravity(
  JoltC_PhysicsSystem_t * self,
  char** outErrMsg
);

const JoltC_PhysicsSettings_t * JoltC_PhysicsSystem_GetPhysicsSettings(
  JoltC_PhysicsSystem_t * self,
  char** outErrMsg
);

void JoltC_PhysicsSystem_SetPhysicsSettings(
  JoltC_PhysicsSystem_t * self,
  const JoltC_PhysicsSettings_t * inPhysicsSettings,
  char** outErrMsg
);

unsigned long JoltC_PhysicsSystem_GetNumBodies(
  JoltC_PhysicsSystem_t * self,
  char** outErrMsg
);

unsigned long JoltC_PhysicsSystem_GetNumActiveBodies(
  JoltC_PhysicsSystem_t * self,
  JoltC_EBodyType inBodyType,
  char** outErrMsg
);

unsigned long JoltC_PhysicsSystem_GetMaxBodies(
  JoltC_PhysicsSystem_t * self,
  char** outErrMsg
);

void JoltC_PhysicsSystem_GetBodies(
  JoltC_PhysicsSystem_t * self,
  JoltC_BodyIDVector_t * outBodies,
  char** outErrMsg
);

void JoltC_PhysicsSystem_GetActiveBodies(
  JoltC_PhysicsSystem_t * self,
  JoltC_EBodyType inBodyType,
  JoltC_BodyIDVector_t * outBodies,
  char** outErrMsg
);

const JoltC_AABox_t * JoltC_PhysicsSystem_GetBounds(
  JoltC_PhysicsSystem_t * self,
  char** outErrMsg
);

void JoltC_PhysicsSystem_AddConstraint(
  JoltC_PhysicsSystem_t * self,
  JoltC_Constraint_t * inConstraint,
  char** outErrMsg
);

void JoltC_PhysicsSystem_RemoveConstraint(
  JoltC_PhysicsSystem_t * self,
  JoltC_Constraint_t * inConstraint,
  char** outErrMsg
);

void JoltC_PhysicsSystem_SetContactListener(
  JoltC_PhysicsSystem_t * self,
  JoltC_ContactListener_t * inListener,
  char** outErrMsg
);

JoltC_ContactListener_t * JoltC_PhysicsSystem_GetContactListener(
  JoltC_PhysicsSystem_t * self,
  char** outErrMsg
);

void JoltC_PhysicsSystem_SetSoftBodyContactListener(
  JoltC_PhysicsSystem_t * self,
  JoltC_SoftBodyContactListener_t * inListener,
  char** outErrMsg
);

JoltC_SoftBodyContactListener_t * JoltC_PhysicsSystem_GetSoftBodyContactListener(
  JoltC_PhysicsSystem_t * self,
  char** outErrMsg
);

void JoltC_PhysicsSystem_OptimizeBroadPhase(
  JoltC_PhysicsSystem_t * self,
  char** outErrMsg
);

JoltC_BodyInterface_t * JoltC_PhysicsSystem_GetBodyInterface(
  JoltC_PhysicsSystem_t * self,
  char** outErrMsg
);

JoltC_BodyInterface_t * JoltC_PhysicsSystem_GetBodyInterfaceNoLock(
  JoltC_PhysicsSystem_t * self,
  char** outErrMsg
);

const JoltC_BodyLockInterfaceNoLock_t * JoltC_PhysicsSystem_GetBodyLockInterfaceNoLock(
  JoltC_PhysicsSystem_t * self,
  char** outErrMsg
);

const JoltC_BodyLockInterfaceLocking_t * JoltC_PhysicsSystem_GetBodyLockInterface(
  JoltC_PhysicsSystem_t * self,
  char** outErrMsg
);

const JoltC_BroadPhaseQuery_t * JoltC_PhysicsSystem_GetBroadPhaseQuery(
  JoltC_PhysicsSystem_t * self,
  char** outErrMsg
);

const JoltC_NarrowPhaseQuery_t * JoltC_PhysicsSystem_GetNarrowPhaseQuery(
  JoltC_PhysicsSystem_t * self,
  char** outErrMsg
);

const JoltC_NarrowPhaseQuery_t * JoltC_PhysicsSystem_GetNarrowPhaseQueryNoLock(
  JoltC_PhysicsSystem_t * self,
  char** outErrMsg
);

void JoltC_PhysicsSystem_SaveState(
  JoltC_PhysicsSystem_t * self,
  JoltC_StateRecorder_t * inStream,
  JoltC_EStateRecorderState inState,
  char** outErrMsg
);

bool JoltC_PhysicsSystem_RestoreState(
  JoltC_PhysicsSystem_t * self,
  JoltC_StateRecorder_t * inStream,
  char** outErrMsg
);

void JoltC_PhysicsSystem_AddStepListener(
  JoltC_PhysicsSystem_t * self,
  JoltC_PhysicsStepListener_t * inListener,
  char** outErrMsg
);

void JoltC_PhysicsSystem_RemoveStepListener(
  JoltC_PhysicsSystem_t * self,
  JoltC_PhysicsStepListener_t * inListener,
  char** outErrMsg
);

void JoltC_PhysicsSystem_SetBodyActivationListener(
  JoltC_PhysicsSystem_t * self,
  JoltC_BodyActivationListener_t * inListener,
  char** outErrMsg
);

const JoltC_BodyActivationListener_t * JoltC_PhysicsSystem_GetBodyActivationListener(
  JoltC_PhysicsSystem_t * self,
  char** outErrMsg
);

bool JoltC_PhysicsSystem_WereBodiesInContact(
  JoltC_PhysicsSystem_t * self,
  const JoltC_BodyID_t * inBodyID1,
  const JoltC_BodyID_t * inBodyID2,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

