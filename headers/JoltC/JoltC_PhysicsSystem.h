#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_PhysicsSystem_SetGravity(
  JoltC_PhysicsSystem_t * self,
  JoltC_Vec3_t * inGravity
);

JoltC_Vec3_t * JoltC_PhysicsSystem_GetGravity(
  JoltC_PhysicsSystem_t * self
);

JoltC_PhysicsSettings_t * JoltC_PhysicsSystem_GetPhysicsSettings(
  JoltC_PhysicsSystem_t * self
);

void JoltC_PhysicsSystem_SetPhysicsSettings(
  JoltC_PhysicsSystem_t * self,
  JoltC_PhysicsSettings_t * inPhysicsSettings
);

unsigned long JoltC_PhysicsSystem_GetNumBodies(
  JoltC_PhysicsSystem_t * self
);

unsigned long JoltC_PhysicsSystem_GetNumActiveBodies(
  JoltC_PhysicsSystem_t * self,
  JoltC_EBodyType inBodyType
);

unsigned long JoltC_PhysicsSystem_GetMaxBodies(
  JoltC_PhysicsSystem_t * self
);

void JoltC_PhysicsSystem_GetBodies(
  JoltC_PhysicsSystem_t * self,
  JoltC_BodyIDVector_t * outBodies
);

void JoltC_PhysicsSystem_GetActiveBodies(
  JoltC_PhysicsSystem_t * self,
  JoltC_EBodyType inBodyType,
  JoltC_BodyIDVector_t * outBodies
);

JoltC_AABox_t * JoltC_PhysicsSystem_GetBounds(
  JoltC_PhysicsSystem_t * self
);

void JoltC_PhysicsSystem_AddConstraint(
  JoltC_PhysicsSystem_t * self,
  JoltC_Constraint_t * inConstraint
);

void JoltC_PhysicsSystem_RemoveConstraint(
  JoltC_PhysicsSystem_t * self,
  JoltC_Constraint_t * inConstraint
);

void JoltC_PhysicsSystem_SetContactListener(
  JoltC_PhysicsSystem_t * self,
  JoltC_ContactListener_t * inListener
);

JoltC_ContactListener_t * JoltC_PhysicsSystem_GetContactListener(
  JoltC_PhysicsSystem_t * self
);

void JoltC_PhysicsSystem_SetSoftBodyContactListener(
  JoltC_PhysicsSystem_t * self,
  JoltC_SoftBodyContactListener_t * inListener
);

JoltC_SoftBodyContactListener_t * JoltC_PhysicsSystem_GetSoftBodyContactListener(
  JoltC_PhysicsSystem_t * self
);

void JoltC_PhysicsSystem_OptimizeBroadPhase(
  JoltC_PhysicsSystem_t * self
);

JoltC_BodyInterface_t * JoltC_PhysicsSystem_GetBodyInterface(
  JoltC_PhysicsSystem_t * self
);

JoltC_BodyInterface_t * JoltC_PhysicsSystem_GetBodyInterfaceNoLock(
  JoltC_PhysicsSystem_t * self
);

JoltC_BodyLockInterfaceNoLock_t * JoltC_PhysicsSystem_GetBodyLockInterfaceNoLock(
  JoltC_PhysicsSystem_t * self
);

JoltC_BodyLockInterfaceLocking_t * JoltC_PhysicsSystem_GetBodyLockInterface(
  JoltC_PhysicsSystem_t * self
);

JoltC_BroadPhaseQuery_t * JoltC_PhysicsSystem_GetBroadPhaseQuery(
  JoltC_PhysicsSystem_t * self
);

JoltC_NarrowPhaseQuery_t * JoltC_PhysicsSystem_GetNarrowPhaseQuery(
  JoltC_PhysicsSystem_t * self
);

JoltC_NarrowPhaseQuery_t * JoltC_PhysicsSystem_GetNarrowPhaseQueryNoLock(
  JoltC_PhysicsSystem_t * self
);

void JoltC_PhysicsSystem_SaveState(
  JoltC_PhysicsSystem_t * self,
  JoltC_StateRecorder_t * inStream,
  JoltC_EStateRecorderState inState
);

bool JoltC_PhysicsSystem_RestoreState(
  JoltC_PhysicsSystem_t * self,
  JoltC_StateRecorder_t * inStream
);

void JoltC_PhysicsSystem_AddStepListener(
  JoltC_PhysicsSystem_t * self,
  JoltC_PhysicsStepListener_t * inListener
);

void JoltC_PhysicsSystem_RemoveStepListener(
  JoltC_PhysicsSystem_t * self,
  JoltC_PhysicsStepListener_t * inListener
);

void JoltC_PhysicsSystem_SetBodyActivationListener(
  JoltC_PhysicsSystem_t * self,
  JoltC_BodyActivationListener_t * inListener
);

JoltC_BodyActivationListener_t * JoltC_PhysicsSystem_GetBodyActivationListener(
  JoltC_PhysicsSystem_t * self
);

bool JoltC_PhysicsSystem_WereBodiesInContact(
  JoltC_PhysicsSystem_t * self,
  JoltC_BodyID_t * inBodyID1,
  JoltC_BodyID_t * inBodyID2
);

//endregion


#ifdef __cplusplus
}
#endif

