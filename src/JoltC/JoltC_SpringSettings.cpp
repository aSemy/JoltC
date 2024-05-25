#include "JoltC/JoltC_SpringSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SpringSettings_t * JoltC_SpringSettings_new(
  char** outErrMsg
) {
  try {
    JoltC_SpringSettings_t * cInstance = new JoltC_SpringSettings_t();
    SpringSettings * cppInstance = new SpringSettings();
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

//region functions

bool JoltC_SpringSettings_HasStiffness(
  JoltC_SpringSettings_t * self,
  char** outErrMsg
) {
  try {
    SpringSettings * selfCpp = static_cast<SpringSettings *>(self->obj);
    bool result = selfCpp->HasStiffness();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

//endregion functions

//region properties

JoltC_ESpringMode JoltC_SpringSettings_mMode_Get(
  JoltC_SpringSettings_t * self,
  char** outErrMsg
) {
  SpringSettings * selfCpp = static_cast<SpringSettings *>(self->obj);
  ESpringMode result = selfCpp->mMode;
  return static_cast<JoltC_ESpringMode>(static_cast<int>(result));
};

void JoltC_SpringSettings_mMode_Set(
  JoltC_SpringSettings_t * self,
  JoltC_ESpringMode mMode,
  char** outErrMsg
) {
  SpringSettings * selfCpp = static_cast<SpringSettings *>(self->obj);
  selfCpp->mMode = static_cast<ESpringMode>(static_cast<int>(mMode));
};

float JoltC_SpringSettings_mFrequency_Get(
  JoltC_SpringSettings_t * self,
  char** outErrMsg
) {
  SpringSettings * selfCpp = static_cast<SpringSettings *>(self->obj);
  float result = selfCpp->mFrequency;
  return result;
};

void JoltC_SpringSettings_mFrequency_Set(
  JoltC_SpringSettings_t * self,
  float mFrequency,
  char** outErrMsg
) {
  SpringSettings * selfCpp = static_cast<SpringSettings *>(self->obj);
  selfCpp->mFrequency = mFrequency;
};

float JoltC_SpringSettings_mStiffness_Get(
  JoltC_SpringSettings_t * self,
  char** outErrMsg
) {
  SpringSettings * selfCpp = static_cast<SpringSettings *>(self->obj);
  float result = selfCpp->mStiffness;
  return result;
};

void JoltC_SpringSettings_mStiffness_Set(
  JoltC_SpringSettings_t * self,
  float mStiffness,
  char** outErrMsg
) {
  SpringSettings * selfCpp = static_cast<SpringSettings *>(self->obj);
  selfCpp->mStiffness = mStiffness;
};

float JoltC_SpringSettings_mDamping_Get(
  JoltC_SpringSettings_t * self,
  char** outErrMsg
) {
  SpringSettings * selfCpp = static_cast<SpringSettings *>(self->obj);
  float result = selfCpp->mDamping;
  return result;
};

void JoltC_SpringSettings_mDamping_Set(
  JoltC_SpringSettings_t * self,
  float mDamping,
  char** outErrMsg
) {
  SpringSettings * selfCpp = static_cast<SpringSettings *>(self->obj);
  selfCpp->mDamping = mDamping;
};

//endregion properties

#ifdef __cplusplus
}
#endif

