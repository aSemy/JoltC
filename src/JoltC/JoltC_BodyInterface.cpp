#include "JoltC/JoltC_BodyInterface.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_BodyInterface_destroy(
  JoltC_BodyInterface_t * self
){
  if (self == NULL) return;
  delete static_cast<BodyInterface *>(self->obj);
  free(self);
}

//endregion
//region functions

JoltC_Body_t * JoltC_BodyInterface_CreateBody(
  JoltC_BodyInterface_t * self,
  JoltC_BodyCreationSettings_t * inSettings
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyCreationSettings * inSettingsCpp = static_cast<const BodyCreationSettings *>(inSettings->obj);
  const Body * resultPtr = selfCpp->CreateBody(
    *inSettingsCpp
  );
  JoltC_Body_t * result = new JoltC_Body_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_Body_t * JoltC_BodyInterface_CreateSoftBody(
  JoltC_BodyInterface_t * self,
  JoltC_SoftBodyCreationSettings_t * inSettings
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const SoftBodyCreationSettings * inSettingsCpp = static_cast<const SoftBodyCreationSettings *>(inSettings->obj);
  const Body * resultPtr = selfCpp->CreateSoftBody(
    *inSettingsCpp
  );
  JoltC_Body_t * result = new JoltC_Body_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

void JoltC_BodyInterface_DestroyBody(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  selfCpp->DestroyBody(
    *inBodyIDCpp
  );
}

void JoltC_BodyInterface_AddBody(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID,
  JoltC_EActivation inActivationMode
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  EActivation inActivationModeCpp = static_cast<EActivation>(static_cast<int>(inActivationMode));
  selfCpp->AddBody(
    *inBodyIDCpp,
    inActivationModeCpp
  );
}

void JoltC_BodyInterface_RemoveBody(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  selfCpp->RemoveBody(
    *inBodyIDCpp
  );
}

bool JoltC_BodyInterface_IsAdded(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  return selfCpp->IsAdded(
    *inBodyIDCpp
  );
}

JoltC_BodyID_t * JoltC_BodyInterface_CreateAndAddBody(
  JoltC_BodyInterface_t * self,
  JoltC_BodyCreationSettings_t * inSettings,
  JoltC_EActivation inActivationMode
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyCreationSettings * inSettingsCpp = static_cast<const BodyCreationSettings *>(inSettings->obj);
  EActivation inActivationModeCpp = static_cast<EActivation>(static_cast<int>(inActivationMode));
  BodyID * resultPtr = new BodyID();
  *resultPtr = selfCpp->CreateAndAddBody(
    *inSettingsCpp,
    inActivationModeCpp
  );
  JoltC_BodyID_t * result = new JoltC_BodyID_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_BodyID_t * JoltC_BodyInterface_CreateAndAddSoftBody(
  JoltC_BodyInterface_t * self,
  JoltC_SoftBodyCreationSettings_t * inSettings,
  JoltC_EActivation inActivationMode
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const SoftBodyCreationSettings * inSettingsCpp = static_cast<const SoftBodyCreationSettings *>(inSettings->obj);
  EActivation inActivationModeCpp = static_cast<EActivation>(static_cast<int>(inActivationMode));
  BodyID * resultPtr = new BodyID();
  *resultPtr = selfCpp->CreateAndAddSoftBody(
    *inSettingsCpp,
    inActivationModeCpp
  );
  JoltC_BodyID_t * result = new JoltC_BodyID_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_TwoBodyConstraint_t * JoltC_BodyInterface_CreateConstraint(
  JoltC_BodyInterface_t * self,
  JoltC_TwoBodyConstraintSettings_t * inSettings,
  JoltC_BodyID_t * inBodyID1,
  JoltC_BodyID_t * inBodyID2
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const TwoBodyConstraintSettings * inSettingsCpp = static_cast<const TwoBodyConstraintSettings *>(inSettings->obj);
  const BodyID * inBodyID1Cpp = static_cast<const BodyID *>(inBodyID1->obj);
  const BodyID * inBodyID2Cpp = static_cast<const BodyID *>(inBodyID2->obj);
  const TwoBodyConstraint * resultPtr = selfCpp->CreateConstraint(
    inSettingsCpp,
    *inBodyID1Cpp,
    *inBodyID2Cpp
  );
  JoltC_TwoBodyConstraint_t * result = new JoltC_TwoBodyConstraint_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

void JoltC_BodyInterface_ActivateConstraint(
  JoltC_BodyInterface_t * self,
  JoltC_TwoBodyConstraint_t * inConstraint
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const TwoBodyConstraint * inConstraintCpp = static_cast<const TwoBodyConstraint *>(inConstraint->obj);
  selfCpp->ActivateConstraint(
    inConstraintCpp
  );
}

JoltC_Shape_t * JoltC_BodyInterface_GetShape(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  const Shape * resultPtr = selfCpp->GetShape(
    *inBodyIDCpp
  );
  JoltC_Shape_t * result = new JoltC_Shape_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

void JoltC_BodyInterface_SetShape(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID,
  JoltC_Shape_t * inShape,
  bool inUpdateMassProperties,
  JoltC_EActivation inActivationMode
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  const Shape * inShapeCpp = static_cast<const Shape *>(inShape->obj);
  EActivation inActivationModeCpp = static_cast<EActivation>(static_cast<int>(inActivationMode));
  selfCpp->SetShape(
    *inBodyIDCpp,
    inShapeCpp,
    inUpdateMassProperties,
    inActivationModeCpp
  );
}

void JoltC_BodyInterface_NotifyShapeChanged(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID,
  JoltC_Vec3_t * inPreviousCenterOfMass,
  bool inUpdateMassProperties,
  JoltC_EActivation inActivationMode
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  const Vec3 * inPreviousCenterOfMassCpp = static_cast<const Vec3 *>(inPreviousCenterOfMass->obj);
  EActivation inActivationModeCpp = static_cast<EActivation>(static_cast<int>(inActivationMode));
  selfCpp->NotifyShapeChanged(
    *inBodyIDCpp,
    *inPreviousCenterOfMassCpp,
    inUpdateMassProperties,
    inActivationModeCpp
  );
}

void JoltC_BodyInterface_SetObjectLayer(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID,
  unsigned long inLayer
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  selfCpp->SetObjectLayer(
    *inBodyIDCpp,
    inLayer
  );
}

unsigned long JoltC_BodyInterface_GetObjectLayer(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  return selfCpp->GetObjectLayer(
    *inBodyIDCpp
  );
}

void JoltC_BodyInterface_SetPositionAndRotation(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID,
  JoltC_RVec3_t * inPosition,
  JoltC_Quat_t * inRotation,
  JoltC_EActivation inActivationMode
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  const RVec3 * inPositionCpp = static_cast<const RVec3 *>(inPosition->obj);
  const Quat * inRotationCpp = static_cast<const Quat *>(inRotation->obj);
  EActivation inActivationModeCpp = static_cast<EActivation>(static_cast<int>(inActivationMode));
  selfCpp->SetPositionAndRotation(
    *inBodyIDCpp,
    *inPositionCpp,
    *inRotationCpp,
    inActivationModeCpp
  );
}

void JoltC_BodyInterface_SetPositionAndRotationWhenChanged(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID,
  JoltC_RVec3_t * inPosition,
  JoltC_Quat_t * inRotation,
  JoltC_EActivation inActivationMode
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  const RVec3 * inPositionCpp = static_cast<const RVec3 *>(inPosition->obj);
  const Quat * inRotationCpp = static_cast<const Quat *>(inRotation->obj);
  EActivation inActivationModeCpp = static_cast<EActivation>(static_cast<int>(inActivationMode));
  selfCpp->SetPositionAndRotationWhenChanged(
    *inBodyIDCpp,
    *inPositionCpp,
    *inRotationCpp,
    inActivationModeCpp
  );
}

void JoltC_BodyInterface_GetPositionAndRotation(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID,
  JoltC_RVec3_t * outPosition,
  JoltC_Quat_t * outRotation
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  RVec3 * outPositionCpp = static_cast<RVec3 *>(outPosition->obj);
  Quat * outRotationCpp = static_cast<Quat *>(outRotation->obj);
  selfCpp->GetPositionAndRotation(
    *inBodyIDCpp,
    *outPositionCpp,
    *outRotationCpp
  );
}

void JoltC_BodyInterface_SetPosition(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID,
  JoltC_RVec3_t * inPosition,
  JoltC_EActivation inActivationMode
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  const RVec3 * inPositionCpp = static_cast<const RVec3 *>(inPosition->obj);
  EActivation inActivationModeCpp = static_cast<EActivation>(static_cast<int>(inActivationMode));
  selfCpp->SetPosition(
    *inBodyIDCpp,
    *inPositionCpp,
    inActivationModeCpp
  );
}

JoltC_RVec3_t * JoltC_BodyInterface_GetPosition(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  RVec3 * resultPtr = new RVec3();
  *resultPtr = selfCpp->GetPosition(
    *inBodyIDCpp
  );
  JoltC_RVec3_t * result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_BodyInterface_SetRotation(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID,
  JoltC_Quat_t * inRotation,
  JoltC_EActivation inActivationMode
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  const Quat * inRotationCpp = static_cast<const Quat *>(inRotation->obj);
  EActivation inActivationModeCpp = static_cast<EActivation>(static_cast<int>(inActivationMode));
  selfCpp->SetRotation(
    *inBodyIDCpp,
    *inRotationCpp,
    inActivationModeCpp
  );
}

JoltC_Quat_t * JoltC_BodyInterface_GetRotation(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  Quat * resultPtr = new Quat();
  *resultPtr = selfCpp->GetRotation(
    *inBodyIDCpp
  );
  JoltC_Quat_t * result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_RMat44_t * JoltC_BodyInterface_GetWorldTransform(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  RMat44 * resultPtr = new RMat44();
  *resultPtr = selfCpp->GetWorldTransform(
    *inBodyIDCpp
  );
  JoltC_RMat44_t * result = new JoltC_RMat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_RMat44_t * JoltC_BodyInterface_GetCenterOfMassTransform(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  RMat44 * resultPtr = new RMat44();
  *resultPtr = selfCpp->GetCenterOfMassTransform(
    *inBodyIDCpp
  );
  JoltC_RMat44_t * result = new JoltC_RMat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_BodyInterface_SetLinearVelocity(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID,
  JoltC_Vec3_t * inLinearVelocity
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  const Vec3 * inLinearVelocityCpp = static_cast<const Vec3 *>(inLinearVelocity->obj);
  selfCpp->SetLinearVelocity(
    *inBodyIDCpp,
    *inLinearVelocityCpp
  );
}

JoltC_Vec3_t * JoltC_BodyInterface_GetLinearVelocity(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetLinearVelocity(
    *inBodyIDCpp
  );
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_BodyInterface_AddLinearVelocity(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID,
  JoltC_Vec3_t * inLinearVelocity
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  const Vec3 * inLinearVelocityCpp = static_cast<const Vec3 *>(inLinearVelocity->obj);
  selfCpp->AddLinearVelocity(
    *inBodyIDCpp,
    *inLinearVelocityCpp
  );
}

void JoltC_BodyInterface_AddLinearAndAngularVelocity(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID,
  JoltC_Vec3_t * inLinearVelocity,
  JoltC_Vec3_t * inAngularVelocity
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  const Vec3 * inLinearVelocityCpp = static_cast<const Vec3 *>(inLinearVelocity->obj);
  const Vec3 * inAngularVelocityCpp = static_cast<const Vec3 *>(inAngularVelocity->obj);
  selfCpp->AddLinearAndAngularVelocity(
    *inBodyIDCpp,
    *inLinearVelocityCpp,
    *inAngularVelocityCpp
  );
}

void JoltC_BodyInterface_SetAngularVelocity(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID,
  JoltC_Vec3_t * inAngularVelocity
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  const Vec3 * inAngularVelocityCpp = static_cast<const Vec3 *>(inAngularVelocity->obj);
  selfCpp->SetAngularVelocity(
    *inBodyIDCpp,
    *inAngularVelocityCpp
  );
}

JoltC_Vec3_t * JoltC_BodyInterface_GetAngularVelocity(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetAngularVelocity(
    *inBodyIDCpp
  );
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_BodyInterface_GetPointVelocity(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID,
  JoltC_RVec3_t * inPoint
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  const RVec3 * inPointCpp = static_cast<const RVec3 *>(inPoint->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetPointVelocity(
    *inBodyIDCpp,
    *inPointCpp
  );
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_BodyInterface_SetPositionRotationAndVelocity(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID,
  JoltC_RVec3_t * inPosition,
  JoltC_Quat_t * inRotation,
  JoltC_Vec3_t * inLinearVelocity,
  JoltC_Vec3_t * inAngularVelocity
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  const RVec3 * inPositionCpp = static_cast<const RVec3 *>(inPosition->obj);
  const Quat * inRotationCpp = static_cast<const Quat *>(inRotation->obj);
  const Vec3 * inLinearVelocityCpp = static_cast<const Vec3 *>(inLinearVelocity->obj);
  const Vec3 * inAngularVelocityCpp = static_cast<const Vec3 *>(inAngularVelocity->obj);
  selfCpp->SetPositionRotationAndVelocity(
    *inBodyIDCpp,
    *inPositionCpp,
    *inRotationCpp,
    *inLinearVelocityCpp,
    *inAngularVelocityCpp
  );
}

void JoltC_BodyInterface_MoveKinematic(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID,
  JoltC_RVec3_t * inPosition,
  JoltC_Quat_t * inRotation,
  float inDeltaTime
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  const RVec3 * inPositionCpp = static_cast<const RVec3 *>(inPosition->obj);
  const Quat * inRotationCpp = static_cast<const Quat *>(inRotation->obj);
  selfCpp->MoveKinematic(
    *inBodyIDCpp,
    *inPositionCpp,
    *inRotationCpp,
    inDeltaTime
  );
}

void JoltC_BodyInterface_ActivateBody(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  selfCpp->ActivateBody(
    *inBodyIDCpp
  );
}

void JoltC_BodyInterface_ActivateBodiesInAABox(
  JoltC_BodyInterface_t * self,
  JoltC_AABox_t * inBox,
  JoltC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  JoltC_ObjectLayerFilter_t * inObjectLayerFilter
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const AABox * inBoxCpp = static_cast<const AABox *>(inBox->obj);
  const BroadPhaseLayerFilter * inBroadPhaseLayerFilterCpp = static_cast<const BroadPhaseLayerFilter *>(inBroadPhaseLayerFilter->obj);
  const ObjectLayerFilter * inObjectLayerFilterCpp = static_cast<const ObjectLayerFilter *>(inObjectLayerFilter->obj);
  selfCpp->ActivateBodiesInAABox(
    *inBoxCpp,
    *inBroadPhaseLayerFilterCpp,
    *inObjectLayerFilterCpp
  );
}

void JoltC_BodyInterface_DeactivateBody(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  selfCpp->DeactivateBody(
    *inBodyIDCpp
  );
}

bool JoltC_BodyInterface_IsActive(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  return selfCpp->IsActive(
    *inBodyIDCpp
  );
}

JoltC_EBodyType JoltC_BodyInterface_GetBodyType(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  EBodyType result = selfCpp->GetBodyType(
    *inBodyIDCpp
  );
  return static_cast<JoltC_EBodyType>(static_cast<int>(result));
}

void JoltC_BodyInterface_SetMotionType(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID,
  JoltC_EMotionType inMotionType,
  JoltC_EActivation inActivationMode
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  EMotionType inMotionTypeCpp = static_cast<EMotionType>(static_cast<int>(inMotionType));
  EActivation inActivationModeCpp = static_cast<EActivation>(static_cast<int>(inActivationMode));
  selfCpp->SetMotionType(
    *inBodyIDCpp,
    inMotionTypeCpp,
    inActivationModeCpp
  );
}

JoltC_EMotionType JoltC_BodyInterface_GetMotionType(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  EMotionType result = selfCpp->GetMotionType(
    *inBodyIDCpp
  );
  return static_cast<JoltC_EMotionType>(static_cast<int>(result));
}

void JoltC_BodyInterface_SetMotionQuality(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID,
  JoltC_EMotionQuality inMotionQuality
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  EMotionQuality inMotionQualityCpp = static_cast<EMotionQuality>(static_cast<int>(inMotionQuality));
  selfCpp->SetMotionQuality(
    *inBodyIDCpp,
    inMotionQualityCpp
  );
}

JoltC_EMotionQuality JoltC_BodyInterface_GetMotionQuality(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  EMotionQuality result = selfCpp->GetMotionQuality(
    *inBodyIDCpp
  );
  return static_cast<JoltC_EMotionQuality>(static_cast<int>(result));
}

JoltC_Mat44_t * JoltC_BodyInterface_GetInverseInertia(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  Mat44 * resultPtr = new Mat44();
  *resultPtr = selfCpp->GetInverseInertia(
    *inBodyIDCpp
  );
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_BodyInterface_SetRestitution(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID,
  float inRestitution
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  selfCpp->SetRestitution(
    *inBodyIDCpp,
    inRestitution
  );
}

float JoltC_BodyInterface_GetRestitution(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  return selfCpp->GetRestitution(
    *inBodyIDCpp
  );
}

void JoltC_BodyInterface_SetFriction(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID,
  float inFriction
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  selfCpp->SetFriction(
    *inBodyIDCpp,
    inFriction
  );
}

float JoltC_BodyInterface_GetFriction(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  return selfCpp->GetFriction(
    *inBodyIDCpp
  );
}

void JoltC_BodyInterface_SetGravityFactor(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID,
  float inFactor
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  selfCpp->SetGravityFactor(
    *inBodyIDCpp,
    inFactor
  );
}

float JoltC_BodyInterface_GetGravityFactor(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  return selfCpp->GetGravityFactor(
    *inBodyIDCpp
  );
}

void JoltC_BodyInterface_SetUseManifoldReduction(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID,
  bool inUseReduction
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  selfCpp->SetUseManifoldReduction(
    *inBodyIDCpp,
    inUseReduction
  );
}

bool JoltC_BodyInterface_GetUseManifoldReduction(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  return selfCpp->GetUseManifoldReduction(
    *inBodyIDCpp
  );
}

void JoltC_BodyInterface_AddForce_0(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID,
  JoltC_Vec3_t * inForce
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  const Vec3 * inForceCpp = static_cast<const Vec3 *>(inForce->obj);
  selfCpp->AddForce(
    *inBodyIDCpp,
    *inForceCpp
  );
}

void JoltC_BodyInterface_AddForce_1(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID,
  JoltC_Vec3_t * inForce,
  JoltC_RVec3_t * inPoint
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  const Vec3 * inForceCpp = static_cast<const Vec3 *>(inForce->obj);
  const RVec3 * inPointCpp = static_cast<const RVec3 *>(inPoint->obj);
  selfCpp->AddForce(
    *inBodyIDCpp,
    *inForceCpp,
    *inPointCpp
  );
}

void JoltC_BodyInterface_AddTorque(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID,
  JoltC_Vec3_t * inTorque
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  const Vec3 * inTorqueCpp = static_cast<const Vec3 *>(inTorque->obj);
  selfCpp->AddTorque(
    *inBodyIDCpp,
    *inTorqueCpp
  );
}

void JoltC_BodyInterface_AddForceAndTorque(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID,
  JoltC_Vec3_t * inForce,
  JoltC_Vec3_t * inTorque
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  const Vec3 * inForceCpp = static_cast<const Vec3 *>(inForce->obj);
  const Vec3 * inTorqueCpp = static_cast<const Vec3 *>(inTorque->obj);
  selfCpp->AddForceAndTorque(
    *inBodyIDCpp,
    *inForceCpp,
    *inTorqueCpp
  );
}

bool JoltC_BodyInterface_ApplyBuoyancyImpulse(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID,
  JoltC_RVec3_t * inSurfacePosition,
  JoltC_Vec3_t * inSurfaceNormal,
  float inBuoyancy,
  float inLinearDrag,
  float inAngularDrag,
  JoltC_Vec3_t * inFluidVelocity,
  JoltC_Vec3_t * inGravity,
  float inDeltaTime
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  const RVec3 * inSurfacePositionCpp = static_cast<const RVec3 *>(inSurfacePosition->obj);
  const Vec3 * inSurfaceNormalCpp = static_cast<const Vec3 *>(inSurfaceNormal->obj);
  const Vec3 * inFluidVelocityCpp = static_cast<const Vec3 *>(inFluidVelocity->obj);
  const Vec3 * inGravityCpp = static_cast<const Vec3 *>(inGravity->obj);
  return selfCpp->ApplyBuoyancyImpulse(
    *inBodyIDCpp,
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

void JoltC_BodyInterface_AddImpulse_0(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID,
  JoltC_Vec3_t * inImpulse
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  const Vec3 * inImpulseCpp = static_cast<const Vec3 *>(inImpulse->obj);
  selfCpp->AddImpulse(
    *inBodyIDCpp,
    *inImpulseCpp
  );
}

void JoltC_BodyInterface_AddImpulse_1(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID,
  JoltC_Vec3_t * inImpulse,
  JoltC_RVec3_t * inPosition
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  const Vec3 * inImpulseCpp = static_cast<const Vec3 *>(inImpulse->obj);
  const RVec3 * inPositionCpp = static_cast<const RVec3 *>(inPosition->obj);
  selfCpp->AddImpulse(
    *inBodyIDCpp,
    *inImpulseCpp,
    *inPositionCpp
  );
}

void JoltC_BodyInterface_AddAngularImpulse(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID,
  JoltC_Vec3_t * inAngularImpulse
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  const Vec3 * inAngularImpulseCpp = static_cast<const Vec3 *>(inAngularImpulse->obj);
  selfCpp->AddAngularImpulse(
    *inBodyIDCpp,
    *inAngularImpulseCpp
  );
}

JoltC_TransformedShape_t * JoltC_BodyInterface_GetTransformedShape(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  TransformedShape * resultPtr = new TransformedShape();
  *resultPtr = selfCpp->GetTransformedShape(
    *inBodyIDCpp
  );
  JoltC_TransformedShape_t * result = new JoltC_TransformedShape_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

unsigned long long int JoltC_BodyInterface_GetUserData(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  return selfCpp->GetUserData(
    *inBodyIDCpp
  );
}

void JoltC_BodyInterface_SetUserData(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID,
  unsigned long long int inUserData
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  selfCpp->SetUserData(
    *inBodyIDCpp,
    inUserData
  );
}

JoltC_PhysicsMaterial_t * JoltC_BodyInterface_GetMaterial(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID,
  JoltC_SubShapeID_t * inSubShapeID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  const SubShapeID * inSubShapeIDCpp = static_cast<const SubShapeID *>(inSubShapeID->obj);
  const PhysicsMaterial * resultPtr = selfCpp->GetMaterial(
    *inBodyIDCpp,
    *inSubShapeIDCpp
  );
  JoltC_PhysicsMaterial_t * result = new JoltC_PhysicsMaterial_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

void JoltC_BodyInterface_InvalidateContactCache(
  JoltC_BodyInterface_t * self,
  JoltC_BodyID_t * inBodyID
) {
  BodyInterface * selfCpp = static_cast<BodyInterface *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  selfCpp->InvalidateContactCache(
    *inBodyIDCpp
  );
}

//endregion


#ifdef __cplusplus
}
#endif
