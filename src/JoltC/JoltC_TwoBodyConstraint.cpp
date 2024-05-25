#include "JoltC/JPC_TwoBodyConstraint.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

JPC_Body_t * JPC_TwoBodyConstraint_GetBody1(
  JPC_TwoBodyConstraint_t * self
) {
  TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
  Body * result = selfCpp->GetBody1();
  return reinterpret_cast<JPC_Body_t *>(result);
};

JPC_Body_t * JPC_TwoBodyConstraint_GetBody2(
  JPC_TwoBodyConstraint_t * self
) {
  TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
  Body * result = selfCpp->GetBody2();
  return reinterpret_cast<JPC_Body_t *>(result);
};

JPC_Mat44_t * JPC_TwoBodyConstraint_GetConstraintToBody1Matrix(
  JPC_TwoBodyConstraint_t * self
) {
  TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
  Mat44 resultValue = selfCpp->GetConstraintToBody1Matrix();
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

JPC_Mat44_t * JPC_TwoBodyConstraint_GetConstraintToBody2Matrix(
  JPC_TwoBodyConstraint_t * self
) {
  TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
  Mat44 resultValue = selfCpp->GetConstraintToBody2Matrix();
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

unsigned long JPC_TwoBodyConstraint_GetRefCount(
  JPC_TwoBodyConstraint_t * self
) {
  TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_TwoBodyConstraint_AddRef(
  JPC_TwoBodyConstraint_t * self
) {
  TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_TwoBodyConstraint_Release(
  JPC_TwoBodyConstraint_t * self
) {
  TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
  
  selfCpp->Release();
};

JPC_EConstraintType JPC_TwoBodyConstraint_GetType(
  JPC_TwoBodyConstraint_t * self
) {
  TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
  EConstraintType result = selfCpp->GetType();
  return static_cast<JPC_EConstraintType>(static_cast<int>(result));
};

JPC_EConstraintSubType JPC_TwoBodyConstraint_GetSubType(
  JPC_TwoBodyConstraint_t * self
) {
  TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
  EConstraintSubType result = selfCpp->GetSubType();
  return static_cast<JPC_EConstraintSubType>(static_cast<int>(result));
};

unsigned long JPC_TwoBodyConstraint_GetConstraintPriority(
  JPC_TwoBodyConstraint_t * self
) {
  TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
  unsigned long result = selfCpp->GetConstraintPriority();
  return result;
};

void JPC_TwoBodyConstraint_SetConstraintPriority(
  JPC_TwoBodyConstraint_t * self,
  unsigned long inPriority
) {
  TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
  
  selfCpp->SetConstraintPriority(
  inPriority
  );
};

void JPC_TwoBodyConstraint_SetNumVelocityStepsOverride(
  JPC_TwoBodyConstraint_t * self,
  long inN
) {
  TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
  
  selfCpp->SetNumVelocityStepsOverride(
  inN
  );
};

long JPC_TwoBodyConstraint_GetNumVelocityStepsOverride(
  JPC_TwoBodyConstraint_t * self
) {
  TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
  long result = selfCpp->GetNumVelocityStepsOverride();
  return result;
};

void JPC_TwoBodyConstraint_SetNumPositionStepsOverride(
  JPC_TwoBodyConstraint_t * self,
  long inN
) {
  TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
  
  selfCpp->SetNumPositionStepsOverride(
  inN
  );
};

long JPC_TwoBodyConstraint_GetNumPositionStepsOverride(
  JPC_TwoBodyConstraint_t * self
) {
  TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
  long result = selfCpp->GetNumPositionStepsOverride();
  return result;
};

void JPC_TwoBodyConstraint_SetEnabled(
  JPC_TwoBodyConstraint_t * self,
  bool inEnabled
) {
  TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
  
  selfCpp->SetEnabled(
  inEnabled
  );
};

bool JPC_TwoBodyConstraint_GetEnabled(
  JPC_TwoBodyConstraint_t * self
) {
  TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
  bool result = selfCpp->GetEnabled();
  return result;
};

bool JPC_TwoBodyConstraint_IsActive(
  JPC_TwoBodyConstraint_t * self
) {
  TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
  bool result = selfCpp->IsActive();
  return result;
};

unsigned long long int JPC_TwoBodyConstraint_GetUserData(
  JPC_TwoBodyConstraint_t * self
) {
  TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JPC_TwoBodyConstraint_SetUserData(
  JPC_TwoBodyConstraint_t * self,
  unsigned long long int inUserData
) {
  TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
  
  selfCpp->SetUserData(
  inUserData
  );
};

void JPC_TwoBodyConstraint_ResetWarmStart(
  JPC_TwoBodyConstraint_t * self
) {
  TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
  
  selfCpp->ResetWarmStart();
};

//endregion functions

#ifdef __cplusplus
}
#endif

