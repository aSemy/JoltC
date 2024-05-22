#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

const JPC_SoftBodySharedSettings_t * JPC_SoftBodyMotionProperties_GetSettings(
  JPC_SoftBodyMotionProperties_t * self
);

JPC_ArraySoftBodyVertex_t * JPC_SoftBodyMotionProperties_GetVertices(
  JPC_SoftBodyMotionProperties_t * self
);

JPC_SoftBodyVertex_t * JPC_SoftBodyMotionProperties_GetVertex(
  JPC_SoftBodyMotionProperties_t * self,
  unsigned long inIndex
);

const JPC_PhysicsMaterialList_t * JPC_SoftBodyMotionProperties_GetMaterials(
  JPC_SoftBodyMotionProperties_t * self
);

const JPC_ArraySoftBodySharedSettingsFace_t * JPC_SoftBodyMotionProperties_GetFaces(
  JPC_SoftBodyMotionProperties_t * self
);

const JPC_SoftBodySharedSettingsFace_t * JPC_SoftBodyMotionProperties_GetFace(
  JPC_SoftBodyMotionProperties_t * self,
  unsigned long inIndex
);

unsigned long JPC_SoftBodyMotionProperties_GetNumIterations(
  JPC_SoftBodyMotionProperties_t * self
);

void JPC_SoftBodyMotionProperties_SetNumIterations(
  JPC_SoftBodyMotionProperties_t * self,
  unsigned long inNumIterations
);

float JPC_SoftBodyMotionProperties_GetPressure(
  JPC_SoftBodyMotionProperties_t * self
);

void JPC_SoftBodyMotionProperties_SetPressure(
  JPC_SoftBodyMotionProperties_t * self,
  float inPressure
);

bool JPC_SoftBodyMotionProperties_GetUpdatePosition(
  JPC_SoftBodyMotionProperties_t * self
);

void JPC_SoftBodyMotionProperties_SetUpdatePosition(
  JPC_SoftBodyMotionProperties_t * self,
  bool inUpdatePosition
);

bool JPC_SoftBodyMotionProperties_GetEnableSkinConstraints(
  JPC_SoftBodyMotionProperties_t * self
);

void JPC_SoftBodyMotionProperties_SetEnableSkinConstraints(
  JPC_SoftBodyMotionProperties_t * self,
  bool inEnableSkinConstraints
);

float JPC_SoftBodyMotionProperties_GetSkinnedMaxDistanceMultiplier(
  JPC_SoftBodyMotionProperties_t * self
);

void JPC_SoftBodyMotionProperties_SetSkinnedMaxDistanceMultiplier(
  JPC_SoftBodyMotionProperties_t * self,
  float inSkinnedMaxDistanceMultiplier
);

const JPC_AABox_t * JPC_SoftBodyMotionProperties_GetLocalBounds(
  JPC_SoftBodyMotionProperties_t * self
);

void JPC_SoftBodyMotionProperties_CustomUpdate(
  JPC_SoftBodyMotionProperties_t * self,
  float inDeltaTime,
  JPC_Body_t * ioSoftBody,
  JPC_PhysicsSystem_t * inSystem
);

void JPC_SoftBodyMotionProperties_SkinVertices(
  JPC_SoftBodyMotionProperties_t * self,
  const JPC_RMat44_t * inRootTransform,
  JPC_Mat44MemRef_t * inJointMatrices,
  unsigned long inNumJoints,
  bool inHardSkinAll,
  JPC_TempAllocator_t * ioTempAllocator
);

JPC_EMotionQuality JPC_SoftBodyMotionProperties_GetMotionQuality(
  JPC_SoftBodyMotionProperties_t * self
);

JPC_EAllowedDOFs JPC_SoftBodyMotionProperties_GetAllowedDOFs(
  JPC_SoftBodyMotionProperties_t * self
);

bool JPC_SoftBodyMotionProperties_GetAllowSleeping(
  JPC_SoftBodyMotionProperties_t * self
);

JPC_Vec3_t * JPC_SoftBodyMotionProperties_GetLinearVelocity(
  JPC_SoftBodyMotionProperties_t * self
);

void JPC_SoftBodyMotionProperties_SetLinearVelocity(
  JPC_SoftBodyMotionProperties_t * self,
  const JPC_Vec3_t * inVelocity
);

void JPC_SoftBodyMotionProperties_SetLinearVelocityClamped(
  JPC_SoftBodyMotionProperties_t * self,
  const JPC_Vec3_t * inVelocity
);

JPC_Vec3_t * JPC_SoftBodyMotionProperties_GetAngularVelocity(
  JPC_SoftBodyMotionProperties_t * self
);

void JPC_SoftBodyMotionProperties_SetAngularVelocity(
  JPC_SoftBodyMotionProperties_t * self,
  const JPC_Vec3_t * inVelocity
);

void JPC_SoftBodyMotionProperties_SetAngularVelocityClamped(
  JPC_SoftBodyMotionProperties_t * self,
  const JPC_Vec3_t * inVelocity
);

void JPC_SoftBodyMotionProperties_MoveKinematic(
  JPC_SoftBodyMotionProperties_t * self,
  const JPC_Vec3_t * inPosition,
  const JPC_Quat_t * inRotation,
  float inDeltaTime
);

float JPC_SoftBodyMotionProperties_GetMaxLinearVelocity(
  JPC_SoftBodyMotionProperties_t * self
);

void JPC_SoftBodyMotionProperties_SetMaxLinearVelocity(
  JPC_SoftBodyMotionProperties_t * self,
  float inVelocity
);

float JPC_SoftBodyMotionProperties_GetMaxAngularVelocity(
  JPC_SoftBodyMotionProperties_t * self
);

void JPC_SoftBodyMotionProperties_SetMaxAngularVelocity(
  JPC_SoftBodyMotionProperties_t * self,
  float inVelocity
);

void JPC_SoftBodyMotionProperties_ClampLinearVelocity(
  JPC_SoftBodyMotionProperties_t * self
);

void JPC_SoftBodyMotionProperties_ClampAngularVelocity(
  JPC_SoftBodyMotionProperties_t * self
);

float JPC_SoftBodyMotionProperties_GetLinearDamping(
  JPC_SoftBodyMotionProperties_t * self
);

void JPC_SoftBodyMotionProperties_SetLinearDamping(
  JPC_SoftBodyMotionProperties_t * self,
  float inDamping
);

float JPC_SoftBodyMotionProperties_GetAngularDamping(
  JPC_SoftBodyMotionProperties_t * self
);

void JPC_SoftBodyMotionProperties_SetAngularDamping(
  JPC_SoftBodyMotionProperties_t * self,
  float inDamping
);

float JPC_SoftBodyMotionProperties_GetGravityFactor(
  JPC_SoftBodyMotionProperties_t * self
);

void JPC_SoftBodyMotionProperties_SetGravityFactor(
  JPC_SoftBodyMotionProperties_t * self,
  float inFactor
);

void JPC_SoftBodyMotionProperties_SetMassProperties(
  JPC_SoftBodyMotionProperties_t * self,
  JPC_EAllowedDOFs inAllowedDOFs,
  const JPC_MassProperties_t * inMassProperties
);

float JPC_SoftBodyMotionProperties_GetInverseMass(
  JPC_SoftBodyMotionProperties_t * self
);

float JPC_SoftBodyMotionProperties_GetInverseMassUnchecked(
  JPC_SoftBodyMotionProperties_t * self
);

void JPC_SoftBodyMotionProperties_SetInverseMass(
  JPC_SoftBodyMotionProperties_t * self,
  float inInvM
);

JPC_Vec3_t * JPC_SoftBodyMotionProperties_GetInverseInertiaDiagonal(
  JPC_SoftBodyMotionProperties_t * self
);

JPC_Quat_t * JPC_SoftBodyMotionProperties_GetInertiaRotation(
  JPC_SoftBodyMotionProperties_t * self
);

void JPC_SoftBodyMotionProperties_SetInverseInertia(
  JPC_SoftBodyMotionProperties_t * self,
  const JPC_Vec3_t * inInvI,
  const JPC_Quat_t * inRotation
);

JPC_Mat44_t * JPC_SoftBodyMotionProperties_GetLocalSpaceInverseInertia(
  JPC_SoftBodyMotionProperties_t * self
);

JPC_Mat44_t * JPC_SoftBodyMotionProperties_GetInverseInertiaForRotation(
  JPC_SoftBodyMotionProperties_t * self,
  const JPC_Mat44_t * inRotation
);

JPC_Vec3_t * JPC_SoftBodyMotionProperties_MultiplyWorldSpaceInverseInertiaByVector(
  JPC_SoftBodyMotionProperties_t * self,
  const JPC_Quat_t * inRotation,
  const JPC_Vec3_t * inV
);

JPC_Vec3_t * JPC_SoftBodyMotionProperties_GetPointVelocityCOM(
  JPC_SoftBodyMotionProperties_t * self,
  const JPC_Vec3_t * inPointRelativeToCOM
);

JPC_Vec3_t * JPC_SoftBodyMotionProperties_GetAccumulatedForce(
  JPC_SoftBodyMotionProperties_t * self
);

JPC_Vec3_t * JPC_SoftBodyMotionProperties_GetAccumulatedTorque(
  JPC_SoftBodyMotionProperties_t * self
);

void JPC_SoftBodyMotionProperties_ResetForce(
  JPC_SoftBodyMotionProperties_t * self
);

void JPC_SoftBodyMotionProperties_ResetTorque(
  JPC_SoftBodyMotionProperties_t * self
);

void JPC_SoftBodyMotionProperties_ResetMotion(
  JPC_SoftBodyMotionProperties_t * self
);

const JPC_Vec3_t * JPC_SoftBodyMotionProperties_LockTranslation(
  JPC_SoftBodyMotionProperties_t * self,
  const JPC_Vec3_t * inV
);

const JPC_Vec3_t * JPC_SoftBodyMotionProperties_LockAngular(
  JPC_SoftBodyMotionProperties_t * self,
  const JPC_Vec3_t * inV
);

void JPC_SoftBodyMotionProperties_SetNumVelocityStepsOverride(
  JPC_SoftBodyMotionProperties_t * self,
  unsigned long inN
);

unsigned long JPC_SoftBodyMotionProperties_GetNumVelocityStepsOverride(
  JPC_SoftBodyMotionProperties_t * self
);

void JPC_SoftBodyMotionProperties_SetNumPositionStepsOverride(
  JPC_SoftBodyMotionProperties_t * self,
  unsigned long inN
);

unsigned long JPC_SoftBodyMotionProperties_GetNumPositionStepsOverride(
  JPC_SoftBodyMotionProperties_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

