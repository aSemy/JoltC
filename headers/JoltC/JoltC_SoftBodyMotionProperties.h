#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

JoltC_SoftBodySharedSettings_t * JoltC_SoftBodyMotionProperties_GetSettings(
  JoltC_SoftBodyMotionProperties_t * self
);

JoltC_ArraySoftBodyVertex_t * JoltC_SoftBodyMotionProperties_GetVertices(
  JoltC_SoftBodyMotionProperties_t * self
);

JoltC_SoftBodyVertex_t * JoltC_SoftBodyMotionProperties_GetVertex(
  JoltC_SoftBodyMotionProperties_t * self,
  unsigned long inIndex
);

JoltC_PhysicsMaterialList_t * JoltC_SoftBodyMotionProperties_GetMaterials(
  JoltC_SoftBodyMotionProperties_t * self
);

JoltC_ArraySoftBodySharedSettingsFace_t * JoltC_SoftBodyMotionProperties_GetFaces(
  JoltC_SoftBodyMotionProperties_t * self
);

JoltC_SoftBodySharedSettingsFace_t * JoltC_SoftBodyMotionProperties_GetFace(
  JoltC_SoftBodyMotionProperties_t * self,
  unsigned long inIndex
);

unsigned long JoltC_SoftBodyMotionProperties_GetNumIterations(
  JoltC_SoftBodyMotionProperties_t * self
);

void JoltC_SoftBodyMotionProperties_SetNumIterations(
  JoltC_SoftBodyMotionProperties_t * self,
  unsigned long inNumIterations
);

float JoltC_SoftBodyMotionProperties_GetPressure(
  JoltC_SoftBodyMotionProperties_t * self
);

void JoltC_SoftBodyMotionProperties_SetPressure(
  JoltC_SoftBodyMotionProperties_t * self,
  float inPressure
);

bool JoltC_SoftBodyMotionProperties_GetUpdatePosition(
  JoltC_SoftBodyMotionProperties_t * self
);

void JoltC_SoftBodyMotionProperties_SetUpdatePosition(
  JoltC_SoftBodyMotionProperties_t * self,
  bool inUpdatePosition
);

bool JoltC_SoftBodyMotionProperties_GetEnableSkinConstraints(
  JoltC_SoftBodyMotionProperties_t * self
);

void JoltC_SoftBodyMotionProperties_SetEnableSkinConstraints(
  JoltC_SoftBodyMotionProperties_t * self,
  bool inEnableSkinConstraints
);

float JoltC_SoftBodyMotionProperties_GetSkinnedMaxDistanceMultiplier(
  JoltC_SoftBodyMotionProperties_t * self
);

void JoltC_SoftBodyMotionProperties_SetSkinnedMaxDistanceMultiplier(
  JoltC_SoftBodyMotionProperties_t * self,
  float inSkinnedMaxDistanceMultiplier
);

JoltC_AABox_t * JoltC_SoftBodyMotionProperties_GetLocalBounds(
  JoltC_SoftBodyMotionProperties_t * self
);

void JoltC_SoftBodyMotionProperties_CustomUpdate(
  JoltC_SoftBodyMotionProperties_t * self,
  float inDeltaTime,
  JoltC_Body_t * ioSoftBody,
  JoltC_PhysicsSystem_t * inSystem
);

void JoltC_SoftBodyMotionProperties_SkinVertices(
  JoltC_SoftBodyMotionProperties_t * self,
  JoltC_RMat44_t * inRootTransform,
  JoltC_Mat44MemRef_t * inJointMatrices,
  unsigned long inNumJoints,
  bool inHardSkinAll,
  JoltC_TempAllocator_t * ioTempAllocator
);

JoltC_EMotionQuality JoltC_SoftBodyMotionProperties_GetMotionQuality(
  JoltC_SoftBodyMotionProperties_t * self
);

JoltC_EAllowedDOFs JoltC_SoftBodyMotionProperties_GetAllowedDOFs(
  JoltC_SoftBodyMotionProperties_t * self
);

bool JoltC_SoftBodyMotionProperties_GetAllowSleeping(
  JoltC_SoftBodyMotionProperties_t * self
);

JoltC_Vec3_t * JoltC_SoftBodyMotionProperties_GetLinearVelocity(
  JoltC_SoftBodyMotionProperties_t * self
);

void JoltC_SoftBodyMotionProperties_SetLinearVelocity(
  JoltC_SoftBodyMotionProperties_t * self,
  JoltC_Vec3_t * inVelocity
);

void JoltC_SoftBodyMotionProperties_SetLinearVelocityClamped(
  JoltC_SoftBodyMotionProperties_t * self,
  JoltC_Vec3_t * inVelocity
);

JoltC_Vec3_t * JoltC_SoftBodyMotionProperties_GetAngularVelocity(
  JoltC_SoftBodyMotionProperties_t * self
);

void JoltC_SoftBodyMotionProperties_SetAngularVelocity(
  JoltC_SoftBodyMotionProperties_t * self,
  JoltC_Vec3_t * inVelocity
);

void JoltC_SoftBodyMotionProperties_SetAngularVelocityClamped(
  JoltC_SoftBodyMotionProperties_t * self,
  JoltC_Vec3_t * inVelocity
);

void JoltC_SoftBodyMotionProperties_MoveKinematic(
  JoltC_SoftBodyMotionProperties_t * self,
  JoltC_Vec3_t * inPosition,
  JoltC_Quat_t * inRotation,
  float inDeltaTime
);

float JoltC_SoftBodyMotionProperties_GetMaxLinearVelocity(
  JoltC_SoftBodyMotionProperties_t * self
);

void JoltC_SoftBodyMotionProperties_SetMaxLinearVelocity(
  JoltC_SoftBodyMotionProperties_t * self,
  float inVelocity
);

float JoltC_SoftBodyMotionProperties_GetMaxAngularVelocity(
  JoltC_SoftBodyMotionProperties_t * self
);

void JoltC_SoftBodyMotionProperties_SetMaxAngularVelocity(
  JoltC_SoftBodyMotionProperties_t * self,
  float inVelocity
);

void JoltC_SoftBodyMotionProperties_ClampLinearVelocity(
  JoltC_SoftBodyMotionProperties_t * self
);

void JoltC_SoftBodyMotionProperties_ClampAngularVelocity(
  JoltC_SoftBodyMotionProperties_t * self
);

float JoltC_SoftBodyMotionProperties_GetLinearDamping(
  JoltC_SoftBodyMotionProperties_t * self
);

void JoltC_SoftBodyMotionProperties_SetLinearDamping(
  JoltC_SoftBodyMotionProperties_t * self,
  float inDamping
);

float JoltC_SoftBodyMotionProperties_GetAngularDamping(
  JoltC_SoftBodyMotionProperties_t * self
);

void JoltC_SoftBodyMotionProperties_SetAngularDamping(
  JoltC_SoftBodyMotionProperties_t * self,
  float inDamping
);

float JoltC_SoftBodyMotionProperties_GetGravityFactor(
  JoltC_SoftBodyMotionProperties_t * self
);

void JoltC_SoftBodyMotionProperties_SetGravityFactor(
  JoltC_SoftBodyMotionProperties_t * self,
  float inFactor
);

void JoltC_SoftBodyMotionProperties_SetMassProperties(
  JoltC_SoftBodyMotionProperties_t * self,
  JoltC_EAllowedDOFs inAllowedDOFs,
  JoltC_MassProperties_t * inMassProperties
);

float JoltC_SoftBodyMotionProperties_GetInverseMass(
  JoltC_SoftBodyMotionProperties_t * self
);

float JoltC_SoftBodyMotionProperties_GetInverseMassUnchecked(
  JoltC_SoftBodyMotionProperties_t * self
);

void JoltC_SoftBodyMotionProperties_SetInverseMass(
  JoltC_SoftBodyMotionProperties_t * self,
  float inInvM
);

JoltC_Vec3_t * JoltC_SoftBodyMotionProperties_GetInverseInertiaDiagonal(
  JoltC_SoftBodyMotionProperties_t * self
);

JoltC_Quat_t * JoltC_SoftBodyMotionProperties_GetInertiaRotation(
  JoltC_SoftBodyMotionProperties_t * self
);

void JoltC_SoftBodyMotionProperties_SetInverseInertia(
  JoltC_SoftBodyMotionProperties_t * self,
  JoltC_Vec3_t * inInvI,
  JoltC_Quat_t * inRotation
);

JoltC_Mat44_t * JoltC_SoftBodyMotionProperties_GetLocalSpaceInverseInertia(
  JoltC_SoftBodyMotionProperties_t * self
);

JoltC_Mat44_t * JoltC_SoftBodyMotionProperties_GetInverseInertiaForRotation(
  JoltC_SoftBodyMotionProperties_t * self,
  JoltC_Mat44_t * inRotation
);

JoltC_Vec3_t * JoltC_SoftBodyMotionProperties_MultiplyWorldSpaceInverseInertiaByVector(
  JoltC_SoftBodyMotionProperties_t * self,
  JoltC_Quat_t * inRotation,
  JoltC_Vec3_t * inV
);

JoltC_Vec3_t * JoltC_SoftBodyMotionProperties_GetPointVelocityCOM(
  JoltC_SoftBodyMotionProperties_t * self,
  JoltC_Vec3_t * inPointRelativeToCOM
);

JoltC_Vec3_t * JoltC_SoftBodyMotionProperties_GetAccumulatedForce(
  JoltC_SoftBodyMotionProperties_t * self
);

JoltC_Vec3_t * JoltC_SoftBodyMotionProperties_GetAccumulatedTorque(
  JoltC_SoftBodyMotionProperties_t * self
);

void JoltC_SoftBodyMotionProperties_ResetForce(
  JoltC_SoftBodyMotionProperties_t * self
);

void JoltC_SoftBodyMotionProperties_ResetTorque(
  JoltC_SoftBodyMotionProperties_t * self
);

void JoltC_SoftBodyMotionProperties_ResetMotion(
  JoltC_SoftBodyMotionProperties_t * self
);

JoltC_Vec3_t * JoltC_SoftBodyMotionProperties_LockTranslation(
  JoltC_SoftBodyMotionProperties_t * self,
  JoltC_Vec3_t * inV
);

JoltC_Vec3_t * JoltC_SoftBodyMotionProperties_LockAngular(
  JoltC_SoftBodyMotionProperties_t * self,
  JoltC_Vec3_t * inV
);

void JoltC_SoftBodyMotionProperties_SetNumVelocityStepsOverride(
  JoltC_SoftBodyMotionProperties_t * self,
  unsigned long inN
);

unsigned long JoltC_SoftBodyMotionProperties_GetNumVelocityStepsOverride(
  JoltC_SoftBodyMotionProperties_t * self
);

void JoltC_SoftBodyMotionProperties_SetNumPositionStepsOverride(
  JoltC_SoftBodyMotionProperties_t * self,
  unsigned long inN
);

unsigned long JoltC_SoftBodyMotionProperties_GetNumPositionStepsOverride(
  JoltC_SoftBodyMotionProperties_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

