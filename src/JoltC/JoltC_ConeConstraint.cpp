#include "JoltC/JPC_ConeConstraint.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JPC_ConeConstraint_SetHalfConeAngle(
  JPC_ConeConstraint_t * self,
  float inHalfConeAngle
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  
  selfCpp->SetHalfConeAngle(
  inHalfConeAngle
  );
};

float JPC_ConeConstraint_GetCosHalfConeAngle(
  JPC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  float result = selfCpp->GetCosHalfConeAngle();
  return result;
};

JPC_Vec3_t * JPC_ConeConstraint_GetTotalLambdaPosition(
  JPC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  Vec3 resultValue = selfCpp->GetTotalLambdaPosition();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

float JPC_ConeConstraint_GetTotalLambdaRotation(
  JPC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  float result = selfCpp->GetTotalLambdaRotation();
  return result;
};

JPC_Body_t * JPC_ConeConstraint_GetBody1(
  JPC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  Body * result = selfCpp->GetBody1();
  return reinterpret_cast<JPC_Body_t *>(result);
};

JPC_Body_t * JPC_ConeConstraint_GetBody2(
  JPC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  Body * result = selfCpp->GetBody2();
  return reinterpret_cast<JPC_Body_t *>(result);
};

JPC_Mat44_t * JPC_ConeConstraint_GetConstraintToBody1Matrix(
  JPC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  Mat44 resultValue = selfCpp->GetConstraintToBody1Matrix();
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

JPC_Mat44_t * JPC_ConeConstraint_GetConstraintToBody2Matrix(
  JPC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  Mat44 resultValue = selfCpp->GetConstraintToBody2Matrix();
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

unsigned long JPC_ConeConstraint_GetRefCount(
  JPC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_ConeConstraint_AddRef(
  JPC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_ConeConstraint_Release(
  JPC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  
  selfCpp->Release();
};

JPC_EConstraintType JPC_ConeConstraint_GetType(
  JPC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  EConstraintType result = selfCpp->GetType();
  return static_cast<JPC_EConstraintType>(static_cast<int>(result));
};

JPC_EConstraintSubType JPC_ConeConstraint_GetSubType(
  JPC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  EConstraintSubType result = selfCpp->GetSubType();
  return static_cast<JPC_EConstraintSubType>(static_cast<int>(result));
};

unsigned long JPC_ConeConstraint_GetConstraintPriority(
  JPC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  unsigned long result = selfCpp->GetConstraintPriority();
  return result;
};

void JPC_ConeConstraint_SetConstraintPriority(
  JPC_ConeConstraint_t * self,
  unsigned long inPriority
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  
  selfCpp->SetConstraintPriority(
  inPriority
  );
};

void JPC_ConeConstraint_SetNumVelocityStepsOverride(
  JPC_ConeConstraint_t * self,
  long inN
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  
  selfCpp->SetNumVelocityStepsOverride(
  inN
  );
};

long JPC_ConeConstraint_GetNumVelocityStepsOverride(
  JPC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  long result = selfCpp->GetNumVelocityStepsOverride();
  return result;
};

void JPC_ConeConstraint_SetNumPositionStepsOverride(
  JPC_ConeConstraint_t * self,
  long inN
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  
  selfCpp->SetNumPositionStepsOverride(
  inN
  );
};

long JPC_ConeConstraint_GetNumPositionStepsOverride(
  JPC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  long result = selfCpp->GetNumPositionStepsOverride();
  return result;
};

void JPC_ConeConstraint_SetEnabled(
  JPC_ConeConstraint_t * self,
  bool inEnabled
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  
  selfCpp->SetEnabled(
  inEnabled
  );
};

bool JPC_ConeConstraint_GetEnabled(
  JPC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  bool result = selfCpp->GetEnabled();
  return result;
};

bool JPC_ConeConstraint_IsActive(
  JPC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  bool result = selfCpp->IsActive();
  return result;
};

unsigned long long int JPC_ConeConstraint_GetUserData(
  JPC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JPC_ConeConstraint_SetUserData(
  JPC_ConeConstraint_t * self,
  unsigned long long int inUserData
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  
  selfCpp->SetUserData(
  inUserData
  );
};

void JPC_ConeConstraint_ResetWarmStart(
  JPC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  
  selfCpp->ResetWarmStart();
};

//endregion functions

#ifdef __cplusplus
}
#endif

