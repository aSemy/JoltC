#include "JoltC/JoltC_ConeConstraint.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_ConeConstraint_destroy(
  JoltC_ConeConstraint_t * self
){
  if (self == NULL) return;
  delete static_cast<ConeConstraint *>(self->obj);
  free(self);
}

//endregion
//region functions

void JoltC_ConeConstraint_SetHalfConeAngle(
  JoltC_ConeConstraint_t * self,
  float inHalfConeAngle
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  selfCpp->SetHalfConeAngle(
    inHalfConeAngle
  );
}

float JoltC_ConeConstraint_GetCosHalfConeAngle(
  JoltC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  return selfCpp->GetCosHalfConeAngle();
}

JoltC_Vec3_t * JoltC_ConeConstraint_GetTotalLambdaPosition(
  JoltC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetTotalLambdaPosition();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

float JoltC_ConeConstraint_GetTotalLambdaRotation(
  JoltC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  return selfCpp->GetTotalLambdaRotation();
}

JoltC_Body_t * JoltC_ConeConstraint_GetBody1(
  JoltC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  const Body * resultPtr = selfCpp->GetBody1();
  JoltC_Body_t * result = new JoltC_Body_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_Body_t * JoltC_ConeConstraint_GetBody2(
  JoltC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  const Body * resultPtr = selfCpp->GetBody2();
  JoltC_Body_t * result = new JoltC_Body_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_Mat44_t * JoltC_ConeConstraint_GetConstraintToBody1Matrix(
  JoltC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  Mat44 * resultPtr = new Mat44();
  *resultPtr = selfCpp->GetConstraintToBody1Matrix();
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Mat44_t * JoltC_ConeConstraint_GetConstraintToBody2Matrix(
  JoltC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  Mat44 * resultPtr = new Mat44();
  *resultPtr = selfCpp->GetConstraintToBody2Matrix();
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

unsigned long JoltC_ConeConstraint_GetRefCount(
  JoltC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_ConeConstraint_AddRef(
  JoltC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_ConeConstraint_Release(
  JoltC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  selfCpp->Release();
}

JoltC_EConstraintType JoltC_ConeConstraint_GetType(
  JoltC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  EConstraintType result = selfCpp->GetType();
  return static_cast<JoltC_EConstraintType>(static_cast<int>(result));
}

JoltC_EConstraintSubType JoltC_ConeConstraint_GetSubType(
  JoltC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  EConstraintSubType result = selfCpp->GetSubType();
  return static_cast<JoltC_EConstraintSubType>(static_cast<int>(result));
}

unsigned long JoltC_ConeConstraint_GetConstraintPriority(
  JoltC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  return selfCpp->GetConstraintPriority();
}

void JoltC_ConeConstraint_SetConstraintPriority(
  JoltC_ConeConstraint_t * self,
  unsigned long inPriority
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  selfCpp->SetConstraintPriority(
    inPriority
  );
}

void JoltC_ConeConstraint_SetNumVelocityStepsOverride(
  JoltC_ConeConstraint_t * self,
  long inN
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  selfCpp->SetNumVelocityStepsOverride(
    inN
  );
}

long JoltC_ConeConstraint_GetNumVelocityStepsOverride(
  JoltC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  return selfCpp->GetNumVelocityStepsOverride();
}

void JoltC_ConeConstraint_SetNumPositionStepsOverride(
  JoltC_ConeConstraint_t * self,
  long inN
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  selfCpp->SetNumPositionStepsOverride(
    inN
  );
}

long JoltC_ConeConstraint_GetNumPositionStepsOverride(
  JoltC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  return selfCpp->GetNumPositionStepsOverride();
}

void JoltC_ConeConstraint_SetEnabled(
  JoltC_ConeConstraint_t * self,
  bool inEnabled
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  selfCpp->SetEnabled(
    inEnabled
  );
}

bool JoltC_ConeConstraint_GetEnabled(
  JoltC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  return selfCpp->GetEnabled();
}

bool JoltC_ConeConstraint_IsActive(
  JoltC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  return selfCpp->IsActive();
}

unsigned long long int JoltC_ConeConstraint_GetUserData(
  JoltC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  return selfCpp->GetUserData();
}

void JoltC_ConeConstraint_SetUserData(
  JoltC_ConeConstraint_t * self,
  unsigned long long int inUserData
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  selfCpp->SetUserData(
    inUserData
  );
}

void JoltC_ConeConstraint_ResetWarmStart(
  JoltC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  selfCpp->ResetWarmStart();
}

//endregion


#ifdef __cplusplus
}
#endif
