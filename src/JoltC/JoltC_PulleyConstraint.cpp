#include "JoltC/JoltC_PulleyConstraint.h"
#include "JoltC/JoltJS.h"

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
}

float JoltC_PulleyConstraint_GetMinLength(
  JoltC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  return selfCpp->GetMinLength();
}

float JoltC_PulleyConstraint_GetMaxLength(
  JoltC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  return selfCpp->GetMaxLength();
}

float JoltC_PulleyConstraint_GetCurrentLength(
  JoltC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  return selfCpp->GetCurrentLength();
}

JoltC_Body_t * JoltC_PulleyConstraint_GetBody1(
  JoltC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  const Body * resultPtr = selfCpp->GetBody1();
  JoltC_Body_t * result = new JoltC_Body_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_Body_t * JoltC_PulleyConstraint_GetBody2(
  JoltC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  const Body * resultPtr = selfCpp->GetBody2();
  JoltC_Body_t * result = new JoltC_Body_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_Mat44_t * JoltC_PulleyConstraint_GetConstraintToBody1Matrix(
  JoltC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  Mat44 * resultPtr = new Mat44();
  *resultPtr = selfCpp->GetConstraintToBody1Matrix();
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Mat44_t * JoltC_PulleyConstraint_GetConstraintToBody2Matrix(
  JoltC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  Mat44 * resultPtr = new Mat44();
  *resultPtr = selfCpp->GetConstraintToBody2Matrix();
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

unsigned long JoltC_PulleyConstraint_GetRefCount(
  JoltC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_PulleyConstraint_AddRef(
  JoltC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_PulleyConstraint_Release(
  JoltC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  selfCpp->Release();
}

JoltC_EConstraintType JoltC_PulleyConstraint_GetType(
  JoltC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  EConstraintType result = selfCpp->GetType();
  return static_cast<JoltC_EConstraintType>(static_cast<int>(result));
}

JoltC_EConstraintSubType JoltC_PulleyConstraint_GetSubType(
  JoltC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  EConstraintSubType result = selfCpp->GetSubType();
  return static_cast<JoltC_EConstraintSubType>(static_cast<int>(result));
}

unsigned long JoltC_PulleyConstraint_GetConstraintPriority(
  JoltC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  return selfCpp->GetConstraintPriority();
}

void JoltC_PulleyConstraint_SetConstraintPriority(
  JoltC_PulleyConstraint_t * self,
  unsigned long inPriority
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  selfCpp->SetConstraintPriority(
    inPriority
  );
}

void JoltC_PulleyConstraint_SetNumVelocityStepsOverride(
  JoltC_PulleyConstraint_t * self,
  long inN
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  selfCpp->SetNumVelocityStepsOverride(
    inN
  );
}

long JoltC_PulleyConstraint_GetNumVelocityStepsOverride(
  JoltC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  return selfCpp->GetNumVelocityStepsOverride();
}

void JoltC_PulleyConstraint_SetNumPositionStepsOverride(
  JoltC_PulleyConstraint_t * self,
  long inN
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  selfCpp->SetNumPositionStepsOverride(
    inN
  );
}

long JoltC_PulleyConstraint_GetNumPositionStepsOverride(
  JoltC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  return selfCpp->GetNumPositionStepsOverride();
}

void JoltC_PulleyConstraint_SetEnabled(
  JoltC_PulleyConstraint_t * self,
  bool inEnabled
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  selfCpp->SetEnabled(
    inEnabled
  );
}

bool JoltC_PulleyConstraint_GetEnabled(
  JoltC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  return selfCpp->GetEnabled();
}

bool JoltC_PulleyConstraint_IsActive(
  JoltC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  return selfCpp->IsActive();
}

unsigned long long int JoltC_PulleyConstraint_GetUserData(
  JoltC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  return selfCpp->GetUserData();
}

void JoltC_PulleyConstraint_SetUserData(
  JoltC_PulleyConstraint_t * self,
  unsigned long long int inUserData
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  selfCpp->SetUserData(
    inUserData
  );
}

void JoltC_PulleyConstraint_ResetWarmStart(
  JoltC_PulleyConstraint_t * self
) {
  PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
  selfCpp->ResetWarmStart();
}

//endregion

#ifdef __cplusplus
}
#endif

