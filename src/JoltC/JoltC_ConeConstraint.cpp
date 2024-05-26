#include "JoltC/JoltC_ConeConstraint.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_ConeConstraint_SetHalfConeAngle(
  JoltC_ConeConstraint_t * self,
  float inHalfConeAngle
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  
  selfCpp->SetHalfConeAngle(
    inHalfConeAngle
  );
};

float JoltC_ConeConstraint_GetCosHalfConeAngle(
  JoltC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  float result = selfCpp->GetCosHalfConeAngle();
  return result;
};

JoltC_Vec3_t * JoltC_ConeConstraint_GetTotalLambdaPosition(
  JoltC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  static Vec3 resultValue = selfCpp->GetTotalLambdaPosition();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

float JoltC_ConeConstraint_GetTotalLambdaRotation(
  JoltC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  float result = selfCpp->GetTotalLambdaRotation();
  return result;
};

JoltC_Body_t * JoltC_ConeConstraint_GetBody1(
  JoltC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  Body * resultValue = selfCpp->GetBody1();
  JoltC_Body_t* result = new JoltC_Body_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_Body_t * JoltC_ConeConstraint_GetBody2(
  JoltC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  Body * resultValue = selfCpp->GetBody2();
  JoltC_Body_t* result = new JoltC_Body_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_Mat44_t * JoltC_ConeConstraint_GetConstraintToBody1Matrix(
  JoltC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  static Mat44 resultValue = selfCpp->GetConstraintToBody1Matrix();
  JoltC_Mat44_t* result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_Mat44_t * JoltC_ConeConstraint_GetConstraintToBody2Matrix(
  JoltC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  static Mat44 resultValue = selfCpp->GetConstraintToBody2Matrix();
  JoltC_Mat44_t* result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

unsigned long JoltC_ConeConstraint_GetRefCount(
  JoltC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_ConeConstraint_AddRef(
  JoltC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  
  selfCpp->AddRef();
};

void JoltC_ConeConstraint_Release(
  JoltC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  
  selfCpp->Release();
};

JoltC_EConstraintType JoltC_ConeConstraint_GetType(
  JoltC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  EConstraintType result = selfCpp->GetType();
  return static_cast<JoltC_EConstraintType>(static_cast<int>(result));
};

JoltC_EConstraintSubType JoltC_ConeConstraint_GetSubType(
  JoltC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  EConstraintSubType result = selfCpp->GetSubType();
  return static_cast<JoltC_EConstraintSubType>(static_cast<int>(result));
};

unsigned long JoltC_ConeConstraint_GetConstraintPriority(
  JoltC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  unsigned long result = selfCpp->GetConstraintPriority();
  return result;
};

void JoltC_ConeConstraint_SetConstraintPriority(
  JoltC_ConeConstraint_t * self,
  unsigned long inPriority
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  
  selfCpp->SetConstraintPriority(
    inPriority
  );
};

void JoltC_ConeConstraint_SetNumVelocityStepsOverride(
  JoltC_ConeConstraint_t * self,
  long inN
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  
  selfCpp->SetNumVelocityStepsOverride(
    inN
  );
};

long JoltC_ConeConstraint_GetNumVelocityStepsOverride(
  JoltC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  long result = selfCpp->GetNumVelocityStepsOverride();
  return result;
};

void JoltC_ConeConstraint_SetNumPositionStepsOverride(
  JoltC_ConeConstraint_t * self,
  long inN
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  
  selfCpp->SetNumPositionStepsOverride(
    inN
  );
};

long JoltC_ConeConstraint_GetNumPositionStepsOverride(
  JoltC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  long result = selfCpp->GetNumPositionStepsOverride();
  return result;
};

void JoltC_ConeConstraint_SetEnabled(
  JoltC_ConeConstraint_t * self,
  bool inEnabled
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  
  selfCpp->SetEnabled(
    inEnabled
  );
};

bool JoltC_ConeConstraint_GetEnabled(
  JoltC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  bool result = selfCpp->GetEnabled();
  return result;
};

bool JoltC_ConeConstraint_IsActive(
  JoltC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  bool result = selfCpp->IsActive();
  return result;
};

unsigned long long int JoltC_ConeConstraint_GetUserData(
  JoltC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JoltC_ConeConstraint_SetUserData(
  JoltC_ConeConstraint_t * self,
  unsigned long long int inUserData
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  
  selfCpp->SetUserData(
    inUserData
  );
};

void JoltC_ConeConstraint_ResetWarmStart(
  JoltC_ConeConstraint_t * self
) {
  ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
  
  selfCpp->ResetWarmStart();
};

//endregion

#ifdef __cplusplus
}
#endif

