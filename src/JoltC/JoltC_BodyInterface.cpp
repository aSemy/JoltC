#include "JoltC/JoltC_BodyInterface.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

JoltC_Body_t * JoltC_BodyInterface_CreateBody(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyCreationSettings_t * inSettings
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  Body * result = selfCpp->CreateBody(
  *reinterpret_cast<BodyCreationSettings *>(inSettings->obj)
  );
  return reinterpret_cast<JoltC_Body_t *>(result);
};

JoltC_Body_t * JoltC_BodyInterface_CreateSoftBody(
  JoltC_BodyInterface_t * self,
  const JoltC_SoftBodyCreationSettings_t * inSettings
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  Body * result = selfCpp->CreateSoftBody(
  *reinterpret_cast<SoftBodyCreationSettings *>(inSettings->obj)
  );
  return reinterpret_cast<JoltC_Body_t *>(result);
};

void JoltC_BodyInterface_DestroyBody(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->DestroyBody(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
};

void JoltC_BodyInterface_AddBody(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  JoltC_EActivation inActivationMode
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->AddBody(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  static_cast<EActivation>(static_cast<int>(inActivationMode))
  );
};

void JoltC_BodyInterface_RemoveBody(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->RemoveBody(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
};

bool JoltC_BodyInterface_IsAdded(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  bool result = selfCpp->IsAdded(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
  return result;
};

JoltC_BodyID_t * JoltC_BodyInterface_CreateAndAddBody(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyCreationSettings_t * inSettings,
  JoltC_EActivation inActivationMode
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  BodyID resultValue = selfCpp->CreateAndAddBody(
  *reinterpret_cast<BodyCreationSettings *>(inSettings->obj),
  static_cast<EActivation>(static_cast<int>(inActivationMode))
  );
  BodyID* result = new BodyID(resultValue);
  return reinterpret_cast<JoltC_BodyID_t *>(result);
};

JoltC_BodyID_t * JoltC_BodyInterface_CreateAndAddSoftBody(
  JoltC_BodyInterface_t * self,
  const JoltC_SoftBodyCreationSettings_t * inSettings,
  JoltC_EActivation inActivationMode
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  BodyID resultValue = selfCpp->CreateAndAddSoftBody(
  *reinterpret_cast<SoftBodyCreationSettings *>(inSettings->obj),
  static_cast<EActivation>(static_cast<int>(inActivationMode))
  );
  BodyID* result = new BodyID(resultValue);
  return reinterpret_cast<JoltC_BodyID_t *>(result);
};

JoltC_TwoBodyConstraint_t * JoltC_BodyInterface_CreateConstraint(
  JoltC_BodyInterface_t * self,
  const JoltC_TwoBodyConstraintSettings_t * inSettings,
  const JoltC_BodyID_t * inBodyID1,
  const JoltC_BodyID_t * inBodyID2
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  TwoBodyConstraint * result = selfCpp->CreateConstraint(
  reinterpret_cast<TwoBodyConstraintSettings *>(inSettings->obj),
  *reinterpret_cast<BodyID *>(inBodyID1->obj),
  *reinterpret_cast<BodyID *>(inBodyID2->obj)
  );
  return reinterpret_cast<JoltC_TwoBodyConstraint_t *>(result);
};

void JoltC_BodyInterface_ActivateConstraint(
  JoltC_BodyInterface_t * self,
  const JoltC_TwoBodyConstraint_t * inConstraint
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->ActivateConstraint(
  reinterpret_cast<TwoBodyConstraint *>(inConstraint->obj)
  );
};

const JoltC_Shape_t * JoltC_BodyInterface_GetShape(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const Shape * result = selfCpp->GetShape(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
  return reinterpret_cast<const JoltC_Shape_t *>(result);
};

void JoltC_BodyInterface_SetShape(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  const JoltC_Shape_t * inShape,
  bool inUpdateMassProperties,
  JoltC_EActivation inActivationMode
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->SetShape(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  reinterpret_cast<Shape *>(inShape->obj),
  inUpdateMassProperties,
  static_cast<EActivation>(static_cast<int>(inActivationMode))
  );
};

void JoltC_BodyInterface_NotifyShapeChanged(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  const JoltC_Vec3_t * inPreviousCenterOfMass,
  bool inUpdateMassProperties,
  JoltC_EActivation inActivationMode
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->NotifyShapeChanged(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  *reinterpret_cast<Vec3 *>(inPreviousCenterOfMass->obj),
  inUpdateMassProperties,
  static_cast<EActivation>(static_cast<int>(inActivationMode))
  );
};

void JoltC_BodyInterface_SetObjectLayer(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  unsigned long inLayer
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->SetObjectLayer(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  inLayer
  );
};

unsigned long JoltC_BodyInterface_GetObjectLayer(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  unsigned long result = selfCpp->GetObjectLayer(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
  return result;
};

void JoltC_BodyInterface_SetPositionAndRotation(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  const JoltC_RVec3_t * inPosition,
  const JoltC_Quat_t * inRotation,
  JoltC_EActivation inActivationMode
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->SetPositionAndRotation(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  *reinterpret_cast<RVec3 *>(inPosition->obj),
  *reinterpret_cast<Quat *>(inRotation->obj),
  static_cast<EActivation>(static_cast<int>(inActivationMode))
  );
};

void JoltC_BodyInterface_SetPositionAndRotationWhenChanged(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  const JoltC_RVec3_t * inPosition,
  const JoltC_Quat_t * inRotation,
  JoltC_EActivation inActivationMode
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->SetPositionAndRotationWhenChanged(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  *reinterpret_cast<RVec3 *>(inPosition->obj),
  *reinterpret_cast<Quat *>(inRotation->obj),
  static_cast<EActivation>(static_cast<int>(inActivationMode))
  );
};

void JoltC_BodyInterface_GetPositionAndRotation(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  JoltC_RVec3_t * outPosition,
  JoltC_Quat_t * outRotation
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->GetPositionAndRotation(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  *reinterpret_cast<RVec3 *>(outPosition->obj),
  *reinterpret_cast<Quat *>(outRotation->obj)
  );
};

void JoltC_BodyInterface_SetPosition(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  const JoltC_RVec3_t * inPosition,
  JoltC_EActivation inActivationMode
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->SetPosition(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  *reinterpret_cast<RVec3 *>(inPosition->obj),
  static_cast<EActivation>(static_cast<int>(inActivationMode))
  );
};

JoltC_RVec3_t * JoltC_BodyInterface_GetPosition(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  RVec3 resultValue = selfCpp->GetPosition(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JoltC_RVec3_t *>(result);
};

void JoltC_BodyInterface_SetRotation(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  const JoltC_Quat_t * inRotation,
  JoltC_EActivation inActivationMode
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->SetRotation(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  *reinterpret_cast<Quat *>(inRotation->obj),
  static_cast<EActivation>(static_cast<int>(inActivationMode))
  );
};

JoltC_Quat_t * JoltC_BodyInterface_GetRotation(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  Quat resultValue = selfCpp->GetRotation(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
  Quat* result = new Quat(resultValue);
  return reinterpret_cast<JoltC_Quat_t *>(result);
};

JoltC_RMat44_t * JoltC_BodyInterface_GetWorldTransform(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  RMat44 resultValue = selfCpp->GetWorldTransform(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
  RMat44* result = new RMat44(resultValue);
  return reinterpret_cast<JoltC_RMat44_t *>(result);
};

JoltC_RMat44_t * JoltC_BodyInterface_GetCenterOfMassTransform(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  RMat44 resultValue = selfCpp->GetCenterOfMassTransform(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
  RMat44* result = new RMat44(resultValue);
  return reinterpret_cast<JoltC_RMat44_t *>(result);
};

void JoltC_BodyInterface_SetLinearVelocity(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  const JoltC_Vec3_t * inLinearVelocity
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->SetLinearVelocity(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  *reinterpret_cast<Vec3 *>(inLinearVelocity->obj)
  );
};

JoltC_Vec3_t * JoltC_BodyInterface_GetLinearVelocity(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  Vec3 resultValue = selfCpp->GetLinearVelocity(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_BodyInterface_AddLinearVelocity(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  const JoltC_Vec3_t * inLinearVelocity
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->AddLinearVelocity(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  *reinterpret_cast<Vec3 *>(inLinearVelocity->obj)
  );
};

void JoltC_BodyInterface_AddLinearAndAngularVelocity(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  const JoltC_Vec3_t * inLinearVelocity,
  const JoltC_Vec3_t * inAngularVelocity
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->AddLinearAndAngularVelocity(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  *reinterpret_cast<Vec3 *>(inLinearVelocity->obj),
  *reinterpret_cast<Vec3 *>(inAngularVelocity->obj)
  );
};

void JoltC_BodyInterface_SetAngularVelocity(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  const JoltC_Vec3_t * inAngularVelocity
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->SetAngularVelocity(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  *reinterpret_cast<Vec3 *>(inAngularVelocity->obj)
  );
};

JoltC_Vec3_t * JoltC_BodyInterface_GetAngularVelocity(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  Vec3 resultValue = selfCpp->GetAngularVelocity(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

JoltC_Vec3_t * JoltC_BodyInterface_GetPointVelocity(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  const JoltC_RVec3_t * inPoint
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  Vec3 resultValue = selfCpp->GetPointVelocity(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  *reinterpret_cast<RVec3 *>(inPoint->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_BodyInterface_SetPositionRotationAndVelocity(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  const JoltC_RVec3_t * inPosition,
  const JoltC_Quat_t * inRotation,
  const JoltC_Vec3_t * inLinearVelocity,
  const JoltC_Vec3_t * inAngularVelocity
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

void JoltC_BodyInterface_MoveKinematic(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  const JoltC_RVec3_t * inPosition,
  const JoltC_Quat_t * inRotation,
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

void JoltC_BodyInterface_ActivateBody(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->ActivateBody(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
};

void JoltC_BodyInterface_ActivateBodiesInAABox(
  JoltC_BodyInterface_t * self,
  const JoltC_AABox_t * inBox,
  const JoltC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  const JoltC_ObjectLayerFilter_t * inObjectLayerFilter
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->ActivateBodiesInAABox(
  *reinterpret_cast<AABox *>(inBox->obj),
  *reinterpret_cast<BroadPhaseLayerFilter *>(inBroadPhaseLayerFilter->obj),
  *reinterpret_cast<ObjectLayerFilter *>(inObjectLayerFilter->obj)
  );
};

void JoltC_BodyInterface_DeactivateBody(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->DeactivateBody(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
};

bool JoltC_BodyInterface_IsActive(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  bool result = selfCpp->IsActive(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
  return result;
};

JoltC_EBodyType JoltC_BodyInterface_GetBodyType(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  EBodyType result = selfCpp->GetBodyType(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
  return static_cast<JoltC_EBodyType>(static_cast<int>(result));
};

void JoltC_BodyInterface_SetMotionType(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  JoltC_EMotionType inMotionType,
  JoltC_EActivation inActivationMode
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->SetMotionType(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  static_cast<EMotionType>(static_cast<int>(inMotionType)),
  static_cast<EActivation>(static_cast<int>(inActivationMode))
  );
};

JoltC_EMotionType JoltC_BodyInterface_GetMotionType(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  EMotionType result = selfCpp->GetMotionType(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
  return static_cast<JoltC_EMotionType>(static_cast<int>(result));
};

void JoltC_BodyInterface_SetMotionQuality(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  JoltC_EMotionQuality inMotionQuality
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->SetMotionQuality(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  static_cast<EMotionQuality>(static_cast<int>(inMotionQuality))
  );
};

JoltC_EMotionQuality JoltC_BodyInterface_GetMotionQuality(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  EMotionQuality result = selfCpp->GetMotionQuality(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
  return static_cast<JoltC_EMotionQuality>(static_cast<int>(result));
};

JoltC_Mat44_t * JoltC_BodyInterface_GetInverseInertia(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  Mat44 resultValue = selfCpp->GetInverseInertia(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JoltC_Mat44_t *>(result);
};

void JoltC_BodyInterface_SetRestitution(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  float inRestitution
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->SetRestitution(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  inRestitution
  );
};

float JoltC_BodyInterface_GetRestitution(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  float result = selfCpp->GetRestitution(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
  return result;
};

void JoltC_BodyInterface_SetFriction(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  float inFriction
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->SetFriction(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  inFriction
  );
};

float JoltC_BodyInterface_GetFriction(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  float result = selfCpp->GetFriction(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
  return result;
};

void JoltC_BodyInterface_SetGravityFactor(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  float inFactor
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->SetGravityFactor(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  inFactor
  );
};

float JoltC_BodyInterface_GetGravityFactor(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  float result = selfCpp->GetGravityFactor(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
  return result;
};

void JoltC_BodyInterface_SetUseManifoldReduction(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  bool inUseReduction
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->SetUseManifoldReduction(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  inUseReduction
  );
};

bool JoltC_BodyInterface_GetUseManifoldReduction(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  bool result = selfCpp->GetUseManifoldReduction(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
  return result;
};

void JoltC_BodyInterface_AddForce_0(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  const JoltC_Vec3_t * inForce
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->AddForce(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  *reinterpret_cast<Vec3 *>(inForce->obj)
  );
};

void JoltC_BodyInterface_AddForce_1(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  const JoltC_Vec3_t * inForce,
  const JoltC_RVec3_t * inPoint
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->AddForce(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  *reinterpret_cast<Vec3 *>(inForce->obj),
  *reinterpret_cast<RVec3 *>(inPoint->obj)
  );
};

void JoltC_BodyInterface_AddTorque(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  const JoltC_Vec3_t * inTorque
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->AddTorque(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  *reinterpret_cast<Vec3 *>(inTorque->obj)
  );
};

void JoltC_BodyInterface_AddForceAndTorque(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  const JoltC_Vec3_t * inForce,
  const JoltC_Vec3_t * inTorque
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->AddForceAndTorque(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  *reinterpret_cast<Vec3 *>(inForce->obj),
  *reinterpret_cast<Vec3 *>(inTorque->obj)
  );
};

bool JoltC_BodyInterface_ApplyBuoyancyImpulse(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  const JoltC_RVec3_t * inSurfacePosition,
  const JoltC_Vec3_t * inSurfaceNormal,
  float inBuoyancy,
  float inLinearDrag,
  float inAngularDrag,
  const JoltC_Vec3_t * inFluidVelocity,
  const JoltC_Vec3_t * inGravity,
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

void JoltC_BodyInterface_AddImpulse_0(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  const JoltC_Vec3_t * inImpulse
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->AddImpulse(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  *reinterpret_cast<Vec3 *>(inImpulse->obj)
  );
};

void JoltC_BodyInterface_AddImpulse_1(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  const JoltC_Vec3_t * inImpulse,
  const JoltC_RVec3_t * inPosition
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->AddImpulse(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  *reinterpret_cast<Vec3 *>(inImpulse->obj),
  *reinterpret_cast<RVec3 *>(inPosition->obj)
  );
};

void JoltC_BodyInterface_AddAngularImpulse(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  const JoltC_Vec3_t * inAngularImpulse
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->AddAngularImpulse(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  *reinterpret_cast<Vec3 *>(inAngularImpulse->obj)
  );
};

JoltC_TransformedShape_t * JoltC_BodyInterface_GetTransformedShape(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  TransformedShape resultValue = selfCpp->GetTransformedShape(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
  TransformedShape* result = new TransformedShape(resultValue);
  return reinterpret_cast<JoltC_TransformedShape_t *>(result);
};

unsigned long long int JoltC_BodyInterface_GetUserData(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
  return result;
};

void JoltC_BodyInterface_SetUserData(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  unsigned long long int inUserData
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->SetUserData(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  inUserData
  );
};

const JoltC_PhysicsMaterial_t * JoltC_BodyInterface_GetMaterial(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  const JoltC_SubShapeID_t * inSubShapeID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const PhysicsMaterial * result = selfCpp->GetMaterial(
  *reinterpret_cast<BodyID *>(inBodyID->obj),
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return reinterpret_cast<const JoltC_PhysicsMaterial_t *>(result);
};

void JoltC_BodyInterface_InvalidateContactCache(
  JoltC_BodyInterface_t * self,
  const JoltC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  
  selfCpp->InvalidateContactCache(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
};

//endregion

#ifdef __cplusplus
}
#endif

