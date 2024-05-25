#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_Ragdoll_t * JoltC_Ragdoll_new(
  JoltC_PhysicsSystem_t * inSystem,
  char** outErrMsg
);

//endregion constructors

//region functions

void JoltC_Ragdoll_AddToPhysicsSystem(
  JoltC_Ragdoll_t * self,
  JoltC_EActivation inActivationMode,
  bool inLockBodies,
  char** outErrMsg
);

void JoltC_Ragdoll_RemoveFromPhysicsSystem(
  JoltC_Ragdoll_t * self,
  bool inLockBodies,
  char** outErrMsg
);

void JoltC_Ragdoll_Activate(
  JoltC_Ragdoll_t * self,
  bool inLockBodies,
  char** outErrMsg
);

bool JoltC_Ragdoll_IsActive(
  JoltC_Ragdoll_t * self,
  bool inLockBodies,
  char** outErrMsg
);

void JoltC_Ragdoll_SetGroupID(
  JoltC_Ragdoll_t * self,
  long inGroupID,
  bool inLockBodies,
  char** outErrMsg
);

void JoltC_Ragdoll_SetPose(
  JoltC_Ragdoll_t * self,
  const JoltC_SkeletonPose_t * inPose,
  bool inLockBodies,
  char** outErrMsg
);

void JoltC_Ragdoll_GetPose(
  JoltC_Ragdoll_t * self,
  JoltC_SkeletonPose_t * outPose,
  bool inLockBodies,
  char** outErrMsg
);

void JoltC_Ragdoll_ResetWarmStart(
  JoltC_Ragdoll_t * self,
  char** outErrMsg
);

void JoltC_Ragdoll_DriveToPoseUsingKinematics(
  JoltC_Ragdoll_t * self,
  const JoltC_SkeletonPose_t * inPose,
  float inDeltaTime,
  bool inLockBodies,
  char** outErrMsg
);

void JoltC_Ragdoll_DriveToPoseUsingMotors(
  JoltC_Ragdoll_t * self,
  const JoltC_SkeletonPose_t * inPose,
  char** outErrMsg
);

void JoltC_Ragdoll_SetLinearAndAngularVelocity(
  JoltC_Ragdoll_t * self,
  const JoltC_Vec3_t * inLinearVelocity,
  const JoltC_Vec3_t * inAngularVelocity,
  bool inLockBodies,
  char** outErrMsg
);

void JoltC_Ragdoll_SetLinearVelocity(
  JoltC_Ragdoll_t * self,
  const JoltC_Vec3_t * inLinearVelocity,
  bool inLockBodies,
  char** outErrMsg
);

void JoltC_Ragdoll_AddLinearVelocity(
  JoltC_Ragdoll_t * self,
  const JoltC_Vec3_t * inLinearVelocity,
  bool inLockBodies,
  char** outErrMsg
);

void JoltC_Ragdoll_AddImpulse(
  JoltC_Ragdoll_t * self,
  const JoltC_Vec3_t * inImpulse,
  bool inLockBodies,
  char** outErrMsg
);

void JoltC_Ragdoll_GetRootTransform(
  JoltC_Ragdoll_t * self,
  JoltC_RVec3_t * outPosition,
  JoltC_Quat_t * outRotation,
  bool inLockBodies,
  char** outErrMsg
);

long JoltC_Ragdoll_GetBodyCount(
  JoltC_Ragdoll_t * self,
  char** outErrMsg
);

JoltC_BodyID_t * JoltC_Ragdoll_GetBodyID(
  JoltC_Ragdoll_t * self,
  long inBodyIndex,
  char** outErrMsg
);

const JoltC_BodyIDVector_t * JoltC_Ragdoll_GetBodyIDs(
  JoltC_Ragdoll_t * self,
  char** outErrMsg
);

long JoltC_Ragdoll_GetConstraintCount(
  JoltC_Ragdoll_t * self,
  char** outErrMsg
);

JoltC_AABox_t * JoltC_Ragdoll_GetWorldSpaceBounds(
  JoltC_Ragdoll_t * self,
  bool inLockBodies,
  char** outErrMsg
);

const JoltC_TwoBodyConstraint_t * JoltC_Ragdoll_GetConstraint(
  JoltC_Ragdoll_t * self,
  long inConstraintIndex,
  char** outErrMsg
);

const JoltC_RagdollSettings_t * JoltC_Ragdoll_GetRagdollSettings(
  JoltC_Ragdoll_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif
