#include "JoltC/JPC_BodyInterface.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

JPC_Body_t * JPC_BodyInterface_CreateBody(
  JPC_BodyInterface_t * self,
  const JPC_BodyCreationSettings_t * inSettings
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  Body * result = selfCpp->CreateBody(
  *reinterpret_cast<BodyCreationSettings *>(inSettings->obj)
  );
  return reinterpret_cast<JPC_Body_t *>(result);
};

JPC_Body_t * JPC_BodyInterface_CreateSoftBody(
  JPC_BodyInterface_t * self,
  const JPC_SoftBodyCreationSettings_t * inSettings
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  Body * result = selfCpp->CreateSoftBody(
  *reinterpret_cast<SoftBodyCreationSettings *>(inSettings->obj)
  );
  return reinterpret_cast<JPC_Body_t *>(result);
};

void JPC_BodyInterface_DestroyBody(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->DestroyBody(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
};

void JPC_BodyInterface_AddBody(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  JPC_EActivation inActivationMode
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->AddBody(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  static_cast<EActivation>(static_cast<int>(inActivationMode))
  );
};

void JPC_BodyInterface_RemoveBody(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->RemoveBody(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
};

bool JPC_BodyInterface_IsAdded(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  bool result = selfCpp->IsAdded(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
  return result;
};

JPC_BodyID_t * JPC_BodyInterface_CreateAndAddBody(
  JPC_BodyInterface_t * self,
  const JPC_BodyCreationSettings_t * inSettings,
  JPC_EActivation inActivationMode
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  BodyID resultValue = selfCpp->CreateAndAddBody(
  *reinterpret_cast<BodyCreationSettings *>(inSettings->obj),
  static_cast<EActivation>(static_cast<int>(inActivationMode))
  );
  BodyID* result = new BodyID(resultValue);
  return reinterpret_cast<JPC_BodyID_t *>(result);
};

JPC_BodyID_t * JPC_BodyInterface_CreateAndAddSoftBody(
  JPC_BodyInterface_t * self,
  const JPC_SoftBodyCreationSettings_t * inSettings,
  JPC_EActivation inActivationMode
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  BodyID resultValue = selfCpp->CreateAndAddSoftBody(
  *reinterpret_cast<SoftBodyCreationSettings *>(inSettings->obj),
  static_cast<EActivation>(static_cast<int>(inActivationMode))
  );
  BodyID* result = new BodyID(resultValue);
  return reinterpret_cast<JPC_BodyID_t *>(result);
};

JPC_TwoBodyConstraint_t * JPC_BodyInterface_CreateConstraint(
  JPC_BodyInterface_t * self,
  const JPC_TwoBodyConstraintSettings_t * inSettings,
  const JPC_BodyID_t * inBodyID1,
  const JPC_BodyID_t * inBodyID2
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  TwoBodyConstraint * result = selfCpp->CreateConstraint(
  reinterpret_cast<TwoBodyConstraintSettings *>(inSettings->obj),
  *reinterpret_cast<BodyID *>(inBodyID1->obj),
  *reinterpret_cast<BodyID *>(inBodyID2->obj)
  );
  return reinterpret_cast<JPC_TwoBodyConstraint_t *>(result);
};

void JPC_BodyInterface_ActivateConstraint(
  JPC_BodyInterface_t * self,
  const JPC_TwoBodyConstraint_t * inConstraint
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->ActivateConstraint(
  reinterpret_cast<TwoBodyConstraint *>(inConstraint->obj)
  );
};

const JPC_Shape_t * JPC_BodyInterface_GetShape(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const Shape * result = selfCpp->GetShape(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
  return reinterpret_cast<const JPC_Shape_t *>(result);
};

void JPC_BodyInterface_SetShape(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  const JPC_Shape_t * inShape,
  bool inUpdateMassProperties,
  JPC_EActivation inActivationMode
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->SetShape(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  reinterpret_cast<Shape *>(inShape->obj),
  inUpdateMassProperties,
  static_cast<EActivation>(static_cast<int>(inActivationMode))
  );
};

void JPC_BodyInterface_NotifyShapeChanged(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  const JPC_Vec3_t * inPreviousCenterOfMass,
  bool inUpdateMassProperties,
  JPC_EActivation inActivationMode
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->NotifyShapeChanged(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  *reinterpret_cast<Vec3 *>(inPreviousCenterOfMass->obj),
  inUpdateMassProperties,
  static_cast<EActivation>(static_cast<int>(inActivationMode))
  );
};

void JPC_BodyInterface_SetObjectLayer(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  unsigned long inLayer
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->SetObjectLayer(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  inLayer
  );
};

unsigned long JPC_BodyInterface_GetObjectLayer(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  unsigned long result = selfCpp->GetObjectLayer(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
  return result;
};

void JPC_BodyInterface_SetPositionAndRotation(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  const JPC_RVec3_t * inPosition,
  const JPC_Quat_t * inRotation,
  JPC_EActivation inActivationMode
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->SetPositionAndRotation(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  *reinterpret_cast<RVec3 *>(inPosition->obj),
  *reinterpret_cast<Quat *>(inRotation->obj),
  static_cast<EActivation>(static_cast<int>(inActivationMode))
  );
};

void JPC_BodyInterface_SetPositionAndRotationWhenChanged(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  const JPC_RVec3_t * inPosition,
  const JPC_Quat_t * inRotation,
  JPC_EActivation inActivationMode
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->SetPositionAndRotationWhenChanged(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  *reinterpret_cast<RVec3 *>(inPosition->obj),
  *reinterpret_cast<Quat *>(inRotation->obj),
  static_cast<EActivation>(static_cast<int>(inActivationMode))
  );
};

void JPC_BodyInterface_GetPositionAndRotation(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  JPC_RVec3_t * outPosition,
  JPC_Quat_t * outRotation
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->GetPositionAndRotation(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  *reinterpret_cast<RVec3 *>(outPosition->obj),
  *reinterpret_cast<Quat *>(outRotation->obj)
  );
};

void JPC_BodyInterface_SetPosition(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  const JPC_RVec3_t * inPosition,
  JPC_EActivation inActivationMode
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->SetPosition(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  *reinterpret_cast<RVec3 *>(inPosition->obj),
  static_cast<EActivation>(static_cast<int>(inActivationMode))
  );
};

JPC_RVec3_t * JPC_BodyInterface_GetPosition(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  RVec3 resultValue = selfCpp->GetPosition(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

void JPC_BodyInterface_SetRotation(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  const JPC_Quat_t * inRotation,
  JPC_EActivation inActivationMode
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->SetRotation(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  *reinterpret_cast<Quat *>(inRotation->obj),
  static_cast<EActivation>(static_cast<int>(inActivationMode))
  );
};

JPC_Quat_t * JPC_BodyInterface_GetRotation(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  Quat resultValue = selfCpp->GetRotation(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
  Quat* result = new Quat(resultValue);
  return reinterpret_cast<JPC_Quat_t *>(result);
};

JPC_RMat44_t * JPC_BodyInterface_GetWorldTransform(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  RMat44 resultValue = selfCpp->GetWorldTransform(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
  RMat44* result = new RMat44(resultValue);
  return reinterpret_cast<JPC_RMat44_t *>(result);
};

JPC_RMat44_t * JPC_BodyInterface_GetCenterOfMassTransform(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  RMat44 resultValue = selfCpp->GetCenterOfMassTransform(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
  RMat44* result = new RMat44(resultValue);
  return reinterpret_cast<JPC_RMat44_t *>(result);
};

void JPC_BodyInterface_SetLinearVelocity(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  const JPC_Vec3_t * inLinearVelocity
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->SetLinearVelocity(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  *reinterpret_cast<Vec3 *>(inLinearVelocity->obj)
  );
};

JPC_Vec3_t * JPC_BodyInterface_GetLinearVelocity(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  Vec3 resultValue = selfCpp->GetLinearVelocity(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_BodyInterface_AddLinearVelocity(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  const JPC_Vec3_t * inLinearVelocity
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->AddLinearVelocity(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  *reinterpret_cast<Vec3 *>(inLinearVelocity->obj)
  );
};

void JPC_BodyInterface_AddLinearAndAngularVelocity(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  const JPC_Vec3_t * inLinearVelocity,
  const JPC_Vec3_t * inAngularVelocity
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->AddLinearAndAngularVelocity(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  *reinterpret_cast<Vec3 *>(inLinearVelocity->obj),
  *reinterpret_cast<Vec3 *>(inAngularVelocity->obj)
  );
};

void JPC_BodyInterface_SetAngularVelocity(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  const JPC_Vec3_t * inAngularVelocity
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->SetAngularVelocity(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  *reinterpret_cast<Vec3 *>(inAngularVelocity->obj)
  );
};

JPC_Vec3_t * JPC_BodyInterface_GetAngularVelocity(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  Vec3 resultValue = selfCpp->GetAngularVelocity(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Vec3_t * JPC_BodyInterface_GetPointVelocity(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  const JPC_RVec3_t * inPoint
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  Vec3 resultValue = selfCpp->GetPointVelocity(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  *reinterpret_cast<RVec3 *>(inPoint->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_BodyInterface_SetPositionRotationAndVelocity(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  const JPC_RVec3_t * inPosition,
  const JPC_Quat_t * inRotation,
  const JPC_Vec3_t * inLinearVelocity,
  const JPC_Vec3_t * inAngularVelocity
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->SetPositionRotationAndVelocity(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  *reinterpret_cast<RVec3 *>(inPosition->obj),
  *reinterpret_cast<Quat *>(inRotation->obj),
  *reinterpret_cast<Vec3 *>(inLinearVelocity->obj),
  *reinterpret_cast<Vec3 *>(inAngularVelocity->obj)
  );
};

void JPC_BodyInterface_MoveKinematic(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  const JPC_RVec3_t * inPosition,
  const JPC_Quat_t * inRotation,
  float inDeltaTime
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->MoveKinematic(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  *reinterpret_cast<RVec3 *>(inPosition->obj),
  *reinterpret_cast<Quat *>(inRotation->obj),
  inDeltaTime
  );
};

void JPC_BodyInterface_ActivateBody(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->ActivateBody(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
};

void JPC_BodyInterface_ActivateBodiesInAABox(
  JPC_BodyInterface_t * self,
  const JPC_AABox_t * inBox,
  const JPC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  const JPC_ObjectLayerFilter_t * inObjectLayerFilter
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->ActivateBodiesInAABox(
  *reinterpret_cast<AABox *>(inBox->obj),
  *reinterpret_cast<BroadPhaseLayerFilter *>(inBroadPhaseLayerFilter->obj),
  *reinterpret_cast<ObjectLayerFilter *>(inObjectLayerFilter->obj)
  );
};

void JPC_BodyInterface_DeactivateBody(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->DeactivateBody(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
};

bool JPC_BodyInterface_IsActive(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  bool result = selfCpp->IsActive(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
  return result;
};

JPC_EBodyType JPC_BodyInterface_GetBodyType(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  EBodyType result = selfCpp->GetBodyType(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
  return static_cast<JPC_EBodyType>(static_cast<int>(result));
};

void JPC_BodyInterface_SetMotionType(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  JPC_EMotionType inMotionType,
  JPC_EActivation inActivationMode
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->SetMotionType(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  static_cast<EMotionType>(static_cast<int>(inMotionType)),
  static_cast<EActivation>(static_cast<int>(inActivationMode))
  );
};

JPC_EMotionType JPC_BodyInterface_GetMotionType(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  EMotionType result = selfCpp->GetMotionType(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
  return static_cast<JPC_EMotionType>(static_cast<int>(result));
};

void JPC_BodyInterface_SetMotionQuality(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  JPC_EMotionQuality inMotionQuality
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->SetMotionQuality(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  static_cast<EMotionQuality>(static_cast<int>(inMotionQuality))
  );
};

JPC_EMotionQuality JPC_BodyInterface_GetMotionQuality(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  EMotionQuality result = selfCpp->GetMotionQuality(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
  return static_cast<JPC_EMotionQuality>(static_cast<int>(result));
};

JPC_Mat44_t * JPC_BodyInterface_GetInverseInertia(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  Mat44 resultValue = selfCpp->GetInverseInertia(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

void JPC_BodyInterface_SetRestitution(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  float inRestitution
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->SetRestitution(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  inRestitution
  );
};

float JPC_BodyInterface_GetRestitution(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  float result = selfCpp->GetRestitution(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
  return result;
};

void JPC_BodyInterface_SetFriction(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  float inFriction
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->SetFriction(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  inFriction
  );
};

float JPC_BodyInterface_GetFriction(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  float result = selfCpp->GetFriction(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
  return result;
};

void JPC_BodyInterface_SetGravityFactor(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  float inFactor
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->SetGravityFactor(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  inFactor
  );
};

float JPC_BodyInterface_GetGravityFactor(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  float result = selfCpp->GetGravityFactor(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
  return result;
};

void JPC_BodyInterface_SetUseManifoldReduction(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  bool inUseReduction
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->SetUseManifoldReduction(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  inUseReduction
  );
};

bool JPC_BodyInterface_GetUseManifoldReduction(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  bool result = selfCpp->GetUseManifoldReduction(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
  return result;
};

void JPC_BodyInterface_AddForce_0(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  const JPC_Vec3_t * inForce
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->AddForce(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  *reinterpret_cast<Vec3 *>(inForce->obj)
  );
};

void JPC_BodyInterface_AddForce_1(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  const JPC_Vec3_t * inForce,
  const JPC_RVec3_t * inPoint
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->AddForce(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  *reinterpret_cast<Vec3 *>(inForce->obj),
  *reinterpret_cast<RVec3 *>(inPoint->obj)
  );
};

void JPC_BodyInterface_AddTorque(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  const JPC_Vec3_t * inTorque
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->AddTorque(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  *reinterpret_cast<Vec3 *>(inTorque->obj)
  );
};

void JPC_BodyInterface_AddForceAndTorque(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  const JPC_Vec3_t * inForce,
  const JPC_Vec3_t * inTorque
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->AddForceAndTorque(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  *reinterpret_cast<Vec3 *>(inForce->obj),
  *reinterpret_cast<Vec3 *>(inTorque->obj)
  );
};

bool JPC_BodyInterface_ApplyBuoyancyImpulse(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  const JPC_RVec3_t * inSurfacePosition,
  const JPC_Vec3_t * inSurfaceNormal,
  float inBuoyancy,
  float inLinearDrag,
  float inAngularDrag,
  const JPC_Vec3_t * inFluidVelocity,
  const JPC_Vec3_t * inGravity,
  float inDeltaTime
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  bool result = selfCpp->ApplyBuoyancyImpulse(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
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

void JPC_BodyInterface_AddImpulse_0(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  const JPC_Vec3_t * inImpulse
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->AddImpulse(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  *reinterpret_cast<Vec3 *>(inImpulse->obj)
  );
};

void JPC_BodyInterface_AddImpulse_1(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  const JPC_Vec3_t * inImpulse,
  const JPC_RVec3_t * inPosition
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->AddImpulse(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  *reinterpret_cast<Vec3 *>(inImpulse->obj),
  *reinterpret_cast<RVec3 *>(inPosition->obj)
  );
};

void JPC_BodyInterface_AddAngularImpulse(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  const JPC_Vec3_t * inAngularImpulse
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->AddAngularImpulse(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  *reinterpret_cast<Vec3 *>(inAngularImpulse->obj)
  );
};

JPC_TransformedShape_t * JPC_BodyInterface_GetTransformedShape(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  TransformedShape resultValue = selfCpp->GetTransformedShape(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
  TransformedShape* result = new TransformedShape(resultValue);
  return reinterpret_cast<JPC_TransformedShape_t *>(result);
};

unsigned long long int JPC_BodyInterface_GetUserData(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
  return result;
};

void JPC_BodyInterface_SetUserData(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  unsigned long long int inUserData
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->SetUserData(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  inUserData
  );
};

const JPC_PhysicsMaterial_t * JPC_BodyInterface_GetMaterial(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID,
  const JPC_SubShapeID_t * inSubShapeID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const PhysicsMaterial * result = selfCpp->GetMaterial(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return reinterpret_cast<const JPC_PhysicsMaterial_t *>(result);
};

void JPC_BodyInterface_InvalidateContactCache(
  JPC_BodyInterface_t * self,
  const JPC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->InvalidateContactCache(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
};

//endregion functions

#ifdef __cplusplus
}
#endif

