#include "JoltC/JoltC_HingeConstraintSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_HingeConstraintSettings_t * JoltC_HingeConstraintSettings_new() {
  JoltC_HingeConstraintSettings_t * cInstance = new JoltC_HingeConstraintSettings_t();
  HingeConstraintSettings * cppInstance = new HingeConstraintSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

JoltC_Constraint_t * JoltC_HingeConstraintSettings_Create(
  JoltC_HingeConstraintSettings_t * self,
  JoltC_Body_t * inBody1,
  JoltC_Body_t * inBody2
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  Constraint * result = selfCpp->Create(
  *reinterpret_cast<Body *>(inBody1->obj),
  *reinterpret_cast<Body *>(inBody2->obj)
  );
  return reinterpret_cast<JoltC_Constraint_t *>(result);
};

unsigned long JoltC_HingeConstraintSettings_GetRefCount(
  JoltC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_HingeConstraintSettings_AddRef(
  JoltC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  
  selfCpp->AddRef();
};

void JoltC_HingeConstraintSettings_Release(
  JoltC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  
  selfCpp->Release();
};

//endregion

//region properties

JoltC_EConstraintSpace JoltC_HingeConstraintSettings_mSpace_Get(
  JoltC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  EConstraintSpace result = selfCpp->mSpace;
  return static_cast<JoltC_EConstraintSpace>(static_cast<int>(result));
};

void JoltC_HingeConstraintSettings_mSpace_Set(
  JoltC_HingeConstraintSettings_t * self,
  JoltC_EConstraintSpace mSpace
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  selfCpp->mSpace = static_cast<EConstraintSpace>(static_cast<int>(mSpace));
};

JoltC_RVec3_t * JoltC_HingeConstraintSettings_mPoint1_Get(
  JoltC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  RVec3 resultValue = selfCpp->mPoint1;
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JoltC_RVec3_t *>(result);
};

void JoltC_HingeConstraintSettings_mPoint1_Set(
  JoltC_HingeConstraintSettings_t * self,
  JoltC_RVec3_t * mPoint1
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  selfCpp->mPoint1 = *reinterpret_cast<RVec3 *>(mPoint1->obj);
};

JoltC_Vec3_t * JoltC_HingeConstraintSettings_mHingeAxis1_Get(
  JoltC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mHingeAxis1;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_HingeConstraintSettings_mHingeAxis1_Set(
  JoltC_HingeConstraintSettings_t * self,
  JoltC_Vec3_t * mHingeAxis1
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  selfCpp->mHingeAxis1 = *reinterpret_cast<Vec3 *>(mHingeAxis1->obj);
};

JoltC_Vec3_t * JoltC_HingeConstraintSettings_mNormalAxis1_Get(
  JoltC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mNormalAxis1;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_HingeConstraintSettings_mNormalAxis1_Set(
  JoltC_HingeConstraintSettings_t * self,
  JoltC_Vec3_t * mNormalAxis1
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  selfCpp->mNormalAxis1 = *reinterpret_cast<Vec3 *>(mNormalAxis1->obj);
};

JoltC_RVec3_t * JoltC_HingeConstraintSettings_mPoint2_Get(
  JoltC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  RVec3 resultValue = selfCpp->mPoint2;
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JoltC_RVec3_t *>(result);
};

void JoltC_HingeConstraintSettings_mPoint2_Set(
  JoltC_HingeConstraintSettings_t * self,
  JoltC_RVec3_t * mPoint2
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  selfCpp->mPoint2 = *reinterpret_cast<RVec3 *>(mPoint2->obj);
};

JoltC_Vec3_t * JoltC_HingeConstraintSettings_mHingeAxis2_Get(
  JoltC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mHingeAxis2;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_HingeConstraintSettings_mHingeAxis2_Set(
  JoltC_HingeConstraintSettings_t * self,
  JoltC_Vec3_t * mHingeAxis2
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  selfCpp->mHingeAxis2 = *reinterpret_cast<Vec3 *>(mHingeAxis2->obj);
};

JoltC_Vec3_t * JoltC_HingeConstraintSettings_mNormalAxis2_Get(
  JoltC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mNormalAxis2;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_HingeConstraintSettings_mNormalAxis2_Set(
  JoltC_HingeConstraintSettings_t * self,
  JoltC_Vec3_t * mNormalAxis2
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  selfCpp->mNormalAxis2 = *reinterpret_cast<Vec3 *>(mNormalAxis2->obj);
};

float JoltC_HingeConstraintSettings_mLimitsMin_Get(
  JoltC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  float result = selfCpp->mLimitsMin;
  return result;
};

void JoltC_HingeConstraintSettings_mLimitsMin_Set(
  JoltC_HingeConstraintSettings_t * self,
  float mLimitsMin
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  selfCpp->mLimitsMin = mLimitsMin;
};

float JoltC_HingeConstraintSettings_mLimitsMax_Get(
  JoltC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  float result = selfCpp->mLimitsMax;
  return result;
};

void JoltC_HingeConstraintSettings_mLimitsMax_Set(
  JoltC_HingeConstraintSettings_t * self,
  float mLimitsMax
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  selfCpp->mLimitsMax = mLimitsMax;
};

JoltC_SpringSettings_t * JoltC_HingeConstraintSettings_mLimitsSpringSettings_Get(
  JoltC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  SpringSettings resultValue = selfCpp->mLimitsSpringSettings;
  SpringSettings* result = new SpringSettings(resultValue);
  return reinterpret_cast<JoltC_SpringSettings_t *>(result);
};

void JoltC_HingeConstraintSettings_mLimitsSpringSettings_Set(
  JoltC_HingeConstraintSettings_t * self,
  JoltC_SpringSettings_t * mLimitsSpringSettings
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  selfCpp->mLimitsSpringSettings = *reinterpret_cast<SpringSettings *>(mLimitsSpringSettings->obj);
};

float JoltC_HingeConstraintSettings_mMaxFrictionTorque_Get(
  JoltC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  float result = selfCpp->mMaxFrictionTorque;
  return result;
};

void JoltC_HingeConstraintSettings_mMaxFrictionTorque_Set(
  JoltC_HingeConstraintSettings_t * self,
  float mMaxFrictionTorque
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  selfCpp->mMaxFrictionTorque = mMaxFrictionTorque;
};

JoltC_MotorSettings_t * JoltC_HingeConstraintSettings_mMotorSettings_Get(
  JoltC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  MotorSettings resultValue = selfCpp->mMotorSettings;
  MotorSettings* result = new MotorSettings(resultValue);
  return reinterpret_cast<JoltC_MotorSettings_t *>(result);
};

void JoltC_HingeConstraintSettings_mMotorSettings_Set(
  JoltC_HingeConstraintSettings_t * self,
  JoltC_MotorSettings_t * mMotorSettings
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  selfCpp->mMotorSettings = *reinterpret_cast<MotorSettings *>(mMotorSettings->obj);
};

bool JoltC_HingeConstraintSettings_mEnabled_Get(
  JoltC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  bool result = selfCpp->mEnabled;
  return result;
};

void JoltC_HingeConstraintSettings_mEnabled_Set(
  JoltC_HingeConstraintSettings_t * self,
  bool mEnabled
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  selfCpp->mEnabled = mEnabled;
};

long JoltC_HingeConstraintSettings_mNumVelocityStepsOverride_Get(
  JoltC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  long result = selfCpp->mNumVelocityStepsOverride;
  return result;
};

void JoltC_HingeConstraintSettings_mNumVelocityStepsOverride_Set(
  JoltC_HingeConstraintSettings_t * self,
  long mNumVelocityStepsOverride
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  selfCpp->mNumVelocityStepsOverride = mNumVelocityStepsOverride;
};

long JoltC_HingeConstraintSettings_mNumPositionStepsOverride_Get(
  JoltC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  long result = selfCpp->mNumPositionStepsOverride;
  return result;
};

void JoltC_HingeConstraintSettings_mNumPositionStepsOverride_Set(
  JoltC_HingeConstraintSettings_t * self,
  long mNumPositionStepsOverride
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  selfCpp->mNumPositionStepsOverride = mNumPositionStepsOverride;
};

//endregion

#ifdef __cplusplus
}
#endif

