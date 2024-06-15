#include "JoltC/JoltC_PointConstraint.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_PointConstraint_destroy(
  JoltC_PointConstraint_t * self
){
  if (self == NULL) return;
  delete static_cast<PointConstraint *>(self->obj);
  free(self);
}

//endregion
//region functions

JoltC_Vec3_t * JoltC_PointConstraint_GetLocalSpacePoint1(
  JoltC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetLocalSpacePoint1();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_PointConstraint_GetLocalSpacePoint2(
  JoltC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetLocalSpacePoint2();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_PointConstraint_GetTotalLambdaPosition(
  JoltC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetTotalLambdaPosition();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Body_t * JoltC_PointConstraint_GetBody1(
  JoltC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  const Body * resultPtr = selfCpp->GetBody1();
  JoltC_Body_t * result = new JoltC_Body_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_Body_t * JoltC_PointConstraint_GetBody2(
  JoltC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  const Body * resultPtr = selfCpp->GetBody2();
  JoltC_Body_t * result = new JoltC_Body_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_Mat44_t * JoltC_PointConstraint_GetConstraintToBody1Matrix(
  JoltC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  Mat44 * resultPtr = new Mat44();
  *resultPtr = selfCpp->GetConstraintToBody1Matrix();
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Mat44_t * JoltC_PointConstraint_GetConstraintToBody2Matrix(
  JoltC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  Mat44 * resultPtr = new Mat44();
  *resultPtr = selfCpp->GetConstraintToBody2Matrix();
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

unsigned long JoltC_PointConstraint_GetRefCount(
  JoltC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_PointConstraint_AddRef(
  JoltC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_PointConstraint_Release(
  JoltC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  selfCpp->Release();
}

JoltC_EConstraintType JoltC_PointConstraint_GetType(
  JoltC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  EConstraintType result = selfCpp->GetType();
  return static_cast<JoltC_EConstraintType>(static_cast<int>(result));
}

JoltC_EConstraintSubType JoltC_PointConstraint_GetSubType(
  JoltC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  EConstraintSubType result = selfCpp->GetSubType();
  return static_cast<JoltC_EConstraintSubType>(static_cast<int>(result));
}

unsigned long JoltC_PointConstraint_GetConstraintPriority(
  JoltC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  return selfCpp->GetConstraintPriority();
}

void JoltC_PointConstraint_SetConstraintPriority(
  JoltC_PointConstraint_t * self,
  unsigned long inPriority
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  selfCpp->SetConstraintPriority(
    inPriority
  );
}

void JoltC_PointConstraint_SetNumVelocityStepsOverride(
  JoltC_PointConstraint_t * self,
  long inN
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  selfCpp->SetNumVelocityStepsOverride(
    inN
  );
}

long JoltC_PointConstraint_GetNumVelocityStepsOverride(
  JoltC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  return selfCpp->GetNumVelocityStepsOverride();
}

void JoltC_PointConstraint_SetNumPositionStepsOverride(
  JoltC_PointConstraint_t * self,
  long inN
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  selfCpp->SetNumPositionStepsOverride(
    inN
  );
}

long JoltC_PointConstraint_GetNumPositionStepsOverride(
  JoltC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  return selfCpp->GetNumPositionStepsOverride();
}

void JoltC_PointConstraint_SetEnabled(
  JoltC_PointConstraint_t * self,
  bool inEnabled
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  selfCpp->SetEnabled(
    inEnabled
  );
}

bool JoltC_PointConstraint_GetEnabled(
  JoltC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  return selfCpp->GetEnabled();
}

bool JoltC_PointConstraint_IsActive(
  JoltC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  return selfCpp->IsActive();
}

unsigned long long int JoltC_PointConstraint_GetUserData(
  JoltC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  return selfCpp->GetUserData();
}

void JoltC_PointConstraint_SetUserData(
  JoltC_PointConstraint_t * self,
  unsigned long long int inUserData
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  selfCpp->SetUserData(
    inUserData
  );
}

void JoltC_PointConstraint_ResetWarmStart(
  JoltC_PointConstraint_t * self
) {
  PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
  selfCpp->ResetWarmStart();
}

//endregion


#ifdef __cplusplus
}
#endif
