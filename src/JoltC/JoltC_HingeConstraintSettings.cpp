#include "JoltC/JPC_HingeConstraintSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_HingeConstraintSettings_t * JPC_HingeConstraintSettings_new() {
  JPC_HingeConstraintSettings_t * cInstance = new JPC_HingeConstraintSettings_t();
  HingeConstraintSettings * cppInstance = new HingeConstraintSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

JPC_Constraint_t * JPC_HingeConstraintSettings_Create(
  JPC_HingeConstraintSettings_t * self,
  JPC_Body_t * inBody1,
  JPC_Body_t * inBody2
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  Constraint * result = selfCpp->Create(
  *reinterpret_cast<Body *>(inBody1->obj),
  *reinterpret_cast<Body *>(inBody2->obj)
  );
  return reinterpret_cast<JPC_Constraint_t *>(result);
};

unsigned long JPC_HingeConstraintSettings_GetRefCount(
  JPC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_HingeConstraintSettings_AddRef(
  JPC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_HingeConstraintSettings_Release(
  JPC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  
  selfCpp->Release();
};

//endregion functions

//region properties

JPC_EConstraintSpace JPC_HingeConstraintSettings_mSpace_Get(
  JPC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  EConstraintSpace result = selfCpp->mSpace;
  return static_cast<JPC_EConstraintSpace>(static_cast<int>(result));
};

void JPC_HingeConstraintSettings_mSpace_Set(
  JPC_HingeConstraintSettings_t * self,
  JPC_EConstraintSpace mSpace
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  selfCpp->mSpace = static_cast<EConstraintSpace>(static_cast<int>(mSpace));
};

JPC_RVec3_t * JPC_HingeConstraintSettings_mPoint1_Get(
  JPC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  RVec3 resultValue = selfCpp->mPoint1;
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

void JPC_HingeConstraintSettings_mPoint1_Set(
  JPC_HingeConstraintSettings_t * self,
  JPC_RVec3_t * mPoint1
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  selfCpp->mPoint1 = *reinterpret_cast<RVec3 *>(mPoint1->obj);
};

JPC_Vec3_t * JPC_HingeConstraintSettings_mHingeAxis1_Get(
  JPC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mHingeAxis1;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_HingeConstraintSettings_mHingeAxis1_Set(
  JPC_HingeConstraintSettings_t * self,
  JPC_Vec3_t * mHingeAxis1
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  selfCpp->mHingeAxis1 = *reinterpret_cast<Vec3 *>(mHingeAxis1->obj);
};

JPC_Vec3_t * JPC_HingeConstraintSettings_mNormalAxis1_Get(
  JPC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mNormalAxis1;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_HingeConstraintSettings_mNormalAxis1_Set(
  JPC_HingeConstraintSettings_t * self,
  JPC_Vec3_t * mNormalAxis1
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  selfCpp->mNormalAxis1 = *reinterpret_cast<Vec3 *>(mNormalAxis1->obj);
};

JPC_RVec3_t * JPC_HingeConstraintSettings_mPoint2_Get(
  JPC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  RVec3 resultValue = selfCpp->mPoint2;
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

void JPC_HingeConstraintSettings_mPoint2_Set(
  JPC_HingeConstraintSettings_t * self,
  JPC_RVec3_t * mPoint2
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  selfCpp->mPoint2 = *reinterpret_cast<RVec3 *>(mPoint2->obj);
};

JPC_Vec3_t * JPC_HingeConstraintSettings_mHingeAxis2_Get(
  JPC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mHingeAxis2;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_HingeConstraintSettings_mHingeAxis2_Set(
  JPC_HingeConstraintSettings_t * self,
  JPC_Vec3_t * mHingeAxis2
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  selfCpp->mHingeAxis2 = *reinterpret_cast<Vec3 *>(mHingeAxis2->obj);
};

JPC_Vec3_t * JPC_HingeConstraintSettings_mNormalAxis2_Get(
  JPC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mNormalAxis2;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_HingeConstraintSettings_mNormalAxis2_Set(
  JPC_HingeConstraintSettings_t * self,
  JPC_Vec3_t * mNormalAxis2
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  selfCpp->mNormalAxis2 = *reinterpret_cast<Vec3 *>(mNormalAxis2->obj);
};

float JPC_HingeConstraintSettings_mLimitsMin_Get(
  JPC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  float result = selfCpp->mLimitsMin;
  return result;
};

void JPC_HingeConstraintSettings_mLimitsMin_Set(
  JPC_HingeConstraintSettings_t * self,
  float mLimitsMin
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  selfCpp->mLimitsMin = mLimitsMin;
};

float JPC_HingeConstraintSettings_mLimitsMax_Get(
  JPC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  float result = selfCpp->mLimitsMax;
  return result;
};

void JPC_HingeConstraintSettings_mLimitsMax_Set(
  JPC_HingeConstraintSettings_t * self,
  float mLimitsMax
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  selfCpp->mLimitsMax = mLimitsMax;
};

JPC_SpringSettings_t * JPC_HingeConstraintSettings_mLimitsSpringSettings_Get(
  JPC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  SpringSettings resultValue = selfCpp->mLimitsSpringSettings;
  SpringSettings* result = new SpringSettings(resultValue);
  return reinterpret_cast<JPC_SpringSettings_t *>(result);
};

void JPC_HingeConstraintSettings_mLimitsSpringSettings_Set(
  JPC_HingeConstraintSettings_t * self,
  JPC_SpringSettings_t * mLimitsSpringSettings
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  selfCpp->mLimitsSpringSettings = *reinterpret_cast<SpringSettings *>(mLimitsSpringSettings->obj);
};

float JPC_HingeConstraintSettings_mMaxFrictionTorque_Get(
  JPC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  float result = selfCpp->mMaxFrictionTorque;
  return result;
};

void JPC_HingeConstraintSettings_mMaxFrictionTorque_Set(
  JPC_HingeConstraintSettings_t * self,
  float mMaxFrictionTorque
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  selfCpp->mMaxFrictionTorque = mMaxFrictionTorque;
};

JPC_MotorSettings_t * JPC_HingeConstraintSettings_mMotorSettings_Get(
  JPC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  MotorSettings resultValue = selfCpp->mMotorSettings;
  MotorSettings* result = new MotorSettings(resultValue);
  return reinterpret_cast<JPC_MotorSettings_t *>(result);
};

void JPC_HingeConstraintSettings_mMotorSettings_Set(
  JPC_HingeConstraintSettings_t * self,
  JPC_MotorSettings_t * mMotorSettings
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  selfCpp->mMotorSettings = *reinterpret_cast<MotorSettings *>(mMotorSettings->obj);
};

bool JPC_HingeConstraintSettings_mEnabled_Get(
  JPC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  bool result = selfCpp->mEnabled;
  return result;
};

void JPC_HingeConstraintSettings_mEnabled_Set(
  JPC_HingeConstraintSettings_t * self,
  bool mEnabled
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  selfCpp->mEnabled = mEnabled;
};

long JPC_HingeConstraintSettings_mNumVelocityStepsOverride_Get(
  JPC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  long result = selfCpp->mNumVelocityStepsOverride;
  return result;
};

void JPC_HingeConstraintSettings_mNumVelocityStepsOverride_Set(
  JPC_HingeConstraintSettings_t * self,
  long mNumVelocityStepsOverride
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  selfCpp->mNumVelocityStepsOverride = mNumVelocityStepsOverride;
};

long JPC_HingeConstraintSettings_mNumPositionStepsOverride_Get(
  JPC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  long result = selfCpp->mNumPositionStepsOverride;
  return result;
};

void JPC_HingeConstraintSettings_mNumPositionStepsOverride_Set(
  JPC_HingeConstraintSettings_t * self,
  long mNumPositionStepsOverride
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  selfCpp->mNumPositionStepsOverride = mNumPositionStepsOverride;
};

//endregion properties

#ifdef __cplusplus
}
#endif

