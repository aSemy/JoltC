#include "JoltC/JoltC_SixDOFConstraint.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_SixDOFConstraint_destroy(
  JoltC_SixDOFConstraint_t * self
){
  if (self == NULL) return;
  delete static_cast<SixDOFConstraint *>(self->obj);
  free(self);
}

//endregion
//region functions

void JoltC_SixDOFConstraint_SetTranslationLimits(
  JoltC_SixDOFConstraint_t * self,
  JoltC_Vec3_t * inLimitMin,
  JoltC_Vec3_t * inLimitMax
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  const Vec3 * inLimitMinCpp = static_cast<const Vec3 *>(inLimitMin->obj);
  const Vec3 * inLimitMaxCpp = static_cast<const Vec3 *>(inLimitMax->obj);
  selfCpp->SetTranslationLimits(
    *inLimitMinCpp,
    *inLimitMaxCpp
  );
}

void JoltC_SixDOFConstraint_SetRotationLimits(
  JoltC_SixDOFConstraint_t * self,
  JoltC_Vec3_t * inLimitMin,
  JoltC_Vec3_t * inLimitMax
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  const Vec3 * inLimitMinCpp = static_cast<const Vec3 *>(inLimitMin->obj);
  const Vec3 * inLimitMaxCpp = static_cast<const Vec3 *>(inLimitMax->obj);
  selfCpp->SetRotationLimits(
    *inLimitMinCpp,
    *inLimitMaxCpp
  );
}

float JoltC_SixDOFConstraint_GetLimitsMin(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  SixDOFConstraintSettings_EAxis inAxisCpp = static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis));
  return selfCpp->GetLimitsMin(
    inAxisCpp
  );
}

float JoltC_SixDOFConstraint_GetLimitsMax(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  SixDOFConstraintSettings_EAxis inAxisCpp = static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis));
  return selfCpp->GetLimitsMax(
    inAxisCpp
  );
}

JoltC_Vec3_t * JoltC_SixDOFConstraint_GetTranslationLimitsMin(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetTranslationLimitsMin();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_SixDOFConstraint_GetTranslationLimitsMax(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetTranslationLimitsMax();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_SixDOFConstraint_GetRotationLimitsMin(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetRotationLimitsMin();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_SixDOFConstraint_GetRotationLimitsMax(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetRotationLimitsMax();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

bool JoltC_SixDOFConstraint_IsFixedAxis(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  SixDOFConstraintSettings_EAxis inAxisCpp = static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis));
  return selfCpp->IsFixedAxis(
    inAxisCpp
  );
}

bool JoltC_SixDOFConstraint_IsFreeAxis(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  SixDOFConstraintSettings_EAxis inAxisCpp = static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis));
  return selfCpp->IsFreeAxis(
    inAxisCpp
  );
}

JoltC_SpringSettings_t * JoltC_SixDOFConstraint_GetLimitsSpringSettings(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  SixDOFConstraintSettings_EAxis inAxisCpp = static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis));
  const SpringSettings* resultRef = &selfCpp->GetLimitsSpringSettings(
    inAxisCpp
  );
  JoltC_SpringSettings_t* result = new JoltC_SpringSettings_t();
  const void * resultConstPtr = reinterpret_cast<const void*>(resultRef);
  void * resultPtr = const_cast<void*>(resultConstPtr);
  result->obj = resultPtr;
  return result;
}

void JoltC_SixDOFConstraint_SetLimitsSpringSettings(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis,
  JoltC_SpringSettings_t * inLimitsSpringSettings
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  SixDOFConstraintSettings_EAxis inAxisCpp = static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis));
  const SpringSettings * inLimitsSpringSettingsCpp = static_cast<const SpringSettings *>(inLimitsSpringSettings->obj);
  selfCpp->SetLimitsSpringSettings(
    inAxisCpp,
    *inLimitsSpringSettingsCpp
  );
}

void JoltC_SixDOFConstraint_SetMaxFriction(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis,
  float inFriction
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  SixDOFConstraintSettings_EAxis inAxisCpp = static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis));
  selfCpp->SetMaxFriction(
    inAxisCpp,
    inFriction
  );
}

float JoltC_SixDOFConstraint_GetMaxFriction(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  SixDOFConstraintSettings_EAxis inAxisCpp = static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis));
  return selfCpp->GetMaxFriction(
    inAxisCpp
  );
}

JoltC_Quat_t * JoltC_SixDOFConstraint_GetRotationInConstraintSpace(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  Quat * resultPtr = new Quat();
  *resultPtr = selfCpp->GetRotationInConstraintSpace();
  JoltC_Quat_t * result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_MotorSettings_t * JoltC_SixDOFConstraint_GetMotorSettings(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  SixDOFConstraintSettings_EAxis inAxisCpp = static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis));
  MotorSettings* resultRef = &selfCpp->GetMotorSettings(
    inAxisCpp
  );
  JoltC_MotorSettings_t* result = new JoltC_MotorSettings_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
}

void JoltC_SixDOFConstraint_SetMotorState(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis,
  JoltC_EMotorState inState
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  SixDOFConstraintSettings_EAxis inAxisCpp = static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis));
  EMotorState inStateCpp = static_cast<EMotorState>(static_cast<int>(inState));
  selfCpp->SetMotorState(
    inAxisCpp,
    inStateCpp
  );
}

JoltC_EMotorState JoltC_SixDOFConstraint_GetMotorState(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  SixDOFConstraintSettings_EAxis inAxisCpp = static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis));
  EMotorState result = selfCpp->GetMotorState(
    inAxisCpp
  );
  return static_cast<JoltC_EMotorState>(static_cast<int>(result));
}

JoltC_Vec3_t * JoltC_SixDOFConstraint_GetTargetVelocityCS(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetTargetVelocityCS();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_SixDOFConstraint_SetTargetVelocityCS(
  JoltC_SixDOFConstraint_t * self,
  JoltC_Vec3_t * inVelocity
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  const Vec3 * inVelocityCpp = static_cast<const Vec3 *>(inVelocity->obj);
  selfCpp->SetTargetVelocityCS(
    *inVelocityCpp
  );
}

void JoltC_SixDOFConstraint_SetTargetAngularVelocityCS(
  JoltC_SixDOFConstraint_t * self,
  JoltC_Vec3_t * inAngularVelocity
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  const Vec3 * inAngularVelocityCpp = static_cast<const Vec3 *>(inAngularVelocity->obj);
  selfCpp->SetTargetAngularVelocityCS(
    *inAngularVelocityCpp
  );
}

JoltC_Vec3_t * JoltC_SixDOFConstraint_GetTargetAngularVelocityCS(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetTargetAngularVelocityCS();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_SixDOFConstraint_GetTargetPositionCS(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetTargetPositionCS();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_SixDOFConstraint_SetTargetPositionCS(
  JoltC_SixDOFConstraint_t * self,
  JoltC_Vec3_t * inPosition
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  const Vec3 * inPositionCpp = static_cast<const Vec3 *>(inPosition->obj);
  selfCpp->SetTargetPositionCS(
    *inPositionCpp
  );
}

void JoltC_SixDOFConstraint_SetTargetOrientationCS(
  JoltC_SixDOFConstraint_t * self,
  JoltC_Quat_t * inOrientation
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  const Quat * inOrientationCpp = static_cast<const Quat *>(inOrientation->obj);
  selfCpp->SetTargetOrientationCS(
    *inOrientationCpp
  );
}

JoltC_Quat_t * JoltC_SixDOFConstraint_GetTargetOrientationCS(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  Quat * resultPtr = new Quat();
  *resultPtr = selfCpp->GetTargetOrientationCS();
  JoltC_Quat_t * result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_SixDOFConstraint_SetTargetOrientationBS(
  JoltC_SixDOFConstraint_t * self,
  JoltC_Quat_t * inOrientation
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  const Quat * inOrientationCpp = static_cast<const Quat *>(inOrientation->obj);
  selfCpp->SetTargetOrientationBS(
    *inOrientationCpp
  );
}

JoltC_Vec3_t * JoltC_SixDOFConstraint_GetTotalLambdaPosition(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetTotalLambdaPosition();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_SixDOFConstraint_GetTotalLambdaRotation(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetTotalLambdaRotation();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_SixDOFConstraint_GetTotalLambdaMotorTranslation(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetTotalLambdaMotorTranslation();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_SixDOFConstraint_GetTotalLambdaMotorRotation(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetTotalLambdaMotorRotation();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Body_t * JoltC_SixDOFConstraint_GetBody1(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  const Body * resultPtr = selfCpp->GetBody1();
  JoltC_Body_t * result = new JoltC_Body_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_Body_t * JoltC_SixDOFConstraint_GetBody2(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  const Body * resultPtr = selfCpp->GetBody2();
  JoltC_Body_t * result = new JoltC_Body_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_Mat44_t * JoltC_SixDOFConstraint_GetConstraintToBody1Matrix(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  Mat44 * resultPtr = new Mat44();
  *resultPtr = selfCpp->GetConstraintToBody1Matrix();
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Mat44_t * JoltC_SixDOFConstraint_GetConstraintToBody2Matrix(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  Mat44 * resultPtr = new Mat44();
  *resultPtr = selfCpp->GetConstraintToBody2Matrix();
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

unsigned long JoltC_SixDOFConstraint_GetRefCount(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_SixDOFConstraint_AddRef(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_SixDOFConstraint_Release(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  selfCpp->Release();
}

JoltC_EConstraintType JoltC_SixDOFConstraint_GetType(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  EConstraintType result = selfCpp->GetType();
  return static_cast<JoltC_EConstraintType>(static_cast<int>(result));
}

JoltC_EConstraintSubType JoltC_SixDOFConstraint_GetSubType(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  EConstraintSubType result = selfCpp->GetSubType();
  return static_cast<JoltC_EConstraintSubType>(static_cast<int>(result));
}

unsigned long JoltC_SixDOFConstraint_GetConstraintPriority(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  return selfCpp->GetConstraintPriority();
}

void JoltC_SixDOFConstraint_SetConstraintPriority(
  JoltC_SixDOFConstraint_t * self,
  unsigned long inPriority
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  selfCpp->SetConstraintPriority(
    inPriority
  );
}

void JoltC_SixDOFConstraint_SetNumVelocityStepsOverride(
  JoltC_SixDOFConstraint_t * self,
  long inN
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  selfCpp->SetNumVelocityStepsOverride(
    inN
  );
}

long JoltC_SixDOFConstraint_GetNumVelocityStepsOverride(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  return selfCpp->GetNumVelocityStepsOverride();
}

void JoltC_SixDOFConstraint_SetNumPositionStepsOverride(
  JoltC_SixDOFConstraint_t * self,
  long inN
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  selfCpp->SetNumPositionStepsOverride(
    inN
  );
}

long JoltC_SixDOFConstraint_GetNumPositionStepsOverride(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  return selfCpp->GetNumPositionStepsOverride();
}

void JoltC_SixDOFConstraint_SetEnabled(
  JoltC_SixDOFConstraint_t * self,
  bool inEnabled
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  selfCpp->SetEnabled(
    inEnabled
  );
}

bool JoltC_SixDOFConstraint_GetEnabled(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  return selfCpp->GetEnabled();
}

bool JoltC_SixDOFConstraint_IsActive(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  return selfCpp->IsActive();
}

unsigned long long int JoltC_SixDOFConstraint_GetUserData(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  return selfCpp->GetUserData();
}

void JoltC_SixDOFConstraint_SetUserData(
  JoltC_SixDOFConstraint_t * self,
  unsigned long long int inUserData
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  selfCpp->SetUserData(
    inUserData
  );
}

void JoltC_SixDOFConstraint_ResetWarmStart(
  JoltC_SixDOFConstraint_t * self
) {
  SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
  selfCpp->ResetWarmStart();
}

//endregion


#ifdef __cplusplus
}
#endif
