#include "JoltC/JoltC_Body.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

const JoltC_BodyID_t * JoltC_Body_GetID(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  const BodyID& resultRef = selfCpp->GetID();
  const BodyID * result = &resultRef;
  return reinterpret_cast<const JoltC_BodyID_t *>(result);
};

bool JoltC_Body_IsActive(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  bool result = selfCpp->IsActive();
  return result;
};

bool JoltC_Body_IsRigidBody(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  bool result = selfCpp->IsRigidBody();
  return result;
};

bool JoltC_Body_IsSoftBody(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  bool result = selfCpp->IsSoftBody();
  return result;
};

bool JoltC_Body_IsStatic(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  bool result = selfCpp->IsStatic();
  return result;
};

bool JoltC_Body_IsKinematic(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  bool result = selfCpp->IsKinematic();
  return result;
};

bool JoltC_Body_IsDynamic(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  bool result = selfCpp->IsDynamic();
  return result;
};

bool JoltC_Body_CanBeKinematicOrDynamic(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  bool result = selfCpp->CanBeKinematicOrDynamic();
  return result;
};

JoltC_EBodyType JoltC_Body_GetBodyType(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  EBodyType result = selfCpp->GetBodyType();
  return static_cast<JoltC_EBodyType>(static_cast<int>(result));
};

JoltC_EMotionType JoltC_Body_GetMotionType(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  EMotionType result = selfCpp->GetMotionType();
  return static_cast<JoltC_EMotionType>(static_cast<int>(result));
};

void JoltC_Body_SetIsSensor(
  JoltC_Body_t * self,
  bool inIsSensor
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  
  selfCpp->SetIsSensor(
  inIsSensor
  );
};

bool JoltC_Body_IsSensor(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  bool result = selfCpp->IsSensor();
  return result;
};

void JoltC_Body_SetCollideKinematicVsNonDynamic(
  JoltC_Body_t * self,
  bool inCollide
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  
  selfCpp->SetCollideKinematicVsNonDynamic(
  inCollide
  );
};

bool JoltC_Body_GetCollideKinematicVsNonDynamic(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  bool result = selfCpp->GetCollideKinematicVsNonDynamic();
  return result;
};

void JoltC_Body_SetUseManifoldReduction(
  JoltC_Body_t * self,
  bool inUseReduction
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  
  selfCpp->SetUseManifoldReduction(
  inUseReduction
  );
};

bool JoltC_Body_GetUseManifoldReduction(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  bool result = selfCpp->GetUseManifoldReduction();
  return result;
};

void JoltC_Body_SetApplyGyroscopicForce(
  JoltC_Body_t * self,
  bool inApply
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  
  selfCpp->SetApplyGyroscopicForce(
  inApply
  );
};

bool JoltC_Body_GetApplyGyroscopicForce(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  bool result = selfCpp->GetApplyGyroscopicForce();
  return result;
};

void JoltC_Body_SetEnhancedInternalEdgeRemoval(
  JoltC_Body_t * self,
  bool inApply
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  
  selfCpp->SetEnhancedInternalEdgeRemoval(
  inApply
  );
};

bool JoltC_Body_GetEnhancedInternalEdgeRemoval(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  bool result = selfCpp->GetEnhancedInternalEdgeRemoval();
  return result;
};

unsigned long JoltC_Body_GetObjectLayer(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  unsigned long result = selfCpp->GetObjectLayer();
  return result;
};

JoltC_CollisionGroup_t * JoltC_Body_GetCollisionGroup(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  CollisionGroup& resultRef = selfCpp->GetCollisionGroup();
  CollisionGroup * result = &resultRef;
  return reinterpret_cast<JoltC_CollisionGroup_t *>(result);
};

bool JoltC_Body_GetAllowSleeping(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  bool result = selfCpp->GetAllowSleeping();
  return result;
};

void JoltC_Body_SetAllowSleeping(
  JoltC_Body_t * self,
  bool inAllow
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  
  selfCpp->SetAllowSleeping(
  inAllow
  );
};

void JoltC_Body_ResetSleepTimer(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  
  selfCpp->ResetSleepTimer();
};

float JoltC_Body_GetFriction(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  float result = selfCpp->GetFriction();
  return result;
};

void JoltC_Body_SetFriction(
  JoltC_Body_t * self,
  float inFriction
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  
  selfCpp->SetFriction(
  inFriction
  );
};

float JoltC_Body_GetRestitution(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  float result = selfCpp->GetRestitution();
  return result;
};

void JoltC_Body_SetRestitution(
  JoltC_Body_t * self,
  float inRestitution
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  
  selfCpp->SetRestitution(
  inRestitution
  );
};

JoltC_Vec3_t * JoltC_Body_GetLinearVelocity(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  Vec3 resultValue = selfCpp->GetLinearVelocity();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_Body_SetLinearVelocity(
  JoltC_Body_t * self,
  const JoltC_Vec3_t * inVelocity
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  
  selfCpp->SetLinearVelocity(
  *reinterpret_cast<Vec3 *>(inVelocity->obj)
  );
};

void JoltC_Body_SetLinearVelocityClamped(
  JoltC_Body_t * self,
  const JoltC_Vec3_t * inVelocity
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  
  selfCpp->SetLinearVelocityClamped(
  *reinterpret_cast<Vec3 *>(inVelocity->obj)
  );
};

JoltC_Vec3_t * JoltC_Body_GetAngularVelocity(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  Vec3 resultValue = selfCpp->GetAngularVelocity();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_Body_SetAngularVelocity(
  JoltC_Body_t * self,
  const JoltC_Vec3_t * inVelocity
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  
  selfCpp->SetAngularVelocity(
  *reinterpret_cast<Vec3 *>(inVelocity->obj)
  );
};

void JoltC_Body_SetAngularVelocityClamped(
  JoltC_Body_t * self,
  const JoltC_Vec3_t * inVelocity
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  
  selfCpp->SetAngularVelocityClamped(
  *reinterpret_cast<Vec3 *>(inVelocity->obj)
  );
};

void JoltC_Body_AddForce_0(
  JoltC_Body_t * self,
  const JoltC_Vec3_t * inForce
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  
  selfCpp->AddForce(
  *reinterpret_cast<Vec3 *>(inForce->obj)
  );
};

void JoltC_Body_AddForce_1(
  JoltC_Body_t * self,
  const JoltC_Vec3_t * inForce,
  const JoltC_RVec3_t * inPosition
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  
  selfCpp->AddForce(
  *reinterpret_cast<Vec3 *>(inForce->obj),
  *reinterpret_cast<RVec3 *>(inPosition->obj)
  );
};

void JoltC_Body_AddTorque(
  JoltC_Body_t * self,
  const JoltC_Vec3_t * inTorque
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  
  selfCpp->AddTorque(
  *reinterpret_cast<Vec3 *>(inTorque->obj)
  );
};

const JoltC_Vec3_t * JoltC_Body_GetAccumulatedForce(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  const Vec3 resultValue = selfCpp->GetAccumulatedForce();
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JoltC_Vec3_t *>(result);
};

const JoltC_Vec3_t * JoltC_Body_GetAccumulatedTorque(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  const Vec3 resultValue = selfCpp->GetAccumulatedTorque();
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JoltC_Vec3_t *>(result);
};

void JoltC_Body_ResetForce(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  
  selfCpp->ResetForce();
};

void JoltC_Body_ResetTorque(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  
  selfCpp->ResetTorque();
};

void JoltC_Body_ResetMotion(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  
  selfCpp->ResetMotion();
};

void JoltC_Body_AddImpulse_0(
  JoltC_Body_t * self,
  const JoltC_Vec3_t * inImpulse
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  
  selfCpp->AddImpulse(
  *reinterpret_cast<Vec3 *>(inImpulse->obj)
  );
};

void JoltC_Body_AddImpulse_1(
  JoltC_Body_t * self,
  const JoltC_Vec3_t * inImpulse,
  const JoltC_RVec3_t * inPosition
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  
  selfCpp->AddImpulse(
  *reinterpret_cast<Vec3 *>(inImpulse->obj),
  *reinterpret_cast<RVec3 *>(inPosition->obj)
  );
};

void JoltC_Body_AddAngularImpulse(
  JoltC_Body_t * self,
  const JoltC_Vec3_t * inAngularImpulse
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  
  selfCpp->AddAngularImpulse(
  *reinterpret_cast<Vec3 *>(inAngularImpulse->obj)
  );
};

void JoltC_Body_MoveKinematic(
  JoltC_Body_t * self,
  const JoltC_RVec3_t * inPosition,
  const JoltC_Quat_t * inRotation,
  float inDeltaTime
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  
  selfCpp->MoveKinematic(
  *reinterpret_cast<RVec3 *>(inPosition->obj),
  *reinterpret_cast<Quat *>(inRotation->obj),
  inDeltaTime
  );
};

bool JoltC_Body_ApplyBuoyancyImpulse(
  JoltC_Body_t * self,
  const JoltC_RVec3_t * inSurfacePosition,
  const JoltC_Vec3_t * inSurfaceNormal,
  float inBuoyancy,
  float inLinearDrag,
  float inAngularDrag,
  const JoltC_Vec3_t * inFluidVelocity,
  const JoltC_Vec3_t * inGravity,
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

bool JoltC_Body_IsInBroadPhase(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  bool result = selfCpp->IsInBroadPhase();
  return result;
};

const JoltC_Mat44_t * JoltC_Body_GetInverseInertia(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  const Mat44 resultValue = selfCpp->GetInverseInertia();
  const Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<const JoltC_Mat44_t *>(result);
};

const JoltC_Shape_t * JoltC_Body_GetShape(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  const Shape * result = selfCpp->GetShape();
  return reinterpret_cast<const JoltC_Shape_t *>(result);
};

JoltC_RVec3_t * JoltC_Body_GetPosition(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  RVec3 resultValue = selfCpp->GetPosition();
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JoltC_RVec3_t *>(result);
};

JoltC_Quat_t * JoltC_Body_GetRotation(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  Quat resultValue = selfCpp->GetRotation();
  Quat* result = new Quat(resultValue);
  return reinterpret_cast<JoltC_Quat_t *>(result);
};

JoltC_RMat44_t * JoltC_Body_GetWorldTransform(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  RMat44 resultValue = selfCpp->GetWorldTransform();
  RMat44* result = new RMat44(resultValue);
  return reinterpret_cast<JoltC_RMat44_t *>(result);
};

JoltC_RVec3_t * JoltC_Body_GetCenterOfMassPosition(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  RVec3 resultValue = selfCpp->GetCenterOfMassPosition();
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JoltC_RVec3_t *>(result);
};

JoltC_RMat44_t * JoltC_Body_GetCenterOfMassTransform(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  RMat44 resultValue = selfCpp->GetCenterOfMassTransform();
  RMat44* result = new RMat44(resultValue);
  return reinterpret_cast<JoltC_RMat44_t *>(result);
};

JoltC_RMat44_t * JoltC_Body_GetInverseCenterOfMassTransform(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  RMat44 resultValue = selfCpp->GetInverseCenterOfMassTransform();
  RMat44* result = new RMat44(resultValue);
  return reinterpret_cast<JoltC_RMat44_t *>(result);
};

JoltC_AABox_t * JoltC_Body_GetWorldSpaceBounds(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  AABox resultValue = selfCpp->GetWorldSpaceBounds();
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JoltC_AABox_t *>(result);
};

JoltC_TransformedShape_t * JoltC_Body_GetTransformedShape(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  TransformedShape resultValue = selfCpp->GetTransformedShape();
  TransformedShape* result = new TransformedShape(resultValue);
  return reinterpret_cast<JoltC_TransformedShape_t *>(result);
};

JoltC_BodyCreationSettings_t * JoltC_Body_GetBodyCreationSettings(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  BodyCreationSettings resultValue = selfCpp->GetBodyCreationSettings();
  BodyCreationSettings* result = new BodyCreationSettings(resultValue);
  return reinterpret_cast<JoltC_BodyCreationSettings_t *>(result);
};

JoltC_SoftBodyCreationSettings_t * JoltC_Body_GetSoftBodyCreationSettings(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  SoftBodyCreationSettings resultValue = selfCpp->GetSoftBodyCreationSettings();
  SoftBodyCreationSettings* result = new SoftBodyCreationSettings(resultValue);
  return reinterpret_cast<JoltC_SoftBodyCreationSettings_t *>(result);
};

JoltC_MotionProperties_t * JoltC_Body_GetMotionProperties(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  MotionProperties * result = selfCpp->GetMotionProperties();
  return reinterpret_cast<JoltC_MotionProperties_t *>(result);
};

const JoltC_Vec3_t * JoltC_Body_GetWorldSpaceSurfaceNormal(
  JoltC_Body_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_RVec3_t * inPosition
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  const Vec3 resultValue = selfCpp->GetWorldSpaceSurfaceNormal(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj),
  *reinterpret_cast<RVec3 *>(inPosition->obj)
  );
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JoltC_Vec3_t *>(result);
};

unsigned long long int JoltC_Body_GetUserData(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JoltC_Body_SetUserData(
  JoltC_Body_t * self,
  unsigned long long int inUserData
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  
  selfCpp->SetUserData(
  inUserData
  );
};

//endregion

#ifdef __cplusplus
}
#endif

