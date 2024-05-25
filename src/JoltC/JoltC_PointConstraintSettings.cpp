#include "JoltC/JPC_PointConstraintSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_PointConstraintSettings_t * JPC_PointConstraintSettings_new() {
  JPC_PointConstraintSettings_t * cInstance = new JPC_PointConstraintSettings_t();
  PointConstraintSettings * cppInstance = new PointConstraintSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

JPC_Constraint_t * JPC_PointConstraintSettings_Create(
  JPC_PointConstraintSettings_t * self,
  JPC_Body_t * inBody1,
  JPC_Body_t * inBody2
) {
  PointConstraintSettings * selfCpp = static_cast<PointConstraintSettings *>(self->obj);
  Constraint * result = selfCpp->Create(
  *reinterpret_cast<Body *>(inBody1->obj),
  *reinterpret_cast<Body *>(inBody2->obj)
  );
  return reinterpret_cast<JPC_Constraint_t *>(result);
};

unsigned long JPC_PointConstraintSettings_GetRefCount(
  JPC_PointConstraintSettings_t * self
) {
  PointConstraintSettings * selfCpp = static_cast<PointConstraintSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_PointConstraintSettings_AddRef(
  JPC_PointConstraintSettings_t * self
) {
  PointConstraintSettings * selfCpp = static_cast<PointConstraintSettings *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_PointConstraintSettings_Release(
  JPC_PointConstraintSettings_t * self
) {
  PointConstraintSettings * selfCpp = static_cast<PointConstraintSettings *>(self->obj);
  
  selfCpp->Release();
};

//endregion functions

//region properties

JPC_EConstraintSpace JPC_PointConstraintSettings_mSpace_Get(
  JPC_PointConstraintSettings_t * self
) {
  PointConstraintSettings * selfCpp = static_cast<PointConstraintSettings *>(self->obj);
  EConstraintSpace result = selfCpp->mSpace;
  return static_cast<JPC_EConstraintSpace>(static_cast<int>(result));
};

void JPC_PointConstraintSettings_mSpace_Set(
  JPC_PointConstraintSettings_t * self,
  JPC_EConstraintSpace mSpace
) {
  PointConstraintSettings * selfCpp = static_cast<PointConstraintSettings *>(self->obj);
  selfCpp->mSpace = static_cast<EConstraintSpace>(static_cast<int>(mSpace));
};

JPC_RVec3_t * JPC_PointConstraintSettings_mPoint1_Get(
  JPC_PointConstraintSettings_t * self
) {
  PointConstraintSettings * selfCpp = static_cast<PointConstraintSettings *>(self->obj);
  RVec3 resultValue = selfCpp->mPoint1;
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

void JPC_PointConstraintSettings_mPoint1_Set(
  JPC_PointConstraintSettings_t * self,
  JPC_RVec3_t * mPoint1
) {
  PointConstraintSettings * selfCpp = static_cast<PointConstraintSettings *>(self->obj);
  selfCpp->mPoint1 = *reinterpret_cast<RVec3 *>(mPoint1->obj);
};

JPC_RVec3_t * JPC_PointConstraintSettings_mPoint2_Get(
  JPC_PointConstraintSettings_t * self
) {
  PointConstraintSettings * selfCpp = static_cast<PointConstraintSettings *>(self->obj);
  RVec3 resultValue = selfCpp->mPoint2;
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

void JPC_PointConstraintSettings_mPoint2_Set(
  JPC_PointConstraintSettings_t * self,
  JPC_RVec3_t * mPoint2
) {
  PointConstraintSettings * selfCpp = static_cast<PointConstraintSettings *>(self->obj);
  selfCpp->mPoint2 = *reinterpret_cast<RVec3 *>(mPoint2->obj);
};

bool JPC_PointConstraintSettings_mEnabled_Get(
  JPC_PointConstraintSettings_t * self
) {
  PointConstraintSettings * selfCpp = static_cast<PointConstraintSettings *>(self->obj);
  bool result = selfCpp->mEnabled;
  return result;
};

void JPC_PointConstraintSettings_mEnabled_Set(
  JPC_PointConstraintSettings_t * self,
  bool mEnabled
) {
  PointConstraintSettings * selfCpp = static_cast<PointConstraintSettings *>(self->obj);
  selfCpp->mEnabled = mEnabled;
};

long JPC_PointConstraintSettings_mNumVelocityStepsOverride_Get(
  JPC_PointConstraintSettings_t * self
) {
  PointConstraintSettings * selfCpp = static_cast<PointConstraintSettings *>(self->obj);
  long result = selfCpp->mNumVelocityStepsOverride;
  return result;
};

void JPC_PointConstraintSettings_mNumVelocityStepsOverride_Set(
  JPC_PointConstraintSettings_t * self,
  long mNumVelocityStepsOverride
) {
  PointConstraintSettings * selfCpp = static_cast<PointConstraintSettings *>(self->obj);
  selfCpp->mNumVelocityStepsOverride = mNumVelocityStepsOverride;
};

long JPC_PointConstraintSettings_mNumPositionStepsOverride_Get(
  JPC_PointConstraintSettings_t * self
) {
  PointConstraintSettings * selfCpp = static_cast<PointConstraintSettings *>(self->obj);
  long result = selfCpp->mNumPositionStepsOverride;
  return result;
};

void JPC_PointConstraintSettings_mNumPositionStepsOverride_Set(
  JPC_PointConstraintSettings_t * self,
  long mNumPositionStepsOverride
) {
  PointConstraintSettings * selfCpp = static_cast<PointConstraintSettings *>(self->obj);
  selfCpp->mNumPositionStepsOverride = mNumPositionStepsOverride;
};

//endregion properties

#ifdef __cplusplus
}
#endif

