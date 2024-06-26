#include "JoltC/JoltC_PathConstraint.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_PathConstraint_destroy(
  JoltC_PathConstraint_t * self
){
  if (self == NULL) return;
  delete static_cast<PathConstraint *>(self->obj);
  free(self);
}

//endregion
//region functions

void JoltC_PathConstraint_SetPath(
  JoltC_PathConstraint_t * self,
  JoltC_PathConstraintPath_t * inPath,
  float inPathFraction
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  const PathConstraintPath * inPathCpp = static_cast<const PathConstraintPath *>(inPath->obj);
  selfCpp->SetPath(
    inPathCpp,
    inPathFraction
  );
}

JoltC_PathConstraintPath_t * JoltC_PathConstraint_GetPath(
  JoltC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  const PathConstraintPath * resultPtr = selfCpp->GetPath();
  JoltC_PathConstraintPath_t * result = new JoltC_PathConstraintPath_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

float JoltC_PathConstraint_GetPathFraction(
  JoltC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  return selfCpp->GetPathFraction();
}

void JoltC_PathConstraint_SetMaxFrictionForce(
  JoltC_PathConstraint_t * self,
  float inFrictionForce
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  selfCpp->SetMaxFrictionForce(
    inFrictionForce
  );
}

float JoltC_PathConstraint_GetMaxFrictionForce(
  JoltC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  return selfCpp->GetMaxFrictionForce();
}

JoltC_MotorSettings_t * JoltC_PathConstraint_GetPositionMotorSettings(
  JoltC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  MotorSettings* resultRef = &selfCpp->GetPositionMotorSettings();
  JoltC_MotorSettings_t* result = new JoltC_MotorSettings_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
}

void JoltC_PathConstraint_SetPositionMotorState(
  JoltC_PathConstraint_t * self,
  JoltC_EMotorState inState
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  EMotorState inStateCpp = static_cast<EMotorState>(static_cast<int>(inState));
  selfCpp->SetPositionMotorState(
    inStateCpp
  );
}

JoltC_EMotorState JoltC_PathConstraint_GetPositionMotorState(
  JoltC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  EMotorState result = selfCpp->GetPositionMotorState();
  return static_cast<JoltC_EMotorState>(static_cast<int>(result));
}

void JoltC_PathConstraint_SetTargetVelocity(
  JoltC_PathConstraint_t * self,
  float inVelocity
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  selfCpp->SetTargetVelocity(
    inVelocity
  );
}

float JoltC_PathConstraint_GetTargetVelocity(
  JoltC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  return selfCpp->GetTargetVelocity();
}

void JoltC_PathConstraint_SetTargetPathFraction(
  JoltC_PathConstraint_t * self,
  float inFraction
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  selfCpp->SetTargetPathFraction(
    inFraction
  );
}

float JoltC_PathConstraint_GetTargetPathFraction(
  JoltC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  return selfCpp->GetTargetPathFraction();
}

JoltC_Body_t * JoltC_PathConstraint_GetBody1(
  JoltC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  const Body * resultPtr = selfCpp->GetBody1();
  JoltC_Body_t * result = new JoltC_Body_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_Body_t * JoltC_PathConstraint_GetBody2(
  JoltC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  const Body * resultPtr = selfCpp->GetBody2();
  JoltC_Body_t * result = new JoltC_Body_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_Mat44_t * JoltC_PathConstraint_GetConstraintToBody1Matrix(
  JoltC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  Mat44 * resultPtr = new Mat44();
  *resultPtr = selfCpp->GetConstraintToBody1Matrix();
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Mat44_t * JoltC_PathConstraint_GetConstraintToBody2Matrix(
  JoltC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  Mat44 * resultPtr = new Mat44();
  *resultPtr = selfCpp->GetConstraintToBody2Matrix();
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

unsigned long JoltC_PathConstraint_GetRefCount(
  JoltC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_PathConstraint_AddRef(
  JoltC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_PathConstraint_Release(
  JoltC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  selfCpp->Release();
}

JoltC_EConstraintType JoltC_PathConstraint_GetType(
  JoltC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  EConstraintType result = selfCpp->GetType();
  return static_cast<JoltC_EConstraintType>(static_cast<int>(result));
}

JoltC_EConstraintSubType JoltC_PathConstraint_GetSubType(
  JoltC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  EConstraintSubType result = selfCpp->GetSubType();
  return static_cast<JoltC_EConstraintSubType>(static_cast<int>(result));
}

unsigned long JoltC_PathConstraint_GetConstraintPriority(
  JoltC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  return selfCpp->GetConstraintPriority();
}

void JoltC_PathConstraint_SetConstraintPriority(
  JoltC_PathConstraint_t * self,
  unsigned long inPriority
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  selfCpp->SetConstraintPriority(
    inPriority
  );
}

void JoltC_PathConstraint_SetNumVelocityStepsOverride(
  JoltC_PathConstraint_t * self,
  long inN
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  selfCpp->SetNumVelocityStepsOverride(
    inN
  );
}

long JoltC_PathConstraint_GetNumVelocityStepsOverride(
  JoltC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  return selfCpp->GetNumVelocityStepsOverride();
}

void JoltC_PathConstraint_SetNumPositionStepsOverride(
  JoltC_PathConstraint_t * self,
  long inN
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  selfCpp->SetNumPositionStepsOverride(
    inN
  );
}

long JoltC_PathConstraint_GetNumPositionStepsOverride(
  JoltC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  return selfCpp->GetNumPositionStepsOverride();
}

void JoltC_PathConstraint_SetEnabled(
  JoltC_PathConstraint_t * self,
  bool inEnabled
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  selfCpp->SetEnabled(
    inEnabled
  );
}

bool JoltC_PathConstraint_GetEnabled(
  JoltC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  return selfCpp->GetEnabled();
}

bool JoltC_PathConstraint_IsActive(
  JoltC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  return selfCpp->IsActive();
}

unsigned long long int JoltC_PathConstraint_GetUserData(
  JoltC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  return selfCpp->GetUserData();
}

void JoltC_PathConstraint_SetUserData(
  JoltC_PathConstraint_t * self,
  unsigned long long int inUserData
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  selfCpp->SetUserData(
    inUserData
  );
}

void JoltC_PathConstraint_ResetWarmStart(
  JoltC_PathConstraint_t * self
) {
  PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
  selfCpp->ResetWarmStart();
}

//endregion


#ifdef __cplusplus
}
#endif
