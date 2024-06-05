#include "JoltC/JoltC_PathConstraint.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_PathConstraint_SetPath(
  JoltC_PathConstraint_t * self,
  JoltC_PathConstraintPath_t * inPath,
  float inPathFraction
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  selfCpp->SetPath(
    reinterpret_cast<PathConstraintPath *>(inPath->obj),
    inPathFraction
  );
};

JoltC_PathConstraintPath_t * JoltC_PathConstraint_GetPath(
  JoltC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  const PathConstraintPath * resultValue = selfCpp->GetPath();
  JoltC_PathConstraintPath_t* result = new JoltC_PathConstraintPath_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

float JoltC_PathConstraint_GetPathFraction(
  JoltC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  float result = selfCpp->GetPathFraction();
  return result;
};

void JoltC_PathConstraint_SetMaxFrictionForce(
  JoltC_PathConstraint_t * self,
  float inFrictionForce
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  selfCpp->SetMaxFrictionForce(
    inFrictionForce
  );
};

float JoltC_PathConstraint_GetMaxFrictionForce(
  JoltC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  float result = selfCpp->GetMaxFrictionForce();
  return result;
};

JoltC_MotorSettings_t * JoltC_PathConstraint_GetPositionMotorSettings(
  JoltC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  MotorSettings* resultRef = &selfCpp->GetPositionMotorSettings();
  JoltC_MotorSettings_t* result = new JoltC_MotorSettings_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
};

void JoltC_PathConstraint_SetPositionMotorState(
  JoltC_PathConstraint_t * self,
  JoltC_EMotorState inState
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  selfCpp->SetPositionMotorState(
    static_cast<EMotorState>(static_cast<int>(inState))
  );
};

JoltC_EMotorState JoltC_PathConstraint_GetPositionMotorState(
  JoltC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  EMotorState result = selfCpp->GetPositionMotorState();
  return static_cast<JoltC_EMotorState>(static_cast<int>(result));
};

void JoltC_PathConstraint_SetTargetVelocity(
  JoltC_PathConstraint_t * self,
  float inVelocity
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  selfCpp->SetTargetVelocity(
    inVelocity
  );
};

float JoltC_PathConstraint_GetTargetVelocity(
  JoltC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  float result = selfCpp->GetTargetVelocity();
  return result;
};

void JoltC_PathConstraint_SetTargetPathFraction(
  JoltC_PathConstraint_t * self,
  float inFraction
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  selfCpp->SetTargetPathFraction(
    inFraction
  );
};

float JoltC_PathConstraint_GetTargetPathFraction(
  JoltC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  float result = selfCpp->GetTargetPathFraction();
  return result;
};

JoltC_Body_t * JoltC_PathConstraint_GetBody1(
  JoltC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  const Body * resultValue = selfCpp->GetBody1();
  JoltC_Body_t* result = new JoltC_Body_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Body_t * JoltC_PathConstraint_GetBody2(
  JoltC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  const Body * resultValue = selfCpp->GetBody2();
  JoltC_Body_t* result = new JoltC_Body_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Mat44_t * JoltC_PathConstraint_GetConstraintToBody1Matrix(
  JoltC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  const Mat44& resultValue = selfCpp->GetConstraintToBody1Matrix();
  JoltC_Mat44_t* result = new JoltC_Mat44_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Mat44_t * JoltC_PathConstraint_GetConstraintToBody2Matrix(
  JoltC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  const Mat44& resultValue = selfCpp->GetConstraintToBody2Matrix();
  JoltC_Mat44_t* result = new JoltC_Mat44_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

unsigned long JoltC_PathConstraint_GetRefCount(
  JoltC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_PathConstraint_AddRef(
  JoltC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  selfCpp->AddRef();
};

void JoltC_PathConstraint_Release(
  JoltC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  selfCpp->Release();
};

JoltC_EConstraintType JoltC_PathConstraint_GetType(
  JoltC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  EConstraintType result = selfCpp->GetType();
  return static_cast<JoltC_EConstraintType>(static_cast<int>(result));
};

JoltC_EConstraintSubType JoltC_PathConstraint_GetSubType(
  JoltC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  EConstraintSubType result = selfCpp->GetSubType();
  return static_cast<JoltC_EConstraintSubType>(static_cast<int>(result));
};

unsigned long JoltC_PathConstraint_GetConstraintPriority(
  JoltC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  unsigned long result = selfCpp->GetConstraintPriority();
  return result;
};

void JoltC_PathConstraint_SetConstraintPriority(
  JoltC_PathConstraint_t * self,
  unsigned long inPriority
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  selfCpp->SetConstraintPriority(
    inPriority
  );
};

void JoltC_PathConstraint_SetNumVelocityStepsOverride(
  JoltC_PathConstraint_t * self,
  long inN
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  selfCpp->SetNumVelocityStepsOverride(
    inN
  );
};

long JoltC_PathConstraint_GetNumVelocityStepsOverride(
  JoltC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  long result = selfCpp->GetNumVelocityStepsOverride();
  return result;
};

void JoltC_PathConstraint_SetNumPositionStepsOverride(
  JoltC_PathConstraint_t * self,
  long inN
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  selfCpp->SetNumPositionStepsOverride(
    inN
  );
};

long JoltC_PathConstraint_GetNumPositionStepsOverride(
  JoltC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  long result = selfCpp->GetNumPositionStepsOverride();
  return result;
};

void JoltC_PathConstraint_SetEnabled(
  JoltC_PathConstraint_t * self,
  bool inEnabled
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  selfCpp->SetEnabled(
    inEnabled
  );
};

bool JoltC_PathConstraint_GetEnabled(
  JoltC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  bool result = selfCpp->GetEnabled();
  return result;
};

bool JoltC_PathConstraint_IsActive(
  JoltC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  bool result = selfCpp->IsActive();
  return result;
};

unsigned long long int JoltC_PathConstraint_GetUserData(
  JoltC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JoltC_PathConstraint_SetUserData(
  JoltC_PathConstraint_t * self,
  unsigned long long int inUserData
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  selfCpp->SetUserData(
    inUserData
  );
};

void JoltC_PathConstraint_ResetWarmStart(
  JoltC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  selfCpp->ResetWarmStart();
};

//endregion

#ifdef __cplusplus
}
#endif

