#include "JoltC/JoltC_DistanceConstraintSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_DistanceConstraintSettings_t * JoltC_DistanceConstraintSettings_new() {
  JoltC_DistanceConstraintSettings_t * cInstance = new JoltC_DistanceConstraintSettings_t();
  DistanceConstraintSettings * cppInstance = new DistanceConstraintSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

JoltC_Constraint_t * JoltC_DistanceConstraintSettings_Create(
  JoltC_DistanceConstraintSettings_t * self,
  JoltC_Body_t * inBody1,
  JoltC_Body_t * inBody2
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  Constraint * resultValue = selfCpp->Create(
    *reinterpret_cast<Body *>(inBody1->obj),
    *reinterpret_cast<Body *>(inBody2->obj)
  );
  JoltC_Constraint_t* result = new JoltC_Constraint_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

unsigned long JoltC_DistanceConstraintSettings_GetRefCount(
  JoltC_DistanceConstraintSettings_t * self
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_DistanceConstraintSettings_AddRef(
  JoltC_DistanceConstraintSettings_t * self
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  
  selfCpp->AddRef();
};

void JoltC_DistanceConstraintSettings_Release(
  JoltC_DistanceConstraintSettings_t * self
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  
  selfCpp->Release();
};

//endregion

//region properties

JoltC_EConstraintSpace JoltC_DistanceConstraintSettings_mSpace_Get(
  JoltC_DistanceConstraintSettings_t * self
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  EConstraintSpace result = selfCpp->mSpace;
  return static_cast<JoltC_EConstraintSpace>(static_cast<int>(result));
};

void JoltC_DistanceConstraintSettings_mSpace_Set(
  JoltC_DistanceConstraintSettings_t * self,
  JoltC_EConstraintSpace mSpace
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  selfCpp->mSpace = static_cast<EConstraintSpace>(static_cast<int>(mSpace));
};

JoltC_RVec3_t * JoltC_DistanceConstraintSettings_mPoint1_Get(
  JoltC_DistanceConstraintSettings_t * self
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  static RVec3 resultValue = selfCpp->mPoint1;
  JoltC_RVec3_t* result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_DistanceConstraintSettings_mPoint1_Set(
  JoltC_DistanceConstraintSettings_t * self,
  JoltC_RVec3_t * mPoint1
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  selfCpp->mPoint1 = *reinterpret_cast<RVec3 *>(mPoint1->obj);
};

JoltC_RVec3_t * JoltC_DistanceConstraintSettings_mPoint2_Get(
  JoltC_DistanceConstraintSettings_t * self
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  static RVec3 resultValue = selfCpp->mPoint2;
  JoltC_RVec3_t* result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_DistanceConstraintSettings_mPoint2_Set(
  JoltC_DistanceConstraintSettings_t * self,
  JoltC_RVec3_t * mPoint2
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  selfCpp->mPoint2 = *reinterpret_cast<RVec3 *>(mPoint2->obj);
};

float JoltC_DistanceConstraintSettings_mMinDistance_Get(
  JoltC_DistanceConstraintSettings_t * self
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  float result = selfCpp->mMinDistance;
  return result;
};

void JoltC_DistanceConstraintSettings_mMinDistance_Set(
  JoltC_DistanceConstraintSettings_t * self,
  float mMinDistance
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  selfCpp->mMinDistance = mMinDistance;
};

float JoltC_DistanceConstraintSettings_mMaxDistance_Get(
  JoltC_DistanceConstraintSettings_t * self
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  float result = selfCpp->mMaxDistance;
  return result;
};

void JoltC_DistanceConstraintSettings_mMaxDistance_Set(
  JoltC_DistanceConstraintSettings_t * self,
  float mMaxDistance
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  selfCpp->mMaxDistance = mMaxDistance;
};

JoltC_SpringSettings_t * JoltC_DistanceConstraintSettings_mLimitsSpringSettings_Get(
  JoltC_DistanceConstraintSettings_t * self
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  static SpringSettings resultValue = selfCpp->mLimitsSpringSettings;
  JoltC_SpringSettings_t* result = new JoltC_SpringSettings_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_DistanceConstraintSettings_mLimitsSpringSettings_Set(
  JoltC_DistanceConstraintSettings_t * self,
  JoltC_SpringSettings_t * mLimitsSpringSettings
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  selfCpp->mLimitsSpringSettings = *reinterpret_cast<SpringSettings *>(mLimitsSpringSettings->obj);
};

bool JoltC_DistanceConstraintSettings_mEnabled_Get(
  JoltC_DistanceConstraintSettings_t * self
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  bool result = selfCpp->mEnabled;
  return result;
};

void JoltC_DistanceConstraintSettings_mEnabled_Set(
  JoltC_DistanceConstraintSettings_t * self,
  bool mEnabled
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  selfCpp->mEnabled = mEnabled;
};

long JoltC_DistanceConstraintSettings_mNumVelocityStepsOverride_Get(
  JoltC_DistanceConstraintSettings_t * self
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  long result = selfCpp->mNumVelocityStepsOverride;
  return result;
};

void JoltC_DistanceConstraintSettings_mNumVelocityStepsOverride_Set(
  JoltC_DistanceConstraintSettings_t * self,
  long mNumVelocityStepsOverride
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  selfCpp->mNumVelocityStepsOverride = mNumVelocityStepsOverride;
};

long JoltC_DistanceConstraintSettings_mNumPositionStepsOverride_Get(
  JoltC_DistanceConstraintSettings_t * self
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  long result = selfCpp->mNumPositionStepsOverride;
  return result;
};

void JoltC_DistanceConstraintSettings_mNumPositionStepsOverride_Set(
  JoltC_DistanceConstraintSettings_t * self,
  long mNumPositionStepsOverride
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  selfCpp->mNumPositionStepsOverride = mNumPositionStepsOverride;
};

//endregion

#ifdef __cplusplus
}
#endif

