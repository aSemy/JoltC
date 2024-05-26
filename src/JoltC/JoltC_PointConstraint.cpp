#include "JoltC/JoltC_PointConstraint.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

JoltC_Vec3_t * JoltC_PointConstraint_GetLocalSpacePoint1(
  JoltC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  static Vec3 resultValue = selfCpp->GetLocalSpacePoint1();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_Vec3_t * JoltC_PointConstraint_GetLocalSpacePoint2(
  JoltC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  static Vec3 resultValue = selfCpp->GetLocalSpacePoint2();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_Vec3_t * JoltC_PointConstraint_GetTotalLambdaPosition(
  JoltC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  static Vec3 resultValue = selfCpp->GetTotalLambdaPosition();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_Body_t * JoltC_PointConstraint_GetBody1(
  JoltC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  Body * resultValue = selfCpp->GetBody1();
  JoltC_Body_t* result = new JoltC_Body_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_Body_t * JoltC_PointConstraint_GetBody2(
  JoltC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  Body * resultValue = selfCpp->GetBody2();
  JoltC_Body_t* result = new JoltC_Body_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_Mat44_t * JoltC_PointConstraint_GetConstraintToBody1Matrix(
  JoltC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  static Mat44 resultValue = selfCpp->GetConstraintToBody1Matrix();
  JoltC_Mat44_t* result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_Mat44_t * JoltC_PointConstraint_GetConstraintToBody2Matrix(
  JoltC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  static Mat44 resultValue = selfCpp->GetConstraintToBody2Matrix();
  JoltC_Mat44_t* result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

unsigned long JoltC_PointConstraint_GetRefCount(
  JoltC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_PointConstraint_AddRef(
  JoltC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  
  selfCpp->AddRef();
};

void JoltC_PointConstraint_Release(
  JoltC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  
  selfCpp->Release();
};

JoltC_EConstraintType JoltC_PointConstraint_GetType(
  JoltC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  EConstraintType result = selfCpp->GetType();
  return static_cast<JoltC_EConstraintType>(static_cast<int>(result));
};

JoltC_EConstraintSubType JoltC_PointConstraint_GetSubType(
  JoltC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  EConstraintSubType result = selfCpp->GetSubType();
  return static_cast<JoltC_EConstraintSubType>(static_cast<int>(result));
};

unsigned long JoltC_PointConstraint_GetConstraintPriority(
  JoltC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  unsigned long result = selfCpp->GetConstraintPriority();
  return result;
};

void JoltC_PointConstraint_SetConstraintPriority(
  JoltC_PointConstraint_t * self,
  unsigned long inPriority
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  
  selfCpp->SetConstraintPriority(
    inPriority
  );
};

void JoltC_PointConstraint_SetNumVelocityStepsOverride(
  JoltC_PointConstraint_t * self,
  long inN
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  
  selfCpp->SetNumVelocityStepsOverride(
    inN
  );
};

long JoltC_PointConstraint_GetNumVelocityStepsOverride(
  JoltC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  long result = selfCpp->GetNumVelocityStepsOverride();
  return result;
};

void JoltC_PointConstraint_SetNumPositionStepsOverride(
  JoltC_PointConstraint_t * self,
  long inN
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  
  selfCpp->SetNumPositionStepsOverride(
    inN
  );
};

long JoltC_PointConstraint_GetNumPositionStepsOverride(
  JoltC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  long result = selfCpp->GetNumPositionStepsOverride();
  return result;
};

void JoltC_PointConstraint_SetEnabled(
  JoltC_PointConstraint_t * self,
  bool inEnabled
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  
  selfCpp->SetEnabled(
    inEnabled
  );
};

bool JoltC_PointConstraint_GetEnabled(
  JoltC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  bool result = selfCpp->GetEnabled();
  return result;
};

bool JoltC_PointConstraint_IsActive(
  JoltC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  bool result = selfCpp->IsActive();
  return result;
};

unsigned long long int JoltC_PointConstraint_GetUserData(
  JoltC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JoltC_PointConstraint_SetUserData(
  JoltC_PointConstraint_t * self,
  unsigned long long int inUserData
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  
  selfCpp->SetUserData(
    inUserData
  );
};

void JoltC_PointConstraint_ResetWarmStart(
  JoltC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  
  selfCpp->ResetWarmStart();
};

//endregion

#ifdef __cplusplus
}
#endif

