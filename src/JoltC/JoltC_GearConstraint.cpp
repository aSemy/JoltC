#include "JoltC/JPC_GearConstraint.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JPC_GearConstraint_SetConstraints(
  JPC_GearConstraint_t * self,
  const JPC_Constraint_t * inGear1,
  const JPC_Constraint_t * inGear2
) {
  GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
  
  selfCpp->SetConstraints(
  reinterpret_cast<Constraint *>(inGear1->obj),
  reinterpret_cast<Constraint *>(inGear2->obj)
  );
};

float JPC_GearConstraint_GetTotalLambda(
  JPC_GearConstraint_t * self
) {
  GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
  float result = selfCpp->GetTotalLambda();
  return result;
};

JPC_Body_t * JPC_GearConstraint_GetBody1(
  JPC_GearConstraint_t * self
) {
  GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
  Body * result = selfCpp->GetBody1();
  return reinterpret_cast<JPC_Body_t *>(result);
};

JPC_Body_t * JPC_GearConstraint_GetBody2(
  JPC_GearConstraint_t * self
) {
  GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
  Body * result = selfCpp->GetBody2();
  return reinterpret_cast<JPC_Body_t *>(result);
};

JPC_Mat44_t * JPC_GearConstraint_GetConstraintToBody1Matrix(
  JPC_GearConstraint_t * self
) {
  GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
  Mat44 resultValue = selfCpp->GetConstraintToBody1Matrix();
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

JPC_Mat44_t * JPC_GearConstraint_GetConstraintToBody2Matrix(
  JPC_GearConstraint_t * self
) {
  GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
  Mat44 resultValue = selfCpp->GetConstraintToBody2Matrix();
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

unsigned long JPC_GearConstraint_GetRefCount(
  JPC_GearConstraint_t * self
) {
  GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_GearConstraint_AddRef(
  JPC_GearConstraint_t * self
) {
  GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_GearConstraint_Release(
  JPC_GearConstraint_t * self
) {
  GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
  
  selfCpp->Release();
};

JPC_EConstraintType JPC_GearConstraint_GetType(
  JPC_GearConstraint_t * self
) {
  GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
  EConstraintType result = selfCpp->GetType();
  return static_cast<JPC_EConstraintType>(static_cast<int>(result));
};

JPC_EConstraintSubType JPC_GearConstraint_GetSubType(
  JPC_GearConstraint_t * self
) {
  GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
  EConstraintSubType result = selfCpp->GetSubType();
  return static_cast<JPC_EConstraintSubType>(static_cast<int>(result));
};

unsigned long JPC_GearConstraint_GetConstraintPriority(
  JPC_GearConstraint_t * self
) {
  GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
  unsigned long result = selfCpp->GetConstraintPriority();
  return result;
};

void JPC_GearConstraint_SetConstraintPriority(
  JPC_GearConstraint_t * self,
  unsigned long inPriority
) {
  GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
  
  selfCpp->SetConstraintPriority(
  inPriority
  );
};

void JPC_GearConstraint_SetNumVelocityStepsOverride(
  JPC_GearConstraint_t * self,
  long inN
) {
  GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
  
  selfCpp->SetNumVelocityStepsOverride(
  inN
  );
};

long JPC_GearConstraint_GetNumVelocityStepsOverride(
  JPC_GearConstraint_t * self
) {
  GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
  long result = selfCpp->GetNumVelocityStepsOverride();
  return result;
};

void JPC_GearConstraint_SetNumPositionStepsOverride(
  JPC_GearConstraint_t * self,
  long inN
) {
  GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
  
  selfCpp->SetNumPositionStepsOverride(
  inN
  );
};

long JPC_GearConstraint_GetNumPositionStepsOverride(
  JPC_GearConstraint_t * self
) {
  GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
  long result = selfCpp->GetNumPositionStepsOverride();
  return result;
};

void JPC_GearConstraint_SetEnabled(
  JPC_GearConstraint_t * self,
  bool inEnabled
) {
  GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
  
  selfCpp->SetEnabled(
  inEnabled
  );
};

bool JPC_GearConstraint_GetEnabled(
  JPC_GearConstraint_t * self
) {
  GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
  bool result = selfCpp->GetEnabled();
  return result;
};

bool JPC_GearConstraint_IsActive(
  JPC_GearConstraint_t * self
) {
  GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
  bool result = selfCpp->IsActive();
  return result;
};

unsigned long long int JPC_GearConstraint_GetUserData(
  JPC_GearConstraint_t * self
) {
  GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JPC_GearConstraint_SetUserData(
  JPC_GearConstraint_t * self,
  unsigned long long int inUserData
) {
  GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
  
  selfCpp->SetUserData(
  inUserData
  );
};

void JPC_GearConstraint_ResetWarmStart(
  JPC_GearConstraint_t * self
) {
  GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
  
  selfCpp->ResetWarmStart();
};

//endregion functions

#ifdef __cplusplus
}
#endif

