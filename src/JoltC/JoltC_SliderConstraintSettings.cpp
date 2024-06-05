#include "JoltC/JoltC_SliderConstraintSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SliderConstraintSettings_t * JoltC_SliderConstraintSettings_new() {
  JoltC_SliderConstraintSettings_t * cInstance = new JoltC_SliderConstraintSettings_t();
  SliderConstraintSettings * cppInstance = new SliderConstraintSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

JoltC_Constraint_t * JoltC_SliderConstraintSettings_Create(
  JoltC_SliderConstraintSettings_t * self,
  JoltC_Body_t * inBody1,
  JoltC_Body_t * inBody2
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  const Constraint * resultValue = selfCpp->Create(
    *reinterpret_cast<Body *>(inBody1->obj),
    *reinterpret_cast<Body *>(inBody2->obj)
  );
  JoltC_Constraint_t* result = new JoltC_Constraint_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

unsigned long JoltC_SliderConstraintSettings_GetRefCount(
  JoltC_SliderConstraintSettings_t * self
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_SliderConstraintSettings_AddRef(
  JoltC_SliderConstraintSettings_t * self
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  selfCpp->AddRef();
};

void JoltC_SliderConstraintSettings_Release(
  JoltC_SliderConstraintSettings_t * self
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  selfCpp->Release();
};

//endregion

//region properties

JoltC_EConstraintSpace JoltC_SliderConstraintSettings_mSpace_Get(
  JoltC_SliderConstraintSettings_t * self
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  EConstraintSpace result = selfCpp->mSpace;
  return static_cast<JoltC_EConstraintSpace>(static_cast<int>(result));
};

void JoltC_SliderConstraintSettings_mSpace_Set(
  JoltC_SliderConstraintSettings_t * self,
  JoltC_EConstraintSpace mSpace
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  selfCpp->mSpace = static_cast<EConstraintSpace>(static_cast<int>(mSpace));
};

bool JoltC_SliderConstraintSettings_mAutoDetectPoint_Get(
  JoltC_SliderConstraintSettings_t * self
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  bool result = selfCpp->mAutoDetectPoint;
  return result;
};

void JoltC_SliderConstraintSettings_mAutoDetectPoint_Set(
  JoltC_SliderConstraintSettings_t * self,
  bool mAutoDetectPoint
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  selfCpp->mAutoDetectPoint = mAutoDetectPoint;
};

JoltC_RVec3_t * JoltC_SliderConstraintSettings_mPoint1_Get(
  JoltC_SliderConstraintSettings_t * self
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  const RVec3& resultValue = selfCpp->mPoint1;
  JoltC_RVec3_t* result = new JoltC_RVec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_SliderConstraintSettings_mPoint1_Set(
  JoltC_SliderConstraintSettings_t * self,
  JoltC_RVec3_t * mPoint1
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  selfCpp->mPoint1 = *reinterpret_cast<RVec3 *>(mPoint1->obj);
};

JoltC_Vec3_t * JoltC_SliderConstraintSettings_mSliderAxis1_Get(
  JoltC_SliderConstraintSettings_t * self
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  const Vec3& resultValue = selfCpp->mSliderAxis1;
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_SliderConstraintSettings_mSliderAxis1_Set(
  JoltC_SliderConstraintSettings_t * self,
  JoltC_Vec3_t * mSliderAxis1
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  selfCpp->mSliderAxis1 = *reinterpret_cast<Vec3 *>(mSliderAxis1->obj);
};

JoltC_Vec3_t * JoltC_SliderConstraintSettings_mNormalAxis1_Get(
  JoltC_SliderConstraintSettings_t * self
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  const Vec3& resultValue = selfCpp->mNormalAxis1;
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_SliderConstraintSettings_mNormalAxis1_Set(
  JoltC_SliderConstraintSettings_t * self,
  JoltC_Vec3_t * mNormalAxis1
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  selfCpp->mNormalAxis1 = *reinterpret_cast<Vec3 *>(mNormalAxis1->obj);
};

JoltC_RVec3_t * JoltC_SliderConstraintSettings_mPoint2_Get(
  JoltC_SliderConstraintSettings_t * self
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  const RVec3& resultValue = selfCpp->mPoint2;
  JoltC_RVec3_t* result = new JoltC_RVec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_SliderConstraintSettings_mPoint2_Set(
  JoltC_SliderConstraintSettings_t * self,
  JoltC_RVec3_t * mPoint2
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  selfCpp->mPoint2 = *reinterpret_cast<RVec3 *>(mPoint2->obj);
};

JoltC_Vec3_t * JoltC_SliderConstraintSettings_mSliderAxis2_Get(
  JoltC_SliderConstraintSettings_t * self
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  const Vec3& resultValue = selfCpp->mSliderAxis2;
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_SliderConstraintSettings_mSliderAxis2_Set(
  JoltC_SliderConstraintSettings_t * self,
  JoltC_Vec3_t * mSliderAxis2
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  selfCpp->mSliderAxis2 = *reinterpret_cast<Vec3 *>(mSliderAxis2->obj);
};

JoltC_Vec3_t * JoltC_SliderConstraintSettings_mNormalAxis2_Get(
  JoltC_SliderConstraintSettings_t * self
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  const Vec3& resultValue = selfCpp->mNormalAxis2;
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_SliderConstraintSettings_mNormalAxis2_Set(
  JoltC_SliderConstraintSettings_t * self,
  JoltC_Vec3_t * mNormalAxis2
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  selfCpp->mNormalAxis2 = *reinterpret_cast<Vec3 *>(mNormalAxis2->obj);
};

float JoltC_SliderConstraintSettings_mLimitsMin_Get(
  JoltC_SliderConstraintSettings_t * self
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  float result = selfCpp->mLimitsMin;
  return result;
};

void JoltC_SliderConstraintSettings_mLimitsMin_Set(
  JoltC_SliderConstraintSettings_t * self,
  float mLimitsMin
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  selfCpp->mLimitsMin = mLimitsMin;
};

float JoltC_SliderConstraintSettings_mLimitsMax_Get(
  JoltC_SliderConstraintSettings_t * self
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  float result = selfCpp->mLimitsMax;
  return result;
};

void JoltC_SliderConstraintSettings_mLimitsMax_Set(
  JoltC_SliderConstraintSettings_t * self,
  float mLimitsMax
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  selfCpp->mLimitsMax = mLimitsMax;
};

JoltC_SpringSettings_t * JoltC_SliderConstraintSettings_mLimitsSpringSettings_Get(
  JoltC_SliderConstraintSettings_t * self
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  const SpringSettings& resultValue = selfCpp->mLimitsSpringSettings;
  JoltC_SpringSettings_t* result = new JoltC_SpringSettings_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_SliderConstraintSettings_mLimitsSpringSettings_Set(
  JoltC_SliderConstraintSettings_t * self,
  JoltC_SpringSettings_t * mLimitsSpringSettings
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  selfCpp->mLimitsSpringSettings = *reinterpret_cast<SpringSettings *>(mLimitsSpringSettings->obj);
};

float JoltC_SliderConstraintSettings_mMaxFrictionForce_Get(
  JoltC_SliderConstraintSettings_t * self
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  float result = selfCpp->mMaxFrictionForce;
  return result;
};

void JoltC_SliderConstraintSettings_mMaxFrictionForce_Set(
  JoltC_SliderConstraintSettings_t * self,
  float mMaxFrictionForce
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  selfCpp->mMaxFrictionForce = mMaxFrictionForce;
};

JoltC_MotorSettings_t * JoltC_SliderConstraintSettings_mMotorSettings_Get(
  JoltC_SliderConstraintSettings_t * self
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  const MotorSettings& resultValue = selfCpp->mMotorSettings;
  JoltC_MotorSettings_t* result = new JoltC_MotorSettings_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_SliderConstraintSettings_mMotorSettings_Set(
  JoltC_SliderConstraintSettings_t * self,
  JoltC_MotorSettings_t * mMotorSettings
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  selfCpp->mMotorSettings = *reinterpret_cast<MotorSettings *>(mMotorSettings->obj);
};

bool JoltC_SliderConstraintSettings_mEnabled_Get(
  JoltC_SliderConstraintSettings_t * self
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  bool result = selfCpp->mEnabled;
  return result;
};

void JoltC_SliderConstraintSettings_mEnabled_Set(
  JoltC_SliderConstraintSettings_t * self,
  bool mEnabled
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  selfCpp->mEnabled = mEnabled;
};

long JoltC_SliderConstraintSettings_mNumVelocityStepsOverride_Get(
  JoltC_SliderConstraintSettings_t * self
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  long result = selfCpp->mNumVelocityStepsOverride;
  return result;
};

void JoltC_SliderConstraintSettings_mNumVelocityStepsOverride_Set(
  JoltC_SliderConstraintSettings_t * self,
  long mNumVelocityStepsOverride
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  selfCpp->mNumVelocityStepsOverride = mNumVelocityStepsOverride;
};

long JoltC_SliderConstraintSettings_mNumPositionStepsOverride_Get(
  JoltC_SliderConstraintSettings_t * self
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  long result = selfCpp->mNumPositionStepsOverride;
  return result;
};

void JoltC_SliderConstraintSettings_mNumPositionStepsOverride_Set(
  JoltC_SliderConstraintSettings_t * self,
  long mNumPositionStepsOverride
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  selfCpp->mNumPositionStepsOverride = mNumPositionStepsOverride;
};

//endregion

#ifdef __cplusplus
}
#endif

