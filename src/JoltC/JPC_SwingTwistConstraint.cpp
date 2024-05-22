#include "JoltC/JPC_SwingTwistConstraint.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

JPC_Vec3_t * JPC_SwingTwistConstraint_GetLocalSpacePosition1(
  JPC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  Vec3 resultValue = selfCpp->GetLocalSpacePosition1();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Vec3_t * JPC_SwingTwistConstraint_GetLocalSpacePosition2(
  JPC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  Vec3 resultValue = selfCpp->GetLocalSpacePosition2();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Quat_t * JPC_SwingTwistConstraint_GetConstraintToBody1(
  JPC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  Quat resultValue = selfCpp->GetConstraintToBody1();
  Quat* result = new Quat(resultValue);
  return reinterpret_cast<JPC_Quat_t *>(result);
};

JPC_Quat_t * JPC_SwingTwistConstraint_GetConstraintToBody2(
  JPC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  Quat resultValue = selfCpp->GetConstraintToBody2();
  Quat* result = new Quat(resultValue);
  return reinterpret_cast<JPC_Quat_t *>(result);
};

float JPC_SwingTwistConstraint_GetNormalHalfConeAngle(
  JPC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  float result = selfCpp->GetNormalHalfConeAngle();
  return result;
};

void JPC_SwingTwistConstraint_SetNormalHalfConeAngle(
  JPC_SwingTwistConstraint_t * self,
  float inAngle
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  
  selfCpp->SetNormalHalfConeAngle(
  inAngle
  );
};

float JPC_SwingTwistConstraint_GetPlaneHalfConeAngle(
  JPC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  float result = selfCpp->GetPlaneHalfConeAngle();
  return result;
};

void JPC_SwingTwistConstraint_SetPlaneHalfConeAngle(
  JPC_SwingTwistConstraint_t * self,
  float inAngle
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  
  selfCpp->SetPlaneHalfConeAngle(
  inAngle
  );
};

float JPC_SwingTwistConstraint_GetTwistMinAngle(
  JPC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  float result = selfCpp->GetTwistMinAngle();
  return result;
};

void JPC_SwingTwistConstraint_SetTwistMinAngle(
  JPC_SwingTwistConstraint_t * self,
  float inAngle
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  
  selfCpp->SetTwistMinAngle(
  inAngle
  );
};

float JPC_SwingTwistConstraint_GetTwistMaxAngle(
  JPC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  float result = selfCpp->GetTwistMaxAngle();
  return result;
};

void JPC_SwingTwistConstraint_SetTwistMaxAngle(
  JPC_SwingTwistConstraint_t * self,
  float inAngle
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  
  selfCpp->SetTwistMaxAngle(
  inAngle
  );
};

JPC_MotorSettings_t * JPC_SwingTwistConstraint_GetSwingMotorSettings(
  JPC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  MotorSettings& resultRef = selfCpp->GetSwingMotorSettings();
  MotorSettings * result = &resultRef;
  return reinterpret_cast<JPC_MotorSettings_t *>(result);
};

JPC_MotorSettings_t * JPC_SwingTwistConstraint_GetTwistMotorSettings(
  JPC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  MotorSettings& resultRef = selfCpp->GetTwistMotorSettings();
  MotorSettings * result = &resultRef;
  return reinterpret_cast<JPC_MotorSettings_t *>(result);
};

void JPC_SwingTwistConstraint_SetMaxFrictionTorque(
  JPC_SwingTwistConstraint_t * self,
  float inFrictionTorque
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  
  selfCpp->SetMaxFrictionTorque(
  inFrictionTorque
  );
};

float JPC_SwingTwistConstraint_GetMaxFrictionTorque(
  JPC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  float result = selfCpp->GetMaxFrictionTorque();
  return result;
};

void JPC_SwingTwistConstraint_SetSwingMotorState(
  JPC_SwingTwistConstraint_t * self,
  JPC_EMotorState inState
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  
  selfCpp->SetSwingMotorState(
  static_cast<EMotorState>(static_cast<int>(inState))
  );
};

JPC_EMotorState JPC_SwingTwistConstraint_GetSwingMotorState(
  JPC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  EMotorState result = selfCpp->GetSwingMotorState();
  return static_cast<JPC_EMotorState>(static_cast<int>(result));
};

void JPC_SwingTwistConstraint_SetTwistMotorState(
  JPC_SwingTwistConstraint_t * self,
  JPC_EMotorState inState
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  
  selfCpp->SetTwistMotorState(
  static_cast<EMotorState>(static_cast<int>(inState))
  );
};

JPC_EMotorState JPC_SwingTwistConstraint_GetTwistMotorState(
  JPC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  EMotorState result = selfCpp->GetTwistMotorState();
  return static_cast<JPC_EMotorState>(static_cast<int>(result));
};

void JPC_SwingTwistConstraint_SetTargetAngularVelocityCS(
  JPC_SwingTwistConstraint_t * self,
  const JPC_Vec3_t * inAngularVelocity
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  
  selfCpp->SetTargetAngularVelocityCS(
  *reinterpret_cast<Vec3 *>(inAngularVelocity->obj)
  );
};

JPC_Vec3_t * JPC_SwingTwistConstraint_GetTargetAngularVelocityCS(
  JPC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  Vec3 resultValue = selfCpp->GetTargetAngularVelocityCS();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_SwingTwistConstraint_SetTargetOrientationCS(
  JPC_SwingTwistConstraint_t * self,
  const JPC_Quat_t * inOrientation
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  
  selfCpp->SetTargetOrientationCS(
  *reinterpret_cast<Quat *>(inOrientation->obj)
  );
};

JPC_Quat_t * JPC_SwingTwistConstraint_GetTargetOrientationCS(
  JPC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  Quat resultValue = selfCpp->GetTargetOrientationCS();
  Quat* result = new Quat(resultValue);
  return reinterpret_cast<JPC_Quat_t *>(result);
};

void JPC_SwingTwistConstraint_SetTargetOrientationBS(
  JPC_SwingTwistConstraint_t * self,
  const JPC_Quat_t * inOrientation
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  
  selfCpp->SetTargetOrientationBS(
  *reinterpret_cast<Quat *>(inOrientation->obj)
  );
};

JPC_Quat_t * JPC_SwingTwistConstraint_GetRotationInConstraintSpace(
  JPC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  Quat resultValue = selfCpp->GetRotationInConstraintSpace();
  Quat* result = new Quat(resultValue);
  return reinterpret_cast<JPC_Quat_t *>(result);
};

JPC_Vec3_t * JPC_SwingTwistConstraint_GetTotalLambdaPosition(
  JPC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  Vec3 resultValue = selfCpp->GetTotalLambdaPosition();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

float JPC_SwingTwistConstraint_GetTotalLambdaTwist(
  JPC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  float result = selfCpp->GetTotalLambdaTwist();
  return result;
};

float JPC_SwingTwistConstraint_GetTotalLambdaSwingY(
  JPC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  float result = selfCpp->GetTotalLambdaSwingY();
  return result;
};

float JPC_SwingTwistConstraint_GetTotalLambdaSwingZ(
  JPC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  float result = selfCpp->GetTotalLambdaSwingZ();
  return result;
};

JPC_Vec3_t * JPC_SwingTwistConstraint_GetTotalLambdaMotor(
  JPC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  Vec3 resultValue = selfCpp->GetTotalLambdaMotor();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Body_t * JPC_SwingTwistConstraint_GetBody1(
  JPC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  Body * result = selfCpp->GetBody1();
  return reinterpret_cast<JPC_Body_t *>(result);
};

JPC_Body_t * JPC_SwingTwistConstraint_GetBody2(
  JPC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  Body * result = selfCpp->GetBody2();
  return reinterpret_cast<JPC_Body_t *>(result);
};

JPC_Mat44_t * JPC_SwingTwistConstraint_GetConstraintToBody1Matrix(
  JPC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  Mat44 resultValue = selfCpp->GetConstraintToBody1Matrix();
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

JPC_Mat44_t * JPC_SwingTwistConstraint_GetConstraintToBody2Matrix(
  JPC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  Mat44 resultValue = selfCpp->GetConstraintToBody2Matrix();
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

unsigned long JPC_SwingTwistConstraint_GetRefCount(
  JPC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_SwingTwistConstraint_AddRef(
  JPC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_SwingTwistConstraint_Release(
  JPC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  
  selfCpp->Release();
};

JPC_EConstraintType JPC_SwingTwistConstraint_GetType(
  JPC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  EConstraintType result = selfCpp->GetType();
  return static_cast<JPC_EConstraintType>(static_cast<int>(result));
};

JPC_EConstraintSubType JPC_SwingTwistConstraint_GetSubType(
  JPC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  EConstraintSubType result = selfCpp->GetSubType();
  return static_cast<JPC_EConstraintSubType>(static_cast<int>(result));
};

unsigned long JPC_SwingTwistConstraint_GetConstraintPriority(
  JPC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  unsigned long result = selfCpp->GetConstraintPriority();
  return result;
};

void JPC_SwingTwistConstraint_SetConstraintPriority(
  JPC_SwingTwistConstraint_t * self,
  unsigned long inPriority
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  
  selfCpp->SetConstraintPriority(
  inPriority
  );
};

void JPC_SwingTwistConstraint_SetNumVelocityStepsOverride(
  JPC_SwingTwistConstraint_t * self,
  long inN
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  
  selfCpp->SetNumVelocityStepsOverride(
  inN
  );
};

long JPC_SwingTwistConstraint_GetNumVelocityStepsOverride(
  JPC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  long result = selfCpp->GetNumVelocityStepsOverride();
  return result;
};

void JPC_SwingTwistConstraint_SetNumPositionStepsOverride(
  JPC_SwingTwistConstraint_t * self,
  long inN
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  
  selfCpp->SetNumPositionStepsOverride(
  inN
  );
};

long JPC_SwingTwistConstraint_GetNumPositionStepsOverride(
  JPC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  long result = selfCpp->GetNumPositionStepsOverride();
  return result;
};

void JPC_SwingTwistConstraint_SetEnabled(
  JPC_SwingTwistConstraint_t * self,
  bool inEnabled
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  
  selfCpp->SetEnabled(
  inEnabled
  );
};

bool JPC_SwingTwistConstraint_GetEnabled(
  JPC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  bool result = selfCpp->GetEnabled();
  return result;
};

bool JPC_SwingTwistConstraint_IsActive(
  JPC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  bool result = selfCpp->IsActive();
  return result;
};

unsigned long long int JPC_SwingTwistConstraint_GetUserData(
  JPC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JPC_SwingTwistConstraint_SetUserData(
  JPC_SwingTwistConstraint_t * self,
  unsigned long long int inUserData
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  
  selfCpp->SetUserData(
  inUserData
  );
};

void JPC_SwingTwistConstraint_ResetWarmStart(
  JPC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  
  selfCpp->ResetWarmStart();
};

//endregion functions

#ifdef __cplusplus
}
#endif

