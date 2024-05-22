#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_Ragdoll_t * JPC_Ragdoll_new(
  JPC_PhysicsSystem_t * inSystem
);

//endregion constructors

//region functions

void JPC_Ragdoll_AddToPhysicsSystem(
  JPC_Ragdoll_t * self,
  JPC_EActivation inActivationMode,
  bool inLockBodies
);

void JPC_Ragdoll_RemoveFromPhysicsSystem(
  JPC_Ragdoll_t * self,
  bool inLockBodies
);

void JPC_Ragdoll_Activate(
  JPC_Ragdoll_t * self,
  bool inLockBodies
);

bool JPC_Ragdoll_IsActive(
  JPC_Ragdoll_t * self,
  bool inLockBodies
);

void JPC_Ragdoll_SetGroupID(
  JPC_Ragdoll_t * self,
  long inGroupID,
  bool inLockBodies
);

void JPC_Ragdoll_SetPose(
  JPC_Ragdoll_t * self,
  const JPC_SkeletonPose_t * inPose,
  bool inLockBodies
);

void JPC_Ragdoll_GetPose(
  JPC_Ragdoll_t * self,
  JPC_SkeletonPose_t * outPose,
  bool inLockBodies
);

void JPC_Ragdoll_ResetWarmStart(
  JPC_Ragdoll_t * self
);

void JPC_Ragdoll_DriveToPoseUsingKinematics(
  JPC_Ragdoll_t * self,
  const JPC_SkeletonPose_t * inPose,
  float inDeltaTime,
  bool inLockBodies
);

void JPC_Ragdoll_DriveToPoseUsingMotors(
  JPC_Ragdoll_t * self,
  const JPC_SkeletonPose_t * inPose
);

void JPC_Ragdoll_SetLinearAndAngularVelocity(
  JPC_Ragdoll_t * self,
  const JPC_Vec3_t * inLinearVelocity,
  const JPC_Vec3_t * inAngularVelocity,
  bool inLockBodies
);

void JPC_Ragdoll_SetLinearVelocity(
  JPC_Ragdoll_t * self,
  const JPC_Vec3_t * inLinearVelocity,
  bool inLockBodies
);

void JPC_Ragdoll_AddLinearVelocity(
  JPC_Ragdoll_t * self,
  const JPC_Vec3_t * inLinearVelocity,
  bool inLockBodies
);

void JPC_Ragdoll_AddImpulse(
  JPC_Ragdoll_t * self,
  const JPC_Vec3_t * inImpulse,
  bool inLockBodies
);

void JPC_Ragdoll_GetRootTransform(
  JPC_Ragdoll_t * self,
  JPC_RVec3_t * outPosition,
  JPC_Quat_t * outRotation,
  bool inLockBodies
);

long JPC_Ragdoll_GetBodyCount(
  JPC_Ragdoll_t * self
);

JPC_BodyID_t * JPC_Ragdoll_GetBodyID(
  JPC_Ragdoll_t * self,
  long inBodyIndex
);

const JPC_BodyIDVector_t * JPC_Ragdoll_GetBodyIDs(
  JPC_Ragdoll_t * self
);

long JPC_Ragdoll_GetConstraintCount(
  JPC_Ragdoll_t * self
);

JPC_AABox_t * JPC_Ragdoll_GetWorldSpaceBounds(
  JPC_Ragdoll_t * self,
  bool inLockBodies
);

const JPC_TwoBodyConstraint_t * JPC_Ragdoll_GetConstraint(
  JPC_Ragdoll_t * self,
  long inConstraintIndex
);

const JPC_RagdollSettings_t * JPC_Ragdoll_GetRagdollSettings(
  JPC_Ragdoll_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

