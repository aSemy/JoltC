#include "JoltC/JPC_SwingTwistConstraintSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_SwingTwistConstraintSettings_t * JPC_SwingTwistConstraintSettings_new() {
  JPC_SwingTwistConstraintSettings_t * cInstance = new JPC_SwingTwistConstraintSettings_t();
  SwingTwistConstraintSettings * cppInstance = new SwingTwistConstraintSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

JPC_Constraint_t * JPC_SwingTwistConstraintSettings_Create(
  JPC_SwingTwistConstraintSettings_t * self,
  JPC_Body_t * inBody1,
  JPC_Body_t * inBody2
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  Constraint * result = selfCpp->Create(
  *reinterpret_cast<Body *>(inBody1->obj),
  *reinterpret_cast<Body *>(inBody2->obj)
  );
  return reinterpret_cast<JPC_Constraint_t *>(result);
};

unsigned long JPC_SwingTwistConstraintSettings_GetRefCount(
  JPC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_SwingTwistConstraintSettings_AddRef(
  JPC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_SwingTwistConstraintSettings_Release(
  JPC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  
  selfCpp->Release();
};

//endregion functions

//region properties

JPC_EConstraintSpace JPC_SwingTwistConstraintSettings_mSpace_Get(
  JPC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  EConstraintSpace result = selfCpp->mSpace;
  return static_cast<JPC_EConstraintSpace>(static_cast<int>(result));
};

void JPC_SwingTwistConstraintSettings_mSpace_Set(
  JPC_SwingTwistConstraintSettings_t * self,
  JPC_EConstraintSpace mSpace
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mSpace = static_cast<EConstraintSpace>(static_cast<int>(mSpace));
};

JPC_RVec3_t * JPC_SwingTwistConstraintSettings_mPosition1_Get(
  JPC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  RVec3 resultValue = selfCpp->mPosition1;
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

void JPC_SwingTwistConstraintSettings_mPosition1_Set(
  JPC_SwingTwistConstraintSettings_t * self,
  JPC_RVec3_t * mPosition1
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mPosition1 = *reinterpret_cast<RVec3 *>(mPosition1->obj);
};

JPC_Vec3_t * JPC_SwingTwistConstraintSettings_mTwistAxis1_Get(
  JPC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mTwistAxis1;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_SwingTwistConstraintSettings_mTwistAxis1_Set(
  JPC_SwingTwistConstraintSettings_t * self,
  JPC_Vec3_t * mTwistAxis1
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mTwistAxis1 = *reinterpret_cast<Vec3 *>(mTwistAxis1->obj);
};

JPC_Vec3_t * JPC_SwingTwistConstraintSettings_mPlaneAxis1_Get(
  JPC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mPlaneAxis1;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_SwingTwistConstraintSettings_mPlaneAxis1_Set(
  JPC_SwingTwistConstraintSettings_t * self,
  JPC_Vec3_t * mPlaneAxis1
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mPlaneAxis1 = *reinterpret_cast<Vec3 *>(mPlaneAxis1->obj);
};

JPC_RVec3_t * JPC_SwingTwistConstraintSettings_mPosition2_Get(
  JPC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  RVec3 resultValue = selfCpp->mPosition2;
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

void JPC_SwingTwistConstraintSettings_mPosition2_Set(
  JPC_SwingTwistConstraintSettings_t * self,
  JPC_RVec3_t * mPosition2
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mPosition2 = *reinterpret_cast<RVec3 *>(mPosition2->obj);
};

JPC_Vec3_t * JPC_SwingTwistConstraintSettings_mTwistAxis2_Get(
  JPC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mTwistAxis2;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_SwingTwistConstraintSettings_mTwistAxis2_Set(
  JPC_SwingTwistConstraintSettings_t * self,
  JPC_Vec3_t * mTwistAxis2
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mTwistAxis2 = *reinterpret_cast<Vec3 *>(mTwistAxis2->obj);
};

JPC_Vec3_t * JPC_SwingTwistConstraintSettings_mPlaneAxis2_Get(
  JPC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mPlaneAxis2;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_SwingTwistConstraintSettings_mPlaneAxis2_Set(
  JPC_SwingTwistConstraintSettings_t * self,
  JPC_Vec3_t * mPlaneAxis2
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mPlaneAxis2 = *reinterpret_cast<Vec3 *>(mPlaneAxis2->obj);
};

JPC_ESwingType JPC_SwingTwistConstraintSettings_mSwingType_Get(
  JPC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  ESwingType result = selfCpp->mSwingType;
  return static_cast<JPC_ESwingType>(static_cast<int>(result));
};

void JPC_SwingTwistConstraintSettings_mSwingType_Set(
  JPC_SwingTwistConstraintSettings_t * self,
  JPC_ESwingType mSwingType
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mSwingType = static_cast<ESwingType>(static_cast<int>(mSwingType));
};

float JPC_SwingTwistConstraintSettings_mNormalHalfConeAngle_Get(
  JPC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  float result = selfCpp->mNormalHalfConeAngle;
  return result;
};

void JPC_SwingTwistConstraintSettings_mNormalHalfConeAngle_Set(
  JPC_SwingTwistConstraintSettings_t * self,
  float mNormalHalfConeAngle
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mNormalHalfConeAngle = mNormalHalfConeAngle;
};

float JPC_SwingTwistConstraintSettings_mPlaneHalfConeAngle_Get(
  JPC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  float result = selfCpp->mPlaneHalfConeAngle;
  return result;
};

void JPC_SwingTwistConstraintSettings_mPlaneHalfConeAngle_Set(
  JPC_SwingTwistConstraintSettings_t * self,
  float mPlaneHalfConeAngle
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mPlaneHalfConeAngle = mPlaneHalfConeAngle;
};

float JPC_SwingTwistConstraintSettings_mTwistMinAngle_Get(
  JPC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  float result = selfCpp->mTwistMinAngle;
  return result;
};

void JPC_SwingTwistConstraintSettings_mTwistMinAngle_Set(
  JPC_SwingTwistConstraintSettings_t * self,
  float mTwistMinAngle
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mTwistMinAngle = mTwistMinAngle;
};

float JPC_SwingTwistConstraintSettings_mTwistMaxAngle_Get(
  JPC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  float result = selfCpp->mTwistMaxAngle;
  return result;
};

void JPC_SwingTwistConstraintSettings_mTwistMaxAngle_Set(
  JPC_SwingTwistConstraintSettings_t * self,
  float mTwistMaxAngle
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mTwistMaxAngle = mTwistMaxAngle;
};

float JPC_SwingTwistConstraintSettings_mMaxFrictionTorque_Get(
  JPC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  float result = selfCpp->mMaxFrictionTorque;
  return result;
};

void JPC_SwingTwistConstraintSettings_mMaxFrictionTorque_Set(
  JPC_SwingTwistConstraintSettings_t * self,
  float mMaxFrictionTorque
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mMaxFrictionTorque = mMaxFrictionTorque;
};

JPC_MotorSettings_t * JPC_SwingTwistConstraintSettings_mSwingMotorSettings_Get(
  JPC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  MotorSettings resultValue = selfCpp->mSwingMotorSettings;
  MotorSettings* result = new MotorSettings(resultValue);
  return reinterpret_cast<JPC_MotorSettings_t *>(result);
};

void JPC_SwingTwistConstraintSettings_mSwingMotorSettings_Set(
  JPC_SwingTwistConstraintSettings_t * self,
  JPC_MotorSettings_t * mSwingMotorSettings
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mSwingMotorSettings = *reinterpret_cast<MotorSettings *>(mSwingMotorSettings->obj);
};

JPC_MotorSettings_t * JPC_SwingTwistConstraintSettings_mTwistMotorSettings_Get(
  JPC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  MotorSettings resultValue = selfCpp->mTwistMotorSettings;
  MotorSettings* result = new MotorSettings(resultValue);
  return reinterpret_cast<JPC_MotorSettings_t *>(result);
};

void JPC_SwingTwistConstraintSettings_mTwistMotorSettings_Set(
  JPC_SwingTwistConstraintSettings_t * self,
  JPC_MotorSettings_t * mTwistMotorSettings
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mTwistMotorSettings = *reinterpret_cast<MotorSettings *>(mTwistMotorSettings->obj);
};

bool JPC_SwingTwistConstraintSettings_mEnabled_Get(
  JPC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  bool result = selfCpp->mEnabled;
  return result;
};

void JPC_SwingTwistConstraintSettings_mEnabled_Set(
  JPC_SwingTwistConstraintSettings_t * self,
  bool mEnabled
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mEnabled = mEnabled;
};

long JPC_SwingTwistConstraintSettings_mNumVelocityStepsOverride_Get(
  JPC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  long result = selfCpp->mNumVelocityStepsOverride;
  return result;
};

void JPC_SwingTwistConstraintSettings_mNumVelocityStepsOverride_Set(
  JPC_SwingTwistConstraintSettings_t * self,
  long mNumVelocityStepsOverride
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mNumVelocityStepsOverride = mNumVelocityStepsOverride;
};

long JPC_SwingTwistConstraintSettings_mNumPositionStepsOverride_Get(
  JPC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  long result = selfCpp->mNumPositionStepsOverride;
  return result;
};

void JPC_SwingTwistConstraintSettings_mNumPositionStepsOverride_Set(
  JPC_SwingTwistConstraintSettings_t * self,
  long mNumPositionStepsOverride
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mNumPositionStepsOverride = mNumPositionStepsOverride;
};

//endregion properties

#ifdef __cplusplus
}
#endif

