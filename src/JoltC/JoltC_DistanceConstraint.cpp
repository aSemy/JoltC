#include "JoltC/JPC_DistanceConstraint.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JPC_DistanceConstraint_SetDistance(
  JPC_DistanceConstraint_t * self,
  float inMinDistance,
  float inMaxDistance
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  
  selfCpp->SetDistance(
  inMinDistance,
  inMaxDistance
  );
};

float JPC_DistanceConstraint_GetMinDistance(
  JPC_DistanceConstraint_t * self
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  float result = selfCpp->GetMinDistance();
  return result;
};

float JPC_DistanceConstraint_GetMaxDistance(
  JPC_DistanceConstraint_t * self
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  float result = selfCpp->GetMaxDistance();
  return result;
};

JPC_SpringSettings_t * JPC_DistanceConstraint_GetLimitsSpringSettings(
  JPC_DistanceConstraint_t * self
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  SpringSettings& resultRef = selfCpp->GetLimitsSpringSettings();
  SpringSettings * result = &resultRef;
  return reinterpret_cast<JPC_SpringSettings_t *>(result);
};

void JPC_DistanceConstraint_SetLimitsSpringSettings(
  JPC_DistanceConstraint_t * self,
  const JPC_SpringSettings_t * inSettings
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  
  selfCpp->SetLimitsSpringSettings(
  *reinterpret_cast<SpringSettings *>(inSettings->obj)
  );
};

float JPC_DistanceConstraint_GetTotalLambdaPosition(
  JPC_DistanceConstraint_t * self
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  float result = selfCpp->GetTotalLambdaPosition();
  return result;
};

JPC_Body_t * JPC_DistanceConstraint_GetBody1(
  JPC_DistanceConstraint_t * self
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  Body * result = selfCpp->GetBody1();
  return reinterpret_cast<JPC_Body_t *>(result);
};

JPC_Body_t * JPC_DistanceConstraint_GetBody2(
  JPC_DistanceConstraint_t * self
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  Body * result = selfCpp->GetBody2();
  return reinterpret_cast<JPC_Body_t *>(result);
};

JPC_Mat44_t * JPC_DistanceConstraint_GetConstraintToBody1Matrix(
  JPC_DistanceConstraint_t * self
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  Mat44 resultValue = selfCpp->GetConstraintToBody1Matrix();
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

JPC_Mat44_t * JPC_DistanceConstraint_GetConstraintToBody2Matrix(
  JPC_DistanceConstraint_t * self
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  Mat44 resultValue = selfCpp->GetConstraintToBody2Matrix();
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

unsigned long JPC_DistanceConstraint_GetRefCount(
  JPC_DistanceConstraint_t * self
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_DistanceConstraint_AddRef(
  JPC_DistanceConstraint_t * self
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_DistanceConstraint_Release(
  JPC_DistanceConstraint_t * self
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  
  selfCpp->Release();
};

JPC_EConstraintType JPC_DistanceConstraint_GetType(
  JPC_DistanceConstraint_t * self
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  EConstraintType result = selfCpp->GetType();
  return static_cast<JPC_EConstraintType>(static_cast<int>(result));
};

JPC_EConstraintSubType JPC_DistanceConstraint_GetSubType(
  JPC_DistanceConstraint_t * self
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  EConstraintSubType result = selfCpp->GetSubType();
  return static_cast<JPC_EConstraintSubType>(static_cast<int>(result));
};

unsigned long JPC_DistanceConstraint_GetConstraintPriority(
  JPC_DistanceConstraint_t * self
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  unsigned long result = selfCpp->GetConstraintPriority();
  return result;
};

void JPC_DistanceConstraint_SetConstraintPriority(
  JPC_DistanceConstraint_t * self,
  unsigned long inPriority
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  
  selfCpp->SetConstraintPriority(
  inPriority
  );
};

void JPC_DistanceConstraint_SetNumVelocityStepsOverride(
  JPC_DistanceConstraint_t * self,
  long inN
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  
  selfCpp->SetNumVelocityStepsOverride(
  inN
  );
};

long JPC_DistanceConstraint_GetNumVelocityStepsOverride(
  JPC_DistanceConstraint_t * self
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  long result = selfCpp->GetNumVelocityStepsOverride();
  return result;
};

void JPC_DistanceConstraint_SetNumPositionStepsOverride(
  JPC_DistanceConstraint_t * self,
  long inN
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  
  selfCpp->SetNumPositionStepsOverride(
  inN
  );
};

long JPC_DistanceConstraint_GetNumPositionStepsOverride(
  JPC_DistanceConstraint_t * self
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  long result = selfCpp->GetNumPositionStepsOverride();
  return result;
};

void JPC_DistanceConstraint_SetEnabled(
  JPC_DistanceConstraint_t * self,
  bool inEnabled
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  
  selfCpp->SetEnabled(
  inEnabled
  );
};

bool JPC_DistanceConstraint_GetEnabled(
  JPC_DistanceConstraint_t * self
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  bool result = selfCpp->GetEnabled();
  return result;
};

bool JPC_DistanceConstraint_IsActive(
  JPC_DistanceConstraint_t * self
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  bool result = selfCpp->IsActive();
  return result;
};

unsigned long long int JPC_DistanceConstraint_GetUserData(
  JPC_DistanceConstraint_t * self
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JPC_DistanceConstraint_SetUserData(
  JPC_DistanceConstraint_t * self,
  unsigned long long int inUserData
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  
  selfCpp->SetUserData(
  inUserData
  );
};

void JPC_DistanceConstraint_ResetWarmStart(
  JPC_DistanceConstraint_t * self
) {
  DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
  
  selfCpp->ResetWarmStart();
};

//endregion functions

#ifdef __cplusplus
}
#endif

