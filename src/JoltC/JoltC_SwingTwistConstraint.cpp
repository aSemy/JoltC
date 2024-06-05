#include "JoltC/JoltC_SwingTwistConstraint.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

JoltC_Vec3_t * JoltC_SwingTwistConstraint_GetLocalSpacePosition1(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  const Vec3& resultValue = selfCpp->GetLocalSpacePosition1();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Vec3_t * JoltC_SwingTwistConstraint_GetLocalSpacePosition2(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  const Vec3& resultValue = selfCpp->GetLocalSpacePosition2();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Quat_t * JoltC_SwingTwistConstraint_GetConstraintToBody1(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  const Quat& resultValue = selfCpp->GetConstraintToBody1();
  JoltC_Quat_t* result = new JoltC_Quat_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Quat_t * JoltC_SwingTwistConstraint_GetConstraintToBody2(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  const Quat& resultValue = selfCpp->GetConstraintToBody2();
  JoltC_Quat_t* result = new JoltC_Quat_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

float JoltC_SwingTwistConstraint_GetNormalHalfConeAngle(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  float result = selfCpp->GetNormalHalfConeAngle();
  return result;
};

void JoltC_SwingTwistConstraint_SetNormalHalfConeAngle(
  JoltC_SwingTwistConstraint_t * self,
  float inAngle
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  selfCpp->SetNormalHalfConeAngle(
    inAngle
  );
};

float JoltC_SwingTwistConstraint_GetPlaneHalfConeAngle(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  float result = selfCpp->GetPlaneHalfConeAngle();
  return result;
};

void JoltC_SwingTwistConstraint_SetPlaneHalfConeAngle(
  JoltC_SwingTwistConstraint_t * self,
  float inAngle
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  selfCpp->SetPlaneHalfConeAngle(
    inAngle
  );
};

float JoltC_SwingTwistConstraint_GetTwistMinAngle(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  float result = selfCpp->GetTwistMinAngle();
  return result;
};

void JoltC_SwingTwistConstraint_SetTwistMinAngle(
  JoltC_SwingTwistConstraint_t * self,
  float inAngle
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  selfCpp->SetTwistMinAngle(
    inAngle
  );
};

float JoltC_SwingTwistConstraint_GetTwistMaxAngle(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  float result = selfCpp->GetTwistMaxAngle();
  return result;
};

void JoltC_SwingTwistConstraint_SetTwistMaxAngle(
  JoltC_SwingTwistConstraint_t * self,
  float inAngle
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  selfCpp->SetTwistMaxAngle(
    inAngle
  );
};

JoltC_MotorSettings_t * JoltC_SwingTwistConstraint_GetSwingMotorSettings(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  MotorSettings* resultRef = &selfCpp->GetSwingMotorSettings();
  JoltC_MotorSettings_t* result = new JoltC_MotorSettings_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
};

JoltC_MotorSettings_t * JoltC_SwingTwistConstraint_GetTwistMotorSettings(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  MotorSettings* resultRef = &selfCpp->GetTwistMotorSettings();
  JoltC_MotorSettings_t* result = new JoltC_MotorSettings_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
};

void JoltC_SwingTwistConstraint_SetMaxFrictionTorque(
  JoltC_SwingTwistConstraint_t * self,
  float inFrictionTorque
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  selfCpp->SetMaxFrictionTorque(
    inFrictionTorque
  );
};

float JoltC_SwingTwistConstraint_GetMaxFrictionTorque(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  float result = selfCpp->GetMaxFrictionTorque();
  return result;
};

void JoltC_SwingTwistConstraint_SetSwingMotorState(
  JoltC_SwingTwistConstraint_t * self,
  JoltC_EMotorState inState
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  selfCpp->SetSwingMotorState(
    static_cast<EMotorState>(static_cast<int>(inState))
  );
};

JoltC_EMotorState JoltC_SwingTwistConstraint_GetSwingMotorState(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  EMotorState result = selfCpp->GetSwingMotorState();
  return static_cast<JoltC_EMotorState>(static_cast<int>(result));
};

void JoltC_SwingTwistConstraint_SetTwistMotorState(
  JoltC_SwingTwistConstraint_t * self,
  JoltC_EMotorState inState
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  selfCpp->SetTwistMotorState(
    static_cast<EMotorState>(static_cast<int>(inState))
  );
};

JoltC_EMotorState JoltC_SwingTwistConstraint_GetTwistMotorState(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  EMotorState result = selfCpp->GetTwistMotorState();
  return static_cast<JoltC_EMotorState>(static_cast<int>(result));
};

void JoltC_SwingTwistConstraint_SetTargetAngularVelocityCS(
  JoltC_SwingTwistConstraint_t * self,
  JoltC_Vec3_t * inAngularVelocity
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  selfCpp->SetTargetAngularVelocityCS(
    *reinterpret_cast<Vec3 *>(inAngularVelocity->obj)
  );
};

JoltC_Vec3_t * JoltC_SwingTwistConstraint_GetTargetAngularVelocityCS(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  const Vec3& resultValue = selfCpp->GetTargetAngularVelocityCS();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_SwingTwistConstraint_SetTargetOrientationCS(
  JoltC_SwingTwistConstraint_t * self,
  JoltC_Quat_t * inOrientation
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  selfCpp->SetTargetOrientationCS(
    *reinterpret_cast<Quat *>(inOrientation->obj)
  );
};

JoltC_Quat_t * JoltC_SwingTwistConstraint_GetTargetOrientationCS(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  const Quat& resultValue = selfCpp->GetTargetOrientationCS();
  JoltC_Quat_t* result = new JoltC_Quat_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_SwingTwistConstraint_SetTargetOrientationBS(
  JoltC_SwingTwistConstraint_t * self,
  JoltC_Quat_t * inOrientation
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  selfCpp->SetTargetOrientationBS(
    *reinterpret_cast<Quat *>(inOrientation->obj)
  );
};

JoltC_Quat_t * JoltC_SwingTwistConstraint_GetRotationInConstraintSpace(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  const Quat& resultValue = selfCpp->GetRotationInConstraintSpace();
  JoltC_Quat_t* result = new JoltC_Quat_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Vec3_t * JoltC_SwingTwistConstraint_GetTotalLambdaPosition(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  const Vec3& resultValue = selfCpp->GetTotalLambdaPosition();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

float JoltC_SwingTwistConstraint_GetTotalLambdaTwist(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  float result = selfCpp->GetTotalLambdaTwist();
  return result;
};

float JoltC_SwingTwistConstraint_GetTotalLambdaSwingY(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  float result = selfCpp->GetTotalLambdaSwingY();
  return result;
};

float JoltC_SwingTwistConstraint_GetTotalLambdaSwingZ(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  float result = selfCpp->GetTotalLambdaSwingZ();
  return result;
};

JoltC_Vec3_t * JoltC_SwingTwistConstraint_GetTotalLambdaMotor(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  const Vec3& resultValue = selfCpp->GetTotalLambdaMotor();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Body_t * JoltC_SwingTwistConstraint_GetBody1(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  const Body * resultValue = selfCpp->GetBody1();
  JoltC_Body_t* result = new JoltC_Body_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Body_t * JoltC_SwingTwistConstraint_GetBody2(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  const Body * resultValue = selfCpp->GetBody2();
  JoltC_Body_t* result = new JoltC_Body_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Mat44_t * JoltC_SwingTwistConstraint_GetConstraintToBody1Matrix(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  const Mat44& resultValue = selfCpp->GetConstraintToBody1Matrix();
  JoltC_Mat44_t* result = new JoltC_Mat44_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Mat44_t * JoltC_SwingTwistConstraint_GetConstraintToBody2Matrix(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  const Mat44& resultValue = selfCpp->GetConstraintToBody2Matrix();
  JoltC_Mat44_t* result = new JoltC_Mat44_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

unsigned long JoltC_SwingTwistConstraint_GetRefCount(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_SwingTwistConstraint_AddRef(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  selfCpp->AddRef();
};

void JoltC_SwingTwistConstraint_Release(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  selfCpp->Release();
};

JoltC_EConstraintType JoltC_SwingTwistConstraint_GetType(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  EConstraintType result = selfCpp->GetType();
  return static_cast<JoltC_EConstraintType>(static_cast<int>(result));
};

JoltC_EConstraintSubType JoltC_SwingTwistConstraint_GetSubType(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  EConstraintSubType result = selfCpp->GetSubType();
  return static_cast<JoltC_EConstraintSubType>(static_cast<int>(result));
};

unsigned long JoltC_SwingTwistConstraint_GetConstraintPriority(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  unsigned long result = selfCpp->GetConstraintPriority();
  return result;
};

void JoltC_SwingTwistConstraint_SetConstraintPriority(
  JoltC_SwingTwistConstraint_t * self,
  unsigned long inPriority
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  selfCpp->SetConstraintPriority(
    inPriority
  );
};

void JoltC_SwingTwistConstraint_SetNumVelocityStepsOverride(
  JoltC_SwingTwistConstraint_t * self,
  long inN
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  selfCpp->SetNumVelocityStepsOverride(
    inN
  );
};

long JoltC_SwingTwistConstraint_GetNumVelocityStepsOverride(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  long result = selfCpp->GetNumVelocityStepsOverride();
  return result;
};

void JoltC_SwingTwistConstraint_SetNumPositionStepsOverride(
  JoltC_SwingTwistConstraint_t * self,
  long inN
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  selfCpp->SetNumPositionStepsOverride(
    inN
  );
};

long JoltC_SwingTwistConstraint_GetNumPositionStepsOverride(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  long result = selfCpp->GetNumPositionStepsOverride();
  return result;
};

void JoltC_SwingTwistConstraint_SetEnabled(
  JoltC_SwingTwistConstraint_t * self,
  bool inEnabled
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  selfCpp->SetEnabled(
    inEnabled
  );
};

bool JoltC_SwingTwistConstraint_GetEnabled(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  bool result = selfCpp->GetEnabled();
  return result;
};

bool JoltC_SwingTwistConstraint_IsActive(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  bool result = selfCpp->IsActive();
  return result;
};

unsigned long long int JoltC_SwingTwistConstraint_GetUserData(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JoltC_SwingTwistConstraint_SetUserData(
  JoltC_SwingTwistConstraint_t * self,
  unsigned long long int inUserData
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  selfCpp->SetUserData(
    inUserData
  );
};

void JoltC_SwingTwistConstraint_ResetWarmStart(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  selfCpp->ResetWarmStart();
};

//endregion

#ifdef __cplusplus
}
#endif

