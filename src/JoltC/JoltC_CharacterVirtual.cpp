#include "JoltC/JoltC_CharacterVirtual.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `CharacterVirtual` instance.
 */
JoltC_CharacterVirtual_t * JoltC_CharacterVirtual_new(
  JoltC_CharacterVirtualSettings_t * inSettings,
  JoltC_RVec3_t * inPosition,
  JoltC_Quat_t * inRotation,
  JoltC_PhysicsSystem_t * inSystem
) {
  const CharacterVirtualSettings * inSettingsCpp = static_cast<const CharacterVirtualSettings *>(inSettings->obj);
  RVec3 * inPositionCpp = static_cast<RVec3 *>(inPosition->obj);
  Quat * inRotationCpp = static_cast<Quat *>(inRotation->obj);
  PhysicsSystem * inSystemCpp = static_cast<PhysicsSystem *>(inSystem->obj);
  JoltC_CharacterVirtual_t * cInstance = new JoltC_CharacterVirtual_t();
  CharacterVirtual * cppInstance = new CharacterVirtual(
    inSettingsCpp,
    *inPositionCpp,
    *inRotationCpp,
    inSystemCpp
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_CharacterVirtual_destroy(
  JoltC_CharacterVirtual_t * self
){
  if (self == NULL) return;
  delete static_cast<CharacterVirtual *>(self->obj);
  free(self);
}

//endregion
//region functions

void JoltC_CharacterVirtual_SetListener(
  JoltC_CharacterVirtual_t * self,
  JoltC_CharacterContactListener_t * inListener
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  CharacterContactListener * inListenerCpp = static_cast<CharacterContactListener *>(inListener->obj);
  selfCpp->SetListener(
    inListenerCpp
  );
}

JoltC_CharacterContactListener_t * JoltC_CharacterVirtual_GetListener(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  const CharacterContactListener * resultPtr = selfCpp->GetListener();
  JoltC_CharacterContactListener_t * result = new JoltC_CharacterContactListener_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_Vec3_t * JoltC_CharacterVirtual_GetLinearVelocity(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetLinearVelocity();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_CharacterVirtual_SetLinearVelocity(
  JoltC_CharacterVirtual_t * self,
  JoltC_Vec3_t * inLinearVelocity
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  const Vec3 * inLinearVelocityCpp = static_cast<const Vec3 *>(inLinearVelocity->obj);
  selfCpp->SetLinearVelocity(
    *inLinearVelocityCpp
  );
}

JoltC_RVec3_t * JoltC_CharacterVirtual_GetPosition(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  RVec3 * resultPtr = new RVec3();
  *resultPtr = selfCpp->GetPosition();
  JoltC_RVec3_t * result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_CharacterVirtual_SetPosition(
  JoltC_CharacterVirtual_t * self,
  JoltC_RVec3_t * inPosition
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  const RVec3 * inPositionCpp = static_cast<const RVec3 *>(inPosition->obj);
  selfCpp->SetPosition(
    *inPositionCpp
  );
}

JoltC_Quat_t * JoltC_CharacterVirtual_GetRotation(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  Quat * resultPtr = new Quat();
  *resultPtr = selfCpp->GetRotation();
  JoltC_Quat_t * result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_CharacterVirtual_SetRotation(
  JoltC_CharacterVirtual_t * self,
  JoltC_Quat_t * inRotation
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  const Quat * inRotationCpp = static_cast<const Quat *>(inRotation->obj);
  selfCpp->SetRotation(
    *inRotationCpp
  );
}

JoltC_RMat44_t * JoltC_CharacterVirtual_GetWorldTransform(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  RMat44 * resultPtr = new RMat44();
  *resultPtr = selfCpp->GetWorldTransform();
  JoltC_RMat44_t * result = new JoltC_RMat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_RMat44_t * JoltC_CharacterVirtual_GetCenterOfMassTransform(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  RMat44 * resultPtr = new RMat44();
  *resultPtr = selfCpp->GetCenterOfMassTransform();
  JoltC_RMat44_t * result = new JoltC_RMat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

float JoltC_CharacterVirtual_GetMass(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  return selfCpp->GetMass();
}

void JoltC_CharacterVirtual_SetMass(
  JoltC_CharacterVirtual_t * self,
  float inMass
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  selfCpp->SetMass(
    inMass
  );
}

float JoltC_CharacterVirtual_GetMaxStrength(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  return selfCpp->GetMaxStrength();
}

void JoltC_CharacterVirtual_SetMaxStrength(
  JoltC_CharacterVirtual_t * self,
  float inMaxStrength
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  selfCpp->SetMaxStrength(
    inMaxStrength
  );
}

float JoltC_CharacterVirtual_GetPenetrationRecoverySpeed(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  return selfCpp->GetPenetrationRecoverySpeed();
}

void JoltC_CharacterVirtual_SetPenetrationRecoverySpeed(
  JoltC_CharacterVirtual_t * self,
  float inSpeed
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  selfCpp->SetPenetrationRecoverySpeed(
    inSpeed
  );
}

float JoltC_CharacterVirtual_GetCharacterPadding(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  return selfCpp->GetCharacterPadding();
}

unsigned long JoltC_CharacterVirtual_GetMaxNumHits(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  return selfCpp->GetMaxNumHits();
}

void JoltC_CharacterVirtual_SetMaxNumHits(
  JoltC_CharacterVirtual_t * self,
  unsigned long inMaxHits
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  selfCpp->SetMaxNumHits(
    inMaxHits
  );
}

float JoltC_CharacterVirtual_GetHitReductionCosMaxAngle(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  return selfCpp->GetHitReductionCosMaxAngle();
}

void JoltC_CharacterVirtual_SetHitReductionCosMaxAngle(
  JoltC_CharacterVirtual_t * self,
  float inCosMaxAngle
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  selfCpp->SetHitReductionCosMaxAngle(
    inCosMaxAngle
  );
}

bool JoltC_CharacterVirtual_GetMaxHitsExceeded(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  return selfCpp->GetMaxHitsExceeded();
}

JoltC_Vec3_t * JoltC_CharacterVirtual_GetShapeOffset(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetShapeOffset();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_CharacterVirtual_SetShapeOffset(
  JoltC_CharacterVirtual_t * self,
  JoltC_Vec3_t * inShapeOffset
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  const Vec3 * inShapeOffsetCpp = static_cast<const Vec3 *>(inShapeOffset->obj);
  selfCpp->SetShapeOffset(
    *inShapeOffsetCpp
  );
}

unsigned long long int JoltC_CharacterVirtual_GetUserData(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  return selfCpp->GetUserData();
}

void JoltC_CharacterVirtual_SetUserData(
  JoltC_CharacterVirtual_t * self,
  unsigned long long int inUserData
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  selfCpp->SetUserData(
    inUserData
  );
}

JoltC_Vec3_t * JoltC_CharacterVirtual_CancelVelocityTowardsSteepSlopes(
  JoltC_CharacterVirtual_t * self,
  JoltC_Vec3_t * inDesiredVelocity
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  const Vec3 * inDesiredVelocityCpp = static_cast<const Vec3 *>(inDesiredVelocity->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->CancelVelocityTowardsSteepSlopes(
    *inDesiredVelocityCpp
  );
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_CharacterVirtual_Update(
  JoltC_CharacterVirtual_t * self,
  float inDeltaTime,
  JoltC_Vec3_t * inGravity,
  JoltC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  JoltC_ObjectLayerFilter_t * inObjectLayerFilter,
  JoltC_BodyFilter_t * inBodyFilter,
  JoltC_ShapeFilter_t * inShapeFilter,
  JoltC_TempAllocator_t * inAllocator
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  const Vec3 * inGravityCpp = static_cast<const Vec3 *>(inGravity->obj);
  const BroadPhaseLayerFilter * inBroadPhaseLayerFilterCpp = static_cast<const BroadPhaseLayerFilter *>(inBroadPhaseLayerFilter->obj);
  const ObjectLayerFilter * inObjectLayerFilterCpp = static_cast<const ObjectLayerFilter *>(inObjectLayerFilter->obj);
  const BodyFilter * inBodyFilterCpp = static_cast<const BodyFilter *>(inBodyFilter->obj);
  const ShapeFilter * inShapeFilterCpp = static_cast<const ShapeFilter *>(inShapeFilter->obj);
  TempAllocator * inAllocatorCpp = static_cast<TempAllocator *>(inAllocator->obj);
  selfCpp->Update(
    inDeltaTime,
    *inGravityCpp,
    *inBroadPhaseLayerFilterCpp,
    *inObjectLayerFilterCpp,
    *inBodyFilterCpp,
    *inShapeFilterCpp,
    *inAllocatorCpp
  );
}

bool JoltC_CharacterVirtual_CanWalkStairs(
  JoltC_CharacterVirtual_t * self,
  JoltC_Vec3_t * inLinearVelocity
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  const Vec3 * inLinearVelocityCpp = static_cast<const Vec3 *>(inLinearVelocity->obj);
  return selfCpp->CanWalkStairs(
    *inLinearVelocityCpp
  );
}

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
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  const Vec3 * inStepUpCpp = static_cast<const Vec3 *>(inStepUp->obj);
  const Vec3 * inStepForwardCpp = static_cast<const Vec3 *>(inStepForward->obj);
  const Vec3 * inStepForwardTestCpp = static_cast<const Vec3 *>(inStepForwardTest->obj);
  const Vec3 * inStepDownExtraCpp = static_cast<const Vec3 *>(inStepDownExtra->obj);
  const BroadPhaseLayerFilter * inBroadPhaseLayerFilterCpp = static_cast<const BroadPhaseLayerFilter *>(inBroadPhaseLayerFilter->obj);
  const ObjectLayerFilter * inObjectLayerFilterCpp = static_cast<const ObjectLayerFilter *>(inObjectLayerFilter->obj);
  const BodyFilter * inBodyFilterCpp = static_cast<const BodyFilter *>(inBodyFilter->obj);
  const ShapeFilter * inShapeFilterCpp = static_cast<const ShapeFilter *>(inShapeFilter->obj);
  TempAllocator * inAllocatorCpp = static_cast<TempAllocator *>(inAllocator->obj);
  return selfCpp->WalkStairs(
    inDeltaTime,
    *inStepUpCpp,
    *inStepForwardCpp,
    *inStepForwardTestCpp,
    *inStepDownExtraCpp,
    *inBroadPhaseLayerFilterCpp,
    *inObjectLayerFilterCpp,
    *inBodyFilterCpp,
    *inShapeFilterCpp,
    *inAllocatorCpp
  );
}

bool JoltC_CharacterVirtual_StickToFloor(
  JoltC_CharacterVirtual_t * self,
  JoltC_Vec3_t * inStepDown,
  JoltC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  JoltC_ObjectLayerFilter_t * inObjectLayerFilter,
  JoltC_BodyFilter_t * inBodyFilter,
  JoltC_ShapeFilter_t * inShapeFilter,
  JoltC_TempAllocator_t * inAllocator
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  const Vec3 * inStepDownCpp = static_cast<const Vec3 *>(inStepDown->obj);
  const BroadPhaseLayerFilter * inBroadPhaseLayerFilterCpp = static_cast<const BroadPhaseLayerFilter *>(inBroadPhaseLayerFilter->obj);
  const ObjectLayerFilter * inObjectLayerFilterCpp = static_cast<const ObjectLayerFilter *>(inObjectLayerFilter->obj);
  const BodyFilter * inBodyFilterCpp = static_cast<const BodyFilter *>(inBodyFilter->obj);
  const ShapeFilter * inShapeFilterCpp = static_cast<const ShapeFilter *>(inShapeFilter->obj);
  TempAllocator * inAllocatorCpp = static_cast<TempAllocator *>(inAllocator->obj);
  return selfCpp->StickToFloor(
    *inStepDownCpp,
    *inBroadPhaseLayerFilterCpp,
    *inObjectLayerFilterCpp,
    *inBodyFilterCpp,
    *inShapeFilterCpp,
    *inAllocatorCpp
  );
}

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
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  const Vec3 * inGravityCpp = static_cast<const Vec3 *>(inGravity->obj);
  const CharacterVirtual::ExtendedUpdateSettings * inSettingsCpp = static_cast<const CharacterVirtual::ExtendedUpdateSettings *>(inSettings->obj);
  const BroadPhaseLayerFilter * inBroadPhaseLayerFilterCpp = static_cast<const BroadPhaseLayerFilter *>(inBroadPhaseLayerFilter->obj);
  const ObjectLayerFilter * inObjectLayerFilterCpp = static_cast<const ObjectLayerFilter *>(inObjectLayerFilter->obj);
  const BodyFilter * inBodyFilterCpp = static_cast<const BodyFilter *>(inBodyFilter->obj);
  const ShapeFilter * inShapeFilterCpp = static_cast<const ShapeFilter *>(inShapeFilter->obj);
  TempAllocator * inAllocatorCpp = static_cast<TempAllocator *>(inAllocator->obj);
  selfCpp->ExtendedUpdate(
    inDeltaTime,
    *inGravityCpp,
    *inSettingsCpp,
    *inBroadPhaseLayerFilterCpp,
    *inObjectLayerFilterCpp,
    *inBodyFilterCpp,
    *inShapeFilterCpp,
    *inAllocatorCpp
  );
}

void JoltC_CharacterVirtual_RefreshContacts(
  JoltC_CharacterVirtual_t * self,
  JoltC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  JoltC_ObjectLayerFilter_t * inObjectLayerFilter,
  JoltC_BodyFilter_t * inBodyFilter,
  JoltC_ShapeFilter_t * inShapeFilter,
  JoltC_TempAllocator_t * inAllocator
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  const BroadPhaseLayerFilter * inBroadPhaseLayerFilterCpp = static_cast<const BroadPhaseLayerFilter *>(inBroadPhaseLayerFilter->obj);
  const ObjectLayerFilter * inObjectLayerFilterCpp = static_cast<const ObjectLayerFilter *>(inObjectLayerFilter->obj);
  const BodyFilter * inBodyFilterCpp = static_cast<const BodyFilter *>(inBodyFilter->obj);
  const ShapeFilter * inShapeFilterCpp = static_cast<const ShapeFilter *>(inShapeFilter->obj);
  TempAllocator * inAllocatorCpp = static_cast<TempAllocator *>(inAllocator->obj);
  selfCpp->RefreshContacts(
    *inBroadPhaseLayerFilterCpp,
    *inObjectLayerFilterCpp,
    *inBodyFilterCpp,
    *inShapeFilterCpp,
    *inAllocatorCpp
  );
}

void JoltC_CharacterVirtual_UpdateGroundVelocity(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  selfCpp->UpdateGroundVelocity();
}

bool JoltC_CharacterVirtual_SetShape(
  JoltC_CharacterVirtual_t * self,
  JoltC_Shape_t * inShape,
  float inMaxPenetrationDepth,
  JoltC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  JoltC_ObjectLayerFilter_t * inObjectLayerFilter,
  JoltC_BodyFilter_t * inBodyFilter,
  JoltC_ShapeFilter_t * inShapeFilter,
  JoltC_TempAllocator_t * inAllocator
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  const Shape * inShapeCpp = static_cast<const Shape *>(inShape->obj);
  const BroadPhaseLayerFilter * inBroadPhaseLayerFilterCpp = static_cast<const BroadPhaseLayerFilter *>(inBroadPhaseLayerFilter->obj);
  const ObjectLayerFilter * inObjectLayerFilterCpp = static_cast<const ObjectLayerFilter *>(inObjectLayerFilter->obj);
  const BodyFilter * inBodyFilterCpp = static_cast<const BodyFilter *>(inBodyFilter->obj);
  const ShapeFilter * inShapeFilterCpp = static_cast<const ShapeFilter *>(inShapeFilter->obj);
  TempAllocator * inAllocatorCpp = static_cast<TempAllocator *>(inAllocator->obj);
  return selfCpp->SetShape(
    inShapeCpp,
    inMaxPenetrationDepth,
    *inBroadPhaseLayerFilterCpp,
    *inObjectLayerFilterCpp,
    *inBodyFilterCpp,
    *inShapeFilterCpp,
    *inAllocatorCpp
  );
}

unsigned long JoltC_CharacterVirtual_GetRefCount(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_CharacterVirtual_AddRef(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_CharacterVirtual_Release(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  selfCpp->Release();
}

void JoltC_CharacterVirtual_SetMaxSlopeAngle(
  JoltC_CharacterVirtual_t * self,
  float inMaxSlopeAngle
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  selfCpp->SetMaxSlopeAngle(
    inMaxSlopeAngle
  );
}

float JoltC_CharacterVirtual_GetCosMaxSlopeAngle(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  return selfCpp->GetCosMaxSlopeAngle();
}

void JoltC_CharacterVirtual_SetUp(
  JoltC_CharacterVirtual_t * self,
  JoltC_Vec3_t * inUp
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  const Vec3 * inUpCpp = static_cast<const Vec3 *>(inUp->obj);
  selfCpp->SetUp(
    *inUpCpp
  );
}

JoltC_Vec3_t * JoltC_CharacterVirtual_GetUp(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetUp();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Shape_t * JoltC_CharacterVirtual_GetShape(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  const Shape * resultPtr = selfCpp->GetShape();
  JoltC_Shape_t * result = new JoltC_Shape_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_EGroundState JoltC_CharacterVirtual_GetGroundState(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  EGroundState result = selfCpp->GetGroundState();
  return static_cast<JoltC_EGroundState>(static_cast<int>(result));
}

bool JoltC_CharacterVirtual_IsSlopeTooSteep(
  JoltC_CharacterVirtual_t * self,
  JoltC_Vec3_t * inNormal
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  Vec3 * inNormalCpp = static_cast<Vec3 *>(inNormal->obj);
  return selfCpp->IsSlopeTooSteep(
    *inNormalCpp
  );
}

bool JoltC_CharacterVirtual_IsSupported(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  return selfCpp->IsSupported();
}

JoltC_RVec3_t * JoltC_CharacterVirtual_GetGroundPosition(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  RVec3 * resultPtr = new RVec3();
  *resultPtr = selfCpp->GetGroundPosition();
  JoltC_RVec3_t * result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_CharacterVirtual_GetGroundNormal(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetGroundNormal();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_CharacterVirtual_GetGroundVelocity(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetGroundVelocity();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_PhysicsMaterial_t * JoltC_CharacterVirtual_GetGroundMaterial(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  const PhysicsMaterial * resultPtr = selfCpp->GetGroundMaterial();
  JoltC_PhysicsMaterial_t * result = new JoltC_PhysicsMaterial_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_BodyID_t * JoltC_CharacterVirtual_GetGroundBodyID(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  BodyID * resultPtr = new BodyID();
  *resultPtr = selfCpp->GetGroundBodyID();
  JoltC_BodyID_t * result = new JoltC_BodyID_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

//endregion


#ifdef __cplusplus
}
#endif
