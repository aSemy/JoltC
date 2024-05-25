#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

JPC_EMotionQuality JPC_MotionProperties_GetMotionQuality(
  JPC_MotionProperties_t * self
);

JPC_EAllowedDOFs JPC_MotionProperties_GetAllowedDOFs(
  JPC_MotionProperties_t * self
);

bool JPC_MotionProperties_GetAllowSleeping(
  JPC_MotionProperties_t * self
);

JPC_Vec3_t * JPC_MotionProperties_GetLinearVelocity(
  JPC_MotionProperties_t * self
);

void JPC_MotionProperties_SetLinearVelocity(
  JPC_MotionProperties_t * self,
  const JPC_Vec3_t * inVelocity
);

void JPC_MotionProperties_SetLinearVelocityClamped(
  JPC_MotionProperties_t * self,
  const JPC_Vec3_t * inVelocity
);

JPC_Vec3_t * JPC_MotionProperties_GetAngularVelocity(
  JPC_MotionProperties_t * self
);

void JPC_MotionProperties_SetAngularVelocity(
  JPC_MotionProperties_t * self,
  const JPC_Vec3_t * inVelocity
);

void JPC_MotionProperties_SetAngularVelocityClamped(
  JPC_MotionProperties_t * self,
  const JPC_Vec3_t * inVelocity
);

void JPC_MotionProperties_MoveKinematic(
  JPC_MotionProperties_t * self,
  const JPC_Vec3_t * inPosition,
  const JPC_Quat_t * inRotation,
  float inDeltaTime
);

float JPC_MotionProperties_GetMaxLinearVelocity(
  JPC_MotionProperties_t * self
);

void JPC_MotionProperties_SetMaxLinearVelocity(
  JPC_MotionProperties_t * self,
  float inVelocity
);

float JPC_MotionProperties_GetMaxAngularVelocity(
  JPC_MotionProperties_t * self
);

void JPC_MotionProperties_SetMaxAngularVelocity(
  JPC_MotionProperties_t * self,
  float inVelocity
);

void JPC_MotionProperties_ClampLinearVelocity(
  JPC_MotionProperties_t * self
);

void JPC_MotionProperties_ClampAngularVelocity(
  JPC_MotionProperties_t * self
);

float JPC_MotionProperties_GetLinearDamping(
  JPC_MotionProperties_t * self
);

void JPC_MotionProperties_SetLinearDamping(
  JPC_MotionProperties_t * self,
  float inDamping
);

float JPC_MotionProperties_GetAngularDamping(
  JPC_MotionProperties_t * self
);

void JPC_MotionProperties_SetAngularDamping(
  JPC_MotionProperties_t * self,
  float inDamping
);

float JPC_MotionProperties_GetGravityFactor(
  JPC_MotionProperties_t * self
);

void JPC_MotionProperties_SetGravityFactor(
  JPC_MotionProperties_t * self,
  float inFactor
);

void JPC_MotionProperties_SetMassProperties(
  JPC_MotionProperties_t * self,
  JPC_EAllowedDOFs inAllowedDOFs,
  const JPC_MassProperties_t * inMassProperties
);

float JPC_MotionProperties_GetInverseMass(
  JPC_MotionProperties_t * self
);

float JPC_MotionProperties_GetInverseMassUnchecked(
  JPC_MotionProperties_t * self
);

void JPC_MotionProperties_SetInverseMass(
  JPC_MotionProperties_t * self,
  float inInvM
);

JPC_Vec3_t * JPC_MotionProperties_GetInverseInertiaDiagonal(
  JPC_MotionProperties_t * self
);

JPC_Quat_t * JPC_MotionProperties_GetInertiaRotation(
  JPC_MotionProperties_t * self
);

void JPC_MotionProperties_SetInverseInertia(
  JPC_MotionProperties_t * self,
  const JPC_Vec3_t * inInvI,
  const JPC_Quat_t * inRotation
);

JPC_Mat44_t * JPC_MotionProperties_GetLocalSpaceInverseInertia(
  JPC_MotionProperties_t * self
);

JPC_Mat44_t * JPC_MotionProperties_GetInverseInertiaForRotation(
  JPC_MotionProperties_t * self,
  const JPC_Mat44_t * inRotation
);

JPC_Vec3_t * JPC_MotionProperties_MultiplyWorldSpaceInverseInertiaByVector(
  JPC_MotionProperties_t * self,
  const JPC_Quat_t * inRotation,
  const JPC_Vec3_t * inV
);

JPC_Vec3_t * JPC_MotionProperties_GetPointVelocityCOM(
  JPC_MotionProperties_t * self,
  const JPC_Vec3_t * inPointRelativeToCOM
);

JPC_Vec3_t * JPC_MotionProperties_GetAccumulatedForce(
  JPC_MotionProperties_t * self
);

JPC_Vec3_t * JPC_MotionProperties_GetAccumulatedTorque(
  JPC_MotionProperties_t * self
);

void JPC_MotionProperties_ResetForce(
  JPC_MotionProperties_t * self
);

void JPC_MotionProperties_ResetTorque(
  JPC_MotionProperties_t * self
);

void JPC_MotionProperties_ResetMotion(
  JPC_MotionProperties_t * self
);

const JPC_Vec3_t * JPC_MotionProperties_LockTranslation(
  JPC_MotionProperties_t * self,
  const JPC_Vec3_t * inV
);

const JPC_Vec3_t * JPC_MotionProperties_LockAngular(
  JPC_MotionProperties_t * self,
  const JPC_Vec3_t * inV
);

void JPC_MotionProperties_SetNumVelocityStepsOverride(
  JPC_MotionProperties_t * self,
  unsigned long inN
);

unsigned long JPC_MotionProperties_GetNumVelocityStepsOverride(
  JPC_MotionProperties_t * self
);

void JPC_MotionProperties_SetNumPositionStepsOverride(
  JPC_MotionProperties_t * self,
  unsigned long inN
);

unsigned long JPC_MotionProperties_GetNumPositionStepsOverride(
  JPC_MotionProperties_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

