#include "JoltC/JoltC_MotionProperties.h"
#include "JoltC/JoltJS.h"

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
}

JoltC_EAllowedDOFs JoltC_MotionProperties_GetAllowedDOFs(
  JoltC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  EAllowedDOFs result = selfCpp->GetAllowedDOFs();
  return static_cast<JoltC_EAllowedDOFs>(static_cast<int>(result));
}

bool JoltC_MotionProperties_GetAllowSleeping(
  JoltC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  return selfCpp->GetAllowSleeping();
}

JoltC_Vec3_t * JoltC_MotionProperties_GetLinearVelocity(
  JoltC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetLinearVelocity();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_MotionProperties_SetLinearVelocity(
  JoltC_MotionProperties_t * self,
  JoltC_Vec3_t * inVelocity
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  const Vec3 * inVelocityCpp = static_cast<const Vec3 *>(inVelocity->obj);
  selfCpp->SetLinearVelocity(
    *inVelocityCpp
  );
}

void JoltC_MotionProperties_SetLinearVelocityClamped(
  JoltC_MotionProperties_t * self,
  JoltC_Vec3_t * inVelocity
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  const Vec3 * inVelocityCpp = static_cast<const Vec3 *>(inVelocity->obj);
  selfCpp->SetLinearVelocityClamped(
    *inVelocityCpp
  );
}

JoltC_Vec3_t * JoltC_MotionProperties_GetAngularVelocity(
  JoltC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetAngularVelocity();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_MotionProperties_SetAngularVelocity(
  JoltC_MotionProperties_t * self,
  JoltC_Vec3_t * inVelocity
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  const Vec3 * inVelocityCpp = static_cast<const Vec3 *>(inVelocity->obj);
  selfCpp->SetAngularVelocity(
    *inVelocityCpp
  );
}

void JoltC_MotionProperties_SetAngularVelocityClamped(
  JoltC_MotionProperties_t * self,
  JoltC_Vec3_t * inVelocity
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  const Vec3 * inVelocityCpp = static_cast<const Vec3 *>(inVelocity->obj);
  selfCpp->SetAngularVelocityClamped(
    *inVelocityCpp
  );
}

void JoltC_MotionProperties_MoveKinematic(
  JoltC_MotionProperties_t * self,
  JoltC_Vec3_t * inPosition,
  JoltC_Quat_t * inRotation,
  float inDeltaTime
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  const Vec3 * inPositionCpp = static_cast<const Vec3 *>(inPosition->obj);
  const Quat * inRotationCpp = static_cast<const Quat *>(inRotation->obj);
  selfCpp->MoveKinematic(
    *inPositionCpp,
    *inRotationCpp,
    inDeltaTime
  );
}

float JoltC_MotionProperties_GetMaxLinearVelocity(
  JoltC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  return selfCpp->GetMaxLinearVelocity();
}

void JoltC_MotionProperties_SetMaxLinearVelocity(
  JoltC_MotionProperties_t * self,
  float inVelocity
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  selfCpp->SetMaxLinearVelocity(
    inVelocity
  );
}

float JoltC_MotionProperties_GetMaxAngularVelocity(
  JoltC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  return selfCpp->GetMaxAngularVelocity();
}

void JoltC_MotionProperties_SetMaxAngularVelocity(
  JoltC_MotionProperties_t * self,
  float inVelocity
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  selfCpp->SetMaxAngularVelocity(
    inVelocity
  );
}

void JoltC_MotionProperties_ClampLinearVelocity(
  JoltC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  selfCpp->ClampLinearVelocity();
}

void JoltC_MotionProperties_ClampAngularVelocity(
  JoltC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  selfCpp->ClampAngularVelocity();
}

float JoltC_MotionProperties_GetLinearDamping(
  JoltC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  return selfCpp->GetLinearDamping();
}

void JoltC_MotionProperties_SetLinearDamping(
  JoltC_MotionProperties_t * self,
  float inDamping
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  selfCpp->SetLinearDamping(
    inDamping
  );
}

float JoltC_MotionProperties_GetAngularDamping(
  JoltC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  return selfCpp->GetAngularDamping();
}

void JoltC_MotionProperties_SetAngularDamping(
  JoltC_MotionProperties_t * self,
  float inDamping
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  selfCpp->SetAngularDamping(
    inDamping
  );
}

float JoltC_MotionProperties_GetGravityFactor(
  JoltC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  return selfCpp->GetGravityFactor();
}

void JoltC_MotionProperties_SetGravityFactor(
  JoltC_MotionProperties_t * self,
  float inFactor
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  selfCpp->SetGravityFactor(
    inFactor
  );
}

void JoltC_MotionProperties_SetMassProperties(
  JoltC_MotionProperties_t * self,
  JoltC_EAllowedDOFs inAllowedDOFs,
  JoltC_MassProperties_t * inMassProperties
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  EAllowedDOFs inAllowedDOFsCpp = static_cast<EAllowedDOFs>(static_cast<int>(inAllowedDOFs));
  const MassProperties * inMassPropertiesCpp = static_cast<const MassProperties *>(inMassProperties->obj);
  selfCpp->SetMassProperties(
    inAllowedDOFsCpp,
    *inMassPropertiesCpp
  );
}

float JoltC_MotionProperties_GetInverseMass(
  JoltC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  return selfCpp->GetInverseMass();
}

float JoltC_MotionProperties_GetInverseMassUnchecked(
  JoltC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  return selfCpp->GetInverseMassUnchecked();
}

void JoltC_MotionProperties_SetInverseMass(
  JoltC_MotionProperties_t * self,
  float inInvM
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  selfCpp->SetInverseMass(
    inInvM
  );
}

JoltC_Vec3_t * JoltC_MotionProperties_GetInverseInertiaDiagonal(
  JoltC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetInverseInertiaDiagonal();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Quat_t * JoltC_MotionProperties_GetInertiaRotation(
  JoltC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  Quat * resultPtr = new Quat();
  *resultPtr = selfCpp->GetInertiaRotation();
  JoltC_Quat_t * result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_MotionProperties_SetInverseInertia(
  JoltC_MotionProperties_t * self,
  JoltC_Vec3_t * inInvI,
  JoltC_Quat_t * inRotation
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  const Vec3 * inInvICpp = static_cast<const Vec3 *>(inInvI->obj);
  const Quat * inRotationCpp = static_cast<const Quat *>(inRotation->obj);
  selfCpp->SetInverseInertia(
    *inInvICpp,
    *inRotationCpp
  );
}

JoltC_Mat44_t * JoltC_MotionProperties_GetLocalSpaceInverseInertia(
  JoltC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  Mat44 * resultPtr = new Mat44();
  *resultPtr = selfCpp->GetLocalSpaceInverseInertia();
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Mat44_t * JoltC_MotionProperties_GetInverseInertiaForRotation(
  JoltC_MotionProperties_t * self,
  JoltC_Mat44_t * inRotation
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  const Mat44 * inRotationCpp = static_cast<const Mat44 *>(inRotation->obj);
  Mat44 * resultPtr = new Mat44();
  *resultPtr = selfCpp->GetInverseInertiaForRotation(
    *inRotationCpp
  );
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_MotionProperties_MultiplyWorldSpaceInverseInertiaByVector(
  JoltC_MotionProperties_t * self,
  JoltC_Quat_t * inRotation,
  JoltC_Vec3_t * inV
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  const Quat * inRotationCpp = static_cast<const Quat *>(inRotation->obj);
  const Vec3 * inVCpp = static_cast<const Vec3 *>(inV->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->MultiplyWorldSpaceInverseInertiaByVector(
    *inRotationCpp,
    *inVCpp
  );
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_MotionProperties_GetPointVelocityCOM(
  JoltC_MotionProperties_t * self,
  JoltC_Vec3_t * inPointRelativeToCOM
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  const Vec3 * inPointRelativeToCOMCpp = static_cast<const Vec3 *>(inPointRelativeToCOM->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetPointVelocityCOM(
    *inPointRelativeToCOMCpp
  );
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_MotionProperties_GetAccumulatedForce(
  JoltC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetAccumulatedForce();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_MotionProperties_GetAccumulatedTorque(
  JoltC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetAccumulatedTorque();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_MotionProperties_ResetForce(
  JoltC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  selfCpp->ResetForce();
}

void JoltC_MotionProperties_ResetTorque(
  JoltC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  selfCpp->ResetTorque();
}

void JoltC_MotionProperties_ResetMotion(
  JoltC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  selfCpp->ResetMotion();
}

JoltC_Vec3_t * JoltC_MotionProperties_LockTranslation(
  JoltC_MotionProperties_t * self,
  JoltC_Vec3_t * inV
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  const Vec3 * inVCpp = static_cast<const Vec3 *>(inV->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->LockTranslation(
    *inVCpp
  );
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_MotionProperties_LockAngular(
  JoltC_MotionProperties_t * self,
  JoltC_Vec3_t * inV
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  const Vec3 * inVCpp = static_cast<const Vec3 *>(inV->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->LockAngular(
    *inVCpp
  );
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_MotionProperties_SetNumVelocityStepsOverride(
  JoltC_MotionProperties_t * self,
  unsigned long inN
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  selfCpp->SetNumVelocityStepsOverride(
    inN
  );
}

unsigned long JoltC_MotionProperties_GetNumVelocityStepsOverride(
  JoltC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  return selfCpp->GetNumVelocityStepsOverride();
}

void JoltC_MotionProperties_SetNumPositionStepsOverride(
  JoltC_MotionProperties_t * self,
  unsigned long inN
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  selfCpp->SetNumPositionStepsOverride(
    inN
  );
}

unsigned long JoltC_MotionProperties_GetNumPositionStepsOverride(
  JoltC_MotionProperties_t * self
) {
  MotionProperties * selfCpp = static_cast<MotionProperties *>(self->obj);
  return selfCpp->GetNumPositionStepsOverride();
}

//endregion

#ifdef __cplusplus
}
#endif

