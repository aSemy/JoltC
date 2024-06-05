#include "JoltC/JoltC_RackAndPinionConstraint.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_RackAndPinionConstraint_SetConstraints(
  JoltC_RackAndPinionConstraint_t * self,
  JoltC_Constraint_t * inPinion,
  JoltC_Constraint_t * inRack
) {
  RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
  selfCpp->SetConstraints(
    reinterpret_cast<Constraint *>(inPinion->obj),
    reinterpret_cast<Constraint *>(inRack->obj)
  );
};

float JoltC_RackAndPinionConstraint_GetTotalLambda(
  JoltC_RackAndPinionConstraint_t * self
) {
  RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
  float result = selfCpp->GetTotalLambda();
  return result;
};

JoltC_Body_t * JoltC_RackAndPinionConstraint_GetBody1(
  JoltC_RackAndPinionConstraint_t * self
) {
  RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
  const Body * resultValue = selfCpp->GetBody1();
  JoltC_Body_t* result = new JoltC_Body_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Body_t * JoltC_RackAndPinionConstraint_GetBody2(
  JoltC_RackAndPinionConstraint_t * self
) {
  RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
  const Body * resultValue = selfCpp->GetBody2();
  JoltC_Body_t* result = new JoltC_Body_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Mat44_t * JoltC_RackAndPinionConstraint_GetConstraintToBody1Matrix(
  JoltC_RackAndPinionConstraint_t * self
) {
  RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
  const Mat44& resultValue = selfCpp->GetConstraintToBody1Matrix();
  JoltC_Mat44_t* result = new JoltC_Mat44_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Mat44_t * JoltC_RackAndPinionConstraint_GetConstraintToBody2Matrix(
  JoltC_RackAndPinionConstraint_t * self
) {
  RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
  const Mat44& resultValue = selfCpp->GetConstraintToBody2Matrix();
  JoltC_Mat44_t* result = new JoltC_Mat44_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

unsigned long JoltC_RackAndPinionConstraint_GetRefCount(
  JoltC_RackAndPinionConstraint_t * self
) {
  RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_RackAndPinionConstraint_AddRef(
  JoltC_RackAndPinionConstraint_t * self
) {
  RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
  selfCpp->AddRef();
};

void JoltC_RackAndPinionConstraint_Release(
  JoltC_RackAndPinionConstraint_t * self
) {
  RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
  selfCpp->Release();
};

JoltC_EConstraintType JoltC_RackAndPinionConstraint_GetType(
  JoltC_RackAndPinionConstraint_t * self
) {
  RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
  EConstraintType result = selfCpp->GetType();
  return static_cast<JoltC_EConstraintType>(static_cast<int>(result));
};

JoltC_EConstraintSubType JoltC_RackAndPinionConstraint_GetSubType(
  JoltC_RackAndPinionConstraint_t * self
) {
  RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
  EConstraintSubType result = selfCpp->GetSubType();
  return static_cast<JoltC_EConstraintSubType>(static_cast<int>(result));
};

unsigned long JoltC_RackAndPinionConstraint_GetConstraintPriority(
  JoltC_RackAndPinionConstraint_t * self
) {
  RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
  unsigned long result = selfCpp->GetConstraintPriority();
  return result;
};

void JoltC_RackAndPinionConstraint_SetConstraintPriority(
  JoltC_RackAndPinionConstraint_t * self,
  unsigned long inPriority
) {
  RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
  selfCpp->SetConstraintPriority(
    inPriority
  );
};

void JoltC_RackAndPinionConstraint_SetNumVelocityStepsOverride(
  JoltC_RackAndPinionConstraint_t * self,
  long inN
) {
  RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
  selfCpp->SetNumVelocityStepsOverride(
    inN
  );
};

long JoltC_RackAndPinionConstraint_GetNumVelocityStepsOverride(
  JoltC_RackAndPinionConstraint_t * self
) {
  RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
  long result = selfCpp->GetNumVelocityStepsOverride();
  return result;
};

void JoltC_RackAndPinionConstraint_SetNumPositionStepsOverride(
  JoltC_RackAndPinionConstraint_t * self,
  long inN
) {
  RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
  selfCpp->SetNumPositionStepsOverride(
    inN
  );
};

long JoltC_RackAndPinionConstraint_GetNumPositionStepsOverride(
  JoltC_RackAndPinionConstraint_t * self
) {
  RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
  long result = selfCpp->GetNumPositionStepsOverride();
  return result;
};

void JoltC_RackAndPinionConstraint_SetEnabled(
  JoltC_RackAndPinionConstraint_t * self,
  bool inEnabled
) {
  RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
  selfCpp->SetEnabled(
    inEnabled
  );
};

bool JoltC_RackAndPinionConstraint_GetEnabled(
  JoltC_RackAndPinionConstraint_t * self
) {
  RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
  bool result = selfCpp->GetEnabled();
  return result;
};

bool JoltC_RackAndPinionConstraint_IsActive(
  JoltC_RackAndPinionConstraint_t * self
) {
  RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
  bool result = selfCpp->IsActive();
  return result;
};

unsigned long long int JoltC_RackAndPinionConstraint_GetUserData(
  JoltC_RackAndPinionConstraint_t * self
) {
  RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JoltC_RackAndPinionConstraint_SetUserData(
  JoltC_RackAndPinionConstraint_t * self,
  unsigned long long int inUserData
) {
  RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
  selfCpp->SetUserData(
    inUserData
  );
};

void JoltC_RackAndPinionConstraint_ResetWarmStart(
  JoltC_RackAndPinionConstraint_t * self
) {
  RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
  selfCpp->ResetWarmStart();
};

//endregion

#ifdef __cplusplus
}
#endif

