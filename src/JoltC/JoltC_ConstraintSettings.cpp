#include "JoltC/JPC_ConstraintSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JPC_ConstraintSettings_GetRefCount(
  JPC_ConstraintSettings_t * self
) {
  ConstraintSettings * selfCpp = static_cast<ConstraintSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_ConstraintSettings_AddRef(
  JPC_ConstraintSettings_t * self
) {
  ConstraintSettings * selfCpp = static_cast<ConstraintSettings *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_ConstraintSettings_Release(
  JPC_ConstraintSettings_t * self
) {
  ConstraintSettings * selfCpp = static_cast<ConstraintSettings *>(self->obj);
  
  selfCpp->Release();
};

//endregion functions

//region properties

bool JPC_ConstraintSettings_mEnabled_Get(
  JPC_ConstraintSettings_t * self
) {
  ConstraintSettings * selfCpp = static_cast<ConstraintSettings *>(self->obj);
  bool result = selfCpp->mEnabled;
  return result;
};

void JPC_ConstraintSettings_mEnabled_Set(
  JPC_ConstraintSettings_t * self,
  bool mEnabled
) {
  ConstraintSettings * selfCpp = static_cast<ConstraintSettings *>(self->obj);
  selfCpp->mEnabled = mEnabled;
};

long JPC_ConstraintSettings_mNumVelocityStepsOverride_Get(
  JPC_ConstraintSettings_t * self
) {
  ConstraintSettings * selfCpp = static_cast<ConstraintSettings *>(self->obj);
  long result = selfCpp->mNumVelocityStepsOverride;
  return result;
};

void JPC_ConstraintSettings_mNumVelocityStepsOverride_Set(
  JPC_ConstraintSettings_t * self,
  long mNumVelocityStepsOverride
) {
  ConstraintSettings * selfCpp = static_cast<ConstraintSettings *>(self->obj);
  selfCpp->mNumVelocityStepsOverride = mNumVelocityStepsOverride;
};

long JPC_ConstraintSettings_mNumPositionStepsOverride_Get(
  JPC_ConstraintSettings_t * self
) {
  ConstraintSettings * selfCpp = static_cast<ConstraintSettings *>(self->obj);
  long result = selfCpp->mNumPositionStepsOverride;
  return result;
};

void JPC_ConstraintSettings_mNumPositionStepsOverride_Set(
  JPC_ConstraintSettings_t * self,
  long mNumPositionStepsOverride
) {
  ConstraintSettings * selfCpp = static_cast<ConstraintSettings *>(self->obj);
  selfCpp->mNumPositionStepsOverride = mNumPositionStepsOverride;
};

//endregion properties

#ifdef __cplusplus
}
#endif

