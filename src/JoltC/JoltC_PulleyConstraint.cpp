#include "JoltC/JoltC_PulleyConstraint.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_PulleyConstraint_SetLength(
  JoltC_PulleyConstraint_t * self,
  float inMinLength,
  float inMaxLength
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  
  selfCpp->SetLength(
  inMinLength,
  inMaxLength
  );
};

float JoltC_PulleyConstraint_GetMinLength(
  JoltC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  float result = selfCpp->GetMinLength();
  return result;
};

float JoltC_PulleyConstraint_GetMaxLength(
  JoltC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  float result = selfCpp->GetMaxLength();
  return result;
};

float JoltC_PulleyConstraint_GetCurrentLength(
  JoltC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  float result = selfCpp->GetCurrentLength();
  return result;
};

JoltC_Body_t * JoltC_PulleyConstraint_GetBody1(
  JoltC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  Body * result = selfCpp->GetBody1();
  return reinterpret_cast<JoltC_Body_t *>(result);
};

JoltC_Body_t * JoltC_PulleyConstraint_GetBody2(
  JoltC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  Body * result = selfCpp->GetBody2();
  return reinterpret_cast<JoltC_Body_t *>(result);
};

JoltC_Mat44_t * JoltC_PulleyConstraint_GetConstraintToBody1Matrix(
  JoltC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  Mat44 resultValue = selfCpp->GetConstraintToBody1Matrix();
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JoltC_Mat44_t *>(result);
};

JoltC_Mat44_t * JoltC_PulleyConstraint_GetConstraintToBody2Matrix(
  JoltC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  Mat44 resultValue = selfCpp->GetConstraintToBody2Matrix();
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JoltC_Mat44_t *>(result);
};

unsigned long JoltC_PulleyConstraint_GetRefCount(
  JoltC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_PulleyConstraint_AddRef(
  JoltC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  
  selfCpp->AddRef();
};

void JoltC_PulleyConstraint_Release(
  JoltC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  
  selfCpp->Release();
};

JoltC_EConstraintType JoltC_PulleyConstraint_GetType(
  JoltC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  EConstraintType result = selfCpp->GetType();
  return static_cast<JoltC_EConstraintType>(static_cast<int>(result));
};

JoltC_EConstraintSubType JoltC_PulleyConstraint_GetSubType(
  JoltC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  EConstraintSubType result = selfCpp->GetSubType();
  return static_cast<JoltC_EConstraintSubType>(static_cast<int>(result));
};

unsigned long JoltC_PulleyConstraint_GetConstraintPriority(
  JoltC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  unsigned long result = selfCpp->GetConstraintPriority();
  return result;
};

void JoltC_PulleyConstraint_SetConstraintPriority(
  JoltC_PulleyConstraint_t * self,
  unsigned long inPriority
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  
  selfCpp->SetConstraintPriority(
  inPriority
  );
};

void JoltC_PulleyConstraint_SetNumVelocityStepsOverride(
  JoltC_PulleyConstraint_t * self,
  long inN
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  
  selfCpp->SetNumVelocityStepsOverride(
  inN
  );
};

long JoltC_PulleyConstraint_GetNumVelocityStepsOverride(
  JoltC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  long result = selfCpp->GetNumVelocityStepsOverride();
  return result;
};

void JoltC_PulleyConstraint_SetNumPositionStepsOverride(
  JoltC_PulleyConstraint_t * self,
  long inN
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  
  selfCpp->SetNumPositionStepsOverride(
  inN
  );
};

long JoltC_PulleyConstraint_GetNumPositionStepsOverride(
  JoltC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  long result = selfCpp->GetNumPositionStepsOverride();
  return result;
};

void JoltC_PulleyConstraint_SetEnabled(
  JoltC_PulleyConstraint_t * self,
  bool inEnabled
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  
  selfCpp->SetEnabled(
  inEnabled
  );
};

bool JoltC_PulleyConstraint_GetEnabled(
  JoltC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  bool result = selfCpp->GetEnabled();
  return result;
};

bool JoltC_PulleyConstraint_IsActive(
  JoltC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  bool result = selfCpp->IsActive();
  return result;
};

unsigned long long int JoltC_PulleyConstraint_GetUserData(
  JoltC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JoltC_PulleyConstraint_SetUserData(
  JoltC_PulleyConstraint_t * self,
  unsigned long long int inUserData
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  
  selfCpp->SetUserData(
  inUserData
  );
};

void JoltC_PulleyConstraint_ResetWarmStart(
  JoltC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  
  selfCpp->ResetWarmStart();
};

//endregion

#ifdef __cplusplus
}
#endif

