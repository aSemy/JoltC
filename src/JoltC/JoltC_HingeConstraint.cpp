#include "JoltC/JoltC_HingeConstraint.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_HingeConstraint_destroy(
  JoltC_HingeConstraint_t * self
){
  if (self == NULL) return;
  delete static_cast<HingeConstraint *>(self->obj);
  free(self);
}

//endregion
//region functions

float JoltC_HingeConstraint_GetCurrentAngle(
  JoltC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  return selfCpp->GetCurrentAngle();
}

void JoltC_HingeConstraint_SetMaxFrictionTorque(
  JoltC_HingeConstraint_t * self,
  float inFrictionTorque
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  selfCpp->SetMaxFrictionTorque(
    inFrictionTorque
  );
}

float JoltC_HingeConstraint_GetMaxFrictionTorque(
  JoltC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  return selfCpp->GetMaxFrictionTorque();
}

JoltC_MotorSettings_t * JoltC_HingeConstraint_GetMotorSettings(
  JoltC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  MotorSettings* resultRef = &selfCpp->GetMotorSettings();
  JoltC_MotorSettings_t* result = new JoltC_MotorSettings_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
}

void JoltC_HingeConstraint_SetMotorState(
  JoltC_HingeConstraint_t * self,
  JoltC_EMotorState inState
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  EMotorState inStateCpp = static_cast<EMotorState>(static_cast<int>(inState));
  selfCpp->SetMotorState(
    inStateCpp
  );
}

JoltC_EMotorState JoltC_HingeConstraint_GetMotorState(
  JoltC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  EMotorState result = selfCpp->GetMotorState();
  return static_cast<JoltC_EMotorState>(static_cast<int>(result));
}

void JoltC_HingeConstraint_SetTargetAngularVelocity(
  JoltC_HingeConstraint_t * self,
  float inAngularVelocity
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  selfCpp->SetTargetAngularVelocity(
    inAngularVelocity
  );
}

float JoltC_HingeConstraint_GetTargetAngularVelocity(
  JoltC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  return selfCpp->GetTargetAngularVelocity();
}

void JoltC_HingeConstraint_SetTargetAngle(
  JoltC_HingeConstraint_t * self,
  float inAngle
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  selfCpp->SetTargetAngle(
    inAngle
  );
}

float JoltC_HingeConstraint_GetTargetAngle(
  JoltC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  return selfCpp->GetTargetAngle();
}

void JoltC_HingeConstraint_SetLimits(
  JoltC_HingeConstraint_t * self,
  float inLimitsMin,
  float inLimitsMax
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  selfCpp->SetLimits(
    inLimitsMin,
    inLimitsMax
  );
}

float JoltC_HingeConstraint_GetLimitsMin(
  JoltC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  return selfCpp->GetLimitsMin();
}

float JoltC_HingeConstraint_GetLimitsMax(
  JoltC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  return selfCpp->GetLimitsMax();
}

bool JoltC_HingeConstraint_HasLimits(
  JoltC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  return selfCpp->HasLimits();
}

JoltC_SpringSettings_t * JoltC_HingeConstraint_GetLimitsSpringSettings(
  JoltC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  SpringSettings* resultRef = &selfCpp->GetLimitsSpringSettings();
  JoltC_SpringSettings_t* result = new JoltC_SpringSettings_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
}

void JoltC_HingeConstraint_SetLimitsSpringSettings(
  JoltC_HingeConstraint_t * self,
  JoltC_SpringSettings_t * inLimitsSpringSettings
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  const SpringSettings * inLimitsSpringSettingsCpp = static_cast<const SpringSettings *>(inLimitsSpringSettings->obj);
  selfCpp->SetLimitsSpringSettings(
    *inLimitsSpringSettingsCpp
  );
}

JoltC_Vec3_t * JoltC_HingeConstraint_GetTotalLambdaPosition(
  JoltC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetTotalLambdaPosition();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vector2_t * JoltC_HingeConstraint_GetTotalLambdaRotation(
  JoltC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  Vector2 * resultPtr = new Vector2();
  *resultPtr = selfCpp->GetTotalLambdaRotation();
  JoltC_Vector2_t * result = new JoltC_Vector2_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

float JoltC_HingeConstraint_GetTotalLambdaRotationLimits(
  JoltC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  return selfCpp->GetTotalLambdaRotationLimits();
}

float JoltC_HingeConstraint_GetTotalLambdaMotor(
  JoltC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  return selfCpp->GetTotalLambdaMotor();
}

JoltC_Body_t * JoltC_HingeConstraint_GetBody1(
  JoltC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  const Body * resultPtr = selfCpp->GetBody1();
  JoltC_Body_t * result = new JoltC_Body_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_Body_t * JoltC_HingeConstraint_GetBody2(
  JoltC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  const Body * resultPtr = selfCpp->GetBody2();
  JoltC_Body_t * result = new JoltC_Body_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_Mat44_t * JoltC_HingeConstraint_GetConstraintToBody1Matrix(
  JoltC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  Mat44 * resultPtr = new Mat44();
  *resultPtr = selfCpp->GetConstraintToBody1Matrix();
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Mat44_t * JoltC_HingeConstraint_GetConstraintToBody2Matrix(
  JoltC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  Mat44 * resultPtr = new Mat44();
  *resultPtr = selfCpp->GetConstraintToBody2Matrix();
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

unsigned long JoltC_HingeConstraint_GetRefCount(
  JoltC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_HingeConstraint_AddRef(
  JoltC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_HingeConstraint_Release(
  JoltC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  selfCpp->Release();
}

JoltC_EConstraintType JoltC_HingeConstraint_GetType(
  JoltC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  EConstraintType result = selfCpp->GetType();
  return static_cast<JoltC_EConstraintType>(static_cast<int>(result));
}

JoltC_EConstraintSubType JoltC_HingeConstraint_GetSubType(
  JoltC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  EConstraintSubType result = selfCpp->GetSubType();
  return static_cast<JoltC_EConstraintSubType>(static_cast<int>(result));
}

unsigned long JoltC_HingeConstraint_GetConstraintPriority(
  JoltC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  return selfCpp->GetConstraintPriority();
}

void JoltC_HingeConstraint_SetConstraintPriority(
  JoltC_HingeConstraint_t * self,
  unsigned long inPriority
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  selfCpp->SetConstraintPriority(
    inPriority
  );
}

void JoltC_HingeConstraint_SetNumVelocityStepsOverride(
  JoltC_HingeConstraint_t * self,
  long inN
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  selfCpp->SetNumVelocityStepsOverride(
    inN
  );
}

long JoltC_HingeConstraint_GetNumVelocityStepsOverride(
  JoltC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  return selfCpp->GetNumVelocityStepsOverride();
}

void JoltC_HingeConstraint_SetNumPositionStepsOverride(
  JoltC_HingeConstraint_t * self,
  long inN
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  selfCpp->SetNumPositionStepsOverride(
    inN
  );
}

long JoltC_HingeConstraint_GetNumPositionStepsOverride(
  JoltC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  return selfCpp->GetNumPositionStepsOverride();
}

void JoltC_HingeConstraint_SetEnabled(
  JoltC_HingeConstraint_t * self,
  bool inEnabled
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  selfCpp->SetEnabled(
    inEnabled
  );
}

bool JoltC_HingeConstraint_GetEnabled(
  JoltC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  return selfCpp->GetEnabled();
}

bool JoltC_HingeConstraint_IsActive(
  JoltC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  return selfCpp->IsActive();
}

unsigned long long int JoltC_HingeConstraint_GetUserData(
  JoltC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  return selfCpp->GetUserData();
}

void JoltC_HingeConstraint_SetUserData(
  JoltC_HingeConstraint_t * self,
  unsigned long long int inUserData
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  selfCpp->SetUserData(
    inUserData
  );
}

void JoltC_HingeConstraint_ResetWarmStart(
  JoltC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  selfCpp->ResetWarmStart();
}

//endregion


#ifdef __cplusplus
}
#endif
