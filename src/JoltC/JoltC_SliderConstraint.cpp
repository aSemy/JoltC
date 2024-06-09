#include "JoltC/JoltC_SliderConstraint.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

float JoltC_SliderConstraint_GetCurrentPosition(
  JoltC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  return selfCpp->GetCurrentPosition();
}

void JoltC_SliderConstraint_SetMaxFrictionForce(
  JoltC_SliderConstraint_t * self,
  float inFrictionForce
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  selfCpp->SetMaxFrictionForce(
    inFrictionForce
  );
}

float JoltC_SliderConstraint_GetMaxFrictionForce(
  JoltC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  return selfCpp->GetMaxFrictionForce();
}

JoltC_MotorSettings_t * JoltC_SliderConstraint_GetMotorSettings(
  JoltC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  MotorSettings* resultRef = &selfCpp->GetMotorSettings();
  JoltC_MotorSettings_t* result = new JoltC_MotorSettings_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
}

void JoltC_SliderConstraint_SetMotorState(
  JoltC_SliderConstraint_t * self,
  JoltC_EMotorState inState
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  EMotorState inStateCpp = static_cast<EMotorState>(static_cast<int>(inState));
  selfCpp->SetMotorState(
    inStateCpp
  );
}

JoltC_EMotorState JoltC_SliderConstraint_GetMotorState(
  JoltC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  EMotorState result = selfCpp->GetMotorState();
  return static_cast<JoltC_EMotorState>(static_cast<int>(result));
}

void JoltC_SliderConstraint_SetTargetVelocity(
  JoltC_SliderConstraint_t * self,
  float inVelocity
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  selfCpp->SetTargetVelocity(
    inVelocity
  );
}

float JoltC_SliderConstraint_GetTargetVelocity(
  JoltC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  return selfCpp->GetTargetVelocity();
}

void JoltC_SliderConstraint_SetTargetPosition(
  JoltC_SliderConstraint_t * self,
  float inPosition
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  selfCpp->SetTargetPosition(
    inPosition
  );
}

float JoltC_SliderConstraint_GetTargetPosition(
  JoltC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  return selfCpp->GetTargetPosition();
}

void JoltC_SliderConstraint_SetLimits(
  JoltC_SliderConstraint_t * self,
  float inLimitsMin,
  float inLimitsMax
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  selfCpp->SetLimits(
    inLimitsMin,
    inLimitsMax
  );
}

float JoltC_SliderConstraint_GetLimitsMin(
  JoltC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  return selfCpp->GetLimitsMin();
}

float JoltC_SliderConstraint_GetLimitsMax(
  JoltC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  return selfCpp->GetLimitsMax();
}

bool JoltC_SliderConstraint_HasLimits(
  JoltC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  return selfCpp->HasLimits();
}

JoltC_SpringSettings_t * JoltC_SliderConstraint_GetLimitsSpringSettings(
  JoltC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  SpringSettings* resultRef = &selfCpp->GetLimitsSpringSettings();
  JoltC_SpringSettings_t* result = new JoltC_SpringSettings_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
}

void JoltC_SliderConstraint_SetLimitsSpringSettings(
  JoltC_SliderConstraint_t * self,
  JoltC_SpringSettings_t * inLimitsSpringSettings
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  const SpringSettings * inLimitsSpringSettingsCpp = static_cast<const SpringSettings *>(inLimitsSpringSettings->obj);
  selfCpp->SetLimitsSpringSettings(
    *inLimitsSpringSettingsCpp
  );
}

JoltC_Vector2_t * JoltC_SliderConstraint_GetTotalLambdaPosition(
  JoltC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  Vector2 * resultPtr = new Vector2();
  *resultPtr = selfCpp->GetTotalLambdaPosition();
  JoltC_Vector2_t * result = new JoltC_Vector2_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

float JoltC_SliderConstraint_GetTotalLambdaPositionLimits(
  JoltC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  return selfCpp->GetTotalLambdaPositionLimits();
}

JoltC_Vec3_t * JoltC_SliderConstraint_GetTotalLambdaRotation(
  JoltC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetTotalLambdaRotation();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

float JoltC_SliderConstraint_GetTotalLambdaMotor(
  JoltC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  return selfCpp->GetTotalLambdaMotor();
}

JoltC_Body_t * JoltC_SliderConstraint_GetBody1(
  JoltC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  const Body * resultPtr = selfCpp->GetBody1();
  JoltC_Body_t * result = new JoltC_Body_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_Body_t * JoltC_SliderConstraint_GetBody2(
  JoltC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  const Body * resultPtr = selfCpp->GetBody2();
  JoltC_Body_t * result = new JoltC_Body_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_Mat44_t * JoltC_SliderConstraint_GetConstraintToBody1Matrix(
  JoltC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  Mat44 * resultPtr = new Mat44();
  *resultPtr = selfCpp->GetConstraintToBody1Matrix();
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Mat44_t * JoltC_SliderConstraint_GetConstraintToBody2Matrix(
  JoltC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  Mat44 * resultPtr = new Mat44();
  *resultPtr = selfCpp->GetConstraintToBody2Matrix();
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

unsigned long JoltC_SliderConstraint_GetRefCount(
  JoltC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_SliderConstraint_AddRef(
  JoltC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_SliderConstraint_Release(
  JoltC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  selfCpp->Release();
}

JoltC_EConstraintType JoltC_SliderConstraint_GetType(
  JoltC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  EConstraintType result = selfCpp->GetType();
  return static_cast<JoltC_EConstraintType>(static_cast<int>(result));
}

JoltC_EConstraintSubType JoltC_SliderConstraint_GetSubType(
  JoltC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  EConstraintSubType result = selfCpp->GetSubType();
  return static_cast<JoltC_EConstraintSubType>(static_cast<int>(result));
}

unsigned long JoltC_SliderConstraint_GetConstraintPriority(
  JoltC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  return selfCpp->GetConstraintPriority();
}

void JoltC_SliderConstraint_SetConstraintPriority(
  JoltC_SliderConstraint_t * self,
  unsigned long inPriority
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  selfCpp->SetConstraintPriority(
    inPriority
  );
}

void JoltC_SliderConstraint_SetNumVelocityStepsOverride(
  JoltC_SliderConstraint_t * self,
  long inN
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  selfCpp->SetNumVelocityStepsOverride(
    inN
  );
}

long JoltC_SliderConstraint_GetNumVelocityStepsOverride(
  JoltC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  return selfCpp->GetNumVelocityStepsOverride();
}

void JoltC_SliderConstraint_SetNumPositionStepsOverride(
  JoltC_SliderConstraint_t * self,
  long inN
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  selfCpp->SetNumPositionStepsOverride(
    inN
  );
}

long JoltC_SliderConstraint_GetNumPositionStepsOverride(
  JoltC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  return selfCpp->GetNumPositionStepsOverride();
}

void JoltC_SliderConstraint_SetEnabled(
  JoltC_SliderConstraint_t * self,
  bool inEnabled
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  selfCpp->SetEnabled(
    inEnabled
  );
}

bool JoltC_SliderConstraint_GetEnabled(
  JoltC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  return selfCpp->GetEnabled();
}

bool JoltC_SliderConstraint_IsActive(
  JoltC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  return selfCpp->IsActive();
}

unsigned long long int JoltC_SliderConstraint_GetUserData(
  JoltC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  return selfCpp->GetUserData();
}

void JoltC_SliderConstraint_SetUserData(
  JoltC_SliderConstraint_t * self,
  unsigned long long int inUserData
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  selfCpp->SetUserData(
    inUserData
  );
}

void JoltC_SliderConstraint_ResetWarmStart(
  JoltC_SliderConstraint_t * self
) {
  SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
  selfCpp->ResetWarmStart();
}

//endregion

#ifdef __cplusplus
}
#endif

