#include "JoltC/JPC_MotionProperties.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

JPC_EMotionQuality JPC_MotionProperties_GetMotionQuality(
  JPC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  EMotionQuality result = selfCpp->GetMotionQuality();
  return static_cast<JPC_EMotionQuality>(static_cast<int>(result));
};

JPC_EAllowedDOFs JPC_MotionProperties_GetAllowedDOFs(
  JPC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  EAllowedDOFs result = selfCpp->GetAllowedDOFs();
  return static_cast<JPC_EAllowedDOFs>(static_cast<int>(result));
};

bool JPC_MotionProperties_GetAllowSleeping(
  JPC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  bool result = selfCpp->GetAllowSleeping();
  return result;
};

JPC_Vec3_t * JPC_MotionProperties_GetLinearVelocity(
  JPC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  Vec3 resultValue = selfCpp->GetLinearVelocity();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_MotionProperties_SetLinearVelocity(
  JPC_MotionProperties_t * self,
  const JPC_Vec3_t * inVelocity
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  
  selfCpp->SetLinearVelocity(
  *reinterpret_cast<Vec3 *>(inVelocity->obj)
  );
};

void JPC_MotionProperties_SetLinearVelocityClamped(
  JPC_MotionProperties_t * self,
  const JPC_Vec3_t * inVelocity
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  
  selfCpp->SetLinearVelocityClamped(
  *reinterpret_cast<Vec3 *>(inVelocity->obj)
  );
};

JPC_Vec3_t * JPC_MotionProperties_GetAngularVelocity(
  JPC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  Vec3 resultValue = selfCpp->GetAngularVelocity();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_MotionProperties_SetAngularVelocity(
  JPC_MotionProperties_t * self,
  const JPC_Vec3_t * inVelocity
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  
  selfCpp->SetAngularVelocity(
  *reinterpret_cast<Vec3 *>(inVelocity->obj)
  );
};

void JPC_MotionProperties_SetAngularVelocityClamped(
  JPC_MotionProperties_t * self,
  const JPC_Vec3_t * inVelocity
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  
  selfCpp->SetAngularVelocityClamped(
  *reinterpret_cast<Vec3 *>(inVelocity->obj)
  );
};

void JPC_MotionProperties_MoveKinematic(
  JPC_MotionProperties_t * self,
  const JPC_Vec3_t * inPosition,
  const JPC_Quat_t * inRotation,
  float inDeltaTime
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  
  selfCpp->MoveKinematic(
  *reinterpret_cast<Vec3 *>(inPosition->obj),
  *reinterpret_cast<Quat *>(inRotation->obj),
  inDeltaTime
  );
};

float JPC_MotionProperties_GetMaxLinearVelocity(
  JPC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  float result = selfCpp->GetMaxLinearVelocity();
  return result;
};

void JPC_MotionProperties_SetMaxLinearVelocity(
  JPC_MotionProperties_t * self,
  float inVelocity
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  
  selfCpp->SetMaxLinearVelocity(
  inVelocity
  );
};

float JPC_MotionProperties_GetMaxAngularVelocity(
  JPC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  float result = selfCpp->GetMaxAngularVelocity();
  return result;
};

void JPC_MotionProperties_SetMaxAngularVelocity(
  JPC_MotionProperties_t * self,
  float inVelocity
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  
  selfCpp->SetMaxAngularVelocity(
  inVelocity
  );
};

void JPC_MotionProperties_ClampLinearVelocity(
  JPC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  
  selfCpp->ClampLinearVelocity();
};

void JPC_MotionProperties_ClampAngularVelocity(
  JPC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  
  selfCpp->ClampAngularVelocity();
};

float JPC_MotionProperties_GetLinearDamping(
  JPC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  float result = selfCpp->GetLinearDamping();
  return result;
};

void JPC_MotionProperties_SetLinearDamping(
  JPC_MotionProperties_t * self,
  float inDamping
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  
  selfCpp->SetLinearDamping(
  inDamping
  );
};

float JPC_MotionProperties_GetAngularDamping(
  JPC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  float result = selfCpp->GetAngularDamping();
  return result;
};

void JPC_MotionProperties_SetAngularDamping(
  JPC_MotionProperties_t * self,
  float inDamping
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  
  selfCpp->SetAngularDamping(
  inDamping
  );
};

float JPC_MotionProperties_GetGravityFactor(
  JPC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  float result = selfCpp->GetGravityFactor();
  return result;
};

void JPC_MotionProperties_SetGravityFactor(
  JPC_MotionProperties_t * self,
  float inFactor
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  
  selfCpp->SetGravityFactor(
  inFactor
  );
};

void JPC_MotionProperties_SetMassProperties(
  JPC_MotionProperties_t * self,
  JPC_EAllowedDOFs inAllowedDOFs,
  const JPC_MassProperties_t * inMassProperties
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  
  selfCpp->SetMassProperties(
  static_cast<EAllowedDOFs>(static_cast<int>(inAllowedDOFs)),
  *reinterpret_cast<MassProperties *>(inMassProperties->obj)
  );
};

float JPC_MotionProperties_GetInverseMass(
  JPC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  float result = selfCpp->GetInverseMass();
  return result;
};

float JPC_MotionProperties_GetInverseMassUnchecked(
  JPC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  float result = selfCpp->GetInverseMassUnchecked();
  return result;
};

void JPC_MotionProperties_SetInverseMass(
  JPC_MotionProperties_t * self,
  float inInvM
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  
  selfCpp->SetInverseMass(
  inInvM
  );
};

JPC_Vec3_t * JPC_MotionProperties_GetInverseInertiaDiagonal(
  JPC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  Vec3 resultValue = selfCpp->GetInverseInertiaDiagonal();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Quat_t * JPC_MotionProperties_GetInertiaRotation(
  JPC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  Quat resultValue = selfCpp->GetInertiaRotation();
  Quat* result = new Quat(resultValue);
  return reinterpret_cast<JPC_Quat_t *>(result);
};

void JPC_MotionProperties_SetInverseInertia(
  JPC_MotionProperties_t * self,
  const JPC_Vec3_t * inInvI,
  const JPC_Quat_t * inRotation
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  
  selfCpp->SetInverseInertia(
  *reinterpret_cast<Vec3 *>(inInvI->obj),
  *reinterpret_cast<Quat *>(inRotation->obj)
  );
};

JPC_Mat44_t * JPC_MotionProperties_GetLocalSpaceInverseInertia(
  JPC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  Mat44 resultValue = selfCpp->GetLocalSpaceInverseInertia();
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

JPC_Mat44_t * JPC_MotionProperties_GetInverseInertiaForRotation(
  JPC_MotionProperties_t * self,
  const JPC_Mat44_t * inRotation
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  Mat44 resultValue = selfCpp->GetInverseInertiaForRotation(
  *reinterpret_cast<Mat44 *>(inRotation->obj)
  );
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

JPC_Vec3_t * JPC_MotionProperties_MultiplyWorldSpaceInverseInertiaByVector(
  JPC_MotionProperties_t * self,
  const JPC_Quat_t * inRotation,
  const JPC_Vec3_t * inV
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  Vec3 resultValue = selfCpp->MultiplyWorldSpaceInverseInertiaByVector(
  *reinterpret_cast<Quat *>(inRotation->obj),
  *reinterpret_cast<Vec3 *>(inV->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Vec3_t * JPC_MotionProperties_GetPointVelocityCOM(
  JPC_MotionProperties_t * self,
  const JPC_Vec3_t * inPointRelativeToCOM
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  Vec3 resultValue = selfCpp->GetPointVelocityCOM(
  *reinterpret_cast<Vec3 *>(inPointRelativeToCOM->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Vec3_t * JPC_MotionProperties_GetAccumulatedForce(
  JPC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  Vec3 resultValue = selfCpp->GetAccumulatedForce();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Vec3_t * JPC_MotionProperties_GetAccumulatedTorque(
  JPC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  Vec3 resultValue = selfCpp->GetAccumulatedTorque();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_MotionProperties_ResetForce(
  JPC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  
  selfCpp->ResetForce();
};

void JPC_MotionProperties_ResetTorque(
  JPC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  
  selfCpp->ResetTorque();
};

void JPC_MotionProperties_ResetMotion(
  JPC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  
  selfCpp->ResetMotion();
};

const JPC_Vec3_t * JPC_MotionProperties_LockTranslation(
  JPC_MotionProperties_t * self,
  const JPC_Vec3_t * inV
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  const Vec3 resultValue = selfCpp->LockTranslation(
  *reinterpret_cast<Vec3 *>(inV->obj)
  );
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JPC_Vec3_t *>(result);
};

const JPC_Vec3_t * JPC_MotionProperties_LockAngular(
  JPC_MotionProperties_t * self,
  const JPC_Vec3_t * inV
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  const Vec3 resultValue = selfCpp->LockAngular(
  *reinterpret_cast<Vec3 *>(inV->obj)
  );
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JPC_Vec3_t *>(result);
};

void JPC_MotionProperties_SetNumVelocityStepsOverride(
  JPC_MotionProperties_t * self,
  unsigned long inN
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  
  selfCpp->SetNumVelocityStepsOverride(
  inN
  );
};

unsigned long JPC_MotionProperties_GetNumVelocityStepsOverride(
  JPC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  unsigned long result = selfCpp->GetNumVelocityStepsOverride();
  return result;
};

void JPC_MotionProperties_SetNumPositionStepsOverride(
  JPC_MotionProperties_t * self,
  unsigned long inN
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  
  selfCpp->SetNumPositionStepsOverride(
  inN
  );
};

unsigned long JPC_MotionProperties_GetNumPositionStepsOverride(
  JPC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  unsigned long result = selfCpp->GetNumPositionStepsOverride();
  return result;
};

//endregion functions

#ifdef __cplusplus
}
#endif

