#include "JoltC/JoltC_GearConstraint.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_GearConstraint_destroy(
  JoltC_GearConstraint_t * self
){
  if (self == NULL) return;
  delete static_cast<GearConstraint *>(self->obj);
  free(self);
}

//endregion
//region functions

void JoltC_GearConstraint_SetConstraints(
  JoltC_GearConstraint_t * self,
  JoltC_Constraint_t * inGear1,
  JoltC_Constraint_t * inGear2
) {
  GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
  const Constraint * inGear1Cpp = static_cast<const Constraint *>(inGear1->obj);
  const Constraint * inGear2Cpp = static_cast<const Constraint *>(inGear2->obj);
  selfCpp->SetConstraints(
    inGear1Cpp,
    inGear2Cpp
  );
}

float JoltC_GearConstraint_GetTotalLambda(
  JoltC_GearConstraint_t * self
) {
  GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
  return selfCpp->GetTotalLambda();
}

JoltC_Body_t * JoltC_GearConstraint_GetBody1(
  JoltC_GearConstraint_t * self
) {
  GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
  const Body * resultPtr = selfCpp->GetBody1();
  JoltC_Body_t * result = new JoltC_Body_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_Body_t * JoltC_GearConstraint_GetBody2(
  JoltC_GearConstraint_t * self
) {
  GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
  const Body * resultPtr = selfCpp->GetBody2();
  JoltC_Body_t * result = new JoltC_Body_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_Mat44_t * JoltC_GearConstraint_GetConstraintToBody1Matrix(
  JoltC_GearConstraint_t * self
) {
  GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
  Mat44 * resultPtr = new Mat44();
  *resultPtr = selfCpp->GetConstraintToBody1Matrix();
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Mat44_t * JoltC_GearConstraint_GetConstraintToBody2Matrix(
  JoltC_GearConstraint_t * self
) {
  GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
  Mat44 * resultPtr = new Mat44();
  *resultPtr = selfCpp->GetConstraintToBody2Matrix();
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

unsigned long JoltC_GearConstraint_GetRefCount(
  JoltC_GearConstraint_t * self
) {
  GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_GearConstraint_AddRef(
  JoltC_GearConstraint_t * self
) {
  GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_GearConstraint_Release(
  JoltC_GearConstraint_t * self
) {
  GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
  selfCpp->Release();
}

JoltC_EConstraintType JoltC_GearConstraint_GetType(
  JoltC_GearConstraint_t * self
) {
  GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
  EConstraintType result = selfCpp->GetType();
  return static_cast<JoltC_EConstraintType>(static_cast<int>(result));
}

JoltC_EConstraintSubType JoltC_GearConstraint_GetSubType(
  JoltC_GearConstraint_t * self
) {
  GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
  EConstraintSubType result = selfCpp->GetSubType();
  return static_cast<JoltC_EConstraintSubType>(static_cast<int>(result));
}

unsigned long JoltC_GearConstraint_GetConstraintPriority(
  JoltC_GearConstraint_t * self
) {
  GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
  return selfCpp->GetConstraintPriority();
}

void JoltC_GearConstraint_SetConstraintPriority(
  JoltC_GearConstraint_t * self,
  unsigned long inPriority
) {
  GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
  selfCpp->SetConstraintPriority(
    inPriority
  );
}

void JoltC_GearConstraint_SetNumVelocityStepsOverride(
  JoltC_GearConstraint_t * self,
  long inN
) {
  GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
  selfCpp->SetNumVelocityStepsOverride(
    inN
  );
}

long JoltC_GearConstraint_GetNumVelocityStepsOverride(
  JoltC_GearConstraint_t * self
) {
  GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
  return selfCpp->GetNumVelocityStepsOverride();
}

void JoltC_GearConstraint_SetNumPositionStepsOverride(
  JoltC_GearConstraint_t * self,
  long inN
) {
  GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
  selfCpp->SetNumPositionStepsOverride(
    inN
  );
}

long JoltC_GearConstraint_GetNumPositionStepsOverride(
  JoltC_GearConstraint_t * self
) {
  GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
  return selfCpp->GetNumPositionStepsOverride();
}

void JoltC_GearConstraint_SetEnabled(
  JoltC_GearConstraint_t * self,
  bool inEnabled
) {
  GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
  selfCpp->SetEnabled(
    inEnabled
  );
}

bool JoltC_GearConstraint_GetEnabled(
  JoltC_GearConstraint_t * self
) {
  GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
  return selfCpp->GetEnabled();
}

bool JoltC_GearConstraint_IsActive(
  JoltC_GearConstraint_t * self
) {
  GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
  return selfCpp->IsActive();
}

unsigned long long int JoltC_GearConstraint_GetUserData(
  JoltC_GearConstraint_t * self
) {
  GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
  return selfCpp->GetUserData();
}

void JoltC_GearConstraint_SetUserData(
  JoltC_GearConstraint_t * self,
  unsigned long long int inUserData
) {
  GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
  selfCpp->SetUserData(
    inUserData
  );
}

void JoltC_GearConstraint_ResetWarmStart(
  JoltC_GearConstraint_t * self
) {
  GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
  selfCpp->ResetWarmStart();
}

//endregion


#ifdef __cplusplus
}
#endif
