#include "JoltC/JPC_PathConstraint.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JPC_PathConstraint_SetPath(
  JPC_PathConstraint_t * self,
  const JPC_PathConstraintPath_t * inPath,
  float inPathFraction
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  
  selfCpp->SetPath(
  reinterpret_cast<PathConstraintPath *>(inPath->obj),
  inPathFraction
  );
};

const JPC_PathConstraintPath_t * JPC_PathConstraint_GetPath(
  JPC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  const PathConstraintPath * result = selfCpp->GetPath();
  return reinterpret_cast<const JPC_PathConstraintPath_t *>(result);
};

float JPC_PathConstraint_GetPathFraction(
  JPC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  float result = selfCpp->GetPathFraction();
  return result;
};

void JPC_PathConstraint_SetMaxFrictionForce(
  JPC_PathConstraint_t * self,
  float inFrictionForce
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  
  selfCpp->SetMaxFrictionForce(
  inFrictionForce
  );
};

float JPC_PathConstraint_GetMaxFrictionForce(
  JPC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  float result = selfCpp->GetMaxFrictionForce();
  return result;
};

JPC_MotorSettings_t * JPC_PathConstraint_GetPositionMotorSettings(
  JPC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  MotorSettings& resultRef = selfCpp->GetPositionMotorSettings();
  MotorSettings * result = &resultRef;
  return reinterpret_cast<JPC_MotorSettings_t *>(result);
};

void JPC_PathConstraint_SetPositionMotorState(
  JPC_PathConstraint_t * self,
  JPC_EMotorState inState
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  
  selfCpp->SetPositionMotorState(
  static_cast<EMotorState>(static_cast<int>(inState))
  );
};

JPC_EMotorState JPC_PathConstraint_GetPositionMotorState(
  JPC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  EMotorState result = selfCpp->GetPositionMotorState();
  return static_cast<JPC_EMotorState>(static_cast<int>(result));
};

void JPC_PathConstraint_SetTargetVelocity(
  JPC_PathConstraint_t * self,
  float inVelocity
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  
  selfCpp->SetTargetVelocity(
  inVelocity
  );
};

float JPC_PathConstraint_GetTargetVelocity(
  JPC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  float result = selfCpp->GetTargetVelocity();
  return result;
};

void JPC_PathConstraint_SetTargetPathFraction(
  JPC_PathConstraint_t * self,
  float inFraction
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  
  selfCpp->SetTargetPathFraction(
  inFraction
  );
};

float JPC_PathConstraint_GetTargetPathFraction(
  JPC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  float result = selfCpp->GetTargetPathFraction();
  return result;
};

JPC_Body_t * JPC_PathConstraint_GetBody1(
  JPC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  Body * result = selfCpp->GetBody1();
  return reinterpret_cast<JPC_Body_t *>(result);
};

JPC_Body_t * JPC_PathConstraint_GetBody2(
  JPC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  Body * result = selfCpp->GetBody2();
  return reinterpret_cast<JPC_Body_t *>(result);
};

JPC_Mat44_t * JPC_PathConstraint_GetConstraintToBody1Matrix(
  JPC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  Mat44 resultValue = selfCpp->GetConstraintToBody1Matrix();
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

JPC_Mat44_t * JPC_PathConstraint_GetConstraintToBody2Matrix(
  JPC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  Mat44 resultValue = selfCpp->GetConstraintToBody2Matrix();
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

unsigned long JPC_PathConstraint_GetRefCount(
  JPC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_PathConstraint_AddRef(
  JPC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_PathConstraint_Release(
  JPC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  
  selfCpp->Release();
};

JPC_EConstraintType JPC_PathConstraint_GetType(
  JPC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  EConstraintType result = selfCpp->GetType();
  return static_cast<JPC_EConstraintType>(static_cast<int>(result));
};

JPC_EConstraintSubType JPC_PathConstraint_GetSubType(
  JPC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  EConstraintSubType result = selfCpp->GetSubType();
  return static_cast<JPC_EConstraintSubType>(static_cast<int>(result));
};

unsigned long JPC_PathConstraint_GetConstraintPriority(
  JPC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  unsigned long result = selfCpp->GetConstraintPriority();
  return result;
};

void JPC_PathConstraint_SetConstraintPriority(
  JPC_PathConstraint_t * self,
  unsigned long inPriority
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  
  selfCpp->SetConstraintPriority(
  inPriority
  );
};

void JPC_PathConstraint_SetNumVelocityStepsOverride(
  JPC_PathConstraint_t * self,
  long inN
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  
  selfCpp->SetNumVelocityStepsOverride(
  inN
  );
};

long JPC_PathConstraint_GetNumVelocityStepsOverride(
  JPC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  long result = selfCpp->GetNumVelocityStepsOverride();
  return result;
};

void JPC_PathConstraint_SetNumPositionStepsOverride(
  JPC_PathConstraint_t * self,
  long inN
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  
  selfCpp->SetNumPositionStepsOverride(
  inN
  );
};

long JPC_PathConstraint_GetNumPositionStepsOverride(
  JPC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  long result = selfCpp->GetNumPositionStepsOverride();
  return result;
};

void JPC_PathConstraint_SetEnabled(
  JPC_PathConstraint_t * self,
  bool inEnabled
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  
  selfCpp->SetEnabled(
  inEnabled
  );
};

bool JPC_PathConstraint_GetEnabled(
  JPC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  bool result = selfCpp->GetEnabled();
  return result;
};

bool JPC_PathConstraint_IsActive(
  JPC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  bool result = selfCpp->IsActive();
  return result;
};

unsigned long long int JPC_PathConstraint_GetUserData(
  JPC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JPC_PathConstraint_SetUserData(
  JPC_PathConstraint_t * self,
  unsigned long long int inUserData
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  
  selfCpp->SetUserData(
  inUserData
  );
};

void JPC_PathConstraint_ResetWarmStart(
  JPC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  
  selfCpp->ResetWarmStart();
};

//endregion functions

#ifdef __cplusplus
}
#endif

