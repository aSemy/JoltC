#include "JoltC/JoltC_SoftBodyContactSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_SoftBodyContactSettings_destroy(
  JoltC_SoftBodyContactSettings_t * self
){
  if (self == NULL) return;
  delete static_cast<SoftBodyContactSettings *>(self->obj);
  free(self);
}

//endregion
//region properties

float JoltC_SoftBodyContactSettings_mInvMassScale1_Get(
  JoltC_SoftBodyContactSettings_t * self
) {
  SoftBodyContactSettings * selfCpp = static_cast<SoftBodyContactSettings *>(self->obj);
  return selfCpp->mInvMassScale1;
}

void JoltC_SoftBodyContactSettings_mInvMassScale1_Set(
  JoltC_SoftBodyContactSettings_t * self,
  float mInvMassScale1
) {
  SoftBodyContactSettings * selfCpp = static_cast<SoftBodyContactSettings *>(self->obj);
  selfCpp->mInvMassScale1 = mInvMassScale1;
}

float JoltC_SoftBodyContactSettings_mInvMassScale2_Get(
  JoltC_SoftBodyContactSettings_t * self
) {
  SoftBodyContactSettings * selfCpp = static_cast<SoftBodyContactSettings *>(self->obj);
  return selfCpp->mInvMassScale2;
}

void JoltC_SoftBodyContactSettings_mInvMassScale2_Set(
  JoltC_SoftBodyContactSettings_t * self,
  float mInvMassScale2
) {
  SoftBodyContactSettings * selfCpp = static_cast<SoftBodyContactSettings *>(self->obj);
  selfCpp->mInvMassScale2 = mInvMassScale2;
}

float JoltC_SoftBodyContactSettings_mInvInertiaScale2_Get(
  JoltC_SoftBodyContactSettings_t * self
) {
  SoftBodyContactSettings * selfCpp = static_cast<SoftBodyContactSettings *>(self->obj);
  return selfCpp->mInvInertiaScale2;
}

void JoltC_SoftBodyContactSettings_mInvInertiaScale2_Set(
  JoltC_SoftBodyContactSettings_t * self,
  float mInvInertiaScale2
) {
  SoftBodyContactSettings * selfCpp = static_cast<SoftBodyContactSettings *>(self->obj);
  selfCpp->mInvInertiaScale2 = mInvInertiaScale2;
}

bool JoltC_SoftBodyContactSettings_mIsSensor_Get(
  JoltC_SoftBodyContactSettings_t * self
) {
  SoftBodyContactSettings * selfCpp = static_cast<SoftBodyContactSettings *>(self->obj);
  return selfCpp->mIsSensor;
}

void JoltC_SoftBodyContactSettings_mIsSensor_Set(
  JoltC_SoftBodyContactSettings_t * self,
  bool mIsSensor
) {
  SoftBodyContactSettings * selfCpp = static_cast<SoftBodyContactSettings *>(self->obj);
  selfCpp->mIsSensor = mIsSensor;
}

//endregion


#ifdef __cplusplus
}
#endif
