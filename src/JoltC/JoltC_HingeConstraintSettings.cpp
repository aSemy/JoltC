#include "JoltC/JoltC_HingeConstraintSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `HingeConstraintSettings` instance.
 */
JoltC_HingeConstraintSettings_t * JoltC_HingeConstraintSettings_new() {
  JoltC_HingeConstraintSettings_t * cInstance = new JoltC_HingeConstraintSettings_t();
  HingeConstraintSettings * cppInstance = new HingeConstraintSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_HingeConstraintSettings_destroy(
  JoltC_HingeConstraintSettings_t * self
){
  if (self == NULL) return;
  delete static_cast<HingeConstraintSettings *>(self->obj);
  free(self);
}

//endregion
//region functions

JoltC_Constraint_t * JoltC_HingeConstraintSettings_Create(
  JoltC_HingeConstraintSettings_t * self,
  JoltC_Body_t * inBody1,
  JoltC_Body_t * inBody2
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  Body * inBody1Cpp = static_cast<Body *>(inBody1->obj);
  Body * inBody2Cpp = static_cast<Body *>(inBody2->obj);
  const Constraint * resultPtr = selfCpp->Create(
    *inBody1Cpp,
    *inBody2Cpp
  );
  JoltC_Constraint_t * result = new JoltC_Constraint_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

unsigned long JoltC_HingeConstraintSettings_GetRefCount(
  JoltC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_HingeConstraintSettings_AddRef(
  JoltC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_HingeConstraintSettings_Release(
  JoltC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  selfCpp->Release();
}

//endregion

//region properties

JoltC_EConstraintSpace JoltC_HingeConstraintSettings_mSpace_Get(
  JoltC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  EConstraintSpace result = selfCpp->mSpace;
  return static_cast<JoltC_EConstraintSpace>(static_cast<int>(result));
}

void JoltC_HingeConstraintSettings_mSpace_Set(
  JoltC_HingeConstraintSettings_t * self,
  JoltC_EConstraintSpace mSpace
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  selfCpp->mSpace = static_cast<EConstraintSpace>(static_cast<int>(mSpace));
}

JoltC_RVec3_t * JoltC_HingeConstraintSettings_mPoint1_Get(
  JoltC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  RVec3 * resultPtr = new RVec3();
  *resultPtr = selfCpp->mPoint1;
  JoltC_RVec3_t * result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_HingeConstraintSettings_mPoint1_Set(
  JoltC_HingeConstraintSettings_t * self,
  JoltC_RVec3_t * mPoint1
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  selfCpp->mPoint1 = *static_cast<RVec3 *>(mPoint1->obj);
}

JoltC_Vec3_t * JoltC_HingeConstraintSettings_mHingeAxis1_Get(
  JoltC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mHingeAxis1;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_HingeConstraintSettings_mHingeAxis1_Set(
  JoltC_HingeConstraintSettings_t * self,
  JoltC_Vec3_t * mHingeAxis1
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  selfCpp->mHingeAxis1 = *static_cast<Vec3 *>(mHingeAxis1->obj);
}

JoltC_Vec3_t * JoltC_HingeConstraintSettings_mNormalAxis1_Get(
  JoltC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mNormalAxis1;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_HingeConstraintSettings_mNormalAxis1_Set(
  JoltC_HingeConstraintSettings_t * self,
  JoltC_Vec3_t * mNormalAxis1
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  selfCpp->mNormalAxis1 = *static_cast<Vec3 *>(mNormalAxis1->obj);
}

JoltC_RVec3_t * JoltC_HingeConstraintSettings_mPoint2_Get(
  JoltC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  RVec3 * resultPtr = new RVec3();
  *resultPtr = selfCpp->mPoint2;
  JoltC_RVec3_t * result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_HingeConstraintSettings_mPoint2_Set(
  JoltC_HingeConstraintSettings_t * self,
  JoltC_RVec3_t * mPoint2
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  selfCpp->mPoint2 = *static_cast<RVec3 *>(mPoint2->obj);
}

JoltC_Vec3_t * JoltC_HingeConstraintSettings_mHingeAxis2_Get(
  JoltC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mHingeAxis2;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_HingeConstraintSettings_mHingeAxis2_Set(
  JoltC_HingeConstraintSettings_t * self,
  JoltC_Vec3_t * mHingeAxis2
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  selfCpp->mHingeAxis2 = *static_cast<Vec3 *>(mHingeAxis2->obj);
}

JoltC_Vec3_t * JoltC_HingeConstraintSettings_mNormalAxis2_Get(
  JoltC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mNormalAxis2;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_HingeConstraintSettings_mNormalAxis2_Set(
  JoltC_HingeConstraintSettings_t * self,
  JoltC_Vec3_t * mNormalAxis2
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  selfCpp->mNormalAxis2 = *static_cast<Vec3 *>(mNormalAxis2->obj);
}

float JoltC_HingeConstraintSettings_mLimitsMin_Get(
  JoltC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  return selfCpp->mLimitsMin;
}

void JoltC_HingeConstraintSettings_mLimitsMin_Set(
  JoltC_HingeConstraintSettings_t * self,
  float mLimitsMin
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  selfCpp->mLimitsMin = mLimitsMin;
}

float JoltC_HingeConstraintSettings_mLimitsMax_Get(
  JoltC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  return selfCpp->mLimitsMax;
}

void JoltC_HingeConstraintSettings_mLimitsMax_Set(
  JoltC_HingeConstraintSettings_t * self,
  float mLimitsMax
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  selfCpp->mLimitsMax = mLimitsMax;
}

JoltC_SpringSettings_t * JoltC_HingeConstraintSettings_mLimitsSpringSettings_Get(
  JoltC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  SpringSettings * resultPtr = new SpringSettings();
  *resultPtr = selfCpp->mLimitsSpringSettings;
  JoltC_SpringSettings_t * result = new JoltC_SpringSettings_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_HingeConstraintSettings_mLimitsSpringSettings_Set(
  JoltC_HingeConstraintSettings_t * self,
  JoltC_SpringSettings_t * mLimitsSpringSettings
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  selfCpp->mLimitsSpringSettings = *static_cast<SpringSettings *>(mLimitsSpringSettings->obj);
}

float JoltC_HingeConstraintSettings_mMaxFrictionTorque_Get(
  JoltC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  return selfCpp->mMaxFrictionTorque;
}

void JoltC_HingeConstraintSettings_mMaxFrictionTorque_Set(
  JoltC_HingeConstraintSettings_t * self,
  float mMaxFrictionTorque
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  selfCpp->mMaxFrictionTorque = mMaxFrictionTorque;
}

JoltC_MotorSettings_t * JoltC_HingeConstraintSettings_mMotorSettings_Get(
  JoltC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  MotorSettings * resultPtr = new MotorSettings();
  *resultPtr = selfCpp->mMotorSettings;
  JoltC_MotorSettings_t * result = new JoltC_MotorSettings_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_HingeConstraintSettings_mMotorSettings_Set(
  JoltC_HingeConstraintSettings_t * self,
  JoltC_MotorSettings_t * mMotorSettings
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  selfCpp->mMotorSettings = *static_cast<MotorSettings *>(mMotorSettings->obj);
}

bool JoltC_HingeConstraintSettings_mEnabled_Get(
  JoltC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  return selfCpp->mEnabled;
}

void JoltC_HingeConstraintSettings_mEnabled_Set(
  JoltC_HingeConstraintSettings_t * self,
  bool mEnabled
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  selfCpp->mEnabled = mEnabled;
}

long JoltC_HingeConstraintSettings_mNumVelocityStepsOverride_Get(
  JoltC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  return selfCpp->mNumVelocityStepsOverride;
}

void JoltC_HingeConstraintSettings_mNumVelocityStepsOverride_Set(
  JoltC_HingeConstraintSettings_t * self,
  long mNumVelocityStepsOverride
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  selfCpp->mNumVelocityStepsOverride = mNumVelocityStepsOverride;
}

long JoltC_HingeConstraintSettings_mNumPositionStepsOverride_Get(
  JoltC_HingeConstraintSettings_t * self
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  return selfCpp->mNumPositionStepsOverride;
}

void JoltC_HingeConstraintSettings_mNumPositionStepsOverride_Set(
  JoltC_HingeConstraintSettings_t * self,
  long mNumPositionStepsOverride
) {
  HingeConstraintSettings * selfCpp = static_cast<HingeConstraintSettings *>(self->obj);
  selfCpp->mNumPositionStepsOverride = mNumPositionStepsOverride;
}

//endregion


#ifdef __cplusplus
}
#endif
