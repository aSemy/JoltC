#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

const JPC_BodyID_t * JPC_Body_GetID(
  JPC_Body_t * self
);

bool JPC_Body_IsActive(
  JPC_Body_t * self
);

bool JPC_Body_IsRigidBody(
  JPC_Body_t * self
);

bool JPC_Body_IsSoftBody(
  JPC_Body_t * self
);

bool JPC_Body_IsStatic(
  JPC_Body_t * self
);

bool JPC_Body_IsKinematic(
  JPC_Body_t * self
);

bool JPC_Body_IsDynamic(
  JPC_Body_t * self
);

bool JPC_Body_CanBeKinematicOrDynamic(
  JPC_Body_t * self
);

JPC_EBodyType JPC_Body_GetBodyType(
  JPC_Body_t * self
);

JPC_EMotionType JPC_Body_GetMotionType(
  JPC_Body_t * self
);

void JPC_Body_SetIsSensor(
  JPC_Body_t * self,
  bool inIsSensor
);

bool JPC_Body_IsSensor(
  JPC_Body_t * self
);

void JPC_Body_SetCollideKinematicVsNonDynamic(
  JPC_Body_t * self,
  bool inCollide
);

bool JPC_Body_GetCollideKinematicVsNonDynamic(
  JPC_Body_t * self
);

void JPC_Body_SetUseManifoldReduction(
  JPC_Body_t * self,
  bool inUseReduction
);

bool JPC_Body_GetUseManifoldReduction(
  JPC_Body_t * self
);

void JPC_Body_SetApplyGyroscopicForce(
  JPC_Body_t * self,
  bool inApply
);

bool JPC_Body_GetApplyGyroscopicForce(
  JPC_Body_t * self
);

void JPC_Body_SetEnhancedInternalEdgeRemoval(
  JPC_Body_t * self,
  bool inApply
);

bool JPC_Body_GetEnhancedInternalEdgeRemoval(
  JPC_Body_t * self
);

unsigned long JPC_Body_GetObjectLayer(
  JPC_Body_t * self
);

JPC_CollisionGroup_t * JPC_Body_GetCollisionGroup(
  JPC_Body_t * self
);

bool JPC_Body_GetAllowSleeping(
  JPC_Body_t * self
);

void JPC_Body_SetAllowSleeping(
  JPC_Body_t * self,
  bool inAllow
);

void JPC_Body_ResetSleepTimer(
  JPC_Body_t * self
);

float JPC_Body_GetFriction(
  JPC_Body_t * self
);

void JPC_Body_SetFriction(
  JPC_Body_t * self,
  float inFriction
);

float JPC_Body_GetRestitution(
  JPC_Body_t * self
);

void JPC_Body_SetRestitution(
  JPC_Body_t * self,
  float inRestitution
);

JPC_Vec3_t * JPC_Body_GetLinearVelocity(
  JPC_Body_t * self
);

void JPC_Body_SetLinearVelocity(
  JPC_Body_t * self,
  const JPC_Vec3_t * inVelocity
);

void JPC_Body_SetLinearVelocityClamped(
  JPC_Body_t * self,
  const JPC_Vec3_t * inVelocity
);

JPC_Vec3_t * JPC_Body_GetAngularVelocity(
  JPC_Body_t * self
);

void JPC_Body_SetAngularVelocity(
  JPC_Body_t * self,
  const JPC_Vec3_t * inVelocity
);

void JPC_Body_SetAngularVelocityClamped(
  JPC_Body_t * self,
  const JPC_Vec3_t * inVelocity
);

void JPC_Body_AddForce_0(
  JPC_Body_t * self,
  const JPC_Vec3_t * inForce
);

void JPC_Body_AddForce_1(
  JPC_Body_t * self,
  const JPC_Vec3_t * inForce,
  const JPC_RVec3_t * inPosition
);

void JPC_Body_AddTorque(
  JPC_Body_t * self,
  const JPC_Vec3_t * inTorque
);

const JPC_Vec3_t * JPC_Body_GetAccumulatedForce(
  JPC_Body_t * self
);

const JPC_Vec3_t * JPC_Body_GetAccumulatedTorque(
  JPC_Body_t * self
);

void JPC_Body_ResetForce(
  JPC_Body_t * self
);

void JPC_Body_ResetTorque(
  JPC_Body_t * self
);

void JPC_Body_ResetMotion(
  JPC_Body_t * self
);

void JPC_Body_AddImpulse_0(
  JPC_Body_t * self,
  const JPC_Vec3_t * inImpulse
);

void JPC_Body_AddImpulse_1(
  JPC_Body_t * self,
  const JPC_Vec3_t * inImpulse,
  const JPC_RVec3_t * inPosition
);

void JPC_Body_AddAngularImpulse(
  JPC_Body_t * self,
  const JPC_Vec3_t * inAngularImpulse
);

void JPC_Body_MoveKinematic(
  JPC_Body_t * self,
  const JPC_RVec3_t * inPosition,
  const JPC_Quat_t * inRotation,
  float inDeltaTime
);

bool JPC_Body_ApplyBuoyancyImpulse(
  JPC_Body_t * self,
  const JPC_RVec3_t * inSurfacePosition,
  const JPC_Vec3_t * inSurfaceNormal,
  float inBuoyancy,
  float inLinearDrag,
  float inAngularDrag,
  const JPC_Vec3_t * inFluidVelocity,
  const JPC_Vec3_t * inGravity,
  float inDeltaTime
);

bool JPC_Body_IsInBroadPhase(
  JPC_Body_t * self
);

const JPC_Mat44_t * JPC_Body_GetInverseInertia(
  JPC_Body_t * self
);

const JPC_Shape_t * JPC_Body_GetShape(
  JPC_Body_t * self
);

JPC_RVec3_t * JPC_Body_GetPosition(
  JPC_Body_t * self
);

JPC_Quat_t * JPC_Body_GetRotation(
  JPC_Body_t * self
);

JPC_RMat44_t * JPC_Body_GetWorldTransform(
  JPC_Body_t * self
);

JPC_RVec3_t * JPC_Body_GetCenterOfMassPosition(
  JPC_Body_t * self
);

JPC_RMat44_t * JPC_Body_GetCenterOfMassTransform(
  JPC_Body_t * self
);

JPC_RMat44_t * JPC_Body_GetInverseCenterOfMassTransform(
  JPC_Body_t * self
);

JPC_AABox_t * JPC_Body_GetWorldSpaceBounds(
  JPC_Body_t * self
);

JPC_TransformedShape_t * JPC_Body_GetTransformedShape(
  JPC_Body_t * self
);

JPC_BodyCreationSettings_t * JPC_Body_GetBodyCreationSettings(
  JPC_Body_t * self
);

JPC_SoftBodyCreationSettings_t * JPC_Body_GetSoftBodyCreationSettings(
  JPC_Body_t * self
);

JPC_MotionProperties_t * JPC_Body_GetMotionProperties(
  JPC_Body_t * self
);

const JPC_Vec3_t * JPC_Body_GetWorldSpaceSurfaceNormal(
  JPC_Body_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_RVec3_t * inPosition
);

unsigned long long int JPC_Body_GetUserData(
  JPC_Body_t * self
);

void JPC_Body_SetUserData(
  JPC_Body_t * self,
  unsigned long long int inUserData
);

//endregion functions


#ifdef __cplusplus
}
#endif

