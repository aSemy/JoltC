#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

JoltC_Body_t * JoltC_BodyInterface_CreateBody(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyCreationSettings_t * inSettings
);

JoltC_Body_t * JoltC_BodyInterface_CreateSoftBody(
  JoltC_BodyInterface_t * self,
  const JoltC_SoftBodyCreationSettings_t * inSettings
);

void JoltC_BodyInterface_DestroyBody(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID
);

void JoltC_BodyInterface_AddBody(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  JoltC_EActivation inActivationMode
);

void JoltC_BodyInterface_RemoveBody(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID
);

bool JoltC_BodyInterface_IsAdded(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID
);

JoltC_BodyID_t * JoltC_BodyInterface_CreateAndAddBody(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyCreationSettings_t * inSettings,
  JoltC_EActivation inActivationMode
);

JoltC_BodyID_t * JoltC_BodyInterface_CreateAndAddSoftBody(
  JoltC_BodyInterface_t * self,
  const JoltC_SoftBodyCreationSettings_t * inSettings,
  JoltC_EActivation inActivationMode
);

JoltC_TwoBodyConstraint_t * JoltC_BodyInterface_CreateConstraint(
  JoltC_BodyInterface_t * self,
  const JoltC_TwoBodyConstraintSettings_t * inSettings,
  const JoltC_BodyID_t * inBodyID1,
  const JoltC_BodyID_t * inBodyID2
);

void JoltC_BodyInterface_ActivateConstraint(
  JoltC_BodyInterface_t * self,
  const JoltC_TwoBodyConstraint_t * inConstraint
);

const JoltC_Shape_t * JoltC_BodyInterface_GetShape(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID
);

void JoltC_BodyInterface_SetShape(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  const JoltC_Shape_t * inShape,
  bool inUpdateMassProperties,
  JoltC_EActivation inActivationMode
);

void JoltC_BodyInterface_NotifyShapeChanged(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  const JoltC_Vec3_t * inPreviousCenterOfMass,
  bool inUpdateMassProperties,
  JoltC_EActivation inActivationMode
);

void JoltC_BodyInterface_SetObjectLayer(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  unsigned long inLayer
);

unsigned long JoltC_BodyInterface_GetObjectLayer(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID
);

void JoltC_BodyInterface_SetPositionAndRotation(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  const JoltC_RVec3_t * inPosition,
  const JoltC_Quat_t * inRotation,
  JoltC_EActivation inActivationMode
);

void JoltC_BodyInterface_SetPositionAndRotationWhenChanged(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  const JoltC_RVec3_t * inPosition,
  const JoltC_Quat_t * inRotation,
  JoltC_EActivation inActivationMode
);

void JoltC_BodyInterface_GetPositionAndRotation(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  JoltC_RVec3_t * outPosition,
  JoltC_Quat_t * outRotation
);

void JoltC_BodyInterface_SetPosition(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  const JoltC_RVec3_t * inPosition,
  JoltC_EActivation inActivationMode
);

JoltC_RVec3_t * JoltC_BodyInterface_GetPosition(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID
);

void JoltC_BodyInterface_SetRotation(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  const JoltC_Quat_t * inRotation,
  JoltC_EActivation inActivationMode
);

JoltC_Quat_t * JoltC_BodyInterface_GetRotation(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID
);

JoltC_RMat44_t * JoltC_BodyInterface_GetWorldTransform(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID
);

JoltC_RMat44_t * JoltC_BodyInterface_GetCenterOfMassTransform(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID
);

void JoltC_BodyInterface_SetLinearVelocity(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  const JoltC_Vec3_t * inLinearVelocity
);

JoltC_Vec3_t * JoltC_BodyInterface_GetLinearVelocity(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID
);

void JoltC_BodyInterface_AddLinearVelocity(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  const JoltC_Vec3_t * inLinearVelocity
);

void JoltC_BodyInterface_AddLinearAndAngularVelocity(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  const JoltC_Vec3_t * inLinearVelocity,
  const JoltC_Vec3_t * inAngularVelocity
);

void JoltC_BodyInterface_SetAngularVelocity(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  const JoltC_Vec3_t * inAngularVelocity
);

JoltC_Vec3_t * JoltC_BodyInterface_GetAngularVelocity(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID
);

JoltC_Vec3_t * JoltC_BodyInterface_GetPointVelocity(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  const JoltC_RVec3_t * inPoint
);

void JoltC_BodyInterface_SetPositionRotationAndVelocity(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  const JoltC_RVec3_t * inPosition,
  const JoltC_Quat_t * inRotation,
  const JoltC_Vec3_t * inLinearVelocity,
  const JoltC_Vec3_t * inAngularVelocity
);

void JoltC_BodyInterface_MoveKinematic(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  const JoltC_RVec3_t * inPosition,
  const JoltC_Quat_t * inRotation,
  float inDeltaTime
);

void JoltC_BodyInterface_ActivateBody(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID
);

void JoltC_BodyInterface_ActivateBodiesInAABox(
  JoltC_BodyInterface_t * self,
  const JoltC_AABox_t * inBox,
  const JoltC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  const JoltC_ObjectLayerFilter_t * inObjectLayerFilter
);

void JoltC_BodyInterface_DeactivateBody(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID
);

bool JoltC_BodyInterface_IsActive(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID
);

JoltC_EBodyType JoltC_BodyInterface_GetBodyType(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID
);

void JoltC_BodyInterface_SetMotionType(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  JoltC_EMotionType inMotionType,
  JoltC_EActivation inActivationMode
);

JoltC_EMotionType JoltC_BodyInterface_GetMotionType(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID
);

void JoltC_BodyInterface_SetMotionQuality(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  JoltC_EMotionQuality inMotionQuality
);

JoltC_EMotionQuality JoltC_BodyInterface_GetMotionQuality(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID
);

JoltC_Mat44_t * JoltC_BodyInterface_GetInverseInertia(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID
);

void JoltC_BodyInterface_SetRestitution(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  float inRestitution
);

float JoltC_BodyInterface_GetRestitution(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID
);

void JoltC_BodyInterface_SetFriction(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  float inFriction
);

float JoltC_BodyInterface_GetFriction(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID
);

void JoltC_BodyInterface_SetGravityFactor(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  float inFactor
);

float JoltC_BodyInterface_GetGravityFactor(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID
);

void JoltC_BodyInterface_SetUseManifoldReduction(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  bool inUseReduction
);

bool JoltC_BodyInterface_GetUseManifoldReduction(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID
);

void JoltC_BodyInterface_AddForce_0(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  const JoltC_Vec3_t * inForce
);

void JoltC_BodyInterface_AddForce_1(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  const JoltC_Vec3_t * inForce,
  const JoltC_RVec3_t * inPoint
);

void JoltC_BodyInterface_AddTorque(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  const JoltC_Vec3_t * inTorque
);

void JoltC_BodyInterface_AddForceAndTorque(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  const JoltC_Vec3_t * inForce,
  const JoltC_Vec3_t * inTorque
);

bool JoltC_BodyInterface_ApplyBuoyancyImpulse(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  const JoltC_RVec3_t * inSurfacePosition,
  const JoltC_Vec3_t * inSurfaceNormal,
  float inBuoyancy,
  float inLinearDrag,
  float inAngularDrag,
  const JoltC_Vec3_t * inFluidVelocity,
  const JoltC_Vec3_t * inGravity,
  float inDeltaTime
);

void JoltC_BodyInterface_AddImpulse_0(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  const JoltC_Vec3_t * inImpulse
);

void JoltC_BodyInterface_AddImpulse_1(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  const JoltC_Vec3_t * inImpulse,
  const JoltC_RVec3_t * inPosition
);

void JoltC_BodyInterface_AddAngularImpulse(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  const JoltC_Vec3_t * inAngularImpulse
);

JoltC_TransformedShape_t * JoltC_BodyInterface_GetTransformedShape(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID
);

unsigned long long int JoltC_BodyInterface_GetUserData(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID
);

void JoltC_BodyInterface_SetUserData(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  unsigned long long int inUserData
);

const JoltC_PhysicsMaterial_t * JoltC_BodyInterface_GetMaterial(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  const JoltC_SubShapeID_t * inSubShapeID
);

void JoltC_BodyInterface_InvalidateContactCache(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID
);

//endregion


#ifdef __cplusplus
}
#endif

