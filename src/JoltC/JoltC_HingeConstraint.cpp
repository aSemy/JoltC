#include "JoltC/JPC_HingeConstraint.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

float JPC_HingeConstraint_GetCurrentAngle(
  JPC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  float result = selfCpp->GetCurrentAngle();
  return result;
};

void JPC_HingeConstraint_SetMaxFrictionTorque(
  JPC_HingeConstraint_t * self,
  float inFrictionTorque
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  
  selfCpp->SetMaxFrictionTorque(
  inFrictionTorque
  );
};

float JPC_HingeConstraint_GetMaxFrictionTorque(
  JPC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  float result = selfCpp->GetMaxFrictionTorque();
  return result;
};

JPC_MotorSettings_t * JPC_HingeConstraint_GetMotorSettings(
  JPC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  MotorSettings& resultRef = selfCpp->GetMotorSettings();
  MotorSettings * result = &resultRef;
  return reinterpret_cast<JPC_MotorSettings_t *>(result);
};

void JPC_HingeConstraint_SetMotorState(
  JPC_HingeConstraint_t * self,
  JPC_EMotorState inState
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  
  selfCpp->SetMotorState(
  static_cast<EMotorState>(static_cast<int>(inState))
  );
};

JPC_EMotorState JPC_HingeConstraint_GetMotorState(
  JPC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  EMotorState result = selfCpp->GetMotorState();
  return static_cast<JPC_EMotorState>(static_cast<int>(result));
};

void JPC_HingeConstraint_SetTargetAngularVelocity(
  JPC_HingeConstraint_t * self,
  float inAngularVelocity
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  
  selfCpp->SetTargetAngularVelocity(
  inAngularVelocity
  );
};

float JPC_HingeConstraint_GetTargetAngularVelocity(
  JPC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  float result = selfCpp->GetTargetAngularVelocity();
  return result;
};

void JPC_HingeConstraint_SetTargetAngle(
  JPC_HingeConstraint_t * self,
  float inAngle
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  
  selfCpp->SetTargetAngle(
  inAngle
  );
};

float JPC_HingeConstraint_GetTargetAngle(
  JPC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  float result = selfCpp->GetTargetAngle();
  return result;
};

void JPC_HingeConstraint_SetLimits(
  JPC_HingeConstraint_t * self,
  float inLimitsMin,
  float inLimitsMax
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  
  selfCpp->SetLimits(
  inLimitsMin,
  inLimitsMax
  );
};

float JPC_HingeConstraint_GetLimitsMin(
  JPC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  float result = selfCpp->GetLimitsMin();
  return result;
};

float JPC_HingeConstraint_GetLimitsMax(
  JPC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  float result = selfCpp->GetLimitsMax();
  return result;
};

bool JPC_HingeConstraint_HasLimits(
  JPC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  bool result = selfCpp->HasLimits();
  return result;
};

JPC_SpringSettings_t * JPC_HingeConstraint_GetLimitsSpringSettings(
  JPC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  SpringSettings& resultRef = selfCpp->GetLimitsSpringSettings();
  SpringSettings * result = &resultRef;
  return reinterpret_cast<JPC_SpringSettings_t *>(result);
};

void JPC_HingeConstraint_SetLimitsSpringSettings(
  JPC_HingeConstraint_t * self,
  const JPC_SpringSettings_t * inLimitsSpringSettings
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  
  selfCpp->SetLimitsSpringSettings(
  *reinterpret_cast<SpringSettings *>(inLimitsSpringSettings->obj)
  );
};

JPC_Vec3_t * JPC_HingeConstraint_GetTotalLambdaPosition(
  JPC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  Vec3 resultValue = selfCpp->GetTotalLambdaPosition();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Vector2_t * JPC_HingeConstraint_GetTotalLambdaRotation(
  JPC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  Vector2 resultValue = selfCpp->GetTotalLambdaRotation();
  Vector2* result = new Vector2(resultValue);
  return reinterpret_cast<JPC_Vector2_t *>(result);
};

float JPC_HingeConstraint_GetTotalLambdaRotationLimits(
  JPC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  float result = selfCpp->GetTotalLambdaRotationLimits();
  return result;
};

float JPC_HingeConstraint_GetTotalLambdaMotor(
  JPC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  float result = selfCpp->GetTotalLambdaMotor();
  return result;
};

JPC_Body_t * JPC_HingeConstraint_GetBody1(
  JPC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  Body * result = selfCpp->GetBody1();
  return reinterpret_cast<JPC_Body_t *>(result);
};

JPC_Body_t * JPC_HingeConstraint_GetBody2(
  JPC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  Body * result = selfCpp->GetBody2();
  return reinterpret_cast<JPC_Body_t *>(result);
};

JPC_Mat44_t * JPC_HingeConstraint_GetConstraintToBody1Matrix(
  JPC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  Mat44 resultValue = selfCpp->GetConstraintToBody1Matrix();
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

JPC_Mat44_t * JPC_HingeConstraint_GetConstraintToBody2Matrix(
  JPC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  Mat44 resultValue = selfCpp->GetConstraintToBody2Matrix();
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

unsigned long JPC_HingeConstraint_GetRefCount(
  JPC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_HingeConstraint_AddRef(
  JPC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_HingeConstraint_Release(
  JPC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  
  selfCpp->Release();
};

JPC_EConstraintType JPC_HingeConstraint_GetType(
  JPC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  EConstraintType result = selfCpp->GetType();
  return static_cast<JPC_EConstraintType>(static_cast<int>(result));
};

JPC_EConstraintSubType JPC_HingeConstraint_GetSubType(
  JPC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  EConstraintSubType result = selfCpp->GetSubType();
  return static_cast<JPC_EConstraintSubType>(static_cast<int>(result));
};

unsigned long JPC_HingeConstraint_GetConstraintPriority(
  JPC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  unsigned long result = selfCpp->GetConstraintPriority();
  return result;
};

void JPC_HingeConstraint_SetConstraintPriority(
  JPC_HingeConstraint_t * self,
  unsigned long inPriority
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  
  selfCpp->SetConstraintPriority(
  inPriority
  );
};

void JPC_HingeConstraint_SetNumVelocityStepsOverride(
  JPC_HingeConstraint_t * self,
  long inN
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  
  selfCpp->SetNumVelocityStepsOverride(
  inN
  );
};

long JPC_HingeConstraint_GetNumVelocityStepsOverride(
  JPC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  long result = selfCpp->GetNumVelocityStepsOverride();
  return result;
};

void JPC_HingeConstraint_SetNumPositionStepsOverride(
  JPC_HingeConstraint_t * self,
  long inN
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  
  selfCpp->SetNumPositionStepsOverride(
  inN
  );
};

long JPC_HingeConstraint_GetNumPositionStepsOverride(
  JPC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  long result = selfCpp->GetNumPositionStepsOverride();
  return result;
};

void JPC_HingeConstraint_SetEnabled(
  JPC_HingeConstraint_t * self,
  bool inEnabled
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  
  selfCpp->SetEnabled(
  inEnabled
  );
};

bool JPC_HingeConstraint_GetEnabled(
  JPC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  bool result = selfCpp->GetEnabled();
  return result;
};

bool JPC_HingeConstraint_IsActive(
  JPC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  bool result = selfCpp->IsActive();
  return result;
};

unsigned long long int JPC_HingeConstraint_GetUserData(
  JPC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JPC_HingeConstraint_SetUserData(
  JPC_HingeConstraint_t * self,
  unsigned long long int inUserData
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  
  selfCpp->SetUserData(
  inUserData
  );
};

void JPC_HingeConstraint_ResetWarmStart(
  JPC_HingeConstraint_t * self
) {
  HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
  
  selfCpp->ResetWarmStart();
};

//endregion functions

#ifdef __cplusplus
}
#endif

