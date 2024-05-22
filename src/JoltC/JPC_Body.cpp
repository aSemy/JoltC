#include "JoltC/JPC_Body.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

const JPC_BodyID_t * JPC_Body_GetID(
  JPC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  const BodyID& resultRef = selfCpp->GetID();
  const BodyID * result = &resultRef;
  return reinterpret_cast<const JPC_BodyID_t *>(result);
};

bool JPC_Body_IsActive(
  JPC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  bool result = selfCpp->IsActive();
  return result;
};

bool JPC_Body_IsRigidBody(
  JPC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  bool result = selfCpp->IsRigidBody();
  return result;
};

bool JPC_Body_IsSoftBody(
  JPC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  bool result = selfCpp->IsSoftBody();
  return result;
};

bool JPC_Body_IsStatic(
  JPC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  bool result = selfCpp->IsStatic();
  return result;
};

bool JPC_Body_IsKinematic(
  JPC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  bool result = selfCpp->IsKinematic();
  return result;
};

bool JPC_Body_IsDynamic(
  JPC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  bool result = selfCpp->IsDynamic();
  return result;
};

bool JPC_Body_CanBeKinematicOrDynamic(
  JPC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  bool result = selfCpp->CanBeKinematicOrDynamic();
  return result;
};

JPC_EBodyType JPC_Body_GetBodyType(
  JPC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  EBodyType result = selfCpp->GetBodyType();
  return static_cast<JPC_EBodyType>(static_cast<int>(result));
};

JPC_EMotionType JPC_Body_GetMotionType(
  JPC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  EMotionType result = selfCpp->GetMotionType();
  return static_cast<JPC_EMotionType>(static_cast<int>(result));
};

void JPC_Body_SetIsSensor(
  JPC_Body_t * self,
  bool inIsSensor
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  
  selfCpp->SetIsSensor(
  inIsSensor
  );
};

bool JPC_Body_IsSensor(
  JPC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  bool result = selfCpp->IsSensor();
  return result;
};

void JPC_Body_SetCollideKinematicVsNonDynamic(
  JPC_Body_t * self,
  bool inCollide
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  
  selfCpp->SetCollideKinematicVsNonDynamic(
  inCollide
  );
};

bool JPC_Body_GetCollideKinematicVsNonDynamic(
  JPC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  bool result = selfCpp->GetCollideKinematicVsNonDynamic();
  return result;
};

void JPC_Body_SetUseManifoldReduction(
  JPC_Body_t * self,
  bool inUseReduction
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  
  selfCpp->SetUseManifoldReduction(
  inUseReduction
  );
};

bool JPC_Body_GetUseManifoldReduction(
  JPC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  bool result = selfCpp->GetUseManifoldReduction();
  return result;
};

void JPC_Body_SetApplyGyroscopicForce(
  JPC_Body_t * self,
  bool inApply
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  
  selfCpp->SetApplyGyroscopicForce(
  inApply
  );
};

bool JPC_Body_GetApplyGyroscopicForce(
  JPC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  bool result = selfCpp->GetApplyGyroscopicForce();
  return result;
};

void JPC_Body_SetEnhancedInternalEdgeRemoval(
  JPC_Body_t * self,
  bool inApply
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  
  selfCpp->SetEnhancedInternalEdgeRemoval(
  inApply
  );
};

bool JPC_Body_GetEnhancedInternalEdgeRemoval(
  JPC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  bool result = selfCpp->GetEnhancedInternalEdgeRemoval();
  return result;
};

unsigned long JPC_Body_GetObjectLayer(
  JPC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  unsigned long result = selfCpp->GetObjectLayer();
  return result;
};

JPC_CollisionGroup_t * JPC_Body_GetCollisionGroup(
  JPC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  CollisionGroup& resultRef = selfCpp->GetCollisionGroup();
  CollisionGroup * result = &resultRef;
  return reinterpret_cast<JPC_CollisionGroup_t *>(result);
};

bool JPC_Body_GetAllowSleeping(
  JPC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  bool result = selfCpp->GetAllowSleeping();
  return result;
};

void JPC_Body_SetAllowSleeping(
  JPC_Body_t * self,
  bool inAllow
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  
  selfCpp->SetAllowSleeping(
  inAllow
  );
};

void JPC_Body_ResetSleepTimer(
  JPC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  
  selfCpp->ResetSleepTimer();
};

float JPC_Body_GetFriction(
  JPC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  float result = selfCpp->GetFriction();
  return result;
};

void JPC_Body_SetFriction(
  JPC_Body_t * self,
  float inFriction
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  
  selfCpp->SetFriction(
  inFriction
  );
};

float JPC_Body_GetRestitution(
  JPC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  float result = selfCpp->GetRestitution();
  return result;
};

void JPC_Body_SetRestitution(
  JPC_Body_t * self,
  float inRestitution
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  
  selfCpp->SetRestitution(
  inRestitution
  );
};

JPC_Vec3_t * JPC_Body_GetLinearVelocity(
  JPC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  Vec3 resultValue = selfCpp->GetLinearVelocity();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_Body_SetLinearVelocity(
  JPC_Body_t * self,
  const JPC_Vec3_t * inVelocity
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  
  selfCpp->SetLinearVelocity(
  *reinterpret_cast<Vec3 *>(inVelocity->obj)
  );
};

void JPC_Body_SetLinearVelocityClamped(
  JPC_Body_t * self,
  const JPC_Vec3_t * inVelocity
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  
  selfCpp->SetLinearVelocityClamped(
  *reinterpret_cast<Vec3 *>(inVelocity->obj)
  );
};

JPC_Vec3_t * JPC_Body_GetAngularVelocity(
  JPC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  Vec3 resultValue = selfCpp->GetAngularVelocity();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_Body_SetAngularVelocity(
  JPC_Body_t * self,
  const JPC_Vec3_t * inVelocity
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  
  selfCpp->SetAngularVelocity(
  *reinterpret_cast<Vec3 *>(inVelocity->obj)
  );
};

void JPC_Body_SetAngularVelocityClamped(
  JPC_Body_t * self,
  const JPC_Vec3_t * inVelocity
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  
  selfCpp->SetAngularVelocityClamped(
  *reinterpret_cast<Vec3 *>(inVelocity->obj)
  );
};

void JPC_Body_AddForce_0(
  JPC_Body_t * self,
  const JPC_Vec3_t * inForce
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  
  selfCpp->AddForce(
  *reinterpret_cast<Vec3 *>(inForce->obj)
  );
};

void JPC_Body_AddForce_1(
  JPC_Body_t * self,
  const JPC_Vec3_t * inForce,
  const JPC_RVec3_t * inPosition
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  
  selfCpp->AddForce(
  *reinterpret_cast<Vec3 *>(inForce->obj),
  *reinterpret_cast<RVec3 *>(inPosition->obj)
  );
};

void JPC_Body_AddTorque(
  JPC_Body_t * self,
  const JPC_Vec3_t * inTorque
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  
  selfCpp->AddTorque(
  *reinterpret_cast<Vec3 *>(inTorque->obj)
  );
};

const JPC_Vec3_t * JPC_Body_GetAccumulatedForce(
  JPC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  const Vec3 resultValue = selfCpp->GetAccumulatedForce();
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JPC_Vec3_t *>(result);
};

const JPC_Vec3_t * JPC_Body_GetAccumulatedTorque(
  JPC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  const Vec3 resultValue = selfCpp->GetAccumulatedTorque();
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JPC_Vec3_t *>(result);
};

void JPC_Body_ResetForce(
  JPC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  
  selfCpp->ResetForce();
};

void JPC_Body_ResetTorque(
  JPC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  
  selfCpp->ResetTorque();
};

void JPC_Body_ResetMotion(
  JPC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  
  selfCpp->ResetMotion();
};

void JPC_Body_AddImpulse_0(
  JPC_Body_t * self,
  const JPC_Vec3_t * inImpulse
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  
  selfCpp->AddImpulse(
  *reinterpret_cast<Vec3 *>(inImpulse->obj)
  );
};

void JPC_Body_AddImpulse_1(
  JPC_Body_t * self,
  const JPC_Vec3_t * inImpulse,
  const JPC_RVec3_t * inPosition
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  
  selfCpp->AddImpulse(
  *reinterpret_cast<Vec3 *>(inImpulse->obj),
  *reinterpret_cast<RVec3 *>(inPosition->obj)
  );
};

void JPC_Body_AddAngularImpulse(
  JPC_Body_t * self,
  const JPC_Vec3_t * inAngularImpulse
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  
  selfCpp->AddAngularImpulse(
  *reinterpret_cast<Vec3 *>(inAngularImpulse->obj)
  );
};

void JPC_Body_MoveKinematic(
  JPC_Body_t * self,
  const JPC_RVec3_t * inPosition,
  const JPC_Quat_t * inRotation,
  float inDeltaTime
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  
  selfCpp->MoveKinematic(
  *reinterpret_cast<RVec3 *>(inPosition->obj),
  *reinterpret_cast<Quat *>(inRotation->obj),
  inDeltaTime
  );
};

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
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  bool result = selfCpp->ApplyBuoyancyImpulse(
  *reinterpret_cast<RVec3 *>(inSurfacePosition->obj),
  *reinterpret_cast<Vec3 *>(inSurfaceNormal->obj),
  inBuoyancy,
  inLinearDrag,
  inAngularDrag,
  *reinterpret_cast<Vec3 *>(inFluidVelocity->obj),
  *reinterpret_cast<Vec3 *>(inGravity->obj),
  inDeltaTime
  );
  return result;
};

bool JPC_Body_IsInBroadPhase(
  JPC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  bool result = selfCpp->IsInBroadPhase();
  return result;
};

const JPC_Mat44_t * JPC_Body_GetInverseInertia(
  JPC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  const Mat44 resultValue = selfCpp->GetInverseInertia();
  const Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<const JPC_Mat44_t *>(result);
};

const JPC_Shape_t * JPC_Body_GetShape(
  JPC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  const Shape * result = selfCpp->GetShape();
  return reinterpret_cast<const JPC_Shape_t *>(result);
};

JPC_RVec3_t * JPC_Body_GetPosition(
  JPC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  RVec3 resultValue = selfCpp->GetPosition();
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

JPC_Quat_t * JPC_Body_GetRotation(
  JPC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  Quat resultValue = selfCpp->GetRotation();
  Quat* result = new Quat(resultValue);
  return reinterpret_cast<JPC_Quat_t *>(result);
};

JPC_RMat44_t * JPC_Body_GetWorldTransform(
  JPC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  RMat44 resultValue = selfCpp->GetWorldTransform();
  RMat44* result = new RMat44(resultValue);
  return reinterpret_cast<JPC_RMat44_t *>(result);
};

JPC_RVec3_t * JPC_Body_GetCenterOfMassPosition(
  JPC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  RVec3 resultValue = selfCpp->GetCenterOfMassPosition();
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

JPC_RMat44_t * JPC_Body_GetCenterOfMassTransform(
  JPC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  RMat44 resultValue = selfCpp->GetCenterOfMassTransform();
  RMat44* result = new RMat44(resultValue);
  return reinterpret_cast<JPC_RMat44_t *>(result);
};

JPC_RMat44_t * JPC_Body_GetInverseCenterOfMassTransform(
  JPC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  RMat44 resultValue = selfCpp->GetInverseCenterOfMassTransform();
  RMat44* result = new RMat44(resultValue);
  return reinterpret_cast<JPC_RMat44_t *>(result);
};

JPC_AABox_t * JPC_Body_GetWorldSpaceBounds(
  JPC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  AABox resultValue = selfCpp->GetWorldSpaceBounds();
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JPC_AABox_t *>(result);
};

JPC_TransformedShape_t * JPC_Body_GetTransformedShape(
  JPC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  TransformedShape resultValue = selfCpp->GetTransformedShape();
  TransformedShape* result = new TransformedShape(resultValue);
  return reinterpret_cast<JPC_TransformedShape_t *>(result);
};

JPC_BodyCreationSettings_t * JPC_Body_GetBodyCreationSettings(
  JPC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  BodyCreationSettings resultValue = selfCpp->GetBodyCreationSettings();
  BodyCreationSettings* result = new BodyCreationSettings(resultValue);
  return reinterpret_cast<JPC_BodyCreationSettings_t *>(result);
};

JPC_SoftBodyCreationSettings_t * JPC_Body_GetSoftBodyCreationSettings(
  JPC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  SoftBodyCreationSettings resultValue = selfCpp->GetSoftBodyCreationSettings();
  SoftBodyCreationSettings* result = new SoftBodyCreationSettings(resultValue);
  return reinterpret_cast<JPC_SoftBodyCreationSettings_t *>(result);
};

JPC_MotionProperties_t * JPC_Body_GetMotionProperties(
  JPC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  MotionProperties * result = selfCpp->GetMotionProperties();
  return reinterpret_cast<JPC_MotionProperties_t *>(result);
};

const JPC_Vec3_t * JPC_Body_GetWorldSpaceSurfaceNormal(
  JPC_Body_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_RVec3_t * inPosition
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  const Vec3 resultValue = selfCpp->GetWorldSpaceSurfaceNormal(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj),
  *reinterpret_cast<RVec3 *>(inPosition->obj)
  );
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JPC_Vec3_t *>(result);
};

unsigned long long int JPC_Body_GetUserData(
  JPC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JPC_Body_SetUserData(
  JPC_Body_t * self,
  unsigned long long int inUserData
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  
  selfCpp->SetUserData(
  inUserData
  );
};

//endregion functions

#ifdef __cplusplus
}
#endif

