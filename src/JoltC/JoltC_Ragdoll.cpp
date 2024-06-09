#include "JoltC/JoltC_Ragdoll.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `Ragdoll` instance.
 */
JoltC_Ragdoll_t * JoltC_Ragdoll_new(
  JoltC_PhysicsSystem_t * inSystem
) {
  PhysicsSystem * inSystemCpp = static_cast<PhysicsSystem *>(inSystem->obj);
  JoltC_Ragdoll_t * cInstance = new JoltC_Ragdoll_t();
  Ragdoll * cppInstance = new Ragdoll(
    inSystemCpp
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

void JoltC_Ragdoll_AddToPhysicsSystem(
  JoltC_Ragdoll_t * self,
  JoltC_EActivation inActivationMode,
  bool inLockBodies
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  EActivation inActivationModeCpp = static_cast<EActivation>(static_cast<int>(inActivationMode));
  selfCpp->AddToPhysicsSystem(
    inActivationModeCpp,
    inLockBodies
  );
}

void JoltC_Ragdoll_RemoveFromPhysicsSystem(
  JoltC_Ragdoll_t * self,
  bool inLockBodies
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  selfCpp->RemoveFromPhysicsSystem(
    inLockBodies
  );
}

void JoltC_Ragdoll_Activate(
  JoltC_Ragdoll_t * self,
  bool inLockBodies
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  selfCpp->Activate(
    inLockBodies
  );
}

bool JoltC_Ragdoll_IsActive(
  JoltC_Ragdoll_t * self,
  bool inLockBodies
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  return selfCpp->IsActive(
    inLockBodies
  );
}

void JoltC_Ragdoll_SetGroupID(
  JoltC_Ragdoll_t * self,
  long inGroupID,
  bool inLockBodies
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  selfCpp->SetGroupID(
    inGroupID,
    inLockBodies
  );
}

void JoltC_Ragdoll_SetPose(
  JoltC_Ragdoll_t * self,
  JoltC_SkeletonPose_t * inPose,
  bool inLockBodies
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  const SkeletonPose * inPoseCpp = static_cast<const SkeletonPose *>(inPose->obj);
  selfCpp->SetPose(
    *inPoseCpp,
    inLockBodies
  );
}

void JoltC_Ragdoll_GetPose(
  JoltC_Ragdoll_t * self,
  JoltC_SkeletonPose_t * outPose,
  bool inLockBodies
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  SkeletonPose * outPoseCpp = static_cast<SkeletonPose *>(outPose->obj);
  selfCpp->GetPose(
    *outPoseCpp,
    inLockBodies
  );
}

void JoltC_Ragdoll_ResetWarmStart(
  JoltC_Ragdoll_t * self
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  selfCpp->ResetWarmStart();
}

void JoltC_Ragdoll_DriveToPoseUsingKinematics(
  JoltC_Ragdoll_t * self,
  JoltC_SkeletonPose_t * inPose,
  float inDeltaTime,
  bool inLockBodies
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  const SkeletonPose * inPoseCpp = static_cast<const SkeletonPose *>(inPose->obj);
  selfCpp->DriveToPoseUsingKinematics(
    *inPoseCpp,
    inDeltaTime,
    inLockBodies
  );
}

void JoltC_Ragdoll_DriveToPoseUsingMotors(
  JoltC_Ragdoll_t * self,
  JoltC_SkeletonPose_t * inPose
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  const SkeletonPose * inPoseCpp = static_cast<const SkeletonPose *>(inPose->obj);
  selfCpp->DriveToPoseUsingMotors(
    *inPoseCpp
  );
}

void JoltC_Ragdoll_SetLinearAndAngularVelocity(
  JoltC_Ragdoll_t * self,
  JoltC_Vec3_t * inLinearVelocity,
  JoltC_Vec3_t * inAngularVelocity,
  bool inLockBodies
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  const Vec3 * inLinearVelocityCpp = static_cast<const Vec3 *>(inLinearVelocity->obj);
  const Vec3 * inAngularVelocityCpp = static_cast<const Vec3 *>(inAngularVelocity->obj);
  selfCpp->SetLinearAndAngularVelocity(
    *inLinearVelocityCpp,
    *inAngularVelocityCpp,
    inLockBodies
  );
}

void JoltC_Ragdoll_SetLinearVelocity(
  JoltC_Ragdoll_t * self,
  JoltC_Vec3_t * inLinearVelocity,
  bool inLockBodies
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  const Vec3 * inLinearVelocityCpp = static_cast<const Vec3 *>(inLinearVelocity->obj);
  selfCpp->SetLinearVelocity(
    *inLinearVelocityCpp,
    inLockBodies
  );
}

void JoltC_Ragdoll_AddLinearVelocity(
  JoltC_Ragdoll_t * self,
  JoltC_Vec3_t * inLinearVelocity,
  bool inLockBodies
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  const Vec3 * inLinearVelocityCpp = static_cast<const Vec3 *>(inLinearVelocity->obj);
  selfCpp->AddLinearVelocity(
    *inLinearVelocityCpp,
    inLockBodies
  );
}

void JoltC_Ragdoll_AddImpulse(
  JoltC_Ragdoll_t * self,
  JoltC_Vec3_t * inImpulse,
  bool inLockBodies
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  const Vec3 * inImpulseCpp = static_cast<const Vec3 *>(inImpulse->obj);
  selfCpp->AddImpulse(
    *inImpulseCpp,
    inLockBodies
  );
}

void JoltC_Ragdoll_GetRootTransform(
  JoltC_Ragdoll_t * self,
  JoltC_RVec3_t * outPosition,
  JoltC_Quat_t * outRotation,
  bool inLockBodies
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  RVec3 * outPositionCpp = static_cast<RVec3 *>(outPosition->obj);
  Quat * outRotationCpp = static_cast<Quat *>(outRotation->obj);
  selfCpp->GetRootTransform(
    *outPositionCpp,
    *outRotationCpp,
    inLockBodies
  );
}

long JoltC_Ragdoll_GetBodyCount(
  JoltC_Ragdoll_t * self
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  return selfCpp->GetBodyCount();
}

JoltC_BodyID_t * JoltC_Ragdoll_GetBodyID(
  JoltC_Ragdoll_t * self,
  long inBodyIndex
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  BodyID * resultPtr = new BodyID();
  *resultPtr = selfCpp->GetBodyID(
    inBodyIndex
  );
  JoltC_BodyID_t * result = new JoltC_BodyID_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_BodyIDVector_t * JoltC_Ragdoll_GetBodyIDs(
  JoltC_Ragdoll_t * self
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  const BodyIDVector* resultRef = &selfCpp->GetBodyIDs();
  JoltC_BodyIDVector_t* result = new JoltC_BodyIDVector_t();
  const void * resultConstPtr = reinterpret_cast<const void*>(resultRef);
  void * resultPtr = const_cast<void*>(resultConstPtr);
  result->obj = resultPtr;
  return result;
}

long JoltC_Ragdoll_GetConstraintCount(
  JoltC_Ragdoll_t * self
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  return selfCpp->GetConstraintCount();
}

JoltC_AABox_t * JoltC_Ragdoll_GetWorldSpaceBounds(
  JoltC_Ragdoll_t * self,
  bool inLockBodies
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  AABox * resultPtr = new AABox();
  *resultPtr = selfCpp->GetWorldSpaceBounds(
    inLockBodies
  );
  JoltC_AABox_t * result = new JoltC_AABox_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_TwoBodyConstraint_t * JoltC_Ragdoll_GetConstraint(
  JoltC_Ragdoll_t * self,
  long inConstraintIndex
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  const TwoBodyConstraint * resultPtr = selfCpp->GetConstraint(
    inConstraintIndex
  );
  JoltC_TwoBodyConstraint_t * result = new JoltC_TwoBodyConstraint_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_RagdollSettings_t * JoltC_Ragdoll_GetRagdollSettings(
  JoltC_Ragdoll_t * self
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  const RagdollSettings * resultPtr = selfCpp->GetRagdollSettings();
  JoltC_RagdollSettings_t * result = new JoltC_RagdollSettings_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

//endregion

#ifdef __cplusplus
}
#endif

