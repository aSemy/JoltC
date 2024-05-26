#include "JoltC/JoltC_SixDOFConstraint.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_SixDOFConstraint_SetTranslationLimits(
  JoltC_SixDOFConstraint_t * self,
  const JoltC_Vec3_t * inLimitMin,
  const JoltC_Vec3_t * inLimitMax
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  
  selfCpp->SetTranslationLimits(
  *reinterpret_cast<Vec3 *>(inLimitMin->obj),
  *reinterpret_cast<Vec3 *>(inLimitMax->obj)
  );
};

void JoltC_SixDOFConstraint_SetRotationLimits(
  JoltC_SixDOFConstraint_t * self,
  const JoltC_Vec3_t * inLimitMin,
  const JoltC_Vec3_t * inLimitMax
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  
  selfCpp->SetRotationLimits(
  *reinterpret_cast<Vec3 *>(inLimitMin->obj),
  *reinterpret_cast<Vec3 *>(inLimitMax->obj)
  );
};

float JoltC_SixDOFConstraint_GetLimitsMin(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  float result = selfCpp->GetLimitsMin(
  static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis))
  );
  return result;
};

float JoltC_SixDOFConstraint_GetLimitsMax(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  float result = selfCpp->GetLimitsMax(
  static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis))
  );
  return result;
};

const JoltC_Vec3_t * JoltC_SixDOFConstraint_GetTranslationLimitsMin(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  const Vec3 resultValue = selfCpp->GetTranslationLimitsMin();
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JoltC_Vec3_t *>(result);
};

const JoltC_Vec3_t * JoltC_SixDOFConstraint_GetTranslationLimitsMax(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  const Vec3 resultValue = selfCpp->GetTranslationLimitsMax();
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JoltC_Vec3_t *>(result);
};

const JoltC_Vec3_t * JoltC_SixDOFConstraint_GetRotationLimitsMin(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  const Vec3 resultValue = selfCpp->GetRotationLimitsMin();
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JoltC_Vec3_t *>(result);
};

const JoltC_Vec3_t * JoltC_SixDOFConstraint_GetRotationLimitsMax(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  const Vec3 resultValue = selfCpp->GetRotationLimitsMax();
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JoltC_Vec3_t *>(result);
};

bool JoltC_SixDOFConstraint_IsFixedAxis(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  bool result = selfCpp->IsFixedAxis(
  static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis))
  );
  return result;
};

bool JoltC_SixDOFConstraint_IsFreeAxis(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  bool result = selfCpp->IsFreeAxis(
  static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis))
  );
  return result;
};

const JoltC_SpringSettings_t * JoltC_SixDOFConstraint_GetLimitsSpringSettings(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  const SpringSettings& resultRef = selfCpp->GetLimitsSpringSettings(
  static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis))
  );
  const SpringSettings * result = &resultRef;
  return reinterpret_cast<const JoltC_SpringSettings_t *>(result);
};

void JoltC_SixDOFConstraint_SetLimitsSpringSettings(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis,
  const JoltC_SpringSettings_t * inLimitsSpringSettings
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  
  selfCpp->SetLimitsSpringSettings(
  static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis)),
  *reinterpret_cast<SpringSettings *>(inLimitsSpringSettings->obj)
  );
};

void JoltC_SixDOFConstraint_SetMaxFriction(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis,
  float inFriction
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  
  selfCpp->SetMaxFriction(
  static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis)),
  inFriction
  );
};

float JoltC_SixDOFConstraint_GetMaxFriction(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  float result = selfCpp->GetMaxFriction(
  static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis))
  );
  return result;
};

JoltC_Quat_t * JoltC_SixDOFConstraint_GetRotationInConstraintSpace(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  Quat resultValue = selfCpp->GetRotationInConstraintSpace();
  Quat* result = new Quat(resultValue);
  return reinterpret_cast<JoltC_Quat_t *>(result);
};

JoltC_MotorSettings_t * JoltC_SixDOFConstraint_GetMotorSettings(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  MotorSettings& resultRef = selfCpp->GetMotorSettings(
  static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis))
  );
  MotorSettings * result = &resultRef;
  return reinterpret_cast<JoltC_MotorSettings_t *>(result);
};

void JoltC_SixDOFConstraint_SetMotorState(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis,
  JoltC_EMotorState inState
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  
  selfCpp->SetMotorState(
  static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis)),
  static_cast<EMotorState>(static_cast<int>(inState))
  );
};

JoltC_EMotorState JoltC_SixDOFConstraint_GetMotorState(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  EMotorState result = selfCpp->GetMotorState(
  static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis))
  );
  return static_cast<JoltC_EMotorState>(static_cast<int>(result));
};

JoltC_Vec3_t * JoltC_SixDOFConstraint_GetTargetVelocityCS(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  Vec3 resultValue = selfCpp->GetTargetVelocityCS();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_SixDOFConstraint_SetTargetVelocityCS(
  JoltC_SixDOFConstraint_t * self,
  const JoltC_Vec3_t * inVelocity
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  
  selfCpp->SetTargetVelocityCS(
  *reinterpret_cast<Vec3 *>(inVelocity->obj)
  );
};

void JoltC_SixDOFConstraint_SetTargetAngularVelocityCS(
  JoltC_SixDOFConstraint_t * self,
  const JoltC_Vec3_t * inAngularVelocity
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  
  selfCpp->SetTargetAngularVelocityCS(
  *reinterpret_cast<Vec3 *>(inAngularVelocity->obj)
  );
};

JoltC_Vec3_t * JoltC_SixDOFConstraint_GetTargetAngularVelocityCS(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  Vec3 resultValue = selfCpp->GetTargetAngularVelocityCS();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

JoltC_Vec3_t * JoltC_SixDOFConstraint_GetTargetPositionCS(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  Vec3 resultValue = selfCpp->GetTargetPositionCS();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_SixDOFConstraint_SetTargetPositionCS(
  JoltC_SixDOFConstraint_t * self,
  const JoltC_Vec3_t * inPosition
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  
  selfCpp->SetTargetPositionCS(
  *reinterpret_cast<Vec3 *>(inPosition->obj)
  );
};

void JoltC_SixDOFConstraint_SetTargetOrientationCS(
  JoltC_SixDOFConstraint_t * self,
  const JoltC_Quat_t * inOrientation
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  
  selfCpp->SetTargetOrientationCS(
  *reinterpret_cast<Quat *>(inOrientation->obj)
  );
};

JoltC_Quat_t * JoltC_SixDOFConstraint_GetTargetOrientationCS(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  Quat resultValue = selfCpp->GetTargetOrientationCS();
  Quat* result = new Quat(resultValue);
  return reinterpret_cast<JoltC_Quat_t *>(result);
};

void JoltC_SixDOFConstraint_SetTargetOrientationBS(
  JoltC_SixDOFConstraint_t * self,
  const JoltC_Quat_t * inOrientation
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  
  selfCpp->SetTargetOrientationBS(
  *reinterpret_cast<Quat *>(inOrientation->obj)
  );
};

JoltC_Vec3_t * JoltC_SixDOFConstraint_GetTotalLambdaPosition(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  Vec3 resultValue = selfCpp->GetTotalLambdaPosition();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

JoltC_Vec3_t * JoltC_SixDOFConstraint_GetTotalLambdaRotation(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  Vec3 resultValue = selfCpp->GetTotalLambdaRotation();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

JoltC_Vec3_t * JoltC_SixDOFConstraint_GetTotalLambdaMotorTranslation(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  Vec3 resultValue = selfCpp->GetTotalLambdaMotorTranslation();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

JoltC_Vec3_t * JoltC_SixDOFConstraint_GetTotalLambdaMotorRotation(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  Vec3 resultValue = selfCpp->GetTotalLambdaMotorRotation();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

JoltC_Body_t * JoltC_SixDOFConstraint_GetBody1(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  Body * result = selfCpp->GetBody1();
  return reinterpret_cast<JoltC_Body_t *>(result);
};

JoltC_Body_t * JoltC_SixDOFConstraint_GetBody2(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  Body * result = selfCpp->GetBody2();
  return reinterpret_cast<JoltC_Body_t *>(result);
};

JoltC_Mat44_t * JoltC_SixDOFConstraint_GetConstraintToBody1Matrix(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  Mat44 resultValue = selfCpp->GetConstraintToBody1Matrix();
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JoltC_Mat44_t *>(result);
};

JoltC_Mat44_t * JoltC_SixDOFConstraint_GetConstraintToBody2Matrix(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  Mat44 resultValue = selfCpp->GetConstraintToBody2Matrix();
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JoltC_Mat44_t *>(result);
};

unsigned long JoltC_SixDOFConstraint_GetRefCount(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_SixDOFConstraint_AddRef(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  
  selfCpp->AddRef();
};

void JoltC_SixDOFConstraint_Release(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  
  selfCpp->Release();
};

JoltC_EConstraintType JoltC_SixDOFConstraint_GetType(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  EConstraintType result = selfCpp->GetType();
  return static_cast<JoltC_EConstraintType>(static_cast<int>(result));
};

JoltC_EConstraintSubType JoltC_SixDOFConstraint_GetSubType(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  EConstraintSubType result = selfCpp->GetSubType();
  return static_cast<JoltC_EConstraintSubType>(static_cast<int>(result));
};

unsigned long JoltC_SixDOFConstraint_GetConstraintPriority(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  unsigned long result = selfCpp->GetConstraintPriority();
  return result;
};

void JoltC_SixDOFConstraint_SetConstraintPriority(
  JoltC_SixDOFConstraint_t * self,
  unsigned long inPriority
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  
  selfCpp->SetConstraintPriority(
  inPriority
  );
};

void JoltC_SixDOFConstraint_SetNumVelocityStepsOverride(
  JoltC_SixDOFConstraint_t * self,
  long inN
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  
  selfCpp->SetNumVelocityStepsOverride(
  inN
  );
};

long JoltC_SixDOFConstraint_GetNumVelocityStepsOverride(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  long result = selfCpp->GetNumVelocityStepsOverride();
  return result;
};

void JoltC_SixDOFConstraint_SetNumPositionStepsOverride(
  JoltC_SixDOFConstraint_t * self,
  long inN
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  
  selfCpp->SetNumPositionStepsOverride(
  inN
  );
};

long JoltC_SixDOFConstraint_GetNumPositionStepsOverride(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  long result = selfCpp->GetNumPositionStepsOverride();
  return result;
};

void JoltC_SixDOFConstraint_SetEnabled(
  JoltC_SixDOFConstraint_t * self,
  bool inEnabled
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  
  selfCpp->SetEnabled(
  inEnabled
  );
};

bool JoltC_SixDOFConstraint_GetEnabled(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  bool result = selfCpp->GetEnabled();
  return result;
};

bool JoltC_SixDOFConstraint_IsActive(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  bool result = selfCpp->IsActive();
  return result;
};

unsigned long long int JoltC_SixDOFConstraint_GetUserData(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JoltC_SixDOFConstraint_SetUserData(
  JoltC_SixDOFConstraint_t * self,
  unsigned long long int inUserData
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  
  selfCpp->SetUserData(
  inUserData
  );
};

void JoltC_SixDOFConstraint_ResetWarmStart(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  
  selfCpp->ResetWarmStart();
};

//endregion

#ifdef __cplusplus
}
#endif

