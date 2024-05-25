#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

JPC_Body_t * JPC_BodyInterface_CreateBody(
  JPC_BodyInterface_t * self,
  const JPC_BodyCreationSettings_t * inSettings
);

JPC_Body_t * JPC_BodyInterface_CreateSoftBody(
  JPC_BodyInterface_t * self,
  const JPC_SoftBodyCreationSettings_t * inSettings
);

void JPC_BodyInterface_DestroyBody(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID
);

void JPC_BodyInterface_AddBody(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  JPC_EActivation inActivationMode
);

void JPC_BodyInterface_RemoveBody(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID
);

bool JPC_BodyInterface_IsAdded(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID
);

JPC_BodyID_t * JPC_BodyInterface_CreateAndAddBody(
  JPC_BodyInterface_t * self,
  const JPC_BodyCreationSettings_t * inSettings,
  JPC_EActivation inActivationMode
);

JPC_BodyID_t * JPC_BodyInterface_CreateAndAddSoftBody(
  JPC_BodyInterface_t * self,
  const JPC_SoftBodyCreationSettings_t * inSettings,
  JPC_EActivation inActivationMode
);

JPC_TwoBodyConstraint_t * JPC_BodyInterface_CreateConstraint(
  JPC_BodyInterface_t * self,
  const JPC_TwoBodyConstraintSettings_t * inSettings,
  const JPC_BodyID_t * inBodyID1,
  const JPC_BodyID_t * inBodyID2
);

void JPC_BodyInterface_ActivateConstraint(
  JPC_BodyInterface_t * self,
  const JPC_TwoBodyConstraint_t * inConstraint
);

const JPC_Shape_t * JPC_BodyInterface_GetShape(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID
);

void JPC_BodyInterface_SetShape(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  const JPC_Shape_t * inShape,
  bool inUpdateMassProperties,
  JPC_EActivation inActivationMode
);

void JPC_BodyInterface_NotifyShapeChanged(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  const JPC_Vec3_t * inPreviousCenterOfMass,
  bool inUpdateMassProperties,
  JPC_EActivation inActivationMode
);

void JPC_BodyInterface_SetObjectLayer(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  unsigned long inLayer
);

unsigned long JPC_BodyInterface_GetObjectLayer(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID
);

void JPC_BodyInterface_SetPositionAndRotation(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  const JPC_RVec3_t * inPosition,
  const JPC_Quat_t * inRotation,
  JPC_EActivation inActivationMode
);

void JPC_BodyInterface_SetPositionAndRotationWhenChanged(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  const JPC_RVec3_t * inPosition,
  const JPC_Quat_t * inRotation,
  JPC_EActivation inActivationMode
);

void JPC_BodyInterface_GetPositionAndRotation(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  JPC_RVec3_t * outPosition,
  JPC_Quat_t * outRotation
);

void JPC_BodyInterface_SetPosition(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  const JPC_RVec3_t * inPosition,
  JPC_EActivation inActivationMode
);

JPC_RVec3_t * JPC_BodyInterface_GetPosition(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID
);

void JPC_BodyInterface_SetRotation(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  const JPC_Quat_t * inRotation,
  JPC_EActivation inActivationMode
);

JPC_Quat_t * JPC_BodyInterface_GetRotation(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID
);

JPC_RMat44_t * JPC_BodyInterface_GetWorldTransform(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID
);

JPC_RMat44_t * JPC_BodyInterface_GetCenterOfMassTransform(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID
);

void JPC_BodyInterface_SetLinearVelocity(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  const JPC_Vec3_t * inLinearVelocity
);

JPC_Vec3_t * JPC_BodyInterface_GetLinearVelocity(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID
);

void JPC_BodyInterface_AddLinearVelocity(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  const JPC_Vec3_t * inLinearVelocity
);

void JPC_BodyInterface_AddLinearAndAngularVelocity(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  const JPC_Vec3_t * inLinearVelocity,
  const JPC_Vec3_t * inAngularVelocity
);

void JPC_BodyInterface_SetAngularVelocity(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  const JPC_Vec3_t * inAngularVelocity
);

JPC_Vec3_t * JPC_BodyInterface_GetAngularVelocity(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID
);

JPC_Vec3_t * JPC_BodyInterface_GetPointVelocity(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  const JPC_RVec3_t * inPoint
);

void JPC_BodyInterface_SetPositionRotationAndVelocity(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  const JPC_RVec3_t * inPosition,
  const JPC_Quat_t * inRotation,
  const JPC_Vec3_t * inLinearVelocity,
  const JPC_Vec3_t * inAngularVelocity
);

void JPC_BodyInterface_MoveKinematic(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  const JPC_RVec3_t * inPosition,
  const JPC_Quat_t * inRotation,
  float inDeltaTime
);

void JPC_BodyInterface_ActivateBody(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID
);

void JPC_BodyInterface_ActivateBodiesInAABox(
  JPC_BodyInterface_t * self,
  const JPC_AABox_t * inBox,
  const JPC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  const JPC_ObjectLayerFilter_t * inObjectLayerFilter
);

void JPC_BodyInterface_DeactivateBody(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID
);

bool JPC_BodyInterface_IsActive(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID
);

JPC_EBodyType JPC_BodyInterface_GetBodyType(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID
);

void JPC_BodyInterface_SetMotionType(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  JPC_EMotionType inMotionType,
  JPC_EActivation inActivationMode
);

JPC_EMotionType JPC_BodyInterface_GetMotionType(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID
);

void JPC_BodyInterface_SetMotionQuality(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  JPC_EMotionQuality inMotionQuality
);

JPC_EMotionQuality JPC_BodyInterface_GetMotionQuality(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID
);

JPC_Mat44_t * JPC_BodyInterface_GetInverseInertia(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID
);

void JPC_BodyInterface_SetRestitution(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  float inRestitution
);

float JPC_BodyInterface_GetRestitution(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID
);

void JPC_BodyInterface_SetFriction(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  float inFriction
);

float JPC_BodyInterface_GetFriction(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID
);

void JPC_BodyInterface_SetGravityFactor(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  float inFactor
);

float JPC_BodyInterface_GetGravityFactor(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID
);

void JPC_BodyInterface_SetUseManifoldReduction(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  bool inUseReduction
);

bool JPC_BodyInterface_GetUseManifoldReduction(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID
);

void JPC_BodyInterface_AddForce_0(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  const JPC_Vec3_t * inForce
);

void JPC_BodyInterface_AddForce_1(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  const JPC_Vec3_t * inForce,
  const JPC_RVec3_t * inPoint
);

void JPC_BodyInterface_AddTorque(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  const JPC_Vec3_t * inTorque
);

void JPC_BodyInterface_AddForceAndTorque(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  const JPC_Vec3_t * inForce,
  const JPC_Vec3_t * inTorque
);

bool JPC_BodyInterface_ApplyBuoyancyImpulse(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  const JPC_RVec3_t * inSurfacePosition,
  const JPC_Vec3_t * inSurfaceNormal,
  float inBuoyancy,
  float inLinearDrag,
  float inAngularDrag,
  const JPC_Vec3_t * inFluidVelocity,
  const JPC_Vec3_t * inGravity,
  float inDeltaTime
);

void JPC_BodyInterface_AddImpulse_0(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  const JPC_Vec3_t * inImpulse
);

void JPC_BodyInterface_AddImpulse_1(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  const JPC_Vec3_t * inImpulse,
  const JPC_RVec3_t * inPosition
);

void JPC_BodyInterface_AddAngularImpulse(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  const JPC_Vec3_t * inAngularImpulse
);

JPC_TransformedShape_t * JPC_BodyInterface_GetTransformedShape(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID
);

unsigned long long int JPC_BodyInterface_GetUserData(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID
);

void JPC_BodyInterface_SetUserData(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  unsigned long long int inUserData
);

const JPC_PhysicsMaterial_t * JPC_BodyInterface_GetMaterial(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  const JPC_SubShapeID_t * inSubShapeID
);

void JPC_BodyInterface_InvalidateContactCache(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID
);

//endregion functions


#ifdef __cplusplus
}
#endif

