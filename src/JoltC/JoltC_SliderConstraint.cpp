#include "JoltC/JPC_SliderConstraint.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

float JPC_SliderConstraint_GetCurrentPosition(
  JPC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  float result = selfCpp->GetCurrentPosition();
  return result;
};

void JPC_SliderConstraint_SetMaxFrictionForce(
  JPC_SliderConstraint_t * self,
  float inFrictionForce
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  
  selfCpp->SetMaxFrictionForce(
  inFrictionForce
  );
};

float JPC_SliderConstraint_GetMaxFrictionForce(
  JPC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  float result = selfCpp->GetMaxFrictionForce();
  return result;
};

JPC_MotorSettings_t * JPC_SliderConstraint_GetMotorSettings(
  JPC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  MotorSettings& resultRef = selfCpp->GetMotorSettings();
  MotorSettings * result = &resultRef;
  return reinterpret_cast<JPC_MotorSettings_t *>(result);
};

void JPC_SliderConstraint_SetMotorState(
  JPC_SliderConstraint_t * self,
  JPC_EMotorState inState
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  
  selfCpp->SetMotorState(
  static_cast<EMotorState>(static_cast<int>(inState))
  );
};

JPC_EMotorState JPC_SliderConstraint_GetMotorState(
  JPC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  EMotorState result = selfCpp->GetMotorState();
  return static_cast<JPC_EMotorState>(static_cast<int>(result));
};

void JPC_SliderConstraint_SetTargetVelocity(
  JPC_SliderConstraint_t * self,
  float inVelocity
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  
  selfCpp->SetTargetVelocity(
  inVelocity
  );
};

float JPC_SliderConstraint_GetTargetVelocity(
  JPC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  float result = selfCpp->GetTargetVelocity();
  return result;
};

void JPC_SliderConstraint_SetTargetPosition(
  JPC_SliderConstraint_t * self,
  float inPosition
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  
  selfCpp->SetTargetPosition(
  inPosition
  );
};

float JPC_SliderConstraint_GetTargetPosition(
  JPC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  float result = selfCpp->GetTargetPosition();
  return result;
};

void JPC_SliderConstraint_SetLimits(
  JPC_SliderConstraint_t * self,
  float inLimitsMin,
  float inLimitsMax
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  
  selfCpp->SetLimits(
  inLimitsMin,
  inLimitsMax
  );
};

float JPC_SliderConstraint_GetLimitsMin(
  JPC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  float result = selfCpp->GetLimitsMin();
  return result;
};

float JPC_SliderConstraint_GetLimitsMax(
  JPC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  float result = selfCpp->GetLimitsMax();
  return result;
};

bool JPC_SliderConstraint_HasLimits(
  JPC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  bool result = selfCpp->HasLimits();
  return result;
};

JPC_SpringSettings_t * JPC_SliderConstraint_GetLimitsSpringSettings(
  JPC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  SpringSettings& resultRef = selfCpp->GetLimitsSpringSettings();
  SpringSettings * result = &resultRef;
  return reinterpret_cast<JPC_SpringSettings_t *>(result);
};

void JPC_SliderConstraint_SetLimitsSpringSettings(
  JPC_SliderConstraint_t * self,
  const JPC_SpringSettings_t * inLimitsSpringSettings
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  
  selfCpp->SetLimitsSpringSettings(
  *reinterpret_cast<SpringSettings *>(inLimitsSpringSettings->obj)
  );
};

JPC_Vector2_t * JPC_SliderConstraint_GetTotalLambdaPosition(
  JPC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  Vector2 resultValue = selfCpp->GetTotalLambdaPosition();
  Vector2* result = new Vector2(resultValue);
  return reinterpret_cast<JPC_Vector2_t *>(result);
};

float JPC_SliderConstraint_GetTotalLambdaPositionLimits(
  JPC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  float result = selfCpp->GetTotalLambdaPositionLimits();
  return result;
};

JPC_Vec3_t * JPC_SliderConstraint_GetTotalLambdaRotation(
  JPC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  Vec3 resultValue = selfCpp->GetTotalLambdaRotation();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

float JPC_SliderConstraint_GetTotalLambdaMotor(
  JPC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  float result = selfCpp->GetTotalLambdaMotor();
  return result;
};

JPC_Body_t * JPC_SliderConstraint_GetBody1(
  JPC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  Body * result = selfCpp->GetBody1();
  return reinterpret_cast<JPC_Body_t *>(result);
};

JPC_Body_t * JPC_SliderConstraint_GetBody2(
  JPC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  Body * result = selfCpp->GetBody2();
  return reinterpret_cast<JPC_Body_t *>(result);
};

JPC_Mat44_t * JPC_SliderConstraint_GetConstraintToBody1Matrix(
  JPC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  Mat44 resultValue = selfCpp->GetConstraintToBody1Matrix();
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

JPC_Mat44_t * JPC_SliderConstraint_GetConstraintToBody2Matrix(
  JPC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  Mat44 resultValue = selfCpp->GetConstraintToBody2Matrix();
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

unsigned long JPC_SliderConstraint_GetRefCount(
  JPC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_SliderConstraint_AddRef(
  JPC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_SliderConstraint_Release(
  JPC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  
  selfCpp->Release();
};

JPC_EConstraintType JPC_SliderConstraint_GetType(
  JPC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  EConstraintType result = selfCpp->GetType();
  return static_cast<JPC_EConstraintType>(static_cast<int>(result));
};

JPC_EConstraintSubType JPC_SliderConstraint_GetSubType(
  JPC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  EConstraintSubType result = selfCpp->GetSubType();
  return static_cast<JPC_EConstraintSubType>(static_cast<int>(result));
};

unsigned long JPC_SliderConstraint_GetConstraintPriority(
  JPC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  unsigned long result = selfCpp->GetConstraintPriority();
  return result;
};

void JPC_SliderConstraint_SetConstraintPriority(
  JPC_SliderConstraint_t * self,
  unsigned long inPriority
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  
  selfCpp->SetConstraintPriority(
  inPriority
  );
};

void JPC_SliderConstraint_SetNumVelocityStepsOverride(
  JPC_SliderConstraint_t * self,
  long inN
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  
  selfCpp->SetNumVelocityStepsOverride(
  inN
  );
};

long JPC_SliderConstraint_GetNumVelocityStepsOverride(
  JPC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  long result = selfCpp->GetNumVelocityStepsOverride();
  return result;
};

void JPC_SliderConstraint_SetNumPositionStepsOverride(
  JPC_SliderConstraint_t * self,
  long inN
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  
  selfCpp->SetNumPositionStepsOverride(
  inN
  );
};

long JPC_SliderConstraint_GetNumPositionStepsOverride(
  JPC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  long result = selfCpp->GetNumPositionStepsOverride();
  return result;
};

void JPC_SliderConstraint_SetEnabled(
  JPC_SliderConstraint_t * self,
  bool inEnabled
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  
  selfCpp->SetEnabled(
  inEnabled
  );
};

bool JPC_SliderConstraint_GetEnabled(
  JPC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  bool result = selfCpp->GetEnabled();
  return result;
};

bool JPC_SliderConstraint_IsActive(
  JPC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  bool result = selfCpp->IsActive();
  return result;
};

unsigned long long int JPC_SliderConstraint_GetUserData(
  JPC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JPC_SliderConstraint_SetUserData(
  JPC_SliderConstraint_t * self,
  unsigned long long int inUserData
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  
  selfCpp->SetUserData(
  inUserData
  );
};

void JPC_SliderConstraint_ResetWarmStart(
  JPC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  
  selfCpp->ResetWarmStart();
};

//endregion functions

#ifdef __cplusplus
}
#endif

