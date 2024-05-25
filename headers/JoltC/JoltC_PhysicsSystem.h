#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JPC_PhysicsSystem_SetGravity(
  JPC_PhysicsSystem_t * self,
  const JPC_Vec3_t * inGravity
);

JPC_Vec3_t * JPC_PhysicsSystem_GetGravity(
  JPC_PhysicsSystem_t * self
);

const JPC_PhysicsSettings_t * JPC_PhysicsSystem_GetPhysicsSettings(
  JPC_PhysicsSystem_t * self
);

void JPC_PhysicsSystem_SetPhysicsSettings(
  JPC_PhysicsSystem_t * self,
  const JPC_PhysicsSettings_t * inPhysicsSettings
);

unsigned long JPC_PhysicsSystem_GetNumBodies(
  JPC_PhysicsSystem_t * self
);

unsigned long JPC_PhysicsSystem_GetNumActiveBodies(
  JPC_PhysicsSystem_t * self,
  JPC_EBodyType inBodyType
);

unsigned long JPC_PhysicsSystem_GetMaxBodies(
  JPC_PhysicsSystem_t * self
);

void JPC_PhysicsSystem_GetBodies(
  JPC_PhysicsSystem_t * self,
  JPC_BodyIDVector_t * outBodies
);

void JPC_PhysicsSystem_GetActiveBodies(
  JPC_PhysicsSystem_t * self,
  JPC_EBodyType inBodyType,
  JPC_BodyIDVector_t * outBodies
);

const JPC_AABox_t * JPC_PhysicsSystem_GetBounds(
  JPC_PhysicsSystem_t * self
);

void JPC_PhysicsSystem_AddConstraint(
  JPC_PhysicsSystem_t * self,
  JPC_Constraint_t * inConstraint
);

void JPC_PhysicsSystem_RemoveConstraint(
  JPC_PhysicsSystem_t * self,
  JPC_Constraint_t * inConstraint
);

void JPC_PhysicsSystem_SetContactListener(
  JPC_PhysicsSystem_t * self,
  JPC_ContactListener_t * inListener
);

JPC_ContactListener_t * JPC_PhysicsSystem_GetContactListener(
  JPC_PhysicsSystem_t * self
);

void JPC_PhysicsSystem_SetSoftBodyContactListener(
  JPC_PhysicsSystem_t * self,
  JPC_SoftBodyContactListener_t * inListener
);

JPC_SoftBodyContactListener_t * JPC_PhysicsSystem_GetSoftBodyContactListener(
  JPC_PhysicsSystem_t * self
);

void JPC_PhysicsSystem_OptimizeBroadPhase(
  JPC_PhysicsSystem_t * self
);

JPC_BodyInterface_t * JPC_PhysicsSystem_GetBodyInterface(
  JPC_PhysicsSystem_t * self
);

JPC_BodyInterface_t * JPC_PhysicsSystem_GetBodyInterfaceNoLock(
  JPC_PhysicsSystem_t * self
);

const JPC_BodyLockInterfaceNoLock_t * JPC_PhysicsSystem_GetBodyLockInterfaceNoLock(
  JPC_PhysicsSystem_t * self
);

const JPC_BodyLockInterfaceLocking_t * JPC_PhysicsSystem_GetBodyLockInterface(
  JPC_PhysicsSystem_t * self
);

const JPC_BroadPhaseQuery_t * JPC_PhysicsSystem_GetBroadPhaseQuery(
  JPC_PhysicsSystem_t * self
);

const JPC_NarrowPhaseQuery_t * JPC_PhysicsSystem_GetNarrowPhaseQuery(
  JPC_PhysicsSystem_t * self
);

const JPC_NarrowPhaseQuery_t * JPC_PhysicsSystem_GetNarrowPhaseQueryNoLock(
  JPC_PhysicsSystem_t * self
);

void JPC_PhysicsSystem_SaveState(
  JPC_PhysicsSystem_t * self,
  JPC_StateRecorder_t * inStream,
  JPC_EStateRecorderState inState
);

bool JPC_PhysicsSystem_RestoreState(
  JPC_PhysicsSystem_t * self,
  JPC_StateRecorder_t * inStream
);

void JPC_PhysicsSystem_AddStepListener(
  JPC_PhysicsSystem_t * self,
  JPC_PhysicsStepListener_t * inListener
);

void JPC_PhysicsSystem_RemoveStepListener(
  JPC_PhysicsSystem_t * self,
  JPC_PhysicsStepListener_t * inListener
);

void JPC_PhysicsSystem_SetBodyActivationListener(
  JPC_PhysicsSystem_t * self,
  JPC_BodyActivationListener_t * inListener
);

const JPC_BodyActivationListener_t * JPC_PhysicsSystem_GetBodyActivationListener(
  JPC_PhysicsSystem_t * self
);

bool JPC_PhysicsSystem_WereBodiesInContact(
  JPC_PhysicsSystem_t * self,
  const JPC_BodyID_t * inBodyID1,
  const JPC_BodyID_t * inBodyID2
);

//endregion functions


#ifdef __cplusplus
}
#endif

