#include "JoltC/JPC_SliderConstraintSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_SliderConstraintSettings_t * JPC_SliderConstraintSettings_new() {
  JPC_SliderConstraintSettings_t * cInstance = new JPC_SliderConstraintSettings_t();
  SliderConstraintSettings * cppInstance = new SliderConstraintSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

JPC_Constraint_t * JPC_SliderConstraintSettings_Create(
  JPC_SliderConstraintSettings_t * self,
  JPC_Body_t * inBody1,
  JPC_Body_t * inBody2
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  Constraint * result = selfCpp->Create(
  *reinterpret_cast<Body *>(inBody1->obj),
  *reinterpret_cast<Body *>(inBody2->obj)
  );
  return reinterpret_cast<JPC_Constraint_t *>(result);
};

unsigned long JPC_SliderConstraintSettings_GetRefCount(
  JPC_SliderConstraintSettings_t * self
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_SliderConstraintSettings_AddRef(
  JPC_SliderConstraintSettings_t * self
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_SliderConstraintSettings_Release(
  JPC_SliderConstraintSettings_t * self
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  
  selfCpp->Release();
};

//endregion functions

//region properties

JPC_EConstraintSpace JPC_SliderConstraintSettings_mSpace_Get(
  JPC_SliderConstraintSettings_t * self
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  EConstraintSpace result = selfCpp->mSpace;
  return static_cast<JPC_EConstraintSpace>(static_cast<int>(result));
};

void JPC_SliderConstraintSettings_mSpace_Set(
  JPC_SliderConstraintSettings_t * self,
  JPC_EConstraintSpace mSpace
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  selfCpp->mSpace = static_cast<EConstraintSpace>(static_cast<int>(mSpace));
};

bool JPC_SliderConstraintSettings_mAutoDetectPoint_Get(
  JPC_SliderConstraintSettings_t * self
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  bool result = selfCpp->mAutoDetectPoint;
  return result;
};

void JPC_SliderConstraintSettings_mAutoDetectPoint_Set(
  JPC_SliderConstraintSettings_t * self,
  bool mAutoDetectPoint
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  selfCpp->mAutoDetectPoint = mAutoDetectPoint;
};

JPC_RVec3_t * JPC_SliderConstraintSettings_mPoint1_Get(
  JPC_SliderConstraintSettings_t * self
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  RVec3 resultValue = selfCpp->mPoint1;
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

void JPC_SliderConstraintSettings_mPoint1_Set(
  JPC_SliderConstraintSettings_t * self,
  JPC_RVec3_t * mPoint1
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  selfCpp->mPoint1 = *reinterpret_cast<RVec3 *>(mPoint1->obj);
};

JPC_Vec3_t * JPC_SliderConstraintSettings_mSliderAxis1_Get(
  JPC_SliderConstraintSettings_t * self
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mSliderAxis1;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_SliderConstraintSettings_mSliderAxis1_Set(
  JPC_SliderConstraintSettings_t * self,
  JPC_Vec3_t * mSliderAxis1
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  selfCpp->mSliderAxis1 = *reinterpret_cast<Vec3 *>(mSliderAxis1->obj);
};

JPC_Vec3_t * JPC_SliderConstraintSettings_mNormalAxis1_Get(
  JPC_SliderConstraintSettings_t * self
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mNormalAxis1;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_SliderConstraintSettings_mNormalAxis1_Set(
  JPC_SliderConstraintSettings_t * self,
  JPC_Vec3_t * mNormalAxis1
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  selfCpp->mNormalAxis1 = *reinterpret_cast<Vec3 *>(mNormalAxis1->obj);
};

JPC_RVec3_t * JPC_SliderConstraintSettings_mPoint2_Get(
  JPC_SliderConstraintSettings_t * self
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  RVec3 resultValue = selfCpp->mPoint2;
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

void JPC_SliderConstraintSettings_mPoint2_Set(
  JPC_SliderConstraintSettings_t * self,
  JPC_RVec3_t * mPoint2
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  selfCpp->mPoint2 = *reinterpret_cast<RVec3 *>(mPoint2->obj);
};

JPC_Vec3_t * JPC_SliderConstraintSettings_mSliderAxis2_Get(
  JPC_SliderConstraintSettings_t * self
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mSliderAxis2;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_SliderConstraintSettings_mSliderAxis2_Set(
  JPC_SliderConstraintSettings_t * self,
  JPC_Vec3_t * mSliderAxis2
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  selfCpp->mSliderAxis2 = *reinterpret_cast<Vec3 *>(mSliderAxis2->obj);
};

JPC_Vec3_t * JPC_SliderConstraintSettings_mNormalAxis2_Get(
  JPC_SliderConstraintSettings_t * self
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mNormalAxis2;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_SliderConstraintSettings_mNormalAxis2_Set(
  JPC_SliderConstraintSettings_t * self,
  JPC_Vec3_t * mNormalAxis2
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  selfCpp->mNormalAxis2 = *reinterpret_cast<Vec3 *>(mNormalAxis2->obj);
};

float JPC_SliderConstraintSettings_mLimitsMin_Get(
  JPC_SliderConstraintSettings_t * self
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  float result = selfCpp->mLimitsMin;
  return result;
};

void JPC_SliderConstraintSettings_mLimitsMin_Set(
  JPC_SliderConstraintSettings_t * self,
  float mLimitsMin
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  selfCpp->mLimitsMin = mLimitsMin;
};

float JPC_SliderConstraintSettings_mLimitsMax_Get(
  JPC_SliderConstraintSettings_t * self
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  float result = selfCpp->mLimitsMax;
  return result;
};

void JPC_SliderConstraintSettings_mLimitsMax_Set(
  JPC_SliderConstraintSettings_t * self,
  float mLimitsMax
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  selfCpp->mLimitsMax = mLimitsMax;
};

JPC_SpringSettings_t * JPC_SliderConstraintSettings_mLimitsSpringSettings_Get(
  JPC_SliderConstraintSettings_t * self
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  SpringSettings resultValue = selfCpp->mLimitsSpringSettings;
  SpringSettings* result = new SpringSettings(resultValue);
  return reinterpret_cast<JPC_SpringSettings_t *>(result);
};

void JPC_SliderConstraintSettings_mLimitsSpringSettings_Set(
  JPC_SliderConstraintSettings_t * self,
  JPC_SpringSettings_t * mLimitsSpringSettings
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  selfCpp->mLimitsSpringSettings = *reinterpret_cast<SpringSettings *>(mLimitsSpringSettings->obj);
};

float JPC_SliderConstraintSettings_mMaxFrictionForce_Get(
  JPC_SliderConstraintSettings_t * self
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  float result = selfCpp->mMaxFrictionForce;
  return result;
};

void JPC_SliderConstraintSettings_mMaxFrictionForce_Set(
  JPC_SliderConstraintSettings_t * self,
  float mMaxFrictionForce
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  selfCpp->mMaxFrictionForce = mMaxFrictionForce;
};

JPC_MotorSettings_t * JPC_SliderConstraintSettings_mMotorSettings_Get(
  JPC_SliderConstraintSettings_t * self
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  MotorSettings resultValue = selfCpp->mMotorSettings;
  MotorSettings* result = new MotorSettings(resultValue);
  return reinterpret_cast<JPC_MotorSettings_t *>(result);
};

void JPC_SliderConstraintSettings_mMotorSettings_Set(
  JPC_SliderConstraintSettings_t * self,
  JPC_MotorSettings_t * mMotorSettings
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  selfCpp->mMotorSettings = *reinterpret_cast<MotorSettings *>(mMotorSettings->obj);
};

bool JPC_SliderConstraintSettings_mEnabled_Get(
  JPC_SliderConstraintSettings_t * self
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  bool result = selfCpp->mEnabled;
  return result;
};

void JPC_SliderConstraintSettings_mEnabled_Set(
  JPC_SliderConstraintSettings_t * self,
  bool mEnabled
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  selfCpp->mEnabled = mEnabled;
};

long JPC_SliderConstraintSettings_mNumVelocityStepsOverride_Get(
  JPC_SliderConstraintSettings_t * self
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  long result = selfCpp->mNumVelocityStepsOverride;
  return result;
};

void JPC_SliderConstraintSettings_mNumVelocityStepsOverride_Set(
  JPC_SliderConstraintSettings_t * self,
  long mNumVelocityStepsOverride
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  selfCpp->mNumVelocityStepsOverride = mNumVelocityStepsOverride;
};

long JPC_SliderConstraintSettings_mNumPositionStepsOverride_Get(
  JPC_SliderConstraintSettings_t * self
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  long result = selfCpp->mNumPositionStepsOverride;
  return result;
};

void JPC_SliderConstraintSettings_mNumPositionStepsOverride_Set(
  JPC_SliderConstraintSettings_t * self,
  long mNumPositionStepsOverride
) {
  SliderConstraintSettings * selfCpp = static_cast<SliderConstraintSettings *>(self->obj);
  selfCpp->mNumPositionStepsOverride = mNumPositionStepsOverride;
};

//endregion properties

#ifdef __cplusplus
}
#endif

