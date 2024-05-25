#include "JoltC/JPC_RackAndPinionConstraint.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JPC_RackAndPinionConstraint_SetConstraints(
  JPC_RackAndPinionConstraint_t * self,
  const JPC_Constraint_t * inPinion,
  const JPC_Constraint_t * inRack
) {
  RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
  
  selfCpp->SetConstraints(
  reinterpret_cast<Constraint *>(inPinion->obj),
  reinterpret_cast<Constraint *>(inRack->obj)
  );
};

float JPC_RackAndPinionConstraint_GetTotalLambda(
  JPC_RackAndPinionConstraint_t * self
) {
  RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
  float result = selfCpp->GetTotalLambda();
  return result;
};

JPC_Body_t * JPC_RackAndPinionConstraint_GetBody1(
  JPC_RackAndPinionConstraint_t * self
) {
  RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
  Body * result = selfCpp->GetBody1();
  return reinterpret_cast<JPC_Body_t *>(result);
};

JPC_Body_t * JPC_RackAndPinionConstraint_GetBody2(
  JPC_RackAndPinionConstraint_t * self
) {
  RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
  Body * result = selfCpp->GetBody2();
  return reinterpret_cast<JPC_Body_t *>(result);
};

JPC_Mat44_t * JPC_RackAndPinionConstraint_GetConstraintToBody1Matrix(
  JPC_RackAndPinionConstraint_t * self
) {
  RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
  Mat44 resultValue = selfCpp->GetConstraintToBody1Matrix();
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

JPC_Mat44_t * JPC_RackAndPinionConstraint_GetConstraintToBody2Matrix(
  JPC_RackAndPinionConstraint_t * self
) {
  RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
  Mat44 resultValue = selfCpp->GetConstraintToBody2Matrix();
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

unsigned long JPC_RackAndPinionConstraint_GetRefCount(
  JPC_RackAndPinionConstraint_t * self
) {
  RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_RackAndPinionConstraint_AddRef(
  JPC_RackAndPinionConstraint_t * self
) {
  RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_RackAndPinionConstraint_Release(
  JPC_RackAndPinionConstraint_t * self
) {
  RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
  
  selfCpp->Release();
};

JPC_EConstraintType JPC_RackAndPinionConstraint_GetType(
  JPC_RackAndPinionConstraint_t * self
) {
  RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
  EConstraintType result = selfCpp->GetType();
  return static_cast<JPC_EConstraintType>(static_cast<int>(result));
};

JPC_EConstraintSubType JPC_RackAndPinionConstraint_GetSubType(
  JPC_RackAndPinionConstraint_t * self
) {
  RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
  EConstraintSubType result = selfCpp->GetSubType();
  return static_cast<JPC_EConstraintSubType>(static_cast<int>(result));
};

unsigned long JPC_RackAndPinionConstraint_GetConstraintPriority(
  JPC_RackAndPinionConstraint_t * self
) {
  RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
  unsigned long result = selfCpp->GetConstraintPriority();
  return result;
};

void JPC_RackAndPinionConstraint_SetConstraintPriority(
  JPC_RackAndPinionConstraint_t * self,
  unsigned long inPriority
) {
  RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
  
  selfCpp->SetConstraintPriority(
  inPriority
  );
};

void JPC_RackAndPinionConstraint_SetNumVelocityStepsOverride(
  JPC_RackAndPinionConstraint_t * self,
  long inN
) {
  RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
  
  selfCpp->SetNumVelocityStepsOverride(
  inN
  );
};

long JPC_RackAndPinionConstraint_GetNumVelocityStepsOverride(
  JPC_RackAndPinionConstraint_t * self
) {
  RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
  long result = selfCpp->GetNumVelocityStepsOverride();
  return result;
};

void JPC_RackAndPinionConstraint_SetNumPositionStepsOverride(
  JPC_RackAndPinionConstraint_t * self,
  long inN
) {
  RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
  
  selfCpp->SetNumPositionStepsOverride(
  inN
  );
};

long JPC_RackAndPinionConstraint_GetNumPositionStepsOverride(
  JPC_RackAndPinionConstraint_t * self
) {
  RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
  long result = selfCpp->GetNumPositionStepsOverride();
  return result;
};

void JPC_RackAndPinionConstraint_SetEnabled(
  JPC_RackAndPinionConstraint_t * self,
  bool inEnabled
) {
  RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
  
  selfCpp->SetEnabled(
  inEnabled
  );
};

bool JPC_RackAndPinionConstraint_GetEnabled(
  JPC_RackAndPinionConstraint_t * self
) {
  RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
  bool result = selfCpp->GetEnabled();
  return result;
};

bool JPC_RackAndPinionConstraint_IsActive(
  JPC_RackAndPinionConstraint_t * self
) {
  RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
  bool result = selfCpp->IsActive();
  return result;
};

unsigned long long int JPC_RackAndPinionConstraint_GetUserData(
  JPC_RackAndPinionConstraint_t * self
) {
  RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JPC_RackAndPinionConstraint_SetUserData(
  JPC_RackAndPinionConstraint_t * self,
  unsigned long long int inUserData
) {
  RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
  
  selfCpp->SetUserData(
  inUserData
  );
};

void JPC_RackAndPinionConstraint_ResetWarmStart(
  JPC_RackAndPinionConstraint_t * self
) {
  RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
  
  selfCpp->ResetWarmStart();
};

//endregion functions

#ifdef __cplusplus
}
#endif

