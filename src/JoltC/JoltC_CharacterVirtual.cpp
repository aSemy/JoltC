#include "JoltC/JPC_CharacterVirtual.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_CharacterVirtual_t * JPC_CharacterVirtual_new(
  const JPC_CharacterVirtualSettings_t * inSettings,
  JPC_RVec3_t * inPosition,
  JPC_Quat_t * inRotation,
  JPC_PhysicsSystem_t * inSystem
) {
  JPC_CharacterVirtual_t * cInstance = new JPC_CharacterVirtual_t();
  CharacterVirtual * cppInstance = new CharacterVirtual(
    reinterpret_cast<CharacterVirtualSettings *>(inSettings->obj),
    *reinterpret_cast<RVec3 *>(inPosition->obj),
    *reinterpret_cast<Quat *>(inRotation->obj),
    reinterpret_cast<PhysicsSystem *>(inSystem->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

void JPC_CharacterVirtual_SetListener(
  JPC_CharacterVirtual_t * self,
  JPC_CharacterContactListener_t * inListener
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  
  selfCpp->SetListener(
  reinterpret_cast<CharacterContactListener *>(inListener->obj)
  );
};

JPC_CharacterContactListener_t * JPC_CharacterVirtual_GetListener(
  JPC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  CharacterContactListener * result = selfCpp->GetListener();
  return reinterpret_cast<JPC_CharacterContactListener_t *>(result);
};

JPC_Vec3_t * JPC_CharacterVirtual_GetLinearVelocity(
  JPC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  Vec3 resultValue = selfCpp->GetLinearVelocity();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_CharacterVirtual_SetLinearVelocity(
  JPC_CharacterVirtual_t * self,
  const JPC_Vec3_t * inLinearVelocity
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  
  selfCpp->SetLinearVelocity(
  *reinterpret_cast<Vec3 *>(inLinearVelocity->obj)
  );
};

JPC_RVec3_t * JPC_CharacterVirtual_GetPosition(
  JPC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  RVec3 resultValue = selfCpp->GetPosition();
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

void JPC_CharacterVirtual_SetPosition(
  JPC_CharacterVirtual_t * self,
  const JPC_RVec3_t * inPosition
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  
  selfCpp->SetPosition(
  *reinterpret_cast<RVec3 *>(inPosition->obj)
  );
};

JPC_Quat_t * JPC_CharacterVirtual_GetRotation(
  JPC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  Quat resultValue = selfCpp->GetRotation();
  Quat* result = new Quat(resultValue);
  return reinterpret_cast<JPC_Quat_t *>(result);
};

void JPC_CharacterVirtual_SetRotation(
  JPC_CharacterVirtual_t * self,
  const JPC_Quat_t * inRotation
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  
  selfCpp->SetRotation(
  *reinterpret_cast<Quat *>(inRotation->obj)
  );
};

JPC_RMat44_t * JPC_CharacterVirtual_GetWorldTransform(
  JPC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  RMat44 resultValue = selfCpp->GetWorldTransform();
  RMat44* result = new RMat44(resultValue);
  return reinterpret_cast<JPC_RMat44_t *>(result);
};

JPC_RMat44_t * JPC_CharacterVirtual_GetCenterOfMassTransform(
  JPC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  RMat44 resultValue = selfCpp->GetCenterOfMassTransform();
  RMat44* result = new RMat44(resultValue);
  return reinterpret_cast<JPC_RMat44_t *>(result);
};

float JPC_CharacterVirtual_GetMass(
  JPC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  float result = selfCpp->GetMass();
  return result;
};

void JPC_CharacterVirtual_SetMass(
  JPC_CharacterVirtual_t * self,
  float inMass
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  
  selfCpp->SetMass(
  inMass
  );
};

float JPC_CharacterVirtual_GetMaxStrength(
  JPC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  float result = selfCpp->GetMaxStrength();
  return result;
};

void JPC_CharacterVirtual_SetMaxStrength(
  JPC_CharacterVirtual_t * self,
  float inMaxStrength
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  
  selfCpp->SetMaxStrength(
  inMaxStrength
  );
};

float JPC_CharacterVirtual_GetPenetrationRecoverySpeed(
  JPC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  float result = selfCpp->GetPenetrationRecoverySpeed();
  return result;
};

void JPC_CharacterVirtual_SetPenetrationRecoverySpeed(
  JPC_CharacterVirtual_t * self,
  float inSpeed
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  
  selfCpp->SetPenetrationRecoverySpeed(
  inSpeed
  );
};

float JPC_CharacterVirtual_GetCharacterPadding(
  JPC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  float result = selfCpp->GetCharacterPadding();
  return result;
};

unsigned long JPC_CharacterVirtual_GetMaxNumHits(
  JPC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  unsigned long result = selfCpp->GetMaxNumHits();
  return result;
};

void JPC_CharacterVirtual_SetMaxNumHits(
  JPC_CharacterVirtual_t * self,
  unsigned long inMaxHits
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  
  selfCpp->SetMaxNumHits(
  inMaxHits
  );
};

float JPC_CharacterVirtual_GetHitReductionCosMaxAngle(
  JPC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  float result = selfCpp->GetHitReductionCosMaxAngle();
  return result;
};

void JPC_CharacterVirtual_SetHitReductionCosMaxAngle(
  JPC_CharacterVirtual_t * self,
  float inCosMaxAngle
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  
  selfCpp->SetHitReductionCosMaxAngle(
  inCosMaxAngle
  );
};

bool JPC_CharacterVirtual_GetMaxHitsExceeded(
  JPC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  bool result = selfCpp->GetMaxHitsExceeded();
  return result;
};

JPC_Vec3_t * JPC_CharacterVirtual_GetShapeOffset(
  JPC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  Vec3 resultValue = selfCpp->GetShapeOffset();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_CharacterVirtual_SetShapeOffset(
  JPC_CharacterVirtual_t * self,
  const JPC_Vec3_t * inShapeOffset
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  
  selfCpp->SetShapeOffset(
  *reinterpret_cast<Vec3 *>(inShapeOffset->obj)
  );
};

unsigned long long int JPC_CharacterVirtual_GetUserData(
  JPC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JPC_CharacterVirtual_SetUserData(
  JPC_CharacterVirtual_t * self,
  unsigned long long int inUserData
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  
  selfCpp->SetUserData(
  inUserData
  );
};

JPC_Vec3_t * JPC_CharacterVirtual_CancelVelocityTowardsSteepSlopes(
  JPC_CharacterVirtual_t * self,
  const JPC_Vec3_t * inDesiredVelocity
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  Vec3 resultValue = selfCpp->CancelVelocityTowardsSteepSlopes(
  *reinterpret_cast<Vec3 *>(inDesiredVelocity->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_CharacterVirtual_Update(
  JPC_CharacterVirtual_t * self,
  float inDeltaTime,
  const JPC_Vec3_t * inGravity,
  const JPC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  const JPC_ObjectLayerFilter_t * inObjectLayerFilter,
  const JPC_BodyFilter_t * inBodyFilter,
  const JPC_ShapeFilter_t * inShapeFilter,
  JPC_TempAllocator_t * inAllocator
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

bool JPC_CharacterVirtual_CanWalkStairs(
  JPC_CharacterVirtual_t * self,
  const JPC_Vec3_t * inLinearVelocity
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  bool result = selfCpp->CanWalkStairs(
  *reinterpret_cast<Vec3 *>(inLinearVelocity->obj)
  );
  return result;
};

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

bool JPC_CharacterVirtual_StickToFloor(
  JPC_CharacterVirtual_t * self,
  const JPC_Vec3_t * inStepDown,
  const JPC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  const JPC_ObjectLayerFilter_t * inObjectLayerFilter,
  const JPC_BodyFilter_t * inBodyFilter,
  const JPC_ShapeFilter_t * inShapeFilter,
  JPC_TempAllocator_t * inAllocator
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

void JPC_CharacterVirtual_RefreshContacts(
  JPC_CharacterVirtual_t * self,
  const JPC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  const JPC_ObjectLayerFilter_t * inObjectLayerFilter,
  const JPC_BodyFilter_t * inBodyFilter,
  const JPC_ShapeFilter_t * inShapeFilter,
  JPC_TempAllocator_t * inAllocator
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

void JPC_CharacterVirtual_UpdateGroundVelocity(
  JPC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  
  selfCpp->UpdateGroundVelocity();
};

bool JPC_CharacterVirtual_SetShape(
  JPC_CharacterVirtual_t * self,
  const JPC_Shape_t * inShape,
  float inMaxPenetrationDepth,
  const JPC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  const JPC_ObjectLayerFilter_t * inObjectLayerFilter,
  const JPC_BodyFilter_t * inBodyFilter,
  const JPC_ShapeFilter_t * inShapeFilter,
  JPC_TempAllocator_t * inAllocator
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

unsigned long JPC_CharacterVirtual_GetRefCount(
  JPC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_CharacterVirtual_AddRef(
  JPC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_CharacterVirtual_Release(
  JPC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  
  selfCpp->Release();
};

void JPC_CharacterVirtual_SetMaxSlopeAngle(
  JPC_CharacterVirtual_t * self,
  float inMaxSlopeAngle
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  
  selfCpp->SetMaxSlopeAngle(
  inMaxSlopeAngle
  );
};

float JPC_CharacterVirtual_GetCosMaxSlopeAngle(
  JPC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  float result = selfCpp->GetCosMaxSlopeAngle();
  return result;
};

void JPC_CharacterVirtual_SetUp(
  JPC_CharacterVirtual_t * self,
  const JPC_Vec3_t * inUp
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  
  selfCpp->SetUp(
  *reinterpret_cast<Vec3 *>(inUp->obj)
  );
};

JPC_Vec3_t * JPC_CharacterVirtual_GetUp(
  JPC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  Vec3 resultValue = selfCpp->GetUp();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

const JPC_Shape_t * JPC_CharacterVirtual_GetShape(
  JPC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  const Shape * result = selfCpp->GetShape();
  return reinterpret_cast<const JPC_Shape_t *>(result);
};

JPC_EGroundState JPC_CharacterVirtual_GetGroundState(
  JPC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  EGroundState result = selfCpp->GetGroundState();
  return static_cast<JPC_EGroundState>(static_cast<int>(result));
};

bool JPC_CharacterVirtual_IsSlopeTooSteep(
  JPC_CharacterVirtual_t * self,
  JPC_Vec3_t * inNormal
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  bool result = selfCpp->IsSlopeTooSteep(
  *reinterpret_cast<Vec3 *>(inNormal->obj)
  );
  return result;
};

bool JPC_CharacterVirtual_IsSupported(
  JPC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  bool result = selfCpp->IsSupported();
  return result;
};

JPC_RVec3_t * JPC_CharacterVirtual_GetGroundPosition(
  JPC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  RVec3 resultValue = selfCpp->GetGroundPosition();
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

JPC_Vec3_t * JPC_CharacterVirtual_GetGroundNormal(
  JPC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  Vec3 resultValue = selfCpp->GetGroundNormal();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Vec3_t * JPC_CharacterVirtual_GetGroundVelocity(
  JPC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  Vec3 resultValue = selfCpp->GetGroundVelocity();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

const JPC_PhysicsMaterial_t * JPC_CharacterVirtual_GetGroundMaterial(
  JPC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  const PhysicsMaterial * result = selfCpp->GetGroundMaterial();
  return reinterpret_cast<const JPC_PhysicsMaterial_t *>(result);
};

JPC_BodyID_t * JPC_CharacterVirtual_GetGroundBodyID(
  JPC_CharacterVirtual_t * self
) {
  CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
  BodyID resultValue = selfCpp->GetGroundBodyID();
  BodyID* result = new BodyID(resultValue);
  return reinterpret_cast<JPC_BodyID_t *>(result);
};

//endregion functions

#ifdef __cplusplus
}
#endif

