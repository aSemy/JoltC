#include "JoltC/JoltC_MotorSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `MotorSettings` instance.
 */
JoltC_MotorSettings_t * JoltC_MotorSettings_new() {
  JoltC_MotorSettings_t * cInstance = new JoltC_MotorSettings_t();
  MotorSettings * cppInstance = new MotorSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_MotorSettings_destroy(
  JoltC_MotorSettings_t * self
){
  if (self == NULL) return;
  delete static_cast<MotorSettings *>(self->obj);
  free(self);
}

//endregion
//region properties

JoltC_SpringSettings_t * JoltC_MotorSettings_mSpringSettings_Get(
  JoltC_MotorSettings_t * self
) {
  MotorSettings * selfCpp = static_cast<MotorSettings *>(self->obj);
  SpringSettings * resultPtr = new SpringSettings();
  *resultPtr = selfCpp->mSpringSettings;
  JoltC_SpringSettings_t * result = new JoltC_SpringSettings_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_MotorSettings_mSpringSettings_Set(
  JoltC_MotorSettings_t * self,
  JoltC_SpringSettings_t * mSpringSettings
) {
  MotorSettings * selfCpp = static_cast<MotorSettings *>(self->obj);
  selfCpp->mSpringSettings = *static_cast<SpringSettings *>(mSpringSettings->obj);
}

float JoltC_MotorSettings_mMinForceLimit_Get(
  JoltC_MotorSettings_t * self
) {
  MotorSettings * selfCpp = static_cast<MotorSettings *>(self->obj);
  return selfCpp->mMinForceLimit;
}

void JoltC_MotorSettings_mMinForceLimit_Set(
  JoltC_MotorSettings_t * self,
  float mMinForceLimit
) {
  MotorSettings * selfCpp = static_cast<MotorSettings *>(self->obj);
  selfCpp->mMinForceLimit = mMinForceLimit;
}

float JoltC_MotorSettings_mMaxForceLimit_Get(
  JoltC_MotorSettings_t * self
) {
  MotorSettings * selfCpp = static_cast<MotorSettings *>(self->obj);
  return selfCpp->mMaxForceLimit;
}

void JoltC_MotorSettings_mMaxForceLimit_Set(
  JoltC_MotorSettings_t * self,
  float mMaxForceLimit
) {
  MotorSettings * selfCpp = static_cast<MotorSettings *>(self->obj);
  selfCpp->mMaxForceLimit = mMaxForceLimit;
}

float JoltC_MotorSettings_mMinTorqueLimit_Get(
  JoltC_MotorSettings_t * self
) {
  MotorSettings * selfCpp = static_cast<MotorSettings *>(self->obj);
  return selfCpp->mMinTorqueLimit;
}

void JoltC_MotorSettings_mMinTorqueLimit_Set(
  JoltC_MotorSettings_t * self,
  float mMinTorqueLimit
) {
  MotorSettings * selfCpp = static_cast<MotorSettings *>(self->obj);
  selfCpp->mMinTorqueLimit = mMinTorqueLimit;
}

float JoltC_MotorSettings_mMaxTorqueLimit_Get(
  JoltC_MotorSettings_t * self
) {
  MotorSettings * selfCpp = static_cast<MotorSettings *>(self->obj);
  return selfCpp->mMaxTorqueLimit;
}

void JoltC_MotorSettings_mMaxTorqueLimit_Set(
  JoltC_MotorSettings_t * self,
  float mMaxTorqueLimit
) {
  MotorSettings * selfCpp = static_cast<MotorSettings *>(self->obj);
  selfCpp->mMaxTorqueLimit = mMaxTorqueLimit;
}

//endregion


#ifdef __cplusplus
}
#endif
