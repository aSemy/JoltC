#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

const JoltC_BodyID_t * JoltC_Body_GetID(
  JoltC_Body_t * self,
  char** outErrMsg
);

bool JoltC_Body_IsActive(
  JoltC_Body_t * self,
  char** outErrMsg
);

bool JoltC_Body_IsRigidBody(
  JoltC_Body_t * self,
  char** outErrMsg
);

bool JoltC_Body_IsSoftBody(
  JoltC_Body_t * self,
  char** outErrMsg
);

bool JoltC_Body_IsStatic(
  JoltC_Body_t * self,
  char** outErrMsg
);

bool JoltC_Body_IsKinematic(
  JoltC_Body_t * self,
  char** outErrMsg
);

bool JoltC_Body_IsDynamic(
  JoltC_Body_t * self,
  char** outErrMsg
);

bool JoltC_Body_CanBeKinematicOrDynamic(
  JoltC_Body_t * self,
  char** outErrMsg
);

JoltC_EBodyType JoltC_Body_GetBodyType(
  JoltC_Body_t * self,
  char** outErrMsg
);

JoltC_EMotionType JoltC_Body_GetMotionType(
  JoltC_Body_t * self,
  char** outErrMsg
);

void JoltC_Body_SetIsSensor(
  JoltC_Body_t * self,
  bool inIsSensor,
  char** outErrMsg
);

bool JoltC_Body_IsSensor(
  JoltC_Body_t * self,
  char** outErrMsg
);

void JoltC_Body_SetCollideKinematicVsNonDynamic(
  JoltC_Body_t * self,
  bool inCollide,
  char** outErrMsg
);

bool JoltC_Body_GetCollideKinematicVsNonDynamic(
  JoltC_Body_t * self,
  char** outErrMsg
);

void JoltC_Body_SetUseManifoldReduction(
  JoltC_Body_t * self,
  bool inUseReduction,
  char** outErrMsg
);

bool JoltC_Body_GetUseManifoldReduction(
  JoltC_Body_t * self,
  char** outErrMsg
);

void JoltC_Body_SetApplyGyroscopicForce(
  JoltC_Body_t * self,
  bool inApply,
  char** outErrMsg
);

bool JoltC_Body_GetApplyGyroscopicForce(
  JoltC_Body_t * self,
  char** outErrMsg
);

void JoltC_Body_SetEnhancedInternalEdgeRemoval(
  JoltC_Body_t * self,
  bool inApply,
  char** outErrMsg
);

bool JoltC_Body_GetEnhancedInternalEdgeRemoval(
  JoltC_Body_t * self,
  char** outErrMsg
);

unsigned long JoltC_Body_GetObjectLayer(
  JoltC_Body_t * self,
  char** outErrMsg
);

JoltC_CollisionGroup_t * JoltC_Body_GetCollisionGroup(
  JoltC_Body_t * self,
  char** outErrMsg
);

bool JoltC_Body_GetAllowSleeping(
  JoltC_Body_t * self,
  char** outErrMsg
);

void JoltC_Body_SetAllowSleeping(
  JoltC_Body_t * self,
  bool inAllow,
  char** outErrMsg
);

void JoltC_Body_ResetSleepTimer(
  JoltC_Body_t * self,
  char** outErrMsg
);

float JoltC_Body_GetFriction(
  JoltC_Body_t * self,
  char** outErrMsg
);

void JoltC_Body_SetFriction(
  JoltC_Body_t * self,
  float inFriction,
  char** outErrMsg
);

float JoltC_Body_GetRestitution(
  JoltC_Body_t * self,
  char** outErrMsg
);

void JoltC_Body_SetRestitution(
  JoltC_Body_t * self,
  float inRestitution,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_Body_GetLinearVelocity(
  JoltC_Body_t * self,
  char** outErrMsg
);

void JoltC_Body_SetLinearVelocity(
  JoltC_Body_t * self,
  const JoltC_Vec3_t * inVelocity,
  char** outErrMsg
);

void JoltC_Body_SetLinearVelocityClamped(
  JoltC_Body_t * self,
  const JoltC_Vec3_t * inVelocity,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_Body_GetAngularVelocity(
  JoltC_Body_t * self,
  char** outErrMsg
);

void JoltC_Body_SetAngularVelocity(
  JoltC_Body_t * self,
  const JoltC_Vec3_t * inVelocity,
  char** outErrMsg
);

void JoltC_Body_SetAngularVelocityClamped(
  JoltC_Body_t * self,
  const JoltC_Vec3_t * inVelocity,
  char** outErrMsg
);

void JoltC_Body_AddForce_0(
  JoltC_Body_t * self,
  const JoltC_Vec3_t * inForce,
  char** outErrMsg
);

void JoltC_Body_AddForce_1(
  JoltC_Body_t * self,
  const JoltC_Vec3_t * inForce,
  const JoltC_RVec3_t * inPosition,
  char** outErrMsg
);

void JoltC_Body_AddTorque(
  JoltC_Body_t * self,
  const JoltC_Vec3_t * inTorque,
  char** outErrMsg
);

const JoltC_Vec3_t * JoltC_Body_GetAccumulatedForce(
  JoltC_Body_t * self,
  char** outErrMsg
);

const JoltC_Vec3_t * JoltC_Body_GetAccumulatedTorque(
  JoltC_Body_t * self,
  char** outErrMsg
);

void JoltC_Body_ResetForce(
  JoltC_Body_t * self,
  char** outErrMsg
);

void JoltC_Body_ResetTorque(
  JoltC_Body_t * self,
  char** outErrMsg
);

void JoltC_Body_ResetMotion(
  JoltC_Body_t * self,
  char** outErrMsg
);

void JoltC_Body_AddImpulse_0(
  JoltC_Body_t * self,
  const JoltC_Vec3_t * inImpulse,
  char** outErrMsg
);

void JoltC_Body_AddImpulse_1(
  JoltC_Body_t * self,
  const JoltC_Vec3_t * inImpulse,
  const JoltC_RVec3_t * inPosition,
  char** outErrMsg
);

void JoltC_Body_AddAngularImpulse(
  JoltC_Body_t * self,
  const JoltC_Vec3_t * inAngularImpulse,
  char** outErrMsg
);

void JoltC_Body_MoveKinematic(
  JoltC_Body_t * self,
  const JoltC_RVec3_t * inPosition,
  const JoltC_Quat_t * inRotation,
  float inDeltaTime,
  char** outErrMsg
);

bool JoltC_Body_ApplyBuoyancyImpulse(
  JoltC_Body_t * self,
  const JoltC_RVec3_t * inSurfacePosition,
  const JoltC_Vec3_t * inSurfaceNormal,
  float inBuoyancy,
  float inLinearDrag,
  float inAngularDrag,
  const JoltC_Vec3_t * inFluidVelocity,
  const JoltC_Vec3_t * inGravity,
  float inDeltaTime,
  char** outErrMsg
);

bool JoltC_Body_IsInBroadPhase(
  JoltC_Body_t * self,
  char** outErrMsg
);

const JoltC_Mat44_t * JoltC_Body_GetInverseInertia(
  JoltC_Body_t * self,
  char** outErrMsg
);

const JoltC_Shape_t * JoltC_Body_GetShape(
  JoltC_Body_t * self,
  char** outErrMsg
);

JoltC_RVec3_t * JoltC_Body_GetPosition(
  JoltC_Body_t * self,
  char** outErrMsg
);

JoltC_Quat_t * JoltC_Body_GetRotation(
  JoltC_Body_t * self,
  char** outErrMsg
);

JoltC_RMat44_t * JoltC_Body_GetWorldTransform(
  JoltC_Body_t * self,
  char** outErrMsg
);

JoltC_RVec3_t * JoltC_Body_GetCenterOfMassPosition(
  JoltC_Body_t * self,
  char** outErrMsg
);

JoltC_RMat44_t * JoltC_Body_GetCenterOfMassTransform(
  JoltC_Body_t * self,
  char** outErrMsg
);

JoltC_RMat44_t * JoltC_Body_GetInverseCenterOfMassTransform(
  JoltC_Body_t * self,
  char** outErrMsg
);

JoltC_AABox_t * JoltC_Body_GetWorldSpaceBounds(
  JoltC_Body_t * self,
  char** outErrMsg
);

JoltC_TransformedShape_t * JoltC_Body_GetTransformedShape(
  JoltC_Body_t * self,
  char** outErrMsg
);

JoltC_BodyCreationSettings_t * JoltC_Body_GetBodyCreationSettings(
  JoltC_Body_t * self,
  char** outErrMsg
);

JoltC_SoftBodyCreationSettings_t * JoltC_Body_GetSoftBodyCreationSettings(
  JoltC_Body_t * self,
  char** outErrMsg
);

JoltC_MotionProperties_t * JoltC_Body_GetMotionProperties(
  JoltC_Body_t * self,
  char** outErrMsg
);

const JoltC_Vec3_t * JoltC_Body_GetWorldSpaceSurfaceNormal(
  JoltC_Body_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_RVec3_t * inPosition,
  char** outErrMsg
);

unsigned long long int JoltC_Body_GetUserData(
  JoltC_Body_t * self,
  char** outErrMsg
);

void JoltC_Body_SetUserData(
  JoltC_Body_t * self,
  unsigned long long int inUserData,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

