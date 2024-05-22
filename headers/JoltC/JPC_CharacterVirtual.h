#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_CharacterVirtual_t * JPC_CharacterVirtual_new(
  const JPC_CharacterVirtualSettings_t * inSettings,
  JPC_RVec3_t * inPosition,
  JPC_Quat_t * inRotation,
  JPC_PhysicsSystem_t * inSystem
);

//endregion constructors

//region functions

void JPC_CharacterVirtual_SetListener(
  JPC_CharacterVirtual_t * self,
  JPC_CharacterContactListener_t * inListener
);

JPC_CharacterContactListener_t * JPC_CharacterVirtual_GetListener(
  JPC_CharacterVirtual_t * self
);

JPC_Vec3_t * JPC_CharacterVirtual_GetLinearVelocity(
  JPC_CharacterVirtual_t * self
);

void JPC_CharacterVirtual_SetLinearVelocity(
  JPC_CharacterVirtual_t * self,
  const JPC_Vec3_t * inLinearVelocity
);

JPC_RVec3_t * JPC_CharacterVirtual_GetPosition(
  JPC_CharacterVirtual_t * self
);

void JPC_CharacterVirtual_SetPosition(
  JPC_CharacterVirtual_t * self,
  const JPC_RVec3_t * inPosition
);

JPC_Quat_t * JPC_CharacterVirtual_GetRotation(
  JPC_CharacterVirtual_t * self
);

void JPC_CharacterVirtual_SetRotation(
  JPC_CharacterVirtual_t * self,
  const JPC_Quat_t * inRotation
);

JPC_RMat44_t * JPC_CharacterVirtual_GetWorldTransform(
  JPC_CharacterVirtual_t * self
);

JPC_RMat44_t * JPC_CharacterVirtual_GetCenterOfMassTransform(
  JPC_CharacterVirtual_t * self
);

float JPC_CharacterVirtual_GetMass(
  JPC_CharacterVirtual_t * self
);

void JPC_CharacterVirtual_SetMass(
  JPC_CharacterVirtual_t * self,
  float inMass
);

float JPC_CharacterVirtual_GetMaxStrength(
  JPC_CharacterVirtual_t * self
);

void JPC_CharacterVirtual_SetMaxStrength(
  JPC_CharacterVirtual_t * self,
  float inMaxStrength
);

float JPC_CharacterVirtual_GetPenetrationRecoverySpeed(
  JPC_CharacterVirtual_t * self
);

void JPC_CharacterVirtual_SetPenetrationRecoverySpeed(
  JPC_CharacterVirtual_t * self,
  float inSpeed
);

float JPC_CharacterVirtual_GetCharacterPadding(
  JPC_CharacterVirtual_t * self
);

unsigned long JPC_CharacterVirtual_GetMaxNumHits(
  JPC_CharacterVirtual_t * self
);

void JPC_CharacterVirtual_SetMaxNumHits(
  JPC_CharacterVirtual_t * self,
  unsigned long inMaxHits
);

float JPC_CharacterVirtual_GetHitReductionCosMaxAngle(
  JPC_CharacterVirtual_t * self
);

void JPC_CharacterVirtual_SetHitReductionCosMaxAngle(
  JPC_CharacterVirtual_t * self,
  float inCosMaxAngle
);

bool JPC_CharacterVirtual_GetMaxHitsExceeded(
  JPC_CharacterVirtual_t * self
);

JPC_Vec3_t * JPC_CharacterVirtual_GetShapeOffset(
  JPC_CharacterVirtual_t * self
);

void JPC_CharacterVirtual_SetShapeOffset(
  JPC_CharacterVirtual_t * self,
  const JPC_Vec3_t * inShapeOffset
);

unsigned long long int JPC_CharacterVirtual_GetUserData(
  JPC_CharacterVirtual_t * self
);

void JPC_CharacterVirtual_SetUserData(
  JPC_CharacterVirtual_t * self,
  unsigned long long int inUserData
);

JPC_Vec3_t * JPC_CharacterVirtual_CancelVelocityTowardsSteepSlopes(
  JPC_CharacterVirtual_t * self,
  const JPC_Vec3_t * inDesiredVelocity
);

void JPC_CharacterVirtual_Update(
  JPC_CharacterVirtual_t * self,
  float inDeltaTime,
  const JPC_Vec3_t * inGravity,
  const JPC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  const JPC_ObjectLayerFilter_t * inObjectLayerFilter,
  const JPC_BodyFilter_t * inBodyFilter,
  const JPC_ShapeFilter_t * inShapeFilter,
  JPC_TempAllocator_t * inAllocator
);

bool JPC_CharacterVirtual_CanWalkStairs(
  JPC_CharacterVirtual_t * self,
  const JPC_Vec3_t * inLinearVelocity
);

bool JPC_CharacterVirtual_WalkStairs(
  JPC_CharacterVirtual_t * self,
  float inDeltaTime,
  const JPC_Vec3_t * inStepUp,
  const JPC_Vec3_t * inStepForward,
  const JPC_Vec3_t * inStepForwardTest,
  const JPC_Vec3_t * inStepDownExtra,
  const JPC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  const JPC_ObjectLayerFilter_t * inObjectLayerFilter,
  const JPC_BodyFilter_t * inBodyFilter,
  const JPC_ShapeFilter_t * inShapeFilter,
  JPC_TempAllocator_t * inAllocator
);

bool JPC_CharacterVirtual_StickToFloor(
  JPC_CharacterVirtual_t * self,
  const JPC_Vec3_t * inStepDown,
  const JPC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  const JPC_ObjectLayerFilter_t * inObjectLayerFilter,
  const JPC_BodyFilter_t * inBodyFilter,
  const JPC_ShapeFilter_t * inShapeFilter,
  JPC_TempAllocator_t * inAllocator
);

void JPC_CharacterVirtual_ExtendedUpdate(
  JPC_CharacterVirtual_t * self,
  float inDeltaTime,
  const JPC_Vec3_t * inGravity,
  const JPC_CharacterVirtual_ExtendedUpdateSettings_t * inSettings,
  const JPC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  const JPC_ObjectLayerFilter_t * inObjectLayerFilter,
  const JPC_BodyFilter_t * inBodyFilter,
  const JPC_ShapeFilter_t * inShapeFilter,
  JPC_TempAllocator_t * inAllocator
);

void JPC_CharacterVirtual_RefreshContacts(
  JPC_CharacterVirtual_t * self,
  const JPC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  const JPC_ObjectLayerFilter_t * inObjectLayerFilter,
  const JPC_BodyFilter_t * inBodyFilter,
  const JPC_ShapeFilter_t * inShapeFilter,
  JPC_TempAllocator_t * inAllocator
);

void JPC_CharacterVirtual_UpdateGroundVelocity(
  JPC_CharacterVirtual_t * self
);

bool JPC_CharacterVirtual_SetShape(
  JPC_CharacterVirtual_t * self,
  const JPC_Shape_t * inShape,
  float inMaxPenetrationDepth,
  const JPC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  const JPC_ObjectLayerFilter_t * inObjectLayerFilter,
  const JPC_BodyFilter_t * inBodyFilter,
  const JPC_ShapeFilter_t * inShapeFilter,
  JPC_TempAllocator_t * inAllocator
);

unsigned long JPC_CharacterVirtual_GetRefCount(
  JPC_CharacterVirtual_t * self
);

void JPC_CharacterVirtual_AddRef(
  JPC_CharacterVirtual_t * self
);

void JPC_CharacterVirtual_Release(
  JPC_CharacterVirtual_t * self
);

void JPC_CharacterVirtual_SetMaxSlopeAngle(
  JPC_CharacterVirtual_t * self,
  float inMaxSlopeAngle
);

float JPC_CharacterVirtual_GetCosMaxSlopeAngle(
  JPC_CharacterVirtual_t * self
);

void JPC_CharacterVirtual_SetUp(
  JPC_CharacterVirtual_t * self,
  const JPC_Vec3_t * inUp
);

JPC_Vec3_t * JPC_CharacterVirtual_GetUp(
  JPC_CharacterVirtual_t * self
);

const JPC_Shape_t * JPC_CharacterVirtual_GetShape(
  JPC_CharacterVirtual_t * self
);

JPC_EGroundState JPC_CharacterVirtual_GetGroundState(
  JPC_CharacterVirtual_t * self
);

bool JPC_CharacterVirtual_IsSlopeTooSteep(
  JPC_CharacterVirtual_t * self,
  JPC_Vec3_t * inNormal
);

bool JPC_CharacterVirtual_IsSupported(
  JPC_CharacterVirtual_t * self
);

JPC_RVec3_t * JPC_CharacterVirtual_GetGroundPosition(
  JPC_CharacterVirtual_t * self
);

JPC_Vec3_t * JPC_CharacterVirtual_GetGroundNormal(
  JPC_CharacterVirtual_t * self
);

JPC_Vec3_t * JPC_CharacterVirtual_GetGroundVelocity(
  JPC_CharacterVirtual_t * self
);

const JPC_PhysicsMaterial_t * JPC_CharacterVirtual_GetGroundMaterial(
  JPC_CharacterVirtual_t * self
);

JPC_BodyID_t * JPC_CharacterVirtual_GetGroundBodyID(
  JPC_CharacterVirtual_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

