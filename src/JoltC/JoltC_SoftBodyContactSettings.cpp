#include "JoltC/JoltC_SoftBodyContactSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region properties

float JoltC_SoftBodyContactSettings_mInvMassScale1_Get(
  JoltC_SoftBodyContactSettings_t * self,
  char** outErrMsg
) {
  SoftBodyContactSettings * selfCpp = static_cast<SoftBodyContactSettings *>(self->obj);
  float result = selfCpp->mInvMassScale1;
  return result;
};

void JoltC_SoftBodyContactSettings_mInvMassScale1_Set(
  JoltC_SoftBodyContactSettings_t * self,
  float mInvMassScale1,
  char** outErrMsg
) {
  SoftBodyContactSettings * selfCpp = static_cast<SoftBodyContactSettings *>(self->obj);
  selfCpp->mInvMassScale1 = mInvMassScale1;
};

float JoltC_SoftBodyContactSettings_mInvMassScale2_Get(
  JoltC_SoftBodyContactSettings_t * self,
  char** outErrMsg
) {
  SoftBodyContactSettings * selfCpp = static_cast<SoftBodyContactSettings *>(self->obj);
  float result = selfCpp->mInvMassScale2;
  return result;
};

void JoltC_SoftBodyContactSettings_mInvMassScale2_Set(
  JoltC_SoftBodyContactSettings_t * self,
  float mInvMassScale2,
  char** outErrMsg
) {
  SoftBodyContactSettings * selfCpp = static_cast<SoftBodyContactSettings *>(self->obj);
  selfCpp->mInvMassScale2 = mInvMassScale2;
};

float JoltC_SoftBodyContactSettings_mInvInertiaScale2_Get(
  JoltC_SoftBodyContactSettings_t * self,
  char** outErrMsg
) {
  SoftBodyContactSettings * selfCpp = static_cast<SoftBodyContactSettings *>(self->obj);
  float result = selfCpp->mInvInertiaScale2;
  return result;
};

void JoltC_SoftBodyContactSettings_mInvInertiaScale2_Set(
  JoltC_SoftBodyContactSettings_t * self,
  float mInvInertiaScale2,
  char** outErrMsg
) {
  SoftBodyContactSettings * selfCpp = static_cast<SoftBodyContactSettings *>(self->obj);
  selfCpp->mInvInertiaScale2 = mInvInertiaScale2;
};

bool JoltC_SoftBodyContactSettings_mIsSensor_Get(
  JoltC_SoftBodyContactSettings_t * self,
  char** outErrMsg
) {
  SoftBodyContactSettings * selfCpp = static_cast<SoftBodyContactSettings *>(self->obj);
  bool result = selfCpp->mIsSensor;
  return result;
};

void JoltC_SoftBodyContactSettings_mIsSensor_Set(
  JoltC_SoftBodyContactSettings_t * self,
  bool mIsSensor,
  char** outErrMsg
) {
  SoftBodyContactSettings * selfCpp = static_cast<SoftBodyContactSettings *>(self->obj);
  selfCpp->mIsSensor = mIsSensor;
};

//endregion properties

#ifdef __cplusplus
}
#endif

