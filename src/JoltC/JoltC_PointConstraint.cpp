#include "JoltC/JPC_PointConstraint.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

JPC_Vec3_t * JPC_PointConstraint_GetLocalSpacePoint1(
  JPC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  Vec3 resultValue = selfCpp->GetLocalSpacePoint1();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Vec3_t * JPC_PointConstraint_GetLocalSpacePoint2(
  JPC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  Vec3 resultValue = selfCpp->GetLocalSpacePoint2();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Vec3_t * JPC_PointConstraint_GetTotalLambdaPosition(
  JPC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  Vec3 resultValue = selfCpp->GetTotalLambdaPosition();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Body_t * JPC_PointConstraint_GetBody1(
  JPC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  Body * result = selfCpp->GetBody1();
  return reinterpret_cast<JPC_Body_t *>(result);
};

JPC_Body_t * JPC_PointConstraint_GetBody2(
  JPC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  Body * result = selfCpp->GetBody2();
  return reinterpret_cast<JPC_Body_t *>(result);
};

JPC_Mat44_t * JPC_PointConstraint_GetConstraintToBody1Matrix(
  JPC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  Mat44 resultValue = selfCpp->GetConstraintToBody1Matrix();
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

JPC_Mat44_t * JPC_PointConstraint_GetConstraintToBody2Matrix(
  JPC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  Mat44 resultValue = selfCpp->GetConstraintToBody2Matrix();
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

unsigned long JPC_PointConstraint_GetRefCount(
  JPC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_PointConstraint_AddRef(
  JPC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_PointConstraint_Release(
  JPC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  
  selfCpp->Release();
};

JPC_EConstraintType JPC_PointConstraint_GetType(
  JPC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  EConstraintType result = selfCpp->GetType();
  return static_cast<JPC_EConstraintType>(static_cast<int>(result));
};

JPC_EConstraintSubType JPC_PointConstraint_GetSubType(
  JPC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  EConstraintSubType result = selfCpp->GetSubType();
  return static_cast<JPC_EConstraintSubType>(static_cast<int>(result));
};

unsigned long JPC_PointConstraint_GetConstraintPriority(
  JPC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  unsigned long result = selfCpp->GetConstraintPriority();
  return result;
};

void JPC_PointConstraint_SetConstraintPriority(
  JPC_PointConstraint_t * self,
  unsigned long inPriority
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  
  selfCpp->SetConstraintPriority(
  inPriority
  );
};

void JPC_PointConstraint_SetNumVelocityStepsOverride(
  JPC_PointConstraint_t * self,
  long inN
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  
  selfCpp->SetNumVelocityStepsOverride(
  inN
  );
};

long JPC_PointConstraint_GetNumVelocityStepsOverride(
  JPC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  long result = selfCpp->GetNumVelocityStepsOverride();
  return result;
};

void JPC_PointConstraint_SetNumPositionStepsOverride(
  JPC_PointConstraint_t * self,
  long inN
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  
  selfCpp->SetNumPositionStepsOverride(
  inN
  );
};

long JPC_PointConstraint_GetNumPositionStepsOverride(
  JPC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  long result = selfCpp->GetNumPositionStepsOverride();
  return result;
};

void JPC_PointConstraint_SetEnabled(
  JPC_PointConstraint_t * self,
  bool inEnabled
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  
  selfCpp->SetEnabled(
  inEnabled
  );
};

bool JPC_PointConstraint_GetEnabled(
  JPC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  bool result = selfCpp->GetEnabled();
  return result;
};

bool JPC_PointConstraint_IsActive(
  JPC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  bool result = selfCpp->IsActive();
  return result;
};

unsigned long long int JPC_PointConstraint_GetUserData(
  JPC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JPC_PointConstraint_SetUserData(
  JPC_PointConstraint_t * self,
  unsigned long long int inUserData
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  
  selfCpp->SetUserData(
  inUserData
  );
};

void JPC_PointConstraint_ResetWarmStart(
  JPC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  
  selfCpp->ResetWarmStart();
};

//endregion functions

#ifdef __cplusplus
}
#endif

