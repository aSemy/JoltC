#include "JoltC/JoltC_DistanceConstraint.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_DistanceConstraint_SetDistance(
  JoltC_DistanceConstraint_t * self,
  float inMinDistance,
  float inMaxDistance
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  selfCpp->SetDistance(
    inMinDistance,
    inMaxDistance
  );
};

float JoltC_DistanceConstraint_GetMinDistance(
  JoltC_DistanceConstraint_t * self
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  float result = selfCpp->GetMinDistance();
  return result;
};

float JoltC_DistanceConstraint_GetMaxDistance(
  JoltC_DistanceConstraint_t * self
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  float result = selfCpp->GetMaxDistance();
  return result;
};

JoltC_SpringSettings_t * JoltC_DistanceConstraint_GetLimitsSpringSettings(
  JoltC_DistanceConstraint_t * self
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  SpringSettings* resultRef = &selfCpp->GetLimitsSpringSettings();
  JoltC_SpringSettings_t* result = new JoltC_SpringSettings_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
};

void JoltC_DistanceConstraint_SetLimitsSpringSettings(
  JoltC_DistanceConstraint_t * self,
  JoltC_SpringSettings_t * inSettings
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  selfCpp->SetLimitsSpringSettings(
    *reinterpret_cast<SpringSettings *>(inSettings->obj)
  );
};

float JoltC_DistanceConstraint_GetTotalLambdaPosition(
  JoltC_DistanceConstraint_t * self
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  float result = selfCpp->GetTotalLambdaPosition();
  return result;
};

JoltC_Body_t * JoltC_DistanceConstraint_GetBody1(
  JoltC_DistanceConstraint_t * self
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  const Body * resultValue = selfCpp->GetBody1();
  JoltC_Body_t* result = new JoltC_Body_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Body_t * JoltC_DistanceConstraint_GetBody2(
  JoltC_DistanceConstraint_t * self
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  const Body * resultValue = selfCpp->GetBody2();
  JoltC_Body_t* result = new JoltC_Body_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Mat44_t * JoltC_DistanceConstraint_GetConstraintToBody1Matrix(
  JoltC_DistanceConstraint_t * self
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  const Mat44& resultValue = selfCpp->GetConstraintToBody1Matrix();
  JoltC_Mat44_t* result = new JoltC_Mat44_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Mat44_t * JoltC_DistanceConstraint_GetConstraintToBody2Matrix(
  JoltC_DistanceConstraint_t * self
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  const Mat44& resultValue = selfCpp->GetConstraintToBody2Matrix();
  JoltC_Mat44_t* result = new JoltC_Mat44_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

unsigned long JoltC_DistanceConstraint_GetRefCount(
  JoltC_DistanceConstraint_t * self
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_DistanceConstraint_AddRef(
  JoltC_DistanceConstraint_t * self
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  selfCpp->AddRef();
};

void JoltC_DistanceConstraint_Release(
  JoltC_DistanceConstraint_t * self
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  selfCpp->Release();
};

JoltC_EConstraintType JoltC_DistanceConstraint_GetType(
  JoltC_DistanceConstraint_t * self
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  EConstraintType result = selfCpp->GetType();
  return static_cast<JoltC_EConstraintType>(static_cast<int>(result));
};

JoltC_EConstraintSubType JoltC_DistanceConstraint_GetSubType(
  JoltC_DistanceConstraint_t * self
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  EConstraintSubType result = selfCpp->GetSubType();
  return static_cast<JoltC_EConstraintSubType>(static_cast<int>(result));
};

unsigned long JoltC_DistanceConstraint_GetConstraintPriority(
  JoltC_DistanceConstraint_t * self
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  unsigned long result = selfCpp->GetConstraintPriority();
  return result;
};

void JoltC_DistanceConstraint_SetConstraintPriority(
  JoltC_DistanceConstraint_t * self,
  unsigned long inPriority
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  selfCpp->SetConstraintPriority(
    inPriority
  );
};

void JoltC_DistanceConstraint_SetNumVelocityStepsOverride(
  JoltC_DistanceConstraint_t * self,
  long inN
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  selfCpp->SetNumVelocityStepsOverride(
    inN
  );
};

long JoltC_DistanceConstraint_GetNumVelocityStepsOverride(
  JoltC_DistanceConstraint_t * self
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  long result = selfCpp->GetNumVelocityStepsOverride();
  return result;
};

void JoltC_DistanceConstraint_SetNumPositionStepsOverride(
  JoltC_DistanceConstraint_t * self,
  long inN
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  selfCpp->SetNumPositionStepsOverride(
    inN
  );
};

long JoltC_DistanceConstraint_GetNumPositionStepsOverride(
  JoltC_DistanceConstraint_t * self
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  long result = selfCpp->GetNumPositionStepsOverride();
  return result;
};

void JoltC_DistanceConstraint_SetEnabled(
  JoltC_DistanceConstraint_t * self,
  bool inEnabled
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  selfCpp->SetEnabled(
    inEnabled
  );
};

bool JoltC_DistanceConstraint_GetEnabled(
  JoltC_DistanceConstraint_t * self
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  bool result = selfCpp->GetEnabled();
  return result;
};

bool JoltC_DistanceConstraint_IsActive(
  JoltC_DistanceConstraint_t * self
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  bool result = selfCpp->IsActive();
  return result;
};

unsigned long long int JoltC_DistanceConstraint_GetUserData(
  JoltC_DistanceConstraint_t * self
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JoltC_DistanceConstraint_SetUserData(
  JoltC_DistanceConstraint_t * self,
  unsigned long long int inUserData
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  selfCpp->SetUserData(
    inUserData
  );
};

void JoltC_DistanceConstraint_ResetWarmStart(
  JoltC_DistanceConstraint_t * self
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  selfCpp->ResetWarmStart();
};

//endregion

#ifdef __cplusplus
}
#endif

