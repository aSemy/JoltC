#include "JoltC/JoltC_MotorSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_MotorSettings_t * JoltC_MotorSettings_new(
  char** outErrMsg
) {
  try {
    JoltC_MotorSettings_t * cInstance = new JoltC_MotorSettings_t();
    MotorSettings * cppInstance = new MotorSettings();
    cInstance->obj = cppInstance;
    return cInstance;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

//endregion constructors

//region properties

JoltC_SpringSettings_t * JoltC_MotorSettings_mSpringSettings_Get(
  JoltC_MotorSettings_t * self,
  char** outErrMsg
) {
  MotorSettings * selfCpp = static_cast<MotorSettings *>(self->obj);
  SpringSettings resultValue = selfCpp->mSpringSettings;
  SpringSettings* result = new SpringSettings(resultValue);
  return reinterpret_cast<JoltC_SpringSettings_t *>(result);
};

void JoltC_MotorSettings_mSpringSettings_Set(
  JoltC_MotorSettings_t * self,
  JoltC_SpringSettings_t * mSpringSettings,
  char** outErrMsg
) {
  MotorSettings * selfCpp = static_cast<MotorSettings *>(self->obj);
  selfCpp->mSpringSettings = *reinterpret_cast<SpringSettings *>(mSpringSettings->obj);
};

float JoltC_MotorSettings_mMinForceLimit_Get(
  JoltC_MotorSettings_t * self,
  char** outErrMsg
) {
  MotorSettings * selfCpp = static_cast<MotorSettings *>(self->obj);
  float result = selfCpp->mMinForceLimit;
  return result;
};

void JoltC_MotorSettings_mMinForceLimit_Set(
  JoltC_MotorSettings_t * self,
  float mMinForceLimit,
  char** outErrMsg
) {
  MotorSettings * selfCpp = static_cast<MotorSettings *>(self->obj);
  selfCpp->mMinForceLimit = mMinForceLimit;
};

float JoltC_MotorSettings_mMaxForceLimit_Get(
  JoltC_MotorSettings_t * self,
  char** outErrMsg
) {
  MotorSettings * selfCpp = static_cast<MotorSettings *>(self->obj);
  float result = selfCpp->mMaxForceLimit;
  return result;
};

void JoltC_MotorSettings_mMaxForceLimit_Set(
  JoltC_MotorSettings_t * self,
  float mMaxForceLimit,
  char** outErrMsg
) {
  MotorSettings * selfCpp = static_cast<MotorSettings *>(self->obj);
  selfCpp->mMaxForceLimit = mMaxForceLimit;
};

float JoltC_MotorSettings_mMinTorqueLimit_Get(
  JoltC_MotorSettings_t * self,
  char** outErrMsg
) {
  MotorSettings * selfCpp = static_cast<MotorSettings *>(self->obj);
  float result = selfCpp->mMinTorqueLimit;
  return result;
};

void JoltC_MotorSettings_mMinTorqueLimit_Set(
  JoltC_MotorSettings_t * self,
  float mMinTorqueLimit,
  char** outErrMsg
) {
  MotorSettings * selfCpp = static_cast<MotorSettings *>(self->obj);
  selfCpp->mMinTorqueLimit = mMinTorqueLimit;
};

float JoltC_MotorSettings_mMaxTorqueLimit_Get(
  JoltC_MotorSettings_t * self,
  char** outErrMsg
) {
  MotorSettings * selfCpp = static_cast<MotorSettings *>(self->obj);
  float result = selfCpp->mMaxTorqueLimit;
  return result;
};

void JoltC_MotorSettings_mMaxTorqueLimit_Set(
  JoltC_MotorSettings_t * self,
  float mMaxTorqueLimit,
  char** outErrMsg
) {
  MotorSettings * selfCpp = static_cast<MotorSettings *>(self->obj);
  selfCpp->mMaxTorqueLimit = mMaxTorqueLimit;
};

//endregion properties

#ifdef __cplusplus
}
#endif

