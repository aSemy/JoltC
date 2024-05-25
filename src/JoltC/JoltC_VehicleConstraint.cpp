#include "JoltC/JPC_VehicleConstraint.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_VehicleConstraint_t * JPC_VehicleConstraint_new(
  JPC_Body_t * inVehicleBody,
  const JPC_VehicleConstraintSettings_t * inSettings
) {
  JPC_VehicleConstraint_t * cInstance = new JPC_VehicleConstraint_t();
  VehicleConstraint * cppInstance = new VehicleConstraint(
    *reinterpret_cast<Body *>(inVehicleBody->obj),
    *reinterpret_cast<VehicleConstraintSettings *>(inSettings->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

void JPC_VehicleConstraint_SetMaxPitchRollAngle(
  JPC_VehicleConstraint_t * self,
  float inMaxPitchRollAngle
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  
  selfCpp->SetMaxPitchRollAngle(
  inMaxPitchRollAngle
  );
};

void JPC_VehicleConstraint_SetVehicleCollisionTester(
  JPC_VehicleConstraint_t * self,
  const JPC_VehicleCollisionTester_t * inTester
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  
  selfCpp->SetVehicleCollisionTester(
  reinterpret_cast<VehicleCollisionTester *>(inTester->obj)
  );
};

JPC_Vec3_t * JPC_VehicleConstraint_GetLocalUp(
  JPC_VehicleConstraint_t * self
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  Vec3 resultValue = selfCpp->GetLocalUp();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Vec3_t * JPC_VehicleConstraint_GetLocalForward(
  JPC_VehicleConstraint_t * self
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  Vec3 resultValue = selfCpp->GetLocalForward();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Vec3_t * JPC_VehicleConstraint_GetWorldUp(
  JPC_VehicleConstraint_t * self
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  Vec3 resultValue = selfCpp->GetWorldUp();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Body_t * JPC_VehicleConstraint_GetVehicleBody(
  JPC_VehicleConstraint_t * self
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  Body * result = selfCpp->GetVehicleBody();
  return reinterpret_cast<JPC_Body_t *>(result);
};

JPC_VehicleController_t * JPC_VehicleConstraint_GetController(
  JPC_VehicleConstraint_t * self
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  VehicleController * result = selfCpp->GetController();
  return reinterpret_cast<JPC_VehicleController_t *>(result);
};

const JPC_Wheel_t * JPC_VehicleConstraint_GetWheel(
  JPC_VehicleConstraint_t * self,
  unsigned long inIdx
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  const Wheel * result = selfCpp->GetWheel(
  inIdx
  );
  return reinterpret_cast<const JPC_Wheel_t *>(result);
};

JPC_Mat44_t * JPC_VehicleConstraint_GetWheelLocalTransform(
  JPC_VehicleConstraint_t * self,
  unsigned long inWheelIndex,
  JPC_Vec3_t * inWheelRight,
  JPC_Vec3_t * inWheelUp
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  Mat44 resultValue = selfCpp->GetWheelLocalTransform(
  inWheelIndex,
  *reinterpret_cast<Vec3 *>(inWheelRight->obj),
  *reinterpret_cast<Vec3 *>(inWheelUp->obj)
  );
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

JPC_RMat44_t * JPC_VehicleConstraint_GetWheelWorldTransform(
  JPC_VehicleConstraint_t * self,
  unsigned long inWheelIndex,
  JPC_Vec3_t * inWheelRight,
  JPC_Vec3_t * inWheelUp
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  RMat44 resultValue = selfCpp->GetWheelWorldTransform(
  inWheelIndex,
  *reinterpret_cast<Vec3 *>(inWheelRight->obj),
  *reinterpret_cast<Vec3 *>(inWheelUp->obj)
  );
  RMat44* result = new RMat44(resultValue);
  return reinterpret_cast<JPC_RMat44_t *>(result);
};

void JPC_VehicleConstraint_SetNumStepsBetweenCollisionTestActive(
  JPC_VehicleConstraint_t * self,
  unsigned long inSteps
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  
  selfCpp->SetNumStepsBetweenCollisionTestActive(
  inSteps
  );
};

const unsigned long JPC_VehicleConstraint_GetNumStepsBetweenCollisionTestActive(
  JPC_VehicleConstraint_t * self
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  const unsigned long result = selfCpp->GetNumStepsBetweenCollisionTestActive();
  return result;
};

void JPC_VehicleConstraint_SetNumStepsBetweenCollisionTestInactive(
  JPC_VehicleConstraint_t * self,
  unsigned long inSteps
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  
  selfCpp->SetNumStepsBetweenCollisionTestInactive(
  inSteps
  );
};

const unsigned long JPC_VehicleConstraint_GetNumStepsBetweenCollisionTestInactive(
  JPC_VehicleConstraint_t * self
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  const unsigned long result = selfCpp->GetNumStepsBetweenCollisionTestInactive();
  return result;
};

unsigned long JPC_VehicleConstraint_GetRefCount(
  JPC_VehicleConstraint_t * self
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_VehicleConstraint_AddRef(
  JPC_VehicleConstraint_t * self
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_VehicleConstraint_Release(
  JPC_VehicleConstraint_t * self
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  
  selfCpp->Release();
};

JPC_EConstraintType JPC_VehicleConstraint_GetType(
  JPC_VehicleConstraint_t * self
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  EConstraintType result = selfCpp->GetType();
  return static_cast<JPC_EConstraintType>(static_cast<int>(result));
};

JPC_EConstraintSubType JPC_VehicleConstraint_GetSubType(
  JPC_VehicleConstraint_t * self
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  EConstraintSubType result = selfCpp->GetSubType();
  return static_cast<JPC_EConstraintSubType>(static_cast<int>(result));
};

unsigned long JPC_VehicleConstraint_GetConstraintPriority(
  JPC_VehicleConstraint_t * self
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  unsigned long result = selfCpp->GetConstraintPriority();
  return result;
};

void JPC_VehicleConstraint_SetConstraintPriority(
  JPC_VehicleConstraint_t * self,
  unsigned long inPriority
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  
  selfCpp->SetConstraintPriority(
  inPriority
  );
};

void JPC_VehicleConstraint_SetNumVelocityStepsOverride(
  JPC_VehicleConstraint_t * self,
  long inN
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  
  selfCpp->SetNumVelocityStepsOverride(
  inN
  );
};

long JPC_VehicleConstraint_GetNumVelocityStepsOverride(
  JPC_VehicleConstraint_t * self
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  long result = selfCpp->GetNumVelocityStepsOverride();
  return result;
};

void JPC_VehicleConstraint_SetNumPositionStepsOverride(
  JPC_VehicleConstraint_t * self,
  long inN
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  
  selfCpp->SetNumPositionStepsOverride(
  inN
  );
};

long JPC_VehicleConstraint_GetNumPositionStepsOverride(
  JPC_VehicleConstraint_t * self
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  long result = selfCpp->GetNumPositionStepsOverride();
  return result;
};

void JPC_VehicleConstraint_SetEnabled(
  JPC_VehicleConstraint_t * self,
  bool inEnabled
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  
  selfCpp->SetEnabled(
  inEnabled
  );
};

bool JPC_VehicleConstraint_GetEnabled(
  JPC_VehicleConstraint_t * self
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  bool result = selfCpp->GetEnabled();
  return result;
};

bool JPC_VehicleConstraint_IsActive(
  JPC_VehicleConstraint_t * self
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  bool result = selfCpp->IsActive();
  return result;
};

unsigned long long int JPC_VehicleConstraint_GetUserData(
  JPC_VehicleConstraint_t * self
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JPC_VehicleConstraint_SetUserData(
  JPC_VehicleConstraint_t * self,
  unsigned long long int inUserData
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  
  selfCpp->SetUserData(
  inUserData
  );
};

void JPC_VehicleConstraint_ResetWarmStart(
  JPC_VehicleConstraint_t * self
) {
  VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
  
  selfCpp->ResetWarmStart();
};

//endregion functions

#ifdef __cplusplus
}
#endif

