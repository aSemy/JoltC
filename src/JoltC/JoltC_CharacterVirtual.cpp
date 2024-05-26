#include "JoltC/JoltC_CharacterVirtual.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CharacterVirtual_t * JoltC_CharacterVirtual_new(
  const JoltC_CharacterVirtualSettings_t * inSettings,
  JoltC_RVec3_t * inPosition,
  JoltC_Quat_t * inRotation,
  JoltC_PhysicsSystem_t * inSystem
) {
  JoltC_CharacterVirtual_t * cInstance = new JoltC_CharacterVirtual_t();
  CharacterVirtual * cppInstance = new CharacterVirtual(
    reinterpret_cast<CharacterVirtualSettings *>(inSettings->obj),
    *reinterpret_cast<RVec3 *>(inPosition->obj),
    *reinterpret_cast<Quat *>(inRotation->obj),
    reinterpret_cast<PhysicsSystem *>(inSystem->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

void JoltC_CharacterVirtual_SetListener(
  JoltC_CharacterVirtual_t * self,
  JoltC_CharacterContactListener_t * inListener
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  
  selfCpp->SetListener(
  reinterpret_cast<CharacterContactListener *>(inListener->obj)
  );
};

JoltC_CharacterContactListener_t * JoltC_CharacterVirtual_GetListener(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  CharacterContactListener * result = selfCpp->GetListener();
  return reinterpret_cast<JoltC_CharacterContactListener_t *>(result);
};

JoltC_Vec3_t * JoltC_CharacterVirtual_GetLinearVelocity(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  Vec3 resultValue = selfCpp->GetLinearVelocity();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_CharacterVirtual_SetLinearVelocity(
  JoltC_CharacterVirtual_t * self,
  const JoltC_Vec3_t * inLinearVelocity
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  
  selfCpp->SetLinearVelocity(
  *reinterpret_cast<Vec3 *>(inLinearVelocity->obj)
  );
};

JoltC_RVec3_t * JoltC_CharacterVirtual_GetPosition(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  RVec3 resultValue = selfCpp->GetPosition();
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JoltC_RVec3_t *>(result);
};

void JoltC_CharacterVirtual_SetPosition(
  JoltC_CharacterVirtual_t * self,
  const JoltC_RVec3_t * inPosition
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  
  selfCpp->SetPosition(
  *reinterpret_cast<RVec3 *>(inPosition->obj)
  );
};

JoltC_Quat_t * JoltC_CharacterVirtual_GetRotation(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  Quat resultValue = selfCpp->GetRotation();
  Quat* result = new Quat(resultValue);
  return reinterpret_cast<JoltC_Quat_t *>(result);
};

void JoltC_CharacterVirtual_SetRotation(
  JoltC_CharacterVirtual_t * self,
  const JoltC_Quat_t * inRotation
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  
  selfCpp->SetRotation(
  *reinterpret_cast<Quat *>(inRotation->obj)
  );
};

JoltC_RMat44_t * JoltC_CharacterVirtual_GetWorldTransform(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  RMat44 resultValue = selfCpp->GetWorldTransform();
  RMat44* result = new RMat44(resultValue);
  return reinterpret_cast<JoltC_RMat44_t *>(result);
};

JoltC_RMat44_t * JoltC_CharacterVirtual_GetCenterOfMassTransform(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  RMat44 resultValue = selfCpp->GetCenterOfMassTransform();
  RMat44* result = new RMat44(resultValue);
  return reinterpret_cast<JoltC_RMat44_t *>(result);
};

float JoltC_CharacterVirtual_GetMass(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  float result = selfCpp->GetMass();
  return result;
};

void JoltC_CharacterVirtual_SetMass(
  JoltC_CharacterVirtual_t * self,
  float inMass
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  
  selfCpp->SetMass(
  inMass
  );
};

float JoltC_CharacterVirtual_GetMaxStrength(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  float result = selfCpp->GetMaxStrength();
  return result;
};

void JoltC_CharacterVirtual_SetMaxStrength(
  JoltC_CharacterVirtual_t * self,
  float inMaxStrength
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  
  selfCpp->SetMaxStrength(
  inMaxStrength
  );
};

float JoltC_CharacterVirtual_GetPenetrationRecoverySpeed(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  float result = selfCpp->GetPenetrationRecoverySpeed();
  return result;
};

void JoltC_CharacterVirtual_SetPenetrationRecoverySpeed(
  JoltC_CharacterVirtual_t * self,
  float inSpeed
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  
  selfCpp->SetPenetrationRecoverySpeed(
  inSpeed
  );
};

float JoltC_CharacterVirtual_GetCharacterPadding(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  float result = selfCpp->GetCharacterPadding();
  return result;
};

unsigned long JoltC_CharacterVirtual_GetMaxNumHits(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  unsigned long result = selfCpp->GetMaxNumHits();
  return result;
};

void JoltC_CharacterVirtual_SetMaxNumHits(
  JoltC_CharacterVirtual_t * self,
  unsigned long inMaxHits
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  
  selfCpp->SetMaxNumHits(
  inMaxHits
  );
};

float JoltC_CharacterVirtual_GetHitReductionCosMaxAngle(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  float result = selfCpp->GetHitReductionCosMaxAngle();
  return result;
};

void JoltC_CharacterVirtual_SetHitReductionCosMaxAngle(
  JoltC_CharacterVirtual_t * self,
  float inCosMaxAngle
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  
  selfCpp->SetHitReductionCosMaxAngle(
  inCosMaxAngle
  );
};

bool JoltC_CharacterVirtual_GetMaxHitsExceeded(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  bool result = selfCpp->GetMaxHitsExceeded();
  return result;
};

JoltC_Vec3_t * JoltC_CharacterVirtual_GetShapeOffset(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  Vec3 resultValue = selfCpp->GetShapeOffset();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_CharacterVirtual_SetShapeOffset(
  JoltC_CharacterVirtual_t * self,
  const JoltC_Vec3_t * inShapeOffset
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  
  selfCpp->SetShapeOffset(
  *reinterpret_cast<Vec3 *>(inShapeOffset->obj)
  );
};

unsigned long long int JoltC_CharacterVirtual_GetUserData(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JoltC_CharacterVirtual_SetUserData(
  JoltC_CharacterVirtual_t * self,
  unsigned long long int inUserData
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  
  selfCpp->SetUserData(
  inUserData
  );
};

JoltC_Vec3_t * JoltC_CharacterVirtual_CancelVelocityTowardsSteepSlopes(
  JoltC_CharacterVirtual_t * self,
  const JoltC_Vec3_t * inDesiredVelocity
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  Vec3 resultValue = selfCpp->CancelVelocityTowardsSteepSlopes(
  *reinterpret_cast<Vec3 *>(inDesiredVelocity->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_CharacterVirtual_Update(
  JoltC_CharacterVirtual_t * self,
  float inDeltaTime,
  const JoltC_Vec3_t * inGravity,
  const JoltC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  const JoltC_ObjectLayerFilter_t * inObjectLayerFilter,
  const JoltC_BodyFilter_t * inBodyFilter,
  const JoltC_ShapeFilter_t * inShapeFilter,
  JoltC_TempAllocator_t * inAllocator
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  
  selfCpp->Update(
  inDeltaTime,
  *reinterpret_cast<Vec3 *>(inGravity->obj),
  *reinterpret_cast<BroadPhaseLayerFilter *>(inBroadPhaseLayerFilter->obj),
  *reinterpret_cast<ObjectLayerFilter *>(inObjectLayerFilter->obj),
  *reinterpret_cast<BodyFilter *>(inBodyFilter->obj),
  *reinterpret_cast<ShapeFilter *>(inShapeFilter->obj),
  *reinterpret_cast<TempAllocator *>(inAllocator->obj)
  );
};

bool JoltC_CharacterVirtual_CanWalkStairs(
  JoltC_CharacterVirtual_t * self,
  const JoltC_Vec3_t * inLinearVelocity
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  bool result = selfCpp->CanWalkStairs(
  *reinterpret_cast<Vec3 *>(inLinearVelocity->obj)
  );
  return result;
};

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
  JoltC_TempAllocator_t * inAllocator
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  bool result = selfCpp->WalkStairs(
  inDeltaTime,
  *reinterpret_cast<Vec3 *>(inStepUp->obj),
  *reinterpret_cast<Vec3 *>(inStepForward->obj),
  *reinterpret_cast<Vec3 *>(inStepForwardTest->obj),
  *reinterpret_cast<Vec3 *>(inStepDownExtra->obj),
  *reinterpret_cast<BroadPhaseLayerFilter *>(inBroadPhaseLayerFilter->obj),
  *reinterpret_cast<ObjectLayerFilter *>(inObjectLayerFilter->obj),
  *reinterpret_cast<BodyFilter *>(inBodyFilter->obj),
  *reinterpret_cast<ShapeFilter *>(inShapeFilter->obj),
  *reinterpret_cast<TempAllocator *>(inAllocator->obj)
  );
  return result;
};

bool JoltC_CharacterVirtual_StickToFloor(
  JoltC_CharacterVirtual_t * self,
  const JoltC_Vec3_t * inStepDown,
  const JoltC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  const JoltC_ObjectLayerFilter_t * inObjectLayerFilter,
  const JoltC_BodyFilter_t * inBodyFilter,
  const JoltC_ShapeFilter_t * inShapeFilter,
  JoltC_TempAllocator_t * inAllocator
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  bool result = selfCpp->StickToFloor(
  *reinterpret_cast<Vec3 *>(inStepDown->obj),
  *reinterpret_cast<BroadPhaseLayerFilter *>(inBroadPhaseLayerFilter->obj),
  *reinterpret_cast<ObjectLayerFilter *>(inObjectLayerFilter->obj),
  *reinterpret_cast<BodyFilter *>(inBodyFilter->obj),
  *reinterpret_cast<ShapeFilter *>(inShapeFilter->obj),
  *reinterpret_cast<TempAllocator *>(inAllocator->obj)
  );
  return result;
};

void JoltC_CharacterVirtual_ExtendedUpdate(
  JoltC_CharacterVirtual_t * self,
  float inDeltaTime,
  const JoltC_Vec3_t * inGravity,
  const JoltC_CharacterVirtual_ExtendedUpdateSettings_t * inSettings,
  const JoltC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  const JoltC_ObjectLayerFilter_t * inObjectLayerFilter,
  const JoltC_BodyFilter_t * inBodyFilter,
  const JoltC_ShapeFilter_t * inShapeFilter,
  JoltC_TempAllocator_t * inAllocator
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  
  selfCpp->ExtendedUpdate(
  inDeltaTime,
  *reinterpret_cast<Vec3 *>(inGravity->obj),
  *reinterpret_cast<CharacterVirtual::ExtendedUpdateSettings *>(inSettings->obj),
  *reinterpret_cast<BroadPhaseLayerFilter *>(inBroadPhaseLayerFilter->obj),
  *reinterpret_cast<ObjectLayerFilter *>(inObjectLayerFilter->obj),
  *reinterpret_cast<BodyFilter *>(inBodyFilter->obj),
  *reinterpret_cast<ShapeFilter *>(inShapeFilter->obj),
  *reinterpret_cast<TempAllocator *>(inAllocator->obj)
  );
};

void JoltC_CharacterVirtual_RefreshContacts(
  JoltC_CharacterVirtual_t * self,
  const JoltC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  const JoltC_ObjectLayerFilter_t * inObjectLayerFilter,
  const JoltC_BodyFilter_t * inBodyFilter,
  const JoltC_ShapeFilter_t * inShapeFilter,
  JoltC_TempAllocator_t * inAllocator
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  
  selfCpp->RefreshContacts(
  *reinterpret_cast<BroadPhaseLayerFilter *>(inBroadPhaseLayerFilter->obj),
  *reinterpret_cast<ObjectLayerFilter *>(inObjectLayerFilter->obj),
  *reinterpret_cast<BodyFilter *>(inBodyFilter->obj),
  *reinterpret_cast<ShapeFilter *>(inShapeFilter->obj),
  *reinterpret_cast<TempAllocator *>(inAllocator->obj)
  );
};

void JoltC_CharacterVirtual_UpdateGroundVelocity(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  
  selfCpp->UpdateGroundVelocity();
};

bool JoltC_CharacterVirtual_SetShape(
  JoltC_CharacterVirtual_t * self,
  const JoltC_Shape_t * inShape,
  float inMaxPenetrationDepth,
  const JoltC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  const JoltC_ObjectLayerFilter_t * inObjectLayerFilter,
  const JoltC_BodyFilter_t * inBodyFilter,
  const JoltC_ShapeFilter_t * inShapeFilter,
  JoltC_TempAllocator_t * inAllocator
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  bool result = selfCpp->SetShape(
  reinterpret_cast<Shape *>(inShape->obj),
  inMaxPenetrationDepth,
  *reinterpret_cast<BroadPhaseLayerFilter *>(inBroadPhaseLayerFilter->obj),
  *reinterpret_cast<ObjectLayerFilter *>(inObjectLayerFilter->obj),
  *reinterpret_cast<BodyFilter *>(inBodyFilter->obj),
  *reinterpret_cast<ShapeFilter *>(inShapeFilter->obj),
  *reinterpret_cast<TempAllocator *>(inAllocator->obj)
  );
  return result;
};

unsigned long JoltC_CharacterVirtual_GetRefCount(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_CharacterVirtual_AddRef(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  
  selfCpp->AddRef();
};

void JoltC_CharacterVirtual_Release(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  
  selfCpp->Release();
};

void JoltC_CharacterVirtual_SetMaxSlopeAngle(
  JoltC_CharacterVirtual_t * self,
  float inMaxSlopeAngle
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  
  selfCpp->SetMaxSlopeAngle(
  inMaxSlopeAngle
  );
};

float JoltC_CharacterVirtual_GetCosMaxSlopeAngle(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  float result = selfCpp->GetCosMaxSlopeAngle();
  return result;
};

void JoltC_CharacterVirtual_SetUp(
  JoltC_CharacterVirtual_t * self,
  const JoltC_Vec3_t * inUp
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  
  selfCpp->SetUp(
  *reinterpret_cast<Vec3 *>(inUp->obj)
  );
};

JoltC_Vec3_t * JoltC_CharacterVirtual_GetUp(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  Vec3 resultValue = selfCpp->GetUp();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

const JoltC_Shape_t * JoltC_CharacterVirtual_GetShape(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  const Shape * result = selfCpp->GetShape();
  return reinterpret_cast<const JoltC_Shape_t *>(result);
};

JoltC_EGroundState JoltC_CharacterVirtual_GetGroundState(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  EGroundState result = selfCpp->GetGroundState();
  return static_cast<JoltC_EGroundState>(static_cast<int>(result));
};

bool JoltC_CharacterVirtual_IsSlopeTooSteep(
  JoltC_CharacterVirtual_t * self,
  JoltC_Vec3_t * inNormal
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  bool result = selfCpp->IsSlopeTooSteep(
  *reinterpret_cast<Vec3 *>(inNormal->obj)
  );
  return result;
};

bool JoltC_CharacterVirtual_IsSupported(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  bool result = selfCpp->IsSupported();
  return result;
};

JoltC_RVec3_t * JoltC_CharacterVirtual_GetGroundPosition(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  RVec3 resultValue = selfCpp->GetGroundPosition();
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JoltC_RVec3_t *>(result);
};

JoltC_Vec3_t * JoltC_CharacterVirtual_GetGroundNormal(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  Vec3 resultValue = selfCpp->GetGroundNormal();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

JoltC_Vec3_t * JoltC_CharacterVirtual_GetGroundVelocity(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  Vec3 resultValue = selfCpp->GetGroundVelocity();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

const JoltC_PhysicsMaterial_t * JoltC_CharacterVirtual_GetGroundMaterial(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  const PhysicsMaterial * result = selfCpp->GetGroundMaterial();
  return reinterpret_cast<const JoltC_PhysicsMaterial_t *>(result);
};

JoltC_BodyID_t * JoltC_CharacterVirtual_GetGroundBodyID(
  JoltC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  BodyID resultValue = selfCpp->GetGroundBodyID();
  BodyID* result = new BodyID(resultValue);
  return reinterpret_cast<JoltC_BodyID_t *>(result);
};

//endregion

#ifdef __cplusplus
}
#endif

