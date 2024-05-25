#include "JoltC/JPC_PulleyConstraint.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JPC_PulleyConstraint_SetLength(
  JPC_PulleyConstraint_t * self,
  float inMinLength,
  float inMaxLength
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  
  selfCpp->SetLength(
  inMinLength,
  inMaxLength
  );
};

float JPC_PulleyConstraint_GetMinLength(
  JPC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  float result = selfCpp->GetMinLength();
  return result;
};

float JPC_PulleyConstraint_GetMaxLength(
  JPC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  float result = selfCpp->GetMaxLength();
  return result;
};

float JPC_PulleyConstraint_GetCurrentLength(
  JPC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  float result = selfCpp->GetCurrentLength();
  return result;
};

JPC_Body_t * JPC_PulleyConstraint_GetBody1(
  JPC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  Body * result = selfCpp->GetBody1();
  return reinterpret_cast<JPC_Body_t *>(result);
};

JPC_Body_t * JPC_PulleyConstraint_GetBody2(
  JPC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  Body * result = selfCpp->GetBody2();
  return reinterpret_cast<JPC_Body_t *>(result);
};

JPC_Mat44_t * JPC_PulleyConstraint_GetConstraintToBody1Matrix(
  JPC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  Mat44 resultValue = selfCpp->GetConstraintToBody1Matrix();
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

JPC_Mat44_t * JPC_PulleyConstraint_GetConstraintToBody2Matrix(
  JPC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  Mat44 resultValue = selfCpp->GetConstraintToBody2Matrix();
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

unsigned long JPC_PulleyConstraint_GetRefCount(
  JPC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_PulleyConstraint_AddRef(
  JPC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_PulleyConstraint_Release(
  JPC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  
  selfCpp->Release();
};

JPC_EConstraintType JPC_PulleyConstraint_GetType(
  JPC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  EConstraintType result = selfCpp->GetType();
  return static_cast<JPC_EConstraintType>(static_cast<int>(result));
};

JPC_EConstraintSubType JPC_PulleyConstraint_GetSubType(
  JPC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  EConstraintSubType result = selfCpp->GetSubType();
  return static_cast<JPC_EConstraintSubType>(static_cast<int>(result));
};

unsigned long JPC_PulleyConstraint_GetConstraintPriority(
  JPC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  unsigned long result = selfCpp->GetConstraintPriority();
  return result;
};

void JPC_PulleyConstraint_SetConstraintPriority(
  JPC_PulleyConstraint_t * self,
  unsigned long inPriority
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  
  selfCpp->SetConstraintPriority(
  inPriority
  );
};

void JPC_PulleyConstraint_SetNumVelocityStepsOverride(
  JPC_PulleyConstraint_t * self,
  long inN
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  
  selfCpp->SetNumVelocityStepsOverride(
  inN
  );
};

long JPC_PulleyConstraint_GetNumVelocityStepsOverride(
  JPC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  long result = selfCpp->GetNumVelocityStepsOverride();
  return result;
};

void JPC_PulleyConstraint_SetNumPositionStepsOverride(
  JPC_PulleyConstraint_t * self,
  long inN
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  
  selfCpp->SetNumPositionStepsOverride(
  inN
  );
};

long JPC_PulleyConstraint_GetNumPositionStepsOverride(
  JPC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  long result = selfCpp->GetNumPositionStepsOverride();
  return result;
};

void JPC_PulleyConstraint_SetEnabled(
  JPC_PulleyConstraint_t * self,
  bool inEnabled
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  
  selfCpp->SetEnabled(
  inEnabled
  );
};

bool JPC_PulleyConstraint_GetEnabled(
  JPC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  bool result = selfCpp->GetEnabled();
  return result;
};

bool JPC_PulleyConstraint_IsActive(
  JPC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  bool result = selfCpp->IsActive();
  return result;
};

unsigned long long int JPC_PulleyConstraint_GetUserData(
  JPC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JPC_PulleyConstraint_SetUserData(
  JPC_PulleyConstraint_t * self,
  unsigned long long int inUserData
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  
  selfCpp->SetUserData(
  inUserData
  );
};

void JPC_PulleyConstraint_ResetWarmStart(
  JPC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  
  selfCpp->ResetWarmStart();
};

//endregion functions

#ifdef __cplusplus
}
#endif

