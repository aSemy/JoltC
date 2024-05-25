#include "JoltC/JPC_SixDOFConstraint.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JPC_SixDOFConstraint_SetTranslationLimits(
  JPC_SixDOFConstraint_t * self,
  const JPC_Vec3_t * inLimitMin,
  const JPC_Vec3_t * inLimitMax
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  
  selfCpp->SetTranslationLimits(
  *reinterpret_cast<Vec3 *>(inLimitMin->obj),
  *reinterpret_cast<Vec3 *>(inLimitMax->obj)
  );
};

void JPC_SixDOFConstraint_SetRotationLimits(
  JPC_SixDOFConstraint_t * self,
  const JPC_Vec3_t * inLimitMin,
  const JPC_Vec3_t * inLimitMax
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  
  selfCpp->SetRotationLimits(
  *reinterpret_cast<Vec3 *>(inLimitMin->obj),
  *reinterpret_cast<Vec3 *>(inLimitMax->obj)
  );
};

float JPC_SixDOFConstraint_GetLimitsMin(
  JPC_SixDOFConstraint_t * self,
  JPC_SixDOFConstraintSettings_EAxis inAxis
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  float result = selfCpp->GetLimitsMin(
  static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis))
  );
  return result;
};

float JPC_SixDOFConstraint_GetLimitsMax(
  JPC_SixDOFConstraint_t * self,
  JPC_SixDOFConstraintSettings_EAxis inAxis
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  float result = selfCpp->GetLimitsMax(
  static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis))
  );
  return result;
};

const JPC_Vec3_t * JPC_SixDOFConstraint_GetTranslationLimitsMin(
  JPC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  const Vec3 resultValue = selfCpp->GetTranslationLimitsMin();
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JPC_Vec3_t *>(result);
};

const JPC_Vec3_t * JPC_SixDOFConstraint_GetTranslationLimitsMax(
  JPC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  const Vec3 resultValue = selfCpp->GetTranslationLimitsMax();
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JPC_Vec3_t *>(result);
};

const JPC_Vec3_t * JPC_SixDOFConstraint_GetRotationLimitsMin(
  JPC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  const Vec3 resultValue = selfCpp->GetRotationLimitsMin();
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JPC_Vec3_t *>(result);
};

const JPC_Vec3_t * JPC_SixDOFConstraint_GetRotationLimitsMax(
  JPC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  const Vec3 resultValue = selfCpp->GetRotationLimitsMax();
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JPC_Vec3_t *>(result);
};

bool JPC_SixDOFConstraint_IsFixedAxis(
  JPC_SixDOFConstraint_t * self,
  JPC_SixDOFConstraintSettings_EAxis inAxis
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  bool result = selfCpp->IsFixedAxis(
  static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis))
  );
  return result;
};

bool JPC_SixDOFConstraint_IsFreeAxis(
  JPC_SixDOFConstraint_t * self,
  JPC_SixDOFConstraintSettings_EAxis inAxis
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  bool result = selfCpp->IsFreeAxis(
  static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis))
  );
  return result;
};

const JPC_SpringSettings_t * JPC_SixDOFConstraint_GetLimitsSpringSettings(
  JPC_SixDOFConstraint_t * self,
  JPC_SixDOFConstraintSettings_EAxis inAxis
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  const SpringSettings& resultRef = selfCpp->GetLimitsSpringSettings(
  static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis))
  );
  const SpringSettings * result = &resultRef;
  return reinterpret_cast<const JPC_SpringSettings_t *>(result);
};

void JPC_SixDOFConstraint_SetLimitsSpringSettings(
  JPC_SixDOFConstraint_t * self,
  JPC_SixDOFConstraintSettings_EAxis inAxis,
  const JPC_SpringSettings_t * inLimitsSpringSettings
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  
  selfCpp->SetLimitsSpringSettings(
  static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis)),
  *reinterpret_cast<SpringSettings *>(inLimitsSpringSettings->obj)
  );
};

void JPC_SixDOFConstraint_SetMaxFriction(
  JPC_SixDOFConstraint_t * self,
  JPC_SixDOFConstraintSettings_EAxis inAxis,
  float inFriction
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  
  selfCpp->SetMaxFriction(
  static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis)),
  inFriction
  );
};

float JPC_SixDOFConstraint_GetMaxFriction(
  JPC_SixDOFConstraint_t * self,
  JPC_SixDOFConstraintSettings_EAxis inAxis
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  float result = selfCpp->GetMaxFriction(
  static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis))
  );
  return result;
};

JPC_Quat_t * JPC_SixDOFConstraint_GetRotationInConstraintSpace(
  JPC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  Quat resultValue = selfCpp->GetRotationInConstraintSpace();
  Quat* result = new Quat(resultValue);
  return reinterpret_cast<JPC_Quat_t *>(result);
};

JPC_MotorSettings_t * JPC_SixDOFConstraint_GetMotorSettings(
  JPC_SixDOFConstraint_t * self,
  JPC_SixDOFConstraintSettings_EAxis inAxis
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  MotorSettings& resultRef = selfCpp->GetMotorSettings(
  static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis))
  );
  MotorSettings * result = &resultRef;
  return reinterpret_cast<JPC_MotorSettings_t *>(result);
};

void JPC_SixDOFConstraint_SetMotorState(
  JPC_SixDOFConstraint_t * self,
  JPC_SixDOFConstraintSettings_EAxis inAxis,
  JPC_EMotorState inState
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  
  selfCpp->SetMotorState(
  static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis)),
  static_cast<EMotorState>(static_cast<int>(inState))
  );
};

JPC_EMotorState JPC_SixDOFConstraint_GetMotorState(
  JPC_SixDOFConstraint_t * self,
  JPC_SixDOFConstraintSettings_EAxis inAxis
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  EMotorState result = selfCpp->GetMotorState(
  static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis))
  );
  return static_cast<JPC_EMotorState>(static_cast<int>(result));
};

JPC_Vec3_t * JPC_SixDOFConstraint_GetTargetVelocityCS(
  JPC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  Vec3 resultValue = selfCpp->GetTargetVelocityCS();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_SixDOFConstraint_SetTargetVelocityCS(
  JPC_SixDOFConstraint_t * self,
  const JPC_Vec3_t * inVelocity
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  
  selfCpp->SetTargetVelocityCS(
  *reinterpret_cast<Vec3 *>(inVelocity->obj)
  );
};

void JPC_SixDOFConstraint_SetTargetAngularVelocityCS(
  JPC_SixDOFConstraint_t * self,
  const JPC_Vec3_t * inAngularVelocity
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  
  selfCpp->SetTargetAngularVelocityCS(
  *reinterpret_cast<Vec3 *>(inAngularVelocity->obj)
  );
};

JPC_Vec3_t * JPC_SixDOFConstraint_GetTargetAngularVelocityCS(
  JPC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  Vec3 resultValue = selfCpp->GetTargetAngularVelocityCS();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Vec3_t * JPC_SixDOFConstraint_GetTargetPositionCS(
  JPC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  Vec3 resultValue = selfCpp->GetTargetPositionCS();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_SixDOFConstraint_SetTargetPositionCS(
  JPC_SixDOFConstraint_t * self,
  const JPC_Vec3_t * inPosition
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  
  selfCpp->SetTargetPositionCS(
  *reinterpret_cast<Vec3 *>(inPosition->obj)
  );
};

void JPC_SixDOFConstraint_SetTargetOrientationCS(
  JPC_SixDOFConstraint_t * self,
  const JPC_Quat_t * inOrientation
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  
  selfCpp->SetTargetOrientationCS(
  *reinterpret_cast<Quat *>(inOrientation->obj)
  );
};

JPC_Quat_t * JPC_SixDOFConstraint_GetTargetOrientationCS(
  JPC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  Quat resultValue = selfCpp->GetTargetOrientationCS();
  Quat* result = new Quat(resultValue);
  return reinterpret_cast<JPC_Quat_t *>(result);
};

void JPC_SixDOFConstraint_SetTargetOrientationBS(
  JPC_SixDOFConstraint_t * self,
  const JPC_Quat_t * inOrientation
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  
  selfCpp->SetTargetOrientationBS(
  *reinterpret_cast<Quat *>(inOrientation->obj)
  );
};

JPC_Vec3_t * JPC_SixDOFConstraint_GetTotalLambdaPosition(
  JPC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  Vec3 resultValue = selfCpp->GetTotalLambdaPosition();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Vec3_t * JPC_SixDOFConstraint_GetTotalLambdaRotation(
  JPC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  Vec3 resultValue = selfCpp->GetTotalLambdaRotation();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Vec3_t * JPC_SixDOFConstraint_GetTotalLambdaMotorTranslation(
  JPC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  Vec3 resultValue = selfCpp->GetTotalLambdaMotorTranslation();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Vec3_t * JPC_SixDOFConstraint_GetTotalLambdaMotorRotation(
  JPC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  Vec3 resultValue = selfCpp->GetTotalLambdaMotorRotation();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Body_t * JPC_SixDOFConstraint_GetBody1(
  JPC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  Body * result = selfCpp->GetBody1();
  return reinterpret_cast<JPC_Body_t *>(result);
};

JPC_Body_t * JPC_SixDOFConstraint_GetBody2(
  JPC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  Body * result = selfCpp->GetBody2();
  return reinterpret_cast<JPC_Body_t *>(result);
};

JPC_Mat44_t * JPC_SixDOFConstraint_GetConstraintToBody1Matrix(
  JPC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  Mat44 resultValue = selfCpp->GetConstraintToBody1Matrix();
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

JPC_Mat44_t * JPC_SixDOFConstraint_GetConstraintToBody2Matrix(
  JPC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  Mat44 resultValue = selfCpp->GetConstraintToBody2Matrix();
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

unsigned long JPC_SixDOFConstraint_GetRefCount(
  JPC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_SixDOFConstraint_AddRef(
  JPC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_SixDOFConstraint_Release(
  JPC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  
  selfCpp->Release();
};

JPC_EConstraintType JPC_SixDOFConstraint_GetType(
  JPC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  EConstraintType result = selfCpp->GetType();
  return static_cast<JPC_EConstraintType>(static_cast<int>(result));
};

JPC_EConstraintSubType JPC_SixDOFConstraint_GetSubType(
  JPC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  EConstraintSubType result = selfCpp->GetSubType();
  return static_cast<JPC_EConstraintSubType>(static_cast<int>(result));
};

unsigned long JPC_SixDOFConstraint_GetConstraintPriority(
  JPC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  unsigned long result = selfCpp->GetConstraintPriority();
  return result;
};

void JPC_SixDOFConstraint_SetConstraintPriority(
  JPC_SixDOFConstraint_t * self,
  unsigned long inPriority
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  
  selfCpp->SetConstraintPriority(
  inPriority
  );
};

void JPC_SixDOFConstraint_SetNumVelocityStepsOverride(
  JPC_SixDOFConstraint_t * self,
  long inN
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  
  selfCpp->SetNumVelocityStepsOverride(
  inN
  );
};

long JPC_SixDOFConstraint_GetNumVelocityStepsOverride(
  JPC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  long result = selfCpp->GetNumVelocityStepsOverride();
  return result;
};

void JPC_SixDOFConstraint_SetNumPositionStepsOverride(
  JPC_SixDOFConstraint_t * self,
  long inN
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  
  selfCpp->SetNumPositionStepsOverride(
  inN
  );
};

long JPC_SixDOFConstraint_GetNumPositionStepsOverride(
  JPC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  long result = selfCpp->GetNumPositionStepsOverride();
  return result;
};

void JPC_SixDOFConstraint_SetEnabled(
  JPC_SixDOFConstraint_t * self,
  bool inEnabled
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  
  selfCpp->SetEnabled(
  inEnabled
  );
};

bool JPC_SixDOFConstraint_GetEnabled(
  JPC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  bool result = selfCpp->GetEnabled();
  return result;
};

bool JPC_SixDOFConstraint_IsActive(
  JPC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  bool result = selfCpp->IsActive();
  return result;
};

unsigned long long int JPC_SixDOFConstraint_GetUserData(
  JPC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JPC_SixDOFConstraint_SetUserData(
  JPC_SixDOFConstraint_t * self,
  unsigned long long int inUserData
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  
  selfCpp->SetUserData(
  inUserData
  );
};

void JPC_SixDOFConstraint_ResetWarmStart(
  JPC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  
  selfCpp->ResetWarmStart();
};

//endregion functions

#ifdef __cplusplus
}
#endif

