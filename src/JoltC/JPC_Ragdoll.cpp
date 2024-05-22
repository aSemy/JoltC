#include "JoltC/JPC_Ragdoll.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_Ragdoll_t * JPC_Ragdoll_new(
  JPC_PhysicsSystem_t * inSystem
) {
  JPC_Ragdoll_t * cInstance = new JPC_Ragdoll_t();
  Ragdoll * cppInstance = new Ragdoll(
    reinterpret_cast<PhysicsSystem *>(inSystem->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

void JPC_Ragdoll_AddToPhysicsSystem(
  JPC_Ragdoll_t * self,
  JPC_EActivation inActivationMode,
  bool inLockBodies
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  
  selfCpp->AddToPhysicsSystem(
  static_cast<EActivation>(static_cast<int>(inActivationMode)),
  inLockBodies
  );
};

void JPC_Ragdoll_RemoveFromPhysicsSystem(
  JPC_Ragdoll_t * self,
  bool inLockBodies
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  
  selfCpp->RemoveFromPhysicsSystem(
  inLockBodies
  );
};

void JPC_Ragdoll_Activate(
  JPC_Ragdoll_t * self,
  bool inLockBodies
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  
  selfCpp->Activate(
  inLockBodies
  );
};

bool JPC_Ragdoll_IsActive(
  JPC_Ragdoll_t * self,
  bool inLockBodies
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  bool result = selfCpp->IsActive(
  inLockBodies
  );
  return result;
};

void JPC_Ragdoll_SetGroupID(
  JPC_Ragdoll_t * self,
  long inGroupID,
  bool inLockBodies
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  
  selfCpp->SetGroupID(
  inGroupID,
  inLockBodies
  );
};

void JPC_Ragdoll_SetPose(
  JPC_Ragdoll_t * self,
  const JPC_SkeletonPose_t * inPose,
  bool inLockBodies
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  
  selfCpp->SetPose(
  *reinterpret_cast<SkeletonPose *>(inPose->obj),
  inLockBodies
  );
};

void JPC_Ragdoll_GetPose(
  JPC_Ragdoll_t * self,
  JPC_SkeletonPose_t * outPose,
  bool inLockBodies
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  
  selfCpp->GetPose(
  *reinterpret_cast<SkeletonPose *>(outPose->obj),
  inLockBodies
  );
};

void JPC_Ragdoll_ResetWarmStart(
  JPC_Ragdoll_t * self
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  
  selfCpp->ResetWarmStart();
};

void JPC_Ragdoll_DriveToPoseUsingKinematics(
  JPC_Ragdoll_t * self,
  const JPC_SkeletonPose_t * inPose,
  float inDeltaTime,
  bool inLockBodies
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  
  selfCpp->DriveToPoseUsingKinematics(
  *reinterpret_cast<SkeletonPose *>(inPose->obj),
  inDeltaTime,
  inLockBodies
  );
};

void JPC_Ragdoll_DriveToPoseUsingMotors(
  JPC_Ragdoll_t * self,
  const JPC_SkeletonPose_t * inPose
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  
  selfCpp->DriveToPoseUsingMotors(
  *reinterpret_cast<SkeletonPose *>(inPose->obj)
  );
};

void JPC_Ragdoll_SetLinearAndAngularVelocity(
  JPC_Ragdoll_t * self,
  const JPC_Vec3_t * inLinearVelocity,
  const JPC_Vec3_t * inAngularVelocity,
  bool inLockBodies
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  
  selfCpp->SetLinearAndAngularVelocity(
  *reinterpret_cast<Vec3 *>(inLinearVelocity->obj),
  *reinterpret_cast<Vec3 *>(inAngularVelocity->obj),
  inLockBodies
  );
};

void JPC_Ragdoll_SetLinearVelocity(
  JPC_Ragdoll_t * self,
  const JPC_Vec3_t * inLinearVelocity,
  bool inLockBodies
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  
  selfCpp->SetLinearVelocity(
  *reinterpret_cast<Vec3 *>(inLinearVelocity->obj),
  inLockBodies
  );
};

void JPC_Ragdoll_AddLinearVelocity(
  JPC_Ragdoll_t * self,
  const JPC_Vec3_t * inLinearVelocity,
  bool inLockBodies
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  
  selfCpp->AddLinearVelocity(
  *reinterpret_cast<Vec3 *>(inLinearVelocity->obj),
  inLockBodies
  );
};

void JPC_Ragdoll_AddImpulse(
  JPC_Ragdoll_t * self,
  const JPC_Vec3_t * inImpulse,
  bool inLockBodies
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  
  selfCpp->AddImpulse(
  *reinterpret_cast<Vec3 *>(inImpulse->obj),
  inLockBodies
  );
};

void JPC_Ragdoll_GetRootTransform(
  JPC_Ragdoll_t * self,
  JPC_RVec3_t * outPosition,
  JPC_Quat_t * outRotation,
  bool inLockBodies
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  
  selfCpp->GetRootTransform(
  *reinterpret_cast<RVec3 *>(outPosition->obj),
  *reinterpret_cast<Quat *>(outRotation->obj),
  inLockBodies
  );
};

long JPC_Ragdoll_GetBodyCount(
  JPC_Ragdoll_t * self
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  long result = selfCpp->GetBodyCount();
  return result;
};

JPC_BodyID_t * JPC_Ragdoll_GetBodyID(
  JPC_Ragdoll_t * self,
  long inBodyIndex
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  BodyID resultValue = selfCpp->GetBodyID(
  inBodyIndex
  );
  BodyID* result = new BodyID(resultValue);
  return reinterpret_cast<JPC_BodyID_t *>(result);
};

const JPC_BodyIDVector_t * JPC_Ragdoll_GetBodyIDs(
  JPC_Ragdoll_t * self
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  const BodyIDVector& resultRef = selfCpp->GetBodyIDs();
  const BodyIDVector * result = &resultRef;
  return reinterpret_cast<const JPC_BodyIDVector_t *>(result);
};

long JPC_Ragdoll_GetConstraintCount(
  JPC_Ragdoll_t * self
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  long result = selfCpp->GetConstraintCount();
  return result;
};

JPC_AABox_t * JPC_Ragdoll_GetWorldSpaceBounds(
  JPC_Ragdoll_t * self,
  bool inLockBodies
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  AABox resultValue = selfCpp->GetWorldSpaceBounds(
  inLockBodies
  );
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JPC_AABox_t *>(result);
};

const JPC_TwoBodyConstraint_t * JPC_Ragdoll_GetConstraint(
  JPC_Ragdoll_t * self,
  long inConstraintIndex
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  const TwoBodyConstraint * result = selfCpp->GetConstraint(
  inConstraintIndex
  );
  return reinterpret_cast<const JPC_TwoBodyConstraint_t *>(result);
};

const JPC_RagdollSettings_t * JPC_Ragdoll_GetRagdollSettings(
  JPC_Ragdoll_t * self
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  const RagdollSettings * result = selfCpp->GetRagdollSettings();
  return reinterpret_cast<const JPC_RagdollSettings_t *>(result);
};

//endregion functions

#ifdef __cplusplus
}
#endif

