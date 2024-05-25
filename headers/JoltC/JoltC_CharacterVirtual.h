#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CharacterVirtual_t * JoltC_CharacterVirtual_new(
  const JoltC_CharacterVirtualSettings_t * inSettings,
  JoltC_RVec3_t * inPosition,
  JoltC_Quat_t * inRotation,
  JoltC_PhysicsSystem_t * inSystem,
  char** outErrMsg
);

//endregion constructors

//region functions

void JoltC_CharacterVirtual_SetListener(
  JoltC_CharacterVirtual_t * self,
  JoltC_CharacterContactListener_t * inListener,
  char** outErrMsg
);

JoltC_CharacterContactListener_t * JoltC_CharacterVirtual_GetListener(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_CharacterVirtual_GetLinearVelocity(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
);

void JoltC_CharacterVirtual_SetLinearVelocity(
  JoltC_CharacterVirtual_t * self,
  const JoltC_Vec3_t * inLinearVelocity,
  char** outErrMsg
);

JoltC_RVec3_t * JoltC_CharacterVirtual_GetPosition(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
);

void JoltC_CharacterVirtual_SetPosition(
  JoltC_CharacterVirtual_t * self,
  const JoltC_RVec3_t * inPosition,
  char** outErrMsg
);

JoltC_Quat_t * JoltC_CharacterVirtual_GetRotation(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
);

void JoltC_CharacterVirtual_SetRotation(
  JoltC_CharacterVirtual_t * self,
  const JoltC_Quat_t * inRotation,
  char** outErrMsg
);

JoltC_RMat44_t * JoltC_CharacterVirtual_GetWorldTransform(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
);

JoltC_RMat44_t * JoltC_CharacterVirtual_GetCenterOfMassTransform(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
);

float JoltC_CharacterVirtual_GetMass(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
);

void JoltC_CharacterVirtual_SetMass(
  JoltC_CharacterVirtual_t * self,
  float inMass,
  char** outErrMsg
);

float JoltC_CharacterVirtual_GetMaxStrength(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
);

void JoltC_CharacterVirtual_SetMaxStrength(
  JoltC_CharacterVirtual_t * self,
  float inMaxStrength,
  char** outErrMsg
);

float JoltC_CharacterVirtual_GetPenetrationRecoverySpeed(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
);

void JoltC_CharacterVirtual_SetPenetrationRecoverySpeed(
  JoltC_CharacterVirtual_t * self,
  float inSpeed,
  char** outErrMsg
);

float JoltC_CharacterVirtual_GetCharacterPadding(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
);

unsigned long JoltC_CharacterVirtual_GetMaxNumHits(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
);

void JoltC_CharacterVirtual_SetMaxNumHits(
  JoltC_CharacterVirtual_t * self,
  unsigned long inMaxHits,
  char** outErrMsg
);

float JoltC_CharacterVirtual_GetHitReductionCosMaxAngle(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
);

void JoltC_CharacterVirtual_SetHitReductionCosMaxAngle(
  JoltC_CharacterVirtual_t * self,
  float inCosMaxAngle,
  char** outErrMsg
);

bool JoltC_CharacterVirtual_GetMaxHitsExceeded(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_CharacterVirtual_GetShapeOffset(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
);

void JoltC_CharacterVirtual_SetShapeOffset(
  JoltC_CharacterVirtual_t * self,
  const JoltC_Vec3_t * inShapeOffset,
  char** outErrMsg
);

unsigned long long int JoltC_CharacterVirtual_GetUserData(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
);

void JoltC_CharacterVirtual_SetUserData(
  JoltC_CharacterVirtual_t * self,
  unsigned long long int inUserData,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_CharacterVirtual_CancelVelocityTowardsSteepSlopes(
  JoltC_CharacterVirtual_t * self,
  const JoltC_Vec3_t * inDesiredVelocity,
  char** outErrMsg
);

void JoltC_CharacterVirtual_Update(
  JoltC_CharacterVirtual_t * self,
  float inDeltaTime,
  const JoltC_Vec3_t * inGravity,
  const JoltC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  const JoltC_ObjectLayerFilter_t * inObjectLayerFilter,
  const JoltC_BodyFilter_t * inBodyFilter,
  const JoltC_ShapeFilter_t * inShapeFilter,
  JoltC_TempAllocator_t * inAllocator,
  char** outErrMsg
);

bool JoltC_CharacterVirtual_CanWalkStairs(
  JoltC_CharacterVirtual_t * self,
  const JoltC_Vec3_t * inLinearVelocity,
  char** outErrMsg
);

bool JoltC_CharacterVirtual_WalkStairs(
  JoltC_CharacterVirtual_t * self,
  float inDeltaTime,
  const JoltC_Vec3_t * inStepUp,
  const JoltC_Vec3_t * inStepForward,
  const JoltC_Vec3_t * inStepForwardTest,
  const JoltC_Vec3_t * inStepDownExtra,
  const JoltC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  const JoltC_ObjectLayerFilter_t * inObjectLayerFilter,
  const JoltC_BodyFilter_t * inBodyFilter,
  const JoltC_ShapeFilter_t * inShapeFilter,
  JoltC_TempAllocator_t * inAllocator,
  char** outErrMsg
);

bool JoltC_CharacterVirtual_StickToFloor(
  JoltC_CharacterVirtual_t * self,
  const JoltC_Vec3_t * inStepDown,
  const JoltC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  const JoltC_ObjectLayerFilter_t * inObjectLayerFilter,
  const JoltC_BodyFilter_t * inBodyFilter,
  const JoltC_ShapeFilter_t * inShapeFilter,
  JoltC_TempAllocator_t * inAllocator,
  char** outErrMsg
);

void JoltC_CharacterVirtual_ExtendedUpdate(
  JoltC_CharacterVirtual_t * self,
  float inDeltaTime,
  const JoltC_Vec3_t * inGravity,
  const JoltC_CharacterVirtual_ExtendedUpdateSettings_t * inSettings,
  const JoltC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  const JoltC_ObjectLayerFilter_t * inObjectLayerFilter,
  const JoltC_BodyFilter_t * inBodyFilter,
  const JoltC_ShapeFilter_t * inShapeFilter,
  JoltC_TempAllocator_t * inAllocator,
  char** outErrMsg
);

void JoltC_CharacterVirtual_RefreshContacts(
  JoltC_CharacterVirtual_t * self,
  const JoltC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  const JoltC_ObjectLayerFilter_t * inObjectLayerFilter,
  const JoltC_BodyFilter_t * inBodyFilter,
  const JoltC_ShapeFilter_t * inShapeFilter,
  JoltC_TempAllocator_t * inAllocator,
  char** outErrMsg
);

void JoltC_CharacterVirtual_UpdateGroundVelocity(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
);

bool JoltC_CharacterVirtual_SetShape(
  JoltC_CharacterVirtual_t * self,
  const JoltC_Shape_t * inShape,
  float inMaxPenetrationDepth,
  const JoltC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  const JoltC_ObjectLayerFilter_t * inObjectLayerFilter,
  const JoltC_BodyFilter_t * inBodyFilter,
  const JoltC_ShapeFilter_t * inShapeFilter,
  JoltC_TempAllocator_t * inAllocator,
  char** outErrMsg
);

unsigned long JoltC_CharacterVirtual_GetRefCount(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
);

void JoltC_CharacterVirtual_AddRef(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
);

void JoltC_CharacterVirtual_Release(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
);

void JoltC_CharacterVirtual_SetMaxSlopeAngle(
  JoltC_CharacterVirtual_t * self,
  float inMaxSlopeAngle,
  char** outErrMsg
);

float JoltC_CharacterVirtual_GetCosMaxSlopeAngle(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
);

void JoltC_CharacterVirtual_SetUp(
  JoltC_CharacterVirtual_t * self,
  const JoltC_Vec3_t * inUp,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_CharacterVirtual_GetUp(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
);

const JoltC_Shape_t * JoltC_CharacterVirtual_GetShape(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
);

JoltC_EGroundState JoltC_CharacterVirtual_GetGroundState(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
);

bool JoltC_CharacterVirtual_IsSlopeTooSteep(
  JoltC_CharacterVirtual_t * self,
  JoltC_Vec3_t * inNormal,
  char** outErrMsg
);

bool JoltC_CharacterVirtual_IsSupported(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
);

JoltC_RVec3_t * JoltC_CharacterVirtual_GetGroundPosition(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_CharacterVirtual_GetGroundNormal(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_CharacterVirtual_GetGroundVelocity(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
);

const JoltC_PhysicsMaterial_t * JoltC_CharacterVirtual_GetGroundMaterial(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
);

JoltC_BodyID_t * JoltC_CharacterVirtual_GetGroundBodyID(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

