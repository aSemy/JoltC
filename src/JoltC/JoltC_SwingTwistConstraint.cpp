#include "JoltC/JoltC_SwingTwistConstraint.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_SwingTwistConstraint_destroy(
  JoltC_SwingTwistConstraint_t * self
){
  if (self == NULL) return;
  delete static_cast<SwingTwistConstraint *>(self->obj);
  free(self);
}

//endregion
//region functions

JoltC_Vec3_t * JoltC_SwingTwistConstraint_GetLocalSpacePosition1(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetLocalSpacePosition1();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_SwingTwistConstraint_GetLocalSpacePosition2(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetLocalSpacePosition2();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Quat_t * JoltC_SwingTwistConstraint_GetConstraintToBody1(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  Quat * resultPtr = new Quat();
  *resultPtr = selfCpp->GetConstraintToBody1();
  JoltC_Quat_t * result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Quat_t * JoltC_SwingTwistConstraint_GetConstraintToBody2(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  Quat * resultPtr = new Quat();
  *resultPtr = selfCpp->GetConstraintToBody2();
  JoltC_Quat_t * result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

float JoltC_SwingTwistConstraint_GetNormalHalfConeAngle(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  return selfCpp->GetNormalHalfConeAngle();
}

void JoltC_SwingTwistConstraint_SetNormalHalfConeAngle(
  JoltC_SwingTwistConstraint_t * self,
  float inAngle
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  selfCpp->SetNormalHalfConeAngle(
    inAngle
  );
}

float JoltC_SwingTwistConstraint_GetPlaneHalfConeAngle(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  return selfCpp->GetPlaneHalfConeAngle();
}

void JoltC_SwingTwistConstraint_SetPlaneHalfConeAngle(
  JoltC_SwingTwistConstraint_t * self,
  float inAngle
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  selfCpp->SetPlaneHalfConeAngle(
    inAngle
  );
}

float JoltC_SwingTwistConstraint_GetTwistMinAngle(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  return selfCpp->GetTwistMinAngle();
}

void JoltC_SwingTwistConstraint_SetTwistMinAngle(
  JoltC_SwingTwistConstraint_t * self,
  float inAngle
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  selfCpp->SetTwistMinAngle(
    inAngle
  );
}

float JoltC_SwingTwistConstraint_GetTwistMaxAngle(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  return selfCpp->GetTwistMaxAngle();
}

void JoltC_SwingTwistConstraint_SetTwistMaxAngle(
  JoltC_SwingTwistConstraint_t * self,
  float inAngle
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  selfCpp->SetTwistMaxAngle(
    inAngle
  );
}

JoltC_MotorSettings_t * JoltC_SwingTwistConstraint_GetSwingMotorSettings(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  MotorSettings* resultRef = &selfCpp->GetSwingMotorSettings();
  JoltC_MotorSettings_t* result = new JoltC_MotorSettings_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
}

JoltC_MotorSettings_t * JoltC_SwingTwistConstraint_GetTwistMotorSettings(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  MotorSettings* resultRef = &selfCpp->GetTwistMotorSettings();
  JoltC_MotorSettings_t* result = new JoltC_MotorSettings_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
}

void JoltC_SwingTwistConstraint_SetMaxFrictionTorque(
  JoltC_SwingTwistConstraint_t * self,
  float inFrictionTorque
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  selfCpp->SetMaxFrictionTorque(
    inFrictionTorque
  );
}

float JoltC_SwingTwistConstraint_GetMaxFrictionTorque(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  return selfCpp->GetMaxFrictionTorque();
}

void JoltC_SwingTwistConstraint_SetSwingMotorState(
  JoltC_SwingTwistConstraint_t * self,
  JoltC_EMotorState inState
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  EMotorState inStateCpp = static_cast<EMotorState>(static_cast<int>(inState));
  selfCpp->SetSwingMotorState(
    inStateCpp
  );
}

JoltC_EMotorState JoltC_SwingTwistConstraint_GetSwingMotorState(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  EMotorState result = selfCpp->GetSwingMotorState();
  return static_cast<JoltC_EMotorState>(static_cast<int>(result));
}

void JoltC_SwingTwistConstraint_SetTwistMotorState(
  JoltC_SwingTwistConstraint_t * self,
  JoltC_EMotorState inState
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  EMotorState inStateCpp = static_cast<EMotorState>(static_cast<int>(inState));
  selfCpp->SetTwistMotorState(
    inStateCpp
  );
}

JoltC_EMotorState JoltC_SwingTwistConstraint_GetTwistMotorState(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  EMotorState result = selfCpp->GetTwistMotorState();
  return static_cast<JoltC_EMotorState>(static_cast<int>(result));
}

void JoltC_SwingTwistConstraint_SetTargetAngularVelocityCS(
  JoltC_SwingTwistConstraint_t * self,
  JoltC_Vec3_t * inAngularVelocity
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  const Vec3 * inAngularVelocityCpp = static_cast<const Vec3 *>(inAngularVelocity->obj);
  selfCpp->SetTargetAngularVelocityCS(
    *inAngularVelocityCpp
  );
}

JoltC_Vec3_t * JoltC_SwingTwistConstraint_GetTargetAngularVelocityCS(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetTargetAngularVelocityCS();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_SwingTwistConstraint_SetTargetOrientationCS(
  JoltC_SwingTwistConstraint_t * self,
  JoltC_Quat_t * inOrientation
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  const Quat * inOrientationCpp = static_cast<const Quat *>(inOrientation->obj);
  selfCpp->SetTargetOrientationCS(
    *inOrientationCpp
  );
}

JoltC_Quat_t * JoltC_SwingTwistConstraint_GetTargetOrientationCS(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  Quat * resultPtr = new Quat();
  *resultPtr = selfCpp->GetTargetOrientationCS();
  JoltC_Quat_t * result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_SwingTwistConstraint_SetTargetOrientationBS(
  JoltC_SwingTwistConstraint_t * self,
  JoltC_Quat_t * inOrientation
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  const Quat * inOrientationCpp = static_cast<const Quat *>(inOrientation->obj);
  selfCpp->SetTargetOrientationBS(
    *inOrientationCpp
  );
}

JoltC_Quat_t * JoltC_SwingTwistConstraint_GetRotationInConstraintSpace(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  Quat * resultPtr = new Quat();
  *resultPtr = selfCpp->GetRotationInConstraintSpace();
  JoltC_Quat_t * result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_SwingTwistConstraint_GetTotalLambdaPosition(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetTotalLambdaPosition();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

float JoltC_SwingTwistConstraint_GetTotalLambdaTwist(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  return selfCpp->GetTotalLambdaTwist();
}

float JoltC_SwingTwistConstraint_GetTotalLambdaSwingY(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  return selfCpp->GetTotalLambdaSwingY();
}

float JoltC_SwingTwistConstraint_GetTotalLambdaSwingZ(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  return selfCpp->GetTotalLambdaSwingZ();
}

JoltC_Vec3_t * JoltC_SwingTwistConstraint_GetTotalLambdaMotor(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetTotalLambdaMotor();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Body_t * JoltC_SwingTwistConstraint_GetBody1(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  const Body * resultPtr = selfCpp->GetBody1();
  JoltC_Body_t * result = new JoltC_Body_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_Body_t * JoltC_SwingTwistConstraint_GetBody2(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  const Body * resultPtr = selfCpp->GetBody2();
  JoltC_Body_t * result = new JoltC_Body_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_Mat44_t * JoltC_SwingTwistConstraint_GetConstraintToBody1Matrix(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  Mat44 * resultPtr = new Mat44();
  *resultPtr = selfCpp->GetConstraintToBody1Matrix();
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Mat44_t * JoltC_SwingTwistConstraint_GetConstraintToBody2Matrix(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  Mat44 * resultPtr = new Mat44();
  *resultPtr = selfCpp->GetConstraintToBody2Matrix();
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

unsigned long JoltC_SwingTwistConstraint_GetRefCount(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_SwingTwistConstraint_AddRef(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_SwingTwistConstraint_Release(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  selfCpp->Release();
}

JoltC_EConstraintType JoltC_SwingTwistConstraint_GetType(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  EConstraintType result = selfCpp->GetType();
  return static_cast<JoltC_EConstraintType>(static_cast<int>(result));
}

JoltC_EConstraintSubType JoltC_SwingTwistConstraint_GetSubType(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  EConstraintSubType result = selfCpp->GetSubType();
  return static_cast<JoltC_EConstraintSubType>(static_cast<int>(result));
}

unsigned long JoltC_SwingTwistConstraint_GetConstraintPriority(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  return selfCpp->GetConstraintPriority();
}

void JoltC_SwingTwistConstraint_SetConstraintPriority(
  JoltC_SwingTwistConstraint_t * self,
  unsigned long inPriority
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  selfCpp->SetConstraintPriority(
    inPriority
  );
}

void JoltC_SwingTwistConstraint_SetNumVelocityStepsOverride(
  JoltC_SwingTwistConstraint_t * self,
  long inN
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  selfCpp->SetNumVelocityStepsOverride(
    inN
  );
}

long JoltC_SwingTwistConstraint_GetNumVelocityStepsOverride(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  return selfCpp->GetNumVelocityStepsOverride();
}

void JoltC_SwingTwistConstraint_SetNumPositionStepsOverride(
  JoltC_SwingTwistConstraint_t * self,
  long inN
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  selfCpp->SetNumPositionStepsOverride(
    inN
  );
}

long JoltC_SwingTwistConstraint_GetNumPositionStepsOverride(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  return selfCpp->GetNumPositionStepsOverride();
}

void JoltC_SwingTwistConstraint_SetEnabled(
  JoltC_SwingTwistConstraint_t * self,
  bool inEnabled
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  selfCpp->SetEnabled(
    inEnabled
  );
}

bool JoltC_SwingTwistConstraint_GetEnabled(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  return selfCpp->GetEnabled();
}

bool JoltC_SwingTwistConstraint_IsActive(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  return selfCpp->IsActive();
}

unsigned long long int JoltC_SwingTwistConstraint_GetUserData(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  return selfCpp->GetUserData();
}

void JoltC_SwingTwistConstraint_SetUserData(
  JoltC_SwingTwistConstraint_t * self,
  unsigned long long int inUserData
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  selfCpp->SetUserData(
    inUserData
  );
}

void JoltC_SwingTwistConstraint_ResetWarmStart(
  JoltC_SwingTwistConstraint_t * self
) {
  SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
  selfCpp->ResetWarmStart();
}

//endregion


#ifdef __cplusplus
}
#endif
