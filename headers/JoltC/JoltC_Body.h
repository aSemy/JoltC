#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_Body_destroy(
  JoltC_Body_t * self
);

//endregion
//region functions

JoltC_BodyID_t * JoltC_Body_GetID(
  JoltC_Body_t * self
);

bool JoltC_Body_IsActive(
  JoltC_Body_t * self
);

bool JoltC_Body_IsRigidBody(
  JoltC_Body_t * self
);

bool JoltC_Body_IsSoftBody(
  JoltC_Body_t * self
);

bool JoltC_Body_IsStatic(
  JoltC_Body_t * self
);

bool JoltC_Body_IsKinematic(
  JoltC_Body_t * self
);

bool JoltC_Body_IsDynamic(
  JoltC_Body_t * self
);

bool JoltC_Body_CanBeKinematicOrDynamic(
  JoltC_Body_t * self
);

JoltC_EBodyType JoltC_Body_GetBodyType(
  JoltC_Body_t * self
);

JoltC_EMotionType JoltC_Body_GetMotionType(
  JoltC_Body_t * self
);

void JoltC_Body_SetIsSensor(
  JoltC_Body_t * self,
  bool inIsSensor
);

bool JoltC_Body_IsSensor(
  JoltC_Body_t * self
);

void JoltC_Body_SetCollideKinematicVsNonDynamic(
  JoltC_Body_t * self,
  bool inCollide
);

bool JoltC_Body_GetCollideKinematicVsNonDynamic(
  JoltC_Body_t * self
);

void JoltC_Body_SetUseManifoldReduction(
  JoltC_Body_t * self,
  bool inUseReduction
);

bool JoltC_Body_GetUseManifoldReduction(
  JoltC_Body_t * self
);

void JoltC_Body_SetApplyGyroscopicForce(
  JoltC_Body_t * self,
  bool inApply
);

bool JoltC_Body_GetApplyGyroscopicForce(
  JoltC_Body_t * self
);

void JoltC_Body_SetEnhancedInternalEdgeRemoval(
  JoltC_Body_t * self,
  bool inApply
);

bool JoltC_Body_GetEnhancedInternalEdgeRemoval(
  JoltC_Body_t * self
);

unsigned long JoltC_Body_GetObjectLayer(
  JoltC_Body_t * self
);

JoltC_CollisionGroup_t * JoltC_Body_GetCollisionGroup(
  JoltC_Body_t * self
);

bool JoltC_Body_GetAllowSleeping(
  JoltC_Body_t * self
);

void JoltC_Body_SetAllowSleeping(
  JoltC_Body_t * self,
  bool inAllow
);

void JoltC_Body_ResetSleepTimer(
  JoltC_Body_t * self
);

float JoltC_Body_GetFriction(
  JoltC_Body_t * self
);

void JoltC_Body_SetFriction(
  JoltC_Body_t * self,
  float inFriction
);

float JoltC_Body_GetRestitution(
  JoltC_Body_t * self
);

void JoltC_Body_SetRestitution(
  JoltC_Body_t * self,
  float inRestitution
);

JoltC_Vec3_t * JoltC_Body_GetLinearVelocity(
  JoltC_Body_t * self
);

void JoltC_Body_SetLinearVelocity(
  JoltC_Body_t * self,
  JoltC_Vec3_t * inVelocity
);

void JoltC_Body_SetLinearVelocityClamped(
  JoltC_Body_t * self,
  JoltC_Vec3_t * inVelocity
);

JoltC_Vec3_t * JoltC_Body_GetAngularVelocity(
  JoltC_Body_t * self
);

void JoltC_Body_SetAngularVelocity(
  JoltC_Body_t * self,
  JoltC_Vec3_t * inVelocity
);

void JoltC_Body_SetAngularVelocityClamped(
  JoltC_Body_t * self,
  JoltC_Vec3_t * inVelocity
);

void JoltC_Body_AddForce_0(
  JoltC_Body_t * self,
  JoltC_Vec3_t * inForce
);

void JoltC_Body_AddForce_1(
  JoltC_Body_t * self,
  JoltC_Vec3_t * inForce,
  JoltC_RVec3_t * inPosition
);

void JoltC_Body_AddTorque(
  JoltC_Body_t * self,
  JoltC_Vec3_t * inTorque
);

JoltC_Vec3_t * JoltC_Body_GetAccumulatedForce(
  JoltC_Body_t * self
);

JoltC_Vec3_t * JoltC_Body_GetAccumulatedTorque(
  JoltC_Body_t * self
);

void JoltC_Body_ResetForce(
  JoltC_Body_t * self
);

void JoltC_Body_ResetTorque(
  JoltC_Body_t * self
);

void JoltC_Body_ResetMotion(
  JoltC_Body_t * self
);

void JoltC_Body_AddImpulse_0(
  JoltC_Body_t * self,
  JoltC_Vec3_t * inImpulse
);

void JoltC_Body_AddImpulse_1(
  JoltC_Body_t * self,
  JoltC_Vec3_t * inImpulse,
  JoltC_RVec3_t * inPosition
);

void JoltC_Body_AddAngularImpulse(
  JoltC_Body_t * self,
  JoltC_Vec3_t * inAngularImpulse
);

void JoltC_Body_MoveKinematic(
  JoltC_Body_t * self,
  JoltC_RVec3_t * inPosition,
  JoltC_Quat_t * inRotation,
  float inDeltaTime
);

bool JoltC_Body_ApplyBuoyancyImpulse(
  JoltC_Body_t * self,
  JoltC_RVec3_t * inSurfacePosition,
  JoltC_Vec3_t * inSurfaceNormal,
  float inBuoyancy,
  float inLinearDrag,
  float inAngularDrag,
  JoltC_Vec3_t * inFluidVelocity,
  JoltC_Vec3_t * inGravity,
  float inDeltaTime
);

bool JoltC_Body_IsInBroadPhase(
  JoltC_Body_t * self
);

JoltC_Mat44_t * JoltC_Body_GetInverseInertia(
  JoltC_Body_t * self
);

JoltC_Shape_t * JoltC_Body_GetShape(
  JoltC_Body_t * self
);

JoltC_RVec3_t * JoltC_Body_GetPosition(
  JoltC_Body_t * self
);

JoltC_Quat_t * JoltC_Body_GetRotation(
  JoltC_Body_t * self
);

JoltC_RMat44_t * JoltC_Body_GetWorldTransform(
  JoltC_Body_t * self
);

JoltC_RVec3_t * JoltC_Body_GetCenterOfMassPosition(
  JoltC_Body_t * self
);

JoltC_RMat44_t * JoltC_Body_GetCenterOfMassTransform(
  JoltC_Body_t * self
);

JoltC_RMat44_t * JoltC_Body_GetInverseCenterOfMassTransform(
  JoltC_Body_t * self
);

JoltC_AABox_t * JoltC_Body_GetWorldSpaceBounds(
  JoltC_Body_t * self
);

JoltC_TransformedShape_t * JoltC_Body_GetTransformedShape(
  JoltC_Body_t * self
);

JoltC_BodyCreationSettings_t * JoltC_Body_GetBodyCreationSettings(
  JoltC_Body_t * self
);

JoltC_SoftBodyCreationSettings_t * JoltC_Body_GetSoftBodyCreationSettings(
  JoltC_Body_t * self
);

JoltC_MotionProperties_t * JoltC_Body_GetMotionProperties(
  JoltC_Body_t * self
);

JoltC_Vec3_t * JoltC_Body_GetWorldSpaceSurfaceNormal(
  JoltC_Body_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_RVec3_t * inPosition
);

unsigned long long int JoltC_Body_GetUserData(
  JoltC_Body_t * self
);

void JoltC_Body_SetUserData(
  JoltC_Body_t * self,
  unsigned long long int inUserData
);

//endregion


#ifdef __cplusplus
}
#endif
