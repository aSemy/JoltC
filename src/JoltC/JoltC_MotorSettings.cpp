#include "JoltC/JPC_MotorSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_MotorSettings_t * JPC_MotorSettings_new() {
  JPC_MotorSettings_t * cInstance = new JPC_MotorSettings_t();
  MotorSettings * cppInstance = new MotorSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region properties

JPC_SpringSettings_t * JPC_MotorSettings_mSpringSettings_Get(
  JPC_MotorSettings_t * self
) {
  MotorSettings * selfCpp = static_cast<MotorSettings *>(self->obj);
  SpringSettings resultValue = selfCpp->mSpringSettings;
  SpringSettings* result = new SpringSettings(resultValue);
  return reinterpret_cast<JPC_SpringSettings_t *>(result);
};

void JPC_MotorSettings_mSpringSettings_Set(
  JPC_MotorSettings_t * self,
  JPC_SpringSettings_t * mSpringSettings
) {
  MotorSettings * selfCpp = static_cast<MotorSettings *>(self->obj);
  selfCpp->mSpringSettings = *reinterpret_cast<SpringSettings *>(mSpringSettings->obj);
};

float JPC_MotorSettings_mMinForceLimit_Get(
  JPC_MotorSettings_t * self
) {
  MotorSettings * selfCpp = static_cast<MotorSettings *>(self->obj);
  float result = selfCpp->mMinForceLimit;
  return result;
};

void JPC_MotorSettings_mMinForceLimit_Set(
  JPC_MotorSettings_t * self,
  float mMinForceLimit
) {
  MotorSettings * selfCpp = static_cast<MotorSettings *>(self->obj);
  selfCpp->mMinForceLimit = mMinForceLimit;
};

float JPC_MotorSettings_mMaxForceLimit_Get(
  JPC_MotorSettings_t * self
) {
  MotorSettings * selfCpp = static_cast<MotorSettings *>(self->obj);
  float result = selfCpp->mMaxForceLimit;
  return result;
};

void JPC_MotorSettings_mMaxForceLimit_Set(
  JPC_MotorSettings_t * self,
  float mMaxForceLimit
) {
  MotorSettings * selfCpp = static_cast<MotorSettings *>(self->obj);
  selfCpp->mMaxForceLimit = mMaxForceLimit;
};

float JPC_MotorSettings_mMinTorqueLimit_Get(
  JPC_MotorSettings_t * self
) {
  MotorSettings * selfCpp = static_cast<MotorSettings *>(self->obj);
  float result = selfCpp->mMinTorqueLimit;
  return result;
};

void JPC_MotorSettings_mMinTorqueLimit_Set(
  JPC_MotorSettings_t * self,
  float mMinTorqueLimit
) {
  MotorSettings * selfCpp = static_cast<MotorSettings *>(self->obj);
  selfCpp->mMinTorqueLimit = mMinTorqueLimit;
};

float JPC_MotorSettings_mMaxTorqueLimit_Get(
  JPC_MotorSettings_t * self
) {
  MotorSettings * selfCpp = static_cast<MotorSettings *>(self->obj);
  float result = selfCpp->mMaxTorqueLimit;
  return result;
};

void JPC_MotorSettings_mMaxTorqueLimit_Set(
  JPC_MotorSettings_t * self,
  float mMaxTorqueLimit
) {
  MotorSettings * selfCpp = static_cast<MotorSettings *>(self->obj);
  selfCpp->mMaxTorqueLimit = mMaxTorqueLimit;
};

//endregion properties

#ifdef __cplusplus
}
#endif

