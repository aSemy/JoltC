#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

const JoltC_SoftBodySharedSettings_t * JoltC_SoftBodyMotionProperties_GetSettings(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
);

JoltC_ArraySoftBodyVertex_t * JoltC_SoftBodyMotionProperties_GetVertices(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
);

JoltC_SoftBodyVertex_t * JoltC_SoftBodyMotionProperties_GetVertex(
  JoltC_SoftBodyMotionProperties_t * self,
  unsigned long inIndex,
  char** outErrMsg
);

const JoltC_PhysicsMaterialList_t * JoltC_SoftBodyMotionProperties_GetMaterials(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
);

const JoltC_ArraySoftBodySharedSettingsFace_t * JoltC_SoftBodyMotionProperties_GetFaces(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
);

const JoltC_SoftBodySharedSettingsFace_t * JoltC_SoftBodyMotionProperties_GetFace(
  JoltC_SoftBodyMotionProperties_t * self,
  unsigned long inIndex,
  char** outErrMsg
);

unsigned long JoltC_SoftBodyMotionProperties_GetNumIterations(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
);

void JoltC_SoftBodyMotionProperties_SetNumIterations(
  JoltC_SoftBodyMotionProperties_t * self,
  unsigned long inNumIterations,
  char** outErrMsg
);

float JoltC_SoftBodyMotionProperties_GetPressure(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
);

void JoltC_SoftBodyMotionProperties_SetPressure(
  JoltC_SoftBodyMotionProperties_t * self,
  float inPressure,
  char** outErrMsg
);

bool JoltC_SoftBodyMotionProperties_GetUpdatePosition(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
);

void JoltC_SoftBodyMotionProperties_SetUpdatePosition(
  JoltC_SoftBodyMotionProperties_t * self,
  bool inUpdatePosition,
  char** outErrMsg
);

bool JoltC_SoftBodyMotionProperties_GetEnableSkinConstraints(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
);

void JoltC_SoftBodyMotionProperties_SetEnableSkinConstraints(
  JoltC_SoftBodyMotionProperties_t * self,
  bool inEnableSkinConstraints,
  char** outErrMsg
);

float JoltC_SoftBodyMotionProperties_GetSkinnedMaxDistanceMultiplier(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
);

void JoltC_SoftBodyMotionProperties_SetSkinnedMaxDistanceMultiplier(
  JoltC_SoftBodyMotionProperties_t * self,
  float inSkinnedMaxDistanceMultiplier,
  char** outErrMsg
);

const JoltC_AABox_t * JoltC_SoftBodyMotionProperties_GetLocalBounds(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
);

void JoltC_SoftBodyMotionProperties_CustomUpdate(
  JoltC_SoftBodyMotionProperties_t * self,
  float inDeltaTime,
  JoltC_Body_t * ioSoftBody,
  JoltC_PhysicsSystem_t * inSystem,
  char** outErrMsg
);

void JoltC_SoftBodyMotionProperties_SkinVertices(
  JoltC_SoftBodyMotionProperties_t * self,
  const JoltC_RMat44_t * inRootTransform,
  JoltC_Mat44MemRef_t * inJointMatrices,
  unsigned long inNumJoints,
  bool inHardSkinAll,
  JoltC_TempAllocator_t * ioTempAllocator,
  char** outErrMsg
);

JoltC_EMotionQuality JoltC_SoftBodyMotionProperties_GetMotionQuality(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
);

JoltC_EAllowedDOFs JoltC_SoftBodyMotionProperties_GetAllowedDOFs(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
);

bool JoltC_SoftBodyMotionProperties_GetAllowSleeping(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_SoftBodyMotionProperties_GetLinearVelocity(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
);

void JoltC_SoftBodyMotionProperties_SetLinearVelocity(
  JoltC_SoftBodyMotionProperties_t * self,
  const JoltC_Vec3_t * inVelocity,
  char** outErrMsg
);

void JoltC_SoftBodyMotionProperties_SetLinearVelocityClamped(
  JoltC_SoftBodyMotionProperties_t * self,
  const JoltC_Vec3_t * inVelocity,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_SoftBodyMotionProperties_GetAngularVelocity(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
);

void JoltC_SoftBodyMotionProperties_SetAngularVelocity(
  JoltC_SoftBodyMotionProperties_t * self,
  const JoltC_Vec3_t * inVelocity,
  char** outErrMsg
);

void JoltC_SoftBodyMotionProperties_SetAngularVelocityClamped(
  JoltC_SoftBodyMotionProperties_t * self,
  const JoltC_Vec3_t * inVelocity,
  char** outErrMsg
);

void JoltC_SoftBodyMotionProperties_MoveKinematic(
  JoltC_SoftBodyMotionProperties_t * self,
  const JoltC_Vec3_t * inPosition,
  const JoltC_Quat_t * inRotation,
  float inDeltaTime,
  char** outErrMsg
);

float JoltC_SoftBodyMotionProperties_GetMaxLinearVelocity(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
);

void JoltC_SoftBodyMotionProperties_SetMaxLinearVelocity(
  JoltC_SoftBodyMotionProperties_t * self,
  float inVelocity,
  char** outErrMsg
);

float JoltC_SoftBodyMotionProperties_GetMaxAngularVelocity(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
);

void JoltC_SoftBodyMotionProperties_SetMaxAngularVelocity(
  JoltC_SoftBodyMotionProperties_t * self,
  float inVelocity,
  char** outErrMsg
);

void JoltC_SoftBodyMotionProperties_ClampLinearVelocity(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
);

void JoltC_SoftBodyMotionProperties_ClampAngularVelocity(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
);

float JoltC_SoftBodyMotionProperties_GetLinearDamping(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
);

void JoltC_SoftBodyMotionProperties_SetLinearDamping(
  JoltC_SoftBodyMotionProperties_t * self,
  float inDamping,
  char** outErrMsg
);

float JoltC_SoftBodyMotionProperties_GetAngularDamping(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
);

void JoltC_SoftBodyMotionProperties_SetAngularDamping(
  JoltC_SoftBodyMotionProperties_t * self,
  float inDamping,
  char** outErrMsg
);

float JoltC_SoftBodyMotionProperties_GetGravityFactor(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
);

void JoltC_SoftBodyMotionProperties_SetGravityFactor(
  JoltC_SoftBodyMotionProperties_t * self,
  float inFactor,
  char** outErrMsg
);

void JoltC_SoftBodyMotionProperties_SetMassProperties(
  JoltC_SoftBodyMotionProperties_t * self,
  JoltC_EAllowedDOFs inAllowedDOFs,
  const JoltC_MassProperties_t * inMassProperties,
  char** outErrMsg
);

float JoltC_SoftBodyMotionProperties_GetInverseMass(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
);

float JoltC_SoftBodyMotionProperties_GetInverseMassUnchecked(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
);

void JoltC_SoftBodyMotionProperties_SetInverseMass(
  JoltC_SoftBodyMotionProperties_t * self,
  float inInvM,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_SoftBodyMotionProperties_GetInverseInertiaDiagonal(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
);

JoltC_Quat_t * JoltC_SoftBodyMotionProperties_GetInertiaRotation(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
);

void JoltC_SoftBodyMotionProperties_SetInverseInertia(
  JoltC_SoftBodyMotionProperties_t * self,
  const JoltC_Vec3_t * inInvI,
  const JoltC_Quat_t * inRotation,
  char** outErrMsg
);

JoltC_Mat44_t * JoltC_SoftBodyMotionProperties_GetLocalSpaceInverseInertia(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
);

JoltC_Mat44_t * JoltC_SoftBodyMotionProperties_GetInverseInertiaForRotation(
  JoltC_SoftBodyMotionProperties_t * self,
  const JoltC_Mat44_t * inRotation,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_SoftBodyMotionProperties_MultiplyWorldSpaceInverseInertiaByVector(
  JoltC_SoftBodyMotionProperties_t * self,
  const JoltC_Quat_t * inRotation,
  const JoltC_Vec3_t * inV,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_SoftBodyMotionProperties_GetPointVelocityCOM(
  JoltC_SoftBodyMotionProperties_t * self,
  const JoltC_Vec3_t * inPointRelativeToCOM,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_SoftBodyMotionProperties_GetAccumulatedForce(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_SoftBodyMotionProperties_GetAccumulatedTorque(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
);

void JoltC_SoftBodyMotionProperties_ResetForce(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
);

void JoltC_SoftBodyMotionProperties_ResetTorque(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
);

void JoltC_SoftBodyMotionProperties_ResetMotion(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
);

const JoltC_Vec3_t * JoltC_SoftBodyMotionProperties_LockTranslation(
  JoltC_SoftBodyMotionProperties_t * self,
  const JoltC_Vec3_t * inV,
  char** outErrMsg
);

const JoltC_Vec3_t * JoltC_SoftBodyMotionProperties_LockAngular(
  JoltC_SoftBodyMotionProperties_t * self,
  const JoltC_Vec3_t * inV,
  char** outErrMsg
);

void JoltC_SoftBodyMotionProperties_SetNumVelocityStepsOverride(
  JoltC_SoftBodyMotionProperties_t * self,
  unsigned long inN,
  char** outErrMsg
);

unsigned long JoltC_SoftBodyMotionProperties_GetNumVelocityStepsOverride(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
);

void JoltC_SoftBodyMotionProperties_SetNumPositionStepsOverride(
  JoltC_SoftBodyMotionProperties_t * self,
  unsigned long inN,
  char** outErrMsg
);

unsigned long JoltC_SoftBodyMotionProperties_GetNumPositionStepsOverride(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

