#include "JoltC/JoltC_MotionProperties.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region converters

/**
 * Convert an instance of JoltC_SoftBodyMotionProperties_t into JoltC_MotionProperties_t.
 */
JoltC_MotionProperties_t * JoltC_MotionProperties_From_SoftBodyMotionProperties(
  JoltC_SoftBodyMotionProperties_t * subtype
) {
  return (JoltC_MotionProperties_t*) subtype;
};

//endregion

//region functions

JoltC_EMotionQuality JoltC_MotionProperties_GetMotionQuality(
  JoltC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  EMotionQuality result = selfCpp->GetMotionQuality();
  return static_cast<JoltC_EMotionQuality>(static_cast<int>(result));
};

JoltC_EAllowedDOFs JoltC_MotionProperties_GetAllowedDOFs(
  JoltC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  EAllowedDOFs result = selfCpp->GetAllowedDOFs();
  return static_cast<JoltC_EAllowedDOFs>(static_cast<int>(result));
};

bool JoltC_MotionProperties_GetAllowSleeping(
  JoltC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  bool result = selfCpp->GetAllowSleeping();
  return result;
};

JoltC_Vec3_t * JoltC_MotionProperties_GetLinearVelocity(
  JoltC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  Vec3 resultValue = selfCpp->GetLinearVelocity();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_MotionProperties_SetLinearVelocity(
  JoltC_MotionProperties_t * self,
  const JoltC_Vec3_t * inVelocity
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  
  selfCpp->SetLinearVelocity(
  *reinterpret_cast<Vec3 *>(inVelocity->obj)
  );
};

void JoltC_MotionProperties_SetLinearVelocityClamped(
  JoltC_MotionProperties_t * self,
  const JoltC_Vec3_t * inVelocity
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  
  selfCpp->SetLinearVelocityClamped(
  *reinterpret_cast<Vec3 *>(inVelocity->obj)
  );
};

JoltC_Vec3_t * JoltC_MotionProperties_GetAngularVelocity(
  JoltC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  Vec3 resultValue = selfCpp->GetAngularVelocity();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_MotionProperties_SetAngularVelocity(
  JoltC_MotionProperties_t * self,
  const JoltC_Vec3_t * inVelocity
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  
  selfCpp->SetAngularVelocity(
  *reinterpret_cast<Vec3 *>(inVelocity->obj)
  );
};

void JoltC_MotionProperties_SetAngularVelocityClamped(
  JoltC_MotionProperties_t * self,
  const JoltC_Vec3_t * inVelocity
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  
  selfCpp->SetAngularVelocityClamped(
  *reinterpret_cast<Vec3 *>(inVelocity->obj)
  );
};

void JoltC_MotionProperties_MoveKinematic(
  JoltC_MotionProperties_t * self,
  const JoltC_Vec3_t * inPosition,
  const JoltC_Quat_t * inRotation,
  float inDeltaTime
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  
  selfCpp->MoveKinematic(
  *reinterpret_cast<Vec3 *>(inPosition->obj),
  *reinterpret_cast<Quat *>(inRotation->obj),
  inDeltaTime
  );
};

float JoltC_MotionProperties_GetMaxLinearVelocity(
  JoltC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  float result = selfCpp->GetMaxLinearVelocity();
  return result;
};

void JoltC_MotionProperties_SetMaxLinearVelocity(
  JoltC_MotionProperties_t * self,
  float inVelocity
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  
  selfCpp->SetMaxLinearVelocity(
  inVelocity
  );
};

float JoltC_MotionProperties_GetMaxAngularVelocity(
  JoltC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  float result = selfCpp->GetMaxAngularVelocity();
  return result;
};

void JoltC_MotionProperties_SetMaxAngularVelocity(
  JoltC_MotionProperties_t * self,
  float inVelocity
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  
  selfCpp->SetMaxAngularVelocity(
  inVelocity
  );
};

void JoltC_MotionProperties_ClampLinearVelocity(
  JoltC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  
  selfCpp->ClampLinearVelocity();
};

void JoltC_MotionProperties_ClampAngularVelocity(
  JoltC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  
  selfCpp->ClampAngularVelocity();
};

float JoltC_MotionProperties_GetLinearDamping(
  JoltC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  float result = selfCpp->GetLinearDamping();
  return result;
};

void JoltC_MotionProperties_SetLinearDamping(
  JoltC_MotionProperties_t * self,
  float inDamping
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  
  selfCpp->SetLinearDamping(
  inDamping
  );
};

float JoltC_MotionProperties_GetAngularDamping(
  JoltC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  float result = selfCpp->GetAngularDamping();
  return result;
};

void JoltC_MotionProperties_SetAngularDamping(
  JoltC_MotionProperties_t * self,
  float inDamping
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  
  selfCpp->SetAngularDamping(
  inDamping
  );
};

float JoltC_MotionProperties_GetGravityFactor(
  JoltC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  float result = selfCpp->GetGravityFactor();
  return result;
};

void JoltC_MotionProperties_SetGravityFactor(
  JoltC_MotionProperties_t * self,
  float inFactor
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  
  selfCpp->SetGravityFactor(
  inFactor
  );
};

void JoltC_MotionProperties_SetMassProperties(
  JoltC_MotionProperties_t * self,
  JoltC_EAllowedDOFs inAllowedDOFs,
  const JoltC_MassProperties_t * inMassProperties
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  
  selfCpp->SetMassProperties(
  static_cast<EAllowedDOFs>(static_cast<int>(inAllowedDOFs)),
  *reinterpret_cast<MassProperties *>(inMassProperties->obj)
  );
};

float JoltC_MotionProperties_GetInverseMass(
  JoltC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  float result = selfCpp->GetInverseMass();
  return result;
};

float JoltC_MotionProperties_GetInverseMassUnchecked(
  JoltC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  float result = selfCpp->GetInverseMassUnchecked();
  return result;
};

void JoltC_MotionProperties_SetInverseMass(
  JoltC_MotionProperties_t * self,
  float inInvM
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  
  selfCpp->SetInverseMass(
  inInvM
  );
};

JoltC_Vec3_t * JoltC_MotionProperties_GetInverseInertiaDiagonal(
  JoltC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  Vec3 resultValue = selfCpp->GetInverseInertiaDiagonal();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

JoltC_Quat_t * JoltC_MotionProperties_GetInertiaRotation(
  JoltC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  Quat resultValue = selfCpp->GetInertiaRotation();
  Quat* result = new Quat(resultValue);
  return reinterpret_cast<JoltC_Quat_t *>(result);
};

void JoltC_MotionProperties_SetInverseInertia(
  JoltC_MotionProperties_t * self,
  const JoltC_Vec3_t * inInvI,
  const JoltC_Quat_t * inRotation
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  
  selfCpp->SetInverseInertia(
  *reinterpret_cast<Vec3 *>(inInvI->obj),
  *reinterpret_cast<Quat *>(inRotation->obj)
  );
};

JoltC_Mat44_t * JoltC_MotionProperties_GetLocalSpaceInverseInertia(
  JoltC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  Mat44 resultValue = selfCpp->GetLocalSpaceInverseInertia();
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JoltC_Mat44_t *>(result);
};

JoltC_Mat44_t * JoltC_MotionProperties_GetInverseInertiaForRotation(
  JoltC_MotionProperties_t * self,
  const JoltC_Mat44_t * inRotation
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  Mat44 resultValue = selfCpp->GetInverseInertiaForRotation(
  *reinterpret_cast<Mat44 *>(inRotation->obj)
  );
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JoltC_Mat44_t *>(result);
};

JoltC_Vec3_t * JoltC_MotionProperties_MultiplyWorldSpaceInverseInertiaByVector(
  JoltC_MotionProperties_t * self,
  const JoltC_Quat_t * inRotation,
  const JoltC_Vec3_t * inV
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  Vec3 resultValue = selfCpp->MultiplyWorldSpaceInverseInertiaByVector(
  *reinterpret_cast<Quat *>(inRotation->obj),
  *reinterpret_cast<Vec3 *>(inV->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

JoltC_Vec3_t * JoltC_MotionProperties_GetPointVelocityCOM(
  JoltC_MotionProperties_t * self,
  const JoltC_Vec3_t * inPointRelativeToCOM
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  Vec3 resultValue = selfCpp->GetPointVelocityCOM(
  *reinterpret_cast<Vec3 *>(inPointRelativeToCOM->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

JoltC_Vec3_t * JoltC_MotionProperties_GetAccumulatedForce(
  JoltC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  Vec3 resultValue = selfCpp->GetAccumulatedForce();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

JoltC_Vec3_t * JoltC_MotionProperties_GetAccumulatedTorque(
  JoltC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  Vec3 resultValue = selfCpp->GetAccumulatedTorque();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_MotionProperties_ResetForce(
  JoltC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  
  selfCpp->ResetForce();
};

void JoltC_MotionProperties_ResetTorque(
  JoltC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  
  selfCpp->ResetTorque();
};

void JoltC_MotionProperties_ResetMotion(
  JoltC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  
  selfCpp->ResetMotion();
};

const JoltC_Vec3_t * JoltC_MotionProperties_LockTranslation(
  JoltC_MotionProperties_t * self,
  const JoltC_Vec3_t * inV
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  const Vec3 resultValue = selfCpp->LockTranslation(
  *reinterpret_cast<Vec3 *>(inV->obj)
  );
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JoltC_Vec3_t *>(result);
};

const JoltC_Vec3_t * JoltC_MotionProperties_LockAngular(
  JoltC_MotionProperties_t * self,
  const JoltC_Vec3_t * inV
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  const Vec3 resultValue = selfCpp->LockAngular(
  *reinterpret_cast<Vec3 *>(inV->obj)
  );
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JoltC_Vec3_t *>(result);
};

void JoltC_MotionProperties_SetNumVelocityStepsOverride(
  JoltC_MotionProperties_t * self,
  unsigned long inN
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  
  selfCpp->SetNumVelocityStepsOverride(
  inN
  );
};

unsigned long JoltC_MotionProperties_GetNumVelocityStepsOverride(
  JoltC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  unsigned long result = selfCpp->GetNumVelocityStepsOverride();
  return result;
};

void JoltC_MotionProperties_SetNumPositionStepsOverride(
  JoltC_MotionProperties_t * self,
  unsigned long inN
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  
  selfCpp->SetNumPositionStepsOverride(
  inN
  );
};

unsigned long JoltC_MotionProperties_GetNumPositionStepsOverride(
  JoltC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  unsigned long result = selfCpp->GetNumPositionStepsOverride();
  return result;
};

//endregion

#ifdef __cplusplus
}
#endif

