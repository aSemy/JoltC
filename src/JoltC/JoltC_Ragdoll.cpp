#include "JoltC/JoltC_Ragdoll.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_Ragdoll_t * JoltC_Ragdoll_new(
  JoltC_PhysicsSystem_t * inSystem
) {
  JoltC_Ragdoll_t * cInstance = new JoltC_Ragdoll_t();
  Ragdoll * cppInstance = new Ragdoll(
    reinterpret_cast<PhysicsSystem *>(inSystem->obj)
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
  
  selfCpp->AddToPhysicsSystem(
    static_cast<EActivation>(static_cast<int>(inActivationMode)),
    inLockBodies
  );
};

void JoltC_Ragdoll_RemoveFromPhysicsSystem(
  JoltC_Ragdoll_t * self,
  bool inLockBodies
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  
  selfCpp->RemoveFromPhysicsSystem(
    inLockBodies
  );
};

void JoltC_Ragdoll_Activate(
  JoltC_Ragdoll_t * self,
  bool inLockBodies
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  
  selfCpp->Activate(
    inLockBodies
  );
};

bool JoltC_Ragdoll_IsActive(
  JoltC_Ragdoll_t * self,
  bool inLockBodies
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  bool result = selfCpp->IsActive(
    inLockBodies
  );
  return result;
};

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
};

void JoltC_Ragdoll_SetPose(
  JoltC_Ragdoll_t * self,
  JoltC_SkeletonPose_t * inPose,
  bool inLockBodies
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  
  selfCpp->SetPose(
    *reinterpret_cast<SkeletonPose *>(inPose->obj),
    inLockBodies
  );
};

void JoltC_Ragdoll_GetPose(
  JoltC_Ragdoll_t * self,
  JoltC_SkeletonPose_t * outPose,
  bool inLockBodies
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  
  selfCpp->GetPose(
    *reinterpret_cast<SkeletonPose *>(outPose->obj),
    inLockBodies
  );
};

void JoltC_Ragdoll_ResetWarmStart(
  JoltC_Ragdoll_t * self
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  
  selfCpp->ResetWarmStart();
};

void JoltC_Ragdoll_DriveToPoseUsingKinematics(
  JoltC_Ragdoll_t * self,
  JoltC_SkeletonPose_t * inPose,
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

void JoltC_Ragdoll_DriveToPoseUsingMotors(
  JoltC_Ragdoll_t * self,
  JoltC_SkeletonPose_t * inPose
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  
  selfCpp->DriveToPoseUsingMotors(
    *reinterpret_cast<SkeletonPose *>(inPose->obj)
  );
};

void JoltC_Ragdoll_SetLinearAndAngularVelocity(
  JoltC_Ragdoll_t * self,
  JoltC_Vec3_t * inLinearVelocity,
  JoltC_Vec3_t * inAngularVelocity,
  bool inLockBodies
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  
  selfCpp->SetLinearAndAngularVelocity(
    *reinterpret_cast<Vec3 *>(inLinearVelocity->obj),
    *reinterpret_cast<Vec3 *>(inAngularVelocity->obj),
    inLockBodies
  );
};

void JoltC_Ragdoll_SetLinearVelocity(
  JoltC_Ragdoll_t * self,
  JoltC_Vec3_t * inLinearVelocity,
  bool inLockBodies
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  
  selfCpp->SetLinearVelocity(
    *reinterpret_cast<Vec3 *>(inLinearVelocity->obj),
    inLockBodies
  );
};

void JoltC_Ragdoll_AddLinearVelocity(
  JoltC_Ragdoll_t * self,
  JoltC_Vec3_t * inLinearVelocity,
  bool inLockBodies
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  
  selfCpp->AddLinearVelocity(
    *reinterpret_cast<Vec3 *>(inLinearVelocity->obj),
    inLockBodies
  );
};

void JoltC_Ragdoll_AddImpulse(
  JoltC_Ragdoll_t * self,
  JoltC_Vec3_t * inImpulse,
  bool inLockBodies
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  
  selfCpp->AddImpulse(
    *reinterpret_cast<Vec3 *>(inImpulse->obj),
    inLockBodies
  );
};

void JoltC_Ragdoll_GetRootTransform(
  JoltC_Ragdoll_t * self,
  JoltC_RVec3_t * outPosition,
  JoltC_Quat_t * outRotation,
  bool inLockBodies
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  
  selfCpp->GetRootTransform(
    *reinterpret_cast<RVec3 *>(outPosition->obj),
    *reinterpret_cast<Quat *>(outRotation->obj),
    inLockBodies
  );
};

long JoltC_Ragdoll_GetBodyCount(
  JoltC_Ragdoll_t * self
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  long result = selfCpp->GetBodyCount();
  return result;
};

JoltC_BodyID_t * JoltC_Ragdoll_GetBodyID(
  JoltC_Ragdoll_t * self,
  long inBodyIndex
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  static BodyID resultValue = selfCpp->GetBodyID(
    inBodyIndex
  );
  JoltC_BodyID_t* result = new JoltC_BodyID_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

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
};

long JoltC_Ragdoll_GetConstraintCount(
  JoltC_Ragdoll_t * self
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  long result = selfCpp->GetConstraintCount();
  return result;
};

JoltC_AABox_t * JoltC_Ragdoll_GetWorldSpaceBounds(
  JoltC_Ragdoll_t * self,
  bool inLockBodies
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  static AABox resultValue = selfCpp->GetWorldSpaceBounds(
    inLockBodies
  );
  JoltC_AABox_t* result = new JoltC_AABox_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_TwoBodyConstraint_t * JoltC_Ragdoll_GetConstraint(
  JoltC_Ragdoll_t * self,
  long inConstraintIndex
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  const TwoBodyConstraint * resultValue = selfCpp->GetConstraint(
    inConstraintIndex
  );
  JoltC_TwoBodyConstraint_t* result = new JoltC_TwoBodyConstraint_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_RagdollSettings_t * JoltC_Ragdoll_GetRagdollSettings(
  JoltC_Ragdoll_t * self
) {
  Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
  const RagdollSettings * resultValue = selfCpp->GetRagdollSettings();
  JoltC_RagdollSettings_t* result = new JoltC_RagdollSettings_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

//endregion

#ifdef __cplusplus
}
#endif

