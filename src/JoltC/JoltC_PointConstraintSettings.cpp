#include "JoltC/JoltC_PointConstraintSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_PointConstraintSettings_t * JoltC_PointConstraintSettings_new() {
  JoltC_PointConstraintSettings_t * cInstance = new JoltC_PointConstraintSettings_t();
  PointConstraintSettings * cppInstance = new PointConstraintSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

JoltC_Constraint_t * JoltC_PointConstraintSettings_Create(
  JoltC_PointConstraintSettings_t * self,
  JoltC_Body_t * inBody1,
  JoltC_Body_t * inBody2
) {
  PointConstraintSettings * selfCpp = static_cast<PointConstraintSettings *>(self->obj);
  const Constraint * resultValue = selfCpp->Create(
    *reinterpret_cast<Body *>(inBody1->obj),
    *reinterpret_cast<Body *>(inBody2->obj)
  );
  JoltC_Constraint_t* result = new JoltC_Constraint_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

unsigned long JoltC_PointConstraintSettings_GetRefCount(
  JoltC_PointConstraintSettings_t * self
) {
  PointConstraintSettings * selfCpp = static_cast<PointConstraintSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_PointConstraintSettings_AddRef(
  JoltC_PointConstraintSettings_t * self
) {
  PointConstraintSettings * selfCpp = static_cast<PointConstraintSettings *>(self->obj);
  selfCpp->AddRef();
};

void JoltC_PointConstraintSettings_Release(
  JoltC_PointConstraintSettings_t * self
) {
  PointConstraintSettings * selfCpp = static_cast<PointConstraintSettings *>(self->obj);
  selfCpp->Release();
};

//endregion

//region properties

JoltC_EConstraintSpace JoltC_PointConstraintSettings_mSpace_Get(
  JoltC_PointConstraintSettings_t * self
) {
  PointConstraintSettings * selfCpp = static_cast<PointConstraintSettings *>(self->obj);
  EConstraintSpace result = selfCpp->mSpace;
  return static_cast<JoltC_EConstraintSpace>(static_cast<int>(result));
};

void JoltC_PointConstraintSettings_mSpace_Set(
  JoltC_PointConstraintSettings_t * self,
  JoltC_EConstraintSpace mSpace
) {
  PointConstraintSettings * selfCpp = static_cast<PointConstraintSettings *>(self->obj);
  selfCpp->mSpace = static_cast<EConstraintSpace>(static_cast<int>(mSpace));
};

JoltC_RVec3_t * JoltC_PointConstraintSettings_mPoint1_Get(
  JoltC_PointConstraintSettings_t * self
) {
  PointConstraintSettings * selfCpp = static_cast<PointConstraintSettings *>(self->obj);
  const RVec3& resultValue = selfCpp->mPoint1;
  JoltC_RVec3_t* result = new JoltC_RVec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_PointConstraintSettings_mPoint1_Set(
  JoltC_PointConstraintSettings_t * self,
  JoltC_RVec3_t * mPoint1
) {
  PointConstraintSettings * selfCpp = static_cast<PointConstraintSettings *>(self->obj);
  selfCpp->mPoint1 = *reinterpret_cast<RVec3 *>(mPoint1->obj);
};

JoltC_RVec3_t * JoltC_PointConstraintSettings_mPoint2_Get(
  JoltC_PointConstraintSettings_t * self
) {
  PointConstraintSettings * selfCpp = static_cast<PointConstraintSettings *>(self->obj);
  const RVec3& resultValue = selfCpp->mPoint2;
  JoltC_RVec3_t* result = new JoltC_RVec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_PointConstraintSettings_mPoint2_Set(
  JoltC_PointConstraintSettings_t * self,
  JoltC_RVec3_t * mPoint2
) {
  PointConstraintSettings * selfCpp = static_cast<PointConstraintSettings *>(self->obj);
  selfCpp->mPoint2 = *reinterpret_cast<RVec3 *>(mPoint2->obj);
};

bool JoltC_PointConstraintSettings_mEnabled_Get(
  JoltC_PointConstraintSettings_t * self
) {
  PointConstraintSettings * selfCpp = static_cast<PointConstraintSettings *>(self->obj);
  bool result = selfCpp->mEnabled;
  return result;
};

void JoltC_PointConstraintSettings_mEnabled_Set(
  JoltC_PointConstraintSettings_t * self,
  bool mEnabled
) {
  PointConstraintSettings * selfCpp = static_cast<PointConstraintSettings *>(self->obj);
  selfCpp->mEnabled = mEnabled;
};

long JoltC_PointConstraintSettings_mNumVelocityStepsOverride_Get(
  JoltC_PointConstraintSettings_t * self
) {
  PointConstraintSettings * selfCpp = static_cast<PointConstraintSettings *>(self->obj);
  long result = selfCpp->mNumVelocityStepsOverride;
  return result;
};

void JoltC_PointConstraintSettings_mNumVelocityStepsOverride_Set(
  JoltC_PointConstraintSettings_t * self,
  long mNumVelocityStepsOverride
) {
  PointConstraintSettings * selfCpp = static_cast<PointConstraintSettings *>(self->obj);
  selfCpp->mNumVelocityStepsOverride = mNumVelocityStepsOverride;
};

long JoltC_PointConstraintSettings_mNumPositionStepsOverride_Get(
  JoltC_PointConstraintSettings_t * self
) {
  PointConstraintSettings * selfCpp = static_cast<PointConstraintSettings *>(self->obj);
  long result = selfCpp->mNumPositionStepsOverride;
  return result;
};

void JoltC_PointConstraintSettings_mNumPositionStepsOverride_Set(
  JoltC_PointConstraintSettings_t * self,
  long mNumPositionStepsOverride
) {
  PointConstraintSettings * selfCpp = static_cast<PointConstraintSettings *>(self->obj);
  selfCpp->mNumPositionStepsOverride = mNumPositionStepsOverride;
};

//endregion

#ifdef __cplusplus
}
#endif

