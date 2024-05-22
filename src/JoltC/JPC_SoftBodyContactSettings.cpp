#include "JoltC/JPC_SoftBodyContactSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region properties

float JPC_SoftBodyContactSettings_mInvMassScale1_Get(
  JPC_SoftBodyContactSettings_t * self
) {
  SoftBodyContactSettings * selfCpp = static_cast<SoftBodyContactSettings *>(self->obj);
  float result = selfCpp->mInvMassScale1;
  return result;
};

void JPC_SoftBodyContactSettings_mInvMassScale1_Set(
  JPC_SoftBodyContactSettings_t * self,
  float mInvMassScale1
) {
  SoftBodyContactSettings * selfCpp = static_cast<SoftBodyContactSettings *>(self->obj);
  selfCpp->mInvMassScale1 = mInvMassScale1;
};

float JPC_SoftBodyContactSettings_mInvMassScale2_Get(
  JPC_SoftBodyContactSettings_t * self
) {
  SoftBodyContactSettings * selfCpp = static_cast<SoftBodyContactSettings *>(self->obj);
  float result = selfCpp->mInvMassScale2;
  return result;
};

void JPC_SoftBodyContactSettings_mInvMassScale2_Set(
  JPC_SoftBodyContactSettings_t * self,
  float mInvMassScale2
) {
  SoftBodyContactSettings * selfCpp = static_cast<SoftBodyContactSettings *>(self->obj);
  selfCpp->mInvMassScale2 = mInvMassScale2;
};

float JPC_SoftBodyContactSettings_mInvInertiaScale2_Get(
  JPC_SoftBodyContactSettings_t * self
) {
  SoftBodyContactSettings * selfCpp = static_cast<SoftBodyContactSettings *>(self->obj);
  float result = selfCpp->mInvInertiaScale2;
  return result;
};

void JPC_SoftBodyContactSettings_mInvInertiaScale2_Set(
  JPC_SoftBodyContactSettings_t * self,
  float mInvInertiaScale2
) {
  SoftBodyContactSettings * selfCpp = static_cast<SoftBodyContactSettings *>(self->obj);
  selfCpp->mInvInertiaScale2 = mInvInertiaScale2;
};

bool JPC_SoftBodyContactSettings_mIsSensor_Get(
  JPC_SoftBodyContactSettings_t * self
) {
  SoftBodyContactSettings * selfCpp = static_cast<SoftBodyContactSettings *>(self->obj);
  bool result = selfCpp->mIsSensor;
  return result;
};

void JPC_SoftBodyContactSettings_mIsSensor_Set(
  JPC_SoftBodyContactSettings_t * self,
  bool mIsSensor
) {
  SoftBodyContactSettings * selfCpp = static_cast<SoftBodyContactSettings *>(self->obj);
  selfCpp->mIsSensor = mIsSensor;
};

//endregion properties

#ifdef __cplusplus
}
#endif

