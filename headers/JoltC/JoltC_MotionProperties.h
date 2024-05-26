#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region converters

/**
 * Convert an instance of JoltC_SoftBodyMotionProperties_t into JoltC_MotionProperties_t.
 */
JoltC_MotionProperties_t * JoltC_MotionProperties_From_SoftBodyMotionProperties(
  JoltC_SoftBodyMotionProperties_t * subtype
);

//endregion

//region functions

JoltC_EMotionQuality JoltC_MotionProperties_GetMotionQuality(
  JoltC_MotionProperties_t * self
);

JoltC_EAllowedDOFs JoltC_MotionProperties_GetAllowedDOFs(
  JoltC_MotionProperties_t * self
);

bool JoltC_MotionProperties_GetAllowSleeping(
  JoltC_MotionProperties_t * self
);

JoltC_Vec3_t * JoltC_MotionProperties_GetLinearVelocity(
  JoltC_MotionProperties_t * self
);

void JoltC_MotionProperties_SetLinearVelocity(
  JoltC_MotionProperties_t * self,
  const JoltC_Vec3_t * inVelocity
);

void JoltC_MotionProperties_SetLinearVelocityClamped(
  JoltC_MotionProperties_t * self,
  const JoltC_Vec3_t * inVelocity
);

JoltC_Vec3_t * JoltC_MotionProperties_GetAngularVelocity(
  JoltC_MotionProperties_t * self
);

void JoltC_MotionProperties_SetAngularVelocity(
  JoltC_MotionProperties_t * self,
  const JoltC_Vec3_t * inVelocity
);

void JoltC_MotionProperties_SetAngularVelocityClamped(
  JoltC_MotionProperties_t * self,
  const JoltC_Vec3_t * inVelocity
);

void JoltC_MotionProperties_MoveKinematic(
  JoltC_MotionProperties_t * self,
  const JoltC_Vec3_t * inPosition,
  const JoltC_Quat_t * inRotation,
  float inDeltaTime
);

float JoltC_MotionProperties_GetMaxLinearVelocity(
  JoltC_MotionProperties_t * self
);

void JoltC_MotionProperties_SetMaxLinearVelocity(
  JoltC_MotionProperties_t * self,
  float inVelocity
);

float JoltC_MotionProperties_GetMaxAngularVelocity(
  JoltC_MotionProperties_t * self
);

void JoltC_MotionProperties_SetMaxAngularVelocity(
  JoltC_MotionProperties_t * self,
  float inVelocity
);

void JoltC_MotionProperties_ClampLinearVelocity(
  JoltC_MotionProperties_t * self
);

void JoltC_MotionProperties_ClampAngularVelocity(
  JoltC_MotionProperties_t * self
);

float JoltC_MotionProperties_GetLinearDamping(
  JoltC_MotionProperties_t * self
);

void JoltC_MotionProperties_SetLinearDamping(
  JoltC_MotionProperties_t * self,
  float inDamping
);

float JoltC_MotionProperties_GetAngularDamping(
  JoltC_MotionProperties_t * self
);

void JoltC_MotionProperties_SetAngularDamping(
  JoltC_MotionProperties_t * self,
  float inDamping
);

float JoltC_MotionProperties_GetGravityFactor(
  JoltC_MotionProperties_t * self
);

void JoltC_MotionProperties_SetGravityFactor(
  JoltC_MotionProperties_t * self,
  float inFactor
);

void JoltC_MotionProperties_SetMassProperties(
  JoltC_MotionProperties_t * self,
  JoltC_EAllowedDOFs inAllowedDOFs,
  const JoltC_MassProperties_t * inMassProperties
);

float JoltC_MotionProperties_GetInverseMass(
  JoltC_MotionProperties_t * self
);

float JoltC_MotionProperties_GetInverseMassUnchecked(
  JoltC_MotionProperties_t * self
);

void JoltC_MotionProperties_SetInverseMass(
  JoltC_MotionProperties_t * self,
  float inInvM
);

JoltC_Vec3_t * JoltC_MotionProperties_GetInverseInertiaDiagonal(
  JoltC_MotionProperties_t * self
);

JoltC_Quat_t * JoltC_MotionProperties_GetInertiaRotation(
  JoltC_MotionProperties_t * self
);

void JoltC_MotionProperties_SetInverseInertia(
  JoltC_MotionProperties_t * self,
  const JoltC_Vec3_t * inInvI,
  const JoltC_Quat_t * inRotation
);

JoltC_Mat44_t * JoltC_MotionProperties_GetLocalSpaceInverseInertia(
  JoltC_MotionProperties_t * self
);

JoltC_Mat44_t * JoltC_MotionProperties_GetInverseInertiaForRotation(
  JoltC_MotionProperties_t * self,
  const JoltC_Mat44_t * inRotation
);

JoltC_Vec3_t * JoltC_MotionProperties_MultiplyWorldSpaceInverseInertiaByVector(
  JoltC_MotionProperties_t * self,
  const JoltC_Quat_t * inRotation,
  const JoltC_Vec3_t * inV
);

JoltC_Vec3_t * JoltC_MotionProperties_GetPointVelocityCOM(
  JoltC_MotionProperties_t * self,
  const JoltC_Vec3_t * inPointRelativeToCOM
);

JoltC_Vec3_t * JoltC_MotionProperties_GetAccumulatedForce(
  JoltC_MotionProperties_t * self
);

JoltC_Vec3_t * JoltC_MotionProperties_GetAccumulatedTorque(
  JoltC_MotionProperties_t * self
);

void JoltC_MotionProperties_ResetForce(
  JoltC_MotionProperties_t * self
);

void JoltC_MotionProperties_ResetTorque(
  JoltC_MotionProperties_t * self
);

void JoltC_MotionProperties_ResetMotion(
  JoltC_MotionProperties_t * self
);

const JoltC_Vec3_t * JoltC_MotionProperties_LockTranslation(
  JoltC_MotionProperties_t * self,
  const JoltC_Vec3_t * inV
);

const JoltC_Vec3_t * JoltC_MotionProperties_LockAngular(
  JoltC_MotionProperties_t * self,
  const JoltC_Vec3_t * inV
);

void JoltC_MotionProperties_SetNumVelocityStepsOverride(
  JoltC_MotionProperties_t * self,
  unsigned long inN
);

unsigned long JoltC_MotionProperties_GetNumVelocityStepsOverride(
  JoltC_MotionProperties_t * self
);

void JoltC_MotionProperties_SetNumPositionStepsOverride(
  JoltC_MotionProperties_t * self,
  unsigned long inN
);

unsigned long JoltC_MotionProperties_GetNumPositionStepsOverride(
  JoltC_MotionProperties_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

