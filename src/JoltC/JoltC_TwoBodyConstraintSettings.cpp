#include "JoltC/JPC_TwoBodyConstraintSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

JPC_Constraint_t * JPC_TwoBodyConstraintSettings_Create(
  JPC_TwoBodyConstraintSettings_t * self,
  JPC_Body_t * inBody1,
  JPC_Body_t * inBody2
) {
  TwoBodyConstraintSettings * selfCpp = static_cast<TwoBodyConstraintSettings *>(self->obj);
  Constraint * result = selfCpp->Create(
  *reinterpret_cast<Body *>(inBody1->obj),
  *reinterpret_cast<Body *>(inBody2->obj)
  );
  return reinterpret_cast<JPC_Constraint_t *>(result);
};

unsigned long JPC_TwoBodyConstraintSettings_GetRefCount(
  JPC_TwoBodyConstraintSettings_t * self
) {
  TwoBodyConstraintSettings * selfCpp = static_cast<TwoBodyConstraintSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_TwoBodyConstraintSettings_AddRef(
  JPC_TwoBodyConstraintSettings_t * self
) {
  TwoBodyConstraintSettings * selfCpp = static_cast<TwoBodyConstraintSettings *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_TwoBodyConstraintSettings_Release(
  JPC_TwoBodyConstraintSettings_t * self
) {
  TwoBodyConstraintSettings * selfCpp = static_cast<TwoBodyConstraintSettings *>(self->obj);
  
  selfCpp->Release();
};

//endregion functions

//region properties

bool JPC_TwoBodyConstraintSettings_mEnabled_Get(
  JPC_TwoBodyConstraintSettings_t * self
) {
  TwoBodyConstraintSettings * selfCpp = static_cast<TwoBodyConstraintSettings *>(self->obj);
  bool result = selfCpp->mEnabled;
  return result;
};

void JPC_TwoBodyConstraintSettings_mEnabled_Set(
  JPC_TwoBodyConstraintSettings_t * self,
  bool mEnabled
) {
  TwoBodyConstraintSettings * selfCpp = static_cast<TwoBodyConstraintSettings *>(self->obj);
  selfCpp->mEnabled = mEnabled;
};

long JPC_TwoBodyConstraintSettings_mNumVelocityStepsOverride_Get(
  JPC_TwoBodyConstraintSettings_t * self
) {
  TwoBodyConstraintSettings * selfCpp = static_cast<TwoBodyConstraintSettings *>(self->obj);
  long result = selfCpp->mNumVelocityStepsOverride;
  return result;
};

void JPC_TwoBodyConstraintSettings_mNumVelocityStepsOverride_Set(
  JPC_TwoBodyConstraintSettings_t * self,
  long mNumVelocityStepsOverride
) {
  TwoBodyConstraintSettings * selfCpp = static_cast<TwoBodyConstraintSettings *>(self->obj);
  selfCpp->mNumVelocityStepsOverride = mNumVelocityStepsOverride;
};

long JPC_TwoBodyConstraintSettings_mNumPositionStepsOverride_Get(
  JPC_TwoBodyConstraintSettings_t * self
) {
  TwoBodyConstraintSettings * selfCpp = static_cast<TwoBodyConstraintSettings *>(self->obj);
  long result = selfCpp->mNumPositionStepsOverride;
  return result;
};

void JPC_TwoBodyConstraintSettings_mNumPositionStepsOverride_Set(
  JPC_TwoBodyConstraintSettings_t * self,
  long mNumPositionStepsOverride
) {
  TwoBodyConstraintSettings * selfCpp = static_cast<TwoBodyConstraintSettings *>(self->obj);
  selfCpp->mNumPositionStepsOverride = mNumPositionStepsOverride;
};

//endregion properties

#ifdef __cplusplus
}
#endif

