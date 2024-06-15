#include "JoltC/JoltC_Body.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_Body_destroy(
  JoltC_Body_t * self
){
  if (self == NULL) return;
  delete static_cast<Body *>(self->obj);
  free(self);
}

//endregion
//region functions

JoltC_BodyID_t * JoltC_Body_GetID(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  const BodyID* resultRef = &selfCpp->GetID();
  JoltC_BodyID_t* result = new JoltC_BodyID_t();
  const void * resultConstPtr = reinterpret_cast<const void*>(resultRef);
  void * resultPtr = const_cast<void*>(resultConstPtr);
  result->obj = resultPtr;
  return result;
}

bool JoltC_Body_IsActive(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  return selfCpp->IsActive();
}

bool JoltC_Body_IsRigidBody(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  return selfCpp->IsRigidBody();
}

bool JoltC_Body_IsSoftBody(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  return selfCpp->IsSoftBody();
}

bool JoltC_Body_IsStatic(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  return selfCpp->IsStatic();
}

bool JoltC_Body_IsKinematic(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  return selfCpp->IsKinematic();
}

bool JoltC_Body_IsDynamic(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  return selfCpp->IsDynamic();
}

bool JoltC_Body_CanBeKinematicOrDynamic(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  return selfCpp->CanBeKinematicOrDynamic();
}

JoltC_EBodyType JoltC_Body_GetBodyType(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  EBodyType result = selfCpp->GetBodyType();
  return static_cast<JoltC_EBodyType>(static_cast<int>(result));
}

JoltC_EMotionType JoltC_Body_GetMotionType(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  EMotionType result = selfCpp->GetMotionType();
  return static_cast<JoltC_EMotionType>(static_cast<int>(result));
}

void JoltC_Body_SetIsSensor(
  JoltC_Body_t * self,
  bool inIsSensor
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  selfCpp->SetIsSensor(
    inIsSensor
  );
}

bool JoltC_Body_IsSensor(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  return selfCpp->IsSensor();
}

void JoltC_Body_SetCollideKinematicVsNonDynamic(
  JoltC_Body_t * self,
  bool inCollide
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  selfCpp->SetCollideKinematicVsNonDynamic(
    inCollide
  );
}

bool JoltC_Body_GetCollideKinematicVsNonDynamic(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  return selfCpp->GetCollideKinematicVsNonDynamic();
}

void JoltC_Body_SetUseManifoldReduction(
  JoltC_Body_t * self,
  bool inUseReduction
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  selfCpp->SetUseManifoldReduction(
    inUseReduction
  );
}

bool JoltC_Body_GetUseManifoldReduction(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  return selfCpp->GetUseManifoldReduction();
}

void JoltC_Body_SetApplyGyroscopicForce(
  JoltC_Body_t * self,
  bool inApply
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  selfCpp->SetApplyGyroscopicForce(
    inApply
  );
}

bool JoltC_Body_GetApplyGyroscopicForce(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  return selfCpp->GetApplyGyroscopicForce();
}

void JoltC_Body_SetEnhancedInternalEdgeRemoval(
  JoltC_Body_t * self,
  bool inApply
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  selfCpp->SetEnhancedInternalEdgeRemoval(
    inApply
  );
}

bool JoltC_Body_GetEnhancedInternalEdgeRemoval(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  return selfCpp->GetEnhancedInternalEdgeRemoval();
}

unsigned long JoltC_Body_GetObjectLayer(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  return selfCpp->GetObjectLayer();
}

JoltC_CollisionGroup_t * JoltC_Body_GetCollisionGroup(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  CollisionGroup* resultRef = &selfCpp->GetCollisionGroup();
  JoltC_CollisionGroup_t* result = new JoltC_CollisionGroup_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
}

bool JoltC_Body_GetAllowSleeping(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  return selfCpp->GetAllowSleeping();
}

void JoltC_Body_SetAllowSleeping(
  JoltC_Body_t * self,
  bool inAllow
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  selfCpp->SetAllowSleeping(
    inAllow
  );
}

void JoltC_Body_ResetSleepTimer(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  selfCpp->ResetSleepTimer();
}

float JoltC_Body_GetFriction(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  return selfCpp->GetFriction();
}

void JoltC_Body_SetFriction(
  JoltC_Body_t * self,
  float inFriction
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  selfCpp->SetFriction(
    inFriction
  );
}

float JoltC_Body_GetRestitution(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  return selfCpp->GetRestitution();
}

void JoltC_Body_SetRestitution(
  JoltC_Body_t * self,
  float inRestitution
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  selfCpp->SetRestitution(
    inRestitution
  );
}

JoltC_Vec3_t * JoltC_Body_GetLinearVelocity(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetLinearVelocity();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_Body_SetLinearVelocity(
  JoltC_Body_t * self,
  JoltC_Vec3_t * inVelocity
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  const Vec3 * inVelocityCpp = static_cast<const Vec3 *>(inVelocity->obj);
  selfCpp->SetLinearVelocity(
    *inVelocityCpp
  );
}

void JoltC_Body_SetLinearVelocityClamped(
  JoltC_Body_t * self,
  JoltC_Vec3_t * inVelocity
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  const Vec3 * inVelocityCpp = static_cast<const Vec3 *>(inVelocity->obj);
  selfCpp->SetLinearVelocityClamped(
    *inVelocityCpp
  );
}

JoltC_Vec3_t * JoltC_Body_GetAngularVelocity(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetAngularVelocity();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_Body_SetAngularVelocity(
  JoltC_Body_t * self,
  JoltC_Vec3_t * inVelocity
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  const Vec3 * inVelocityCpp = static_cast<const Vec3 *>(inVelocity->obj);
  selfCpp->SetAngularVelocity(
    *inVelocityCpp
  );
}

void JoltC_Body_SetAngularVelocityClamped(
  JoltC_Body_t * self,
  JoltC_Vec3_t * inVelocity
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  const Vec3 * inVelocityCpp = static_cast<const Vec3 *>(inVelocity->obj);
  selfCpp->SetAngularVelocityClamped(
    *inVelocityCpp
  );
}

void JoltC_Body_AddForce_0(
  JoltC_Body_t * self,
  JoltC_Vec3_t * inForce
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  const Vec3 * inForceCpp = static_cast<const Vec3 *>(inForce->obj);
  selfCpp->AddForce(
    *inForceCpp
  );
}

void JoltC_Body_AddForce_1(
  JoltC_Body_t * self,
  JoltC_Vec3_t * inForce,
  JoltC_RVec3_t * inPosition
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  const Vec3 * inForceCpp = static_cast<const Vec3 *>(inForce->obj);
  const RVec3 * inPositionCpp = static_cast<const RVec3 *>(inPosition->obj);
  selfCpp->AddForce(
    *inForceCpp,
    *inPositionCpp
  );
}

void JoltC_Body_AddTorque(
  JoltC_Body_t * self,
  JoltC_Vec3_t * inTorque
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  const Vec3 * inTorqueCpp = static_cast<const Vec3 *>(inTorque->obj);
  selfCpp->AddTorque(
    *inTorqueCpp
  );
}

JoltC_Vec3_t * JoltC_Body_GetAccumulatedForce(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetAccumulatedForce();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_Body_GetAccumulatedTorque(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetAccumulatedTorque();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_Body_ResetForce(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  selfCpp->ResetForce();
}

void JoltC_Body_ResetTorque(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  selfCpp->ResetTorque();
}

void JoltC_Body_ResetMotion(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  selfCpp->ResetMotion();
}

void JoltC_Body_AddImpulse_0(
  JoltC_Body_t * self,
  JoltC_Vec3_t * inImpulse
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  const Vec3 * inImpulseCpp = static_cast<const Vec3 *>(inImpulse->obj);
  selfCpp->AddImpulse(
    *inImpulseCpp
  );
}

void JoltC_Body_AddImpulse_1(
  JoltC_Body_t * self,
  JoltC_Vec3_t * inImpulse,
  JoltC_RVec3_t * inPosition
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  const Vec3 * inImpulseCpp = static_cast<const Vec3 *>(inImpulse->obj);
  const RVec3 * inPositionCpp = static_cast<const RVec3 *>(inPosition->obj);
  selfCpp->AddImpulse(
    *inImpulseCpp,
    *inPositionCpp
  );
}

void JoltC_Body_AddAngularImpulse(
  JoltC_Body_t * self,
  JoltC_Vec3_t * inAngularImpulse
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  const Vec3 * inAngularImpulseCpp = static_cast<const Vec3 *>(inAngularImpulse->obj);
  selfCpp->AddAngularImpulse(
    *inAngularImpulseCpp
  );
}

void JoltC_Body_MoveKinematic(
  JoltC_Body_t * self,
  JoltC_RVec3_t * inPosition,
  JoltC_Quat_t * inRotation,
  float inDeltaTime
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  const RVec3 * inPositionCpp = static_cast<const RVec3 *>(inPosition->obj);
  const Quat * inRotationCpp = static_cast<const Quat *>(inRotation->obj);
  selfCpp->MoveKinematic(
    *inPositionCpp,
    *inRotationCpp,
    inDeltaTime
  );
}

bool JoltC_Body_ApplyBuoyancyImpulse(
  JoltC_Body_t * self,
  JoltC_RVec3_t * inSurfacePosition,
  JoltC_Vec3_t * inSurfaceNormal,
  float inBuoyancy,
  float inLinearDrag,
  float inAngularDrag,
  JoltC_Vec3_t * inFluidVelocity,
  JoltC_Vec3_t * inGravity,
  float inDeltaTime
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  const RVec3 * inSurfacePositionCpp = static_cast<const RVec3 *>(inSurfacePosition->obj);
  const Vec3 * inSurfaceNormalCpp = static_cast<const Vec3 *>(inSurfaceNormal->obj);
  const Vec3 * inFluidVelocityCpp = static_cast<const Vec3 *>(inFluidVelocity->obj);
  const Vec3 * inGravityCpp = static_cast<const Vec3 *>(inGravity->obj);
  return selfCpp->ApplyBuoyancyImpulse(
    *inSurfacePositionCpp,
    *inSurfaceNormalCpp,
    inBuoyancy,
    inLinearDrag,
    inAngularDrag,
    *inFluidVelocityCpp,
    *inGravityCpp,
    inDeltaTime
  );
}

bool JoltC_Body_IsInBroadPhase(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  return selfCpp->IsInBroadPhase();
}

JoltC_Mat44_t * JoltC_Body_GetInverseInertia(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  Mat44 * resultPtr = new Mat44();
  *resultPtr = selfCpp->GetInverseInertia();
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Shape_t * JoltC_Body_GetShape(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  const Shape * resultPtr = selfCpp->GetShape();
  JoltC_Shape_t * result = new JoltC_Shape_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_RVec3_t * JoltC_Body_GetPosition(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  RVec3 * resultPtr = new RVec3();
  *resultPtr = selfCpp->GetPosition();
  JoltC_RVec3_t * result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Quat_t * JoltC_Body_GetRotation(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  Quat * resultPtr = new Quat();
  *resultPtr = selfCpp->GetRotation();
  JoltC_Quat_t * result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_RMat44_t * JoltC_Body_GetWorldTransform(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  RMat44 * resultPtr = new RMat44();
  *resultPtr = selfCpp->GetWorldTransform();
  JoltC_RMat44_t * result = new JoltC_RMat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_RVec3_t * JoltC_Body_GetCenterOfMassPosition(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  RVec3 * resultPtr = new RVec3();
  *resultPtr = selfCpp->GetCenterOfMassPosition();
  JoltC_RVec3_t * result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_RMat44_t * JoltC_Body_GetCenterOfMassTransform(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  RMat44 * resultPtr = new RMat44();
  *resultPtr = selfCpp->GetCenterOfMassTransform();
  JoltC_RMat44_t * result = new JoltC_RMat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_RMat44_t * JoltC_Body_GetInverseCenterOfMassTransform(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  RMat44 * resultPtr = new RMat44();
  *resultPtr = selfCpp->GetInverseCenterOfMassTransform();
  JoltC_RMat44_t * result = new JoltC_RMat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_AABox_t * JoltC_Body_GetWorldSpaceBounds(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  AABox * resultPtr = new AABox();
  *resultPtr = selfCpp->GetWorldSpaceBounds();
  JoltC_AABox_t * result = new JoltC_AABox_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_TransformedShape_t * JoltC_Body_GetTransformedShape(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  TransformedShape * resultPtr = new TransformedShape();
  *resultPtr = selfCpp->GetTransformedShape();
  JoltC_TransformedShape_t * result = new JoltC_TransformedShape_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_BodyCreationSettings_t * JoltC_Body_GetBodyCreationSettings(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  BodyCreationSettings * resultPtr = new BodyCreationSettings();
  *resultPtr = selfCpp->GetBodyCreationSettings();
  JoltC_BodyCreationSettings_t * result = new JoltC_BodyCreationSettings_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_SoftBodyCreationSettings_t * JoltC_Body_GetSoftBodyCreationSettings(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  SoftBodyCreationSettings * resultPtr = new SoftBodyCreationSettings();
  *resultPtr = selfCpp->GetSoftBodyCreationSettings();
  JoltC_SoftBodyCreationSettings_t * result = new JoltC_SoftBodyCreationSettings_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_MotionProperties_t * JoltC_Body_GetMotionProperties(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  const MotionProperties * resultPtr = selfCpp->GetMotionProperties();
  JoltC_MotionProperties_t * result = new JoltC_MotionProperties_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_Vec3_t * JoltC_Body_GetWorldSpaceSurfaceNormal(
  JoltC_Body_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_RVec3_t * inPosition
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  const SubShapeID * inSubShapeIDCpp = static_cast<const SubShapeID *>(inSubShapeID->obj);
  const RVec3 * inPositionCpp = static_cast<const RVec3 *>(inPosition->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetWorldSpaceSurfaceNormal(
    *inSubShapeIDCpp,
    *inPositionCpp
  );
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

unsigned long long int JoltC_Body_GetUserData(
  JoltC_Body_t * self
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  return selfCpp->GetUserData();
}

void JoltC_Body_SetUserData(
  JoltC_Body_t * self,
  unsigned long long int inUserData
) {
  Body * selfCpp = static_cast<Body *>(self->obj);
  selfCpp->SetUserData(
    inUserData
  );
}

//endregion


#ifdef __cplusplus
}
#endif
