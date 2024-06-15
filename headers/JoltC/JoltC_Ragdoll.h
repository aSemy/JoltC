#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_Ragdoll_t * JoltC_Ragdoll_new(
  JoltC_PhysicsSystem_t * inSystem
);

//endregion

//region destructor

void JoltC_Ragdoll_destroy(
  JoltC_Ragdoll_t * self
);

//endregion
//region functions

void JoltC_Ragdoll_AddToPhysicsSystem(
  JoltC_Ragdoll_t * self,
  JoltC_EActivation inActivationMode,
  bool inLockBodies
);

void JoltC_Ragdoll_RemoveFromPhysicsSystem(
  JoltC_Ragdoll_t * self,
  bool inLockBodies
);

void JoltC_Ragdoll_Activate(
  JoltC_Ragdoll_t * self,
  bool inLockBodies
);

bool JoltC_Ragdoll_IsActive(
  JoltC_Ragdoll_t * self,
  bool inLockBodies
);

void JoltC_Ragdoll_SetGroupID(
  JoltC_Ragdoll_t * self,
  long inGroupID,
  bool inLockBodies
);

void JoltC_Ragdoll_SetPose(
  JoltC_Ragdoll_t * self,
  JoltC_SkeletonPose_t * inPose,
  bool inLockBodies
);

void JoltC_Ragdoll_GetPose(
  JoltC_Ragdoll_t * self,
  JoltC_SkeletonPose_t * outPose,
  bool inLockBodies
);

void JoltC_Ragdoll_ResetWarmStart(
  JoltC_Ragdoll_t * self
);

void JoltC_Ragdoll_DriveToPoseUsingKinematics(
  JoltC_Ragdoll_t * self,
  JoltC_SkeletonPose_t * inPose,
  float inDeltaTime,
  bool inLockBodies
);

void JoltC_Ragdoll_DriveToPoseUsingMotors(
  JoltC_Ragdoll_t * self,
  JoltC_SkeletonPose_t * inPose
);

void JoltC_Ragdoll_SetLinearAndAngularVelocity(
  JoltC_Ragdoll_t * self,
  JoltC_Vec3_t * inLinearVelocity,
  JoltC_Vec3_t * inAngularVelocity,
  bool inLockBodies
);

void JoltC_Ragdoll_SetLinearVelocity(
  JoltC_Ragdoll_t * self,
  JoltC_Vec3_t * inLinearVelocity,
  bool inLockBodies
);

void JoltC_Ragdoll_AddLinearVelocity(
  JoltC_Ragdoll_t * self,
  JoltC_Vec3_t * inLinearVelocity,
  bool inLockBodies
);

void JoltC_Ragdoll_AddImpulse(
  JoltC_Ragdoll_t * self,
  JoltC_Vec3_t * inImpulse,
  bool inLockBodies
);

void JoltC_Ragdoll_GetRootTransform(
  JoltC_Ragdoll_t * self,
  JoltC_RVec3_t * outPosition,
  JoltC_Quat_t * outRotation,
  bool inLockBodies
);

long JoltC_Ragdoll_GetBodyCount(
  JoltC_Ragdoll_t * self
);

JoltC_BodyID_t * JoltC_Ragdoll_GetBodyID(
  JoltC_Ragdoll_t * self,
  long inBodyIndex
);

JoltC_BodyIDVector_t * JoltC_Ragdoll_GetBodyIDs(
  JoltC_Ragdoll_t * self
);

long JoltC_Ragdoll_GetConstraintCount(
  JoltC_Ragdoll_t * self
);

JoltC_AABox_t * JoltC_Ragdoll_GetWorldSpaceBounds(
  JoltC_Ragdoll_t * self,
  bool inLockBodies
);

JoltC_TwoBodyConstraint_t * JoltC_Ragdoll_GetConstraint(
  JoltC_Ragdoll_t * self,
  long inConstraintIndex
);

JoltC_RagdollSettings_t * JoltC_Ragdoll_GetRagdollSettings(
  JoltC_Ragdoll_t * self
);

//endregion


#ifdef __cplusplus
}
#endif
