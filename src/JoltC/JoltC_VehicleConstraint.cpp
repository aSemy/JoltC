#include "JoltC/JoltC_VehicleConstraint.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `VehicleConstraint` instance.
 */
JoltC_VehicleConstraint_t * JoltC_VehicleConstraint_new(
  JoltC_Body_t * inVehicleBody,
  JoltC_VehicleConstraintSettings_t * inSettings
) {
  Body * inVehicleBodyCpp = static_cast<Body *>(inVehicleBody->obj);
  const VehicleConstraintSettings * inSettingsCpp = static_cast<const VehicleConstraintSettings *>(inSettings->obj);
  JoltC_VehicleConstraint_t * cInstance = new JoltC_VehicleConstraint_t();
  VehicleConstraint * cppInstance = new VehicleConstraint(
    *inVehicleBodyCpp,
    *inSettingsCpp
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

void JoltC_VehicleConstraint_SetMaxPitchRollAngle(
  JoltC_VehicleConstraint_t * self,
  float inMaxPitchRollAngle
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  selfCpp->SetMaxPitchRollAngle(
    inMaxPitchRollAngle
  );
}

void JoltC_VehicleConstraint_SetVehicleCollisionTester(
  JoltC_VehicleConstraint_t * self,
  JoltC_VehicleCollisionTester_t * inTester
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  const VehicleCollisionTester * inTesterCpp = static_cast<const VehicleCollisionTester *>(inTester->obj);
  selfCpp->SetVehicleCollisionTester(
    inTesterCpp
  );
}

JoltC_Vec3_t * JoltC_VehicleConstraint_GetLocalUp(
  JoltC_VehicleConstraint_t * self
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetLocalUp();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_VehicleConstraint_GetLocalForward(
  JoltC_VehicleConstraint_t * self
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetLocalForward();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_VehicleConstraint_GetWorldUp(
  JoltC_VehicleConstraint_t * self
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetWorldUp();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Body_t * JoltC_VehicleConstraint_GetVehicleBody(
  JoltC_VehicleConstraint_t * self
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  const Body * resultPtr = selfCpp->GetVehicleBody();
  JoltC_Body_t * result = new JoltC_Body_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_VehicleController_t * JoltC_VehicleConstraint_GetController(
  JoltC_VehicleConstraint_t * self
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  const VehicleController * resultPtr = selfCpp->GetController();
  JoltC_VehicleController_t * result = new JoltC_VehicleController_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_Wheel_t * JoltC_VehicleConstraint_GetWheel(
  JoltC_VehicleConstraint_t * self,
  unsigned long inIdx
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  const Wheel * resultPtr = selfCpp->GetWheel(
    inIdx
  );
  JoltC_Wheel_t * result = new JoltC_Wheel_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_Mat44_t * JoltC_VehicleConstraint_GetWheelLocalTransform(
  JoltC_VehicleConstraint_t * self,
  unsigned long inWheelIndex,
  JoltC_Vec3_t * inWheelRight,
  JoltC_Vec3_t * inWheelUp
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  Vec3 * inWheelRightCpp = static_cast<Vec3 *>(inWheelRight->obj);
  Vec3 * inWheelUpCpp = static_cast<Vec3 *>(inWheelUp->obj);
  Mat44 * resultPtr = new Mat44();
  *resultPtr = selfCpp->GetWheelLocalTransform(
    inWheelIndex,
    *inWheelRightCpp,
    *inWheelUpCpp
  );
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_RMat44_t * JoltC_VehicleConstraint_GetWheelWorldTransform(
  JoltC_VehicleConstraint_t * self,
  unsigned long inWheelIndex,
  JoltC_Vec3_t * inWheelRight,
  JoltC_Vec3_t * inWheelUp
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  Vec3 * inWheelRightCpp = static_cast<Vec3 *>(inWheelRight->obj);
  Vec3 * inWheelUpCpp = static_cast<Vec3 *>(inWheelUp->obj);
  RMat44 * resultPtr = new RMat44();
  *resultPtr = selfCpp->GetWheelWorldTransform(
    inWheelIndex,
    *inWheelRightCpp,
    *inWheelUpCpp
  );
  JoltC_RMat44_t * result = new JoltC_RMat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_VehicleConstraint_SetNumStepsBetweenCollisionTestActive(
  JoltC_VehicleConstraint_t * self,
  unsigned long inSteps
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  selfCpp->SetNumStepsBetweenCollisionTestActive(
    inSteps
  );
}

const unsigned long JoltC_VehicleConstraint_GetNumStepsBetweenCollisionTestActive(
  JoltC_VehicleConstraint_t * self
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  return selfCpp->GetNumStepsBetweenCollisionTestActive();
}

void JoltC_VehicleConstraint_SetNumStepsBetweenCollisionTestInactive(
  JoltC_VehicleConstraint_t * self,
  unsigned long inSteps
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  selfCpp->SetNumStepsBetweenCollisionTestInactive(
    inSteps
  );
}

const unsigned long JoltC_VehicleConstraint_GetNumStepsBetweenCollisionTestInactive(
  JoltC_VehicleConstraint_t * self
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  return selfCpp->GetNumStepsBetweenCollisionTestInactive();
}

unsigned long JoltC_VehicleConstraint_GetRefCount(
  JoltC_VehicleConstraint_t * self
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_VehicleConstraint_AddRef(
  JoltC_VehicleConstraint_t * self
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_VehicleConstraint_Release(
  JoltC_VehicleConstraint_t * self
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  selfCpp->Release();
}

JoltC_EConstraintType JoltC_VehicleConstraint_GetType(
  JoltC_VehicleConstraint_t * self
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  EConstraintType result = selfCpp->GetType();
  return static_cast<JoltC_EConstraintType>(static_cast<int>(result));
}

JoltC_EConstraintSubType JoltC_VehicleConstraint_GetSubType(
  JoltC_VehicleConstraint_t * self
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  EConstraintSubType result = selfCpp->GetSubType();
  return static_cast<JoltC_EConstraintSubType>(static_cast<int>(result));
}

unsigned long JoltC_VehicleConstraint_GetConstraintPriority(
  JoltC_VehicleConstraint_t * self
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  return selfCpp->GetConstraintPriority();
}

void JoltC_VehicleConstraint_SetConstraintPriority(
  JoltC_VehicleConstraint_t * self,
  unsigned long inPriority
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  selfCpp->SetConstraintPriority(
    inPriority
  );
}

void JoltC_VehicleConstraint_SetNumVelocityStepsOverride(
  JoltC_VehicleConstraint_t * self,
  long inN
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  selfCpp->SetNumVelocityStepsOverride(
    inN
  );
}

long JoltC_VehicleConstraint_GetNumVelocityStepsOverride(
  JoltC_VehicleConstraint_t * self
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  return selfCpp->GetNumVelocityStepsOverride();
}

void JoltC_VehicleConstraint_SetNumPositionStepsOverride(
  JoltC_VehicleConstraint_t * self,
  long inN
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  selfCpp->SetNumPositionStepsOverride(
    inN
  );
}

long JoltC_VehicleConstraint_GetNumPositionStepsOverride(
  JoltC_VehicleConstraint_t * self
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  return selfCpp->GetNumPositionStepsOverride();
}

void JoltC_VehicleConstraint_SetEnabled(
  JoltC_VehicleConstraint_t * self,
  bool inEnabled
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  selfCpp->SetEnabled(
    inEnabled
  );
}

bool JoltC_VehicleConstraint_GetEnabled(
  JoltC_VehicleConstraint_t * self
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  return selfCpp->GetEnabled();
}

bool JoltC_VehicleConstraint_IsActive(
  JoltC_VehicleConstraint_t * self
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  return selfCpp->IsActive();
}

unsigned long long int JoltC_VehicleConstraint_GetUserData(
  JoltC_VehicleConstraint_t * self
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  return selfCpp->GetUserData();
}

void JoltC_VehicleConstraint_SetUserData(
  JoltC_VehicleConstraint_t * self,
  unsigned long long int inUserData
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  selfCpp->SetUserData(
    inUserData
  );
}

void JoltC_VehicleConstraint_ResetWarmStart(
  JoltC_VehicleConstraint_t * self
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  selfCpp->ResetWarmStart();
}

//endregion

#ifdef __cplusplus
}
#endif

