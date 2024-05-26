#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CharacterVirtual_t * JoltC_CharacterVirtual_new(
  JoltC_CharacterVirtualSettings_t * inSettings,
  JoltC_RVec3_t * inPosition,
  JoltC_Quat_t * inRotation,
  JoltC_PhysicsSystem_t * inSystem
);

//endregion

//region functions

void JoltC_CharacterVirtual_SetListener(
  JoltC_CharacterVirtual_t * self,
  JoltC_CharacterContactListener_t * inListener
);

JoltC_CharacterContactListener_t * JoltC_CharacterVirtual_GetListener(
  JoltC_CharacterVirtual_t * self
);

JoltC_Vec3_t * JoltC_CharacterVirtual_GetLinearVelocity(
  JoltC_CharacterVirtual_t * self
);

void JoltC_CharacterVirtual_SetLinearVelocity(
  JoltC_CharacterVirtual_t * self,
  JoltC_Vec3_t * inLinearVelocity
);

JoltC_RVec3_t * JoltC_CharacterVirtual_GetPosition(
  JoltC_CharacterVirtual_t * self
);

void JoltC_CharacterVirtual_SetPosition(
  JoltC_CharacterVirtual_t * self,
  JoltC_RVec3_t * inPosition
);

JoltC_Quat_t * JoltC_CharacterVirtual_GetRotation(
  JoltC_CharacterVirtual_t * self
);

void JoltC_CharacterVirtual_SetRotation(
  JoltC_CharacterVirtual_t * self,
  JoltC_Quat_t * inRotation
);

JoltC_RMat44_t * JoltC_CharacterVirtual_GetWorldTransform(
  JoltC_CharacterVirtual_t * self
);

JoltC_RMat44_t * JoltC_CharacterVirtual_GetCenterOfMassTransform(
  JoltC_CharacterVirtual_t * self
);

float JoltC_CharacterVirtual_GetMass(
  JoltC_CharacterVirtual_t * self
);

void JoltC_CharacterVirtual_SetMass(
  JoltC_CharacterVirtual_t * self,
  float inMass
);

float JoltC_CharacterVirtual_GetMaxStrength(
  JoltC_CharacterVirtual_t * self
);

void JoltC_CharacterVirtual_SetMaxStrength(
  JoltC_CharacterVirtual_t * self,
  float inMaxStrength
);

float JoltC_CharacterVirtual_GetPenetrationRecoverySpeed(
  JoltC_CharacterVirtual_t * self
);

void JoltC_CharacterVirtual_SetPenetrationRecoverySpeed(
  JoltC_CharacterVirtual_t * self,
  float inSpeed
);

float JoltC_CharacterVirtual_GetCharacterPadding(
  JoltC_CharacterVirtual_t * self
);

unsigned long JoltC_CharacterVirtual_GetMaxNumHits(
  JoltC_CharacterVirtual_t * self
);

void JoltC_CharacterVirtual_SetMaxNumHits(
  JoltC_CharacterVirtual_t * self,
  unsigned long inMaxHits
);

float JoltC_CharacterVirtual_GetHitReductionCosMaxAngle(
  JoltC_CharacterVirtual_t * self
);

void JoltC_CharacterVirtual_SetHitReductionCosMaxAngle(
  JoltC_CharacterVirtual_t * self,
  float inCosMaxAngle
);

bool JoltC_CharacterVirtual_GetMaxHitsExceeded(
  JoltC_CharacterVirtual_t * self
);

JoltC_Vec3_t * JoltC_CharacterVirtual_GetShapeOffset(
  JoltC_CharacterVirtual_t * self
);

void JoltC_CharacterVirtual_SetShapeOffset(
  JoltC_CharacterVirtual_t * self,
  JoltC_Vec3_t * inShapeOffset
);

unsigned long long int JoltC_CharacterVirtual_GetUserData(
  JoltC_CharacterVirtual_t * self
);

void JoltC_CharacterVirtual_SetUserData(
  JoltC_CharacterVirtual_t * self,
  unsigned long long int inUserData
);

JoltC_Vec3_t * JoltC_CharacterVirtual_CancelVelocityTowardsSteepSlopes(
  JoltC_CharacterVirtual_t * self,
  JoltC_Vec3_t * inDesiredVelocity
);

void JoltC_CharacterVirtual_Update(
  JoltC_CharacterVirtual_t * self,
  float inDeltaTime,
  JoltC_Vec3_t * inGravity,
  JoltC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  JoltC_ObjectLayerFilter_t * inObjectLayerFilter,
  JoltC_BodyFilter_t * inBodyFilter,
  JoltC_ShapeFilter_t * inShapeFilter,
  JoltC_TempAllocator_t * inAllocator
);

bool JoltC_CharacterVirtual_CanWalkStairs(
  JoltC_CharacterVirtual_t * self,
  JoltC_Vec3_t * inLinearVelocity
);

bool JoltC_CharacterVirtual_WalkStairs(
  JoltC_CharacterVirtual_t * self,
  float inDeltaTime,
  JoltC_Vec3_t * inStepUp,
  JoltC_Vec3_t * inStepForward,
  JoltC_Vec3_t * inStepForwardTest,
  JoltC_Vec3_t * inStepDownExtra,
  JoltC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  JoltC_ObjectLayerFilter_t * inObjectLayerFilter,
  JoltC_BodyFilter_t * inBodyFilter,
  JoltC_ShapeFilter_t * inShapeFilter,
  JoltC_TempAllocator_t * inAllocator
);

bool JoltC_CharacterVirtual_StickToFloor(
  JoltC_CharacterVirtual_t * self,
  JoltC_Vec3_t * inStepDown,
  JoltC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  JoltC_ObjectLayerFilter_t * inObjectLayerFilter,
  JoltC_BodyFilter_t * inBodyFilter,
  JoltC_ShapeFilter_t * inShapeFilter,
  JoltC_TempAllocator_t * inAllocator
);

void JoltC_CharacterVirtual_ExtendedUpdate(
  JoltC_CharacterVirtual_t * self,
  float inDeltaTime,
  JoltC_Vec3_t * inGravity,
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * inSettings,
  JoltC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  JoltC_ObjectLayerFilter_t * inObjectLayerFilter,
  JoltC_BodyFilter_t * inBodyFilter,
  JoltC_ShapeFilter_t * inShapeFilter,
  JoltC_TempAllocator_t * inAllocator
);

void JoltC_CharacterVirtual_RefreshContacts(
  JoltC_CharacterVirtual_t * self,
  JoltC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  JoltC_ObjectLayerFilter_t * inObjectLayerFilter,
  JoltC_BodyFilter_t * inBodyFilter,
  JoltC_ShapeFilter_t * inShapeFilter,
  JoltC_TempAllocator_t * inAllocator
);

void JoltC_CharacterVirtual_UpdateGroundVelocity(
  JoltC_CharacterVirtual_t * self
);

bool JoltC_CharacterVirtual_SetShape(
  JoltC_CharacterVirtual_t * self,
  JoltC_Shape_t * inShape,
  float inMaxPenetrationDepth,
  JoltC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  JoltC_ObjectLayerFilter_t * inObjectLayerFilter,
  JoltC_BodyFilter_t * inBodyFilter,
  JoltC_ShapeFilter_t * inShapeFilter,
  JoltC_TempAllocator_t * inAllocator
);

unsigned long JoltC_CharacterVirtual_GetRefCount(
  JoltC_CharacterVirtual_t * self
);

void JoltC_CharacterVirtual_AddRef(
  JoltC_CharacterVirtual_t * self
);

void JoltC_CharacterVirtual_Release(
  JoltC_CharacterVirtual_t * self
);

void JoltC_CharacterVirtual_SetMaxSlopeAngle(
  JoltC_CharacterVirtual_t * self,
  float inMaxSlopeAngle
);

float JoltC_CharacterVirtual_GetCosMaxSlopeAngle(
  JoltC_CharacterVirtual_t * self
);

void JoltC_CharacterVirtual_SetUp(
  JoltC_CharacterVirtual_t * self,
  JoltC_Vec3_t * inUp
);

JoltC_Vec3_t * JoltC_CharacterVirtual_GetUp(
  JoltC_CharacterVirtual_t * self
);

JoltC_Shape_t * JoltC_CharacterVirtual_GetShape(
  JoltC_CharacterVirtual_t * self
);

JoltC_EGroundState JoltC_CharacterVirtual_GetGroundState(
  JoltC_CharacterVirtual_t * self
);

bool JoltC_CharacterVirtual_IsSlopeTooSteep(
  JoltC_CharacterVirtual_t * self,
  JoltC_Vec3_t * inNormal
);

bool JoltC_CharacterVirtual_IsSupported(
  JoltC_CharacterVirtual_t * self
);

JoltC_RVec3_t * JoltC_CharacterVirtual_GetGroundPosition(
  JoltC_CharacterVirtual_t * self
);

JoltC_Vec3_t * JoltC_CharacterVirtual_GetGroundNormal(
  JoltC_CharacterVirtual_t * self
);

JoltC_Vec3_t * JoltC_CharacterVirtual_GetGroundVelocity(
  JoltC_CharacterVirtual_t * self
);

JoltC_PhysicsMaterial_t * JoltC_CharacterVirtual_GetGroundMaterial(
  JoltC_CharacterVirtual_t * self
);

JoltC_BodyID_t * JoltC_CharacterVirtual_GetGroundBodyID(
  JoltC_CharacterVirtual_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

