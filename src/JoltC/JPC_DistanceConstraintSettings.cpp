#include "JoltC/JPC_DistanceConstraintSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_DistanceConstraintSettings_t * JPC_DistanceConstraintSettings_new() {
  JPC_DistanceConstraintSettings_t * cInstance = new JPC_DistanceConstraintSettings_t();
  DistanceConstraintSettings * cppInstance = new DistanceConstraintSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

JPC_Constraint_t * JPC_DistanceConstraintSettings_Create(
  JPC_DistanceConstraintSettings_t * self,
  JPC_Body_t * inBody1,
  JPC_Body_t * inBody2
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  Constraint * result = selfCpp->Create(
  *reinterpret_cast<Body *>(inBody1->obj),
  *reinterpret_cast<Body *>(inBody2->obj)
  );
  return reinterpret_cast<JPC_Constraint_t *>(result);
};

unsigned long JPC_DistanceConstraintSettings_GetRefCount(
  JPC_DistanceConstraintSettings_t * self
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_DistanceConstraintSettings_AddRef(
  JPC_DistanceConstraintSettings_t * self
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_DistanceConstraintSettings_Release(
  JPC_DistanceConstraintSettings_t * self
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  
  selfCpp->Release();
};

//endregion functions

//region properties

JPC_EConstraintSpace JPC_DistanceConstraintSettings_mSpace_Get(
  JPC_DistanceConstraintSettings_t * self
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  EConstraintSpace result = selfCpp->mSpace;
  return static_cast<JPC_EConstraintSpace>(static_cast<int>(result));
};

void JPC_DistanceConstraintSettings_mSpace_Set(
  JPC_DistanceConstraintSettings_t * self,
  JPC_EConstraintSpace mSpace
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  selfCpp->mSpace = static_cast<EConstraintSpace>(static_cast<int>(mSpace));
};

JPC_RVec3_t * JPC_DistanceConstraintSettings_mPoint1_Get(
  JPC_DistanceConstraintSettings_t * self
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  RVec3 resultValue = selfCpp->mPoint1;
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

void JPC_DistanceConstraintSettings_mPoint1_Set(
  JPC_DistanceConstraintSettings_t * self,
  JPC_RVec3_t * mPoint1
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  selfCpp->mPoint1 = *reinterpret_cast<RVec3 *>(mPoint1->obj);
};

JPC_RVec3_t * JPC_DistanceConstraintSettings_mPoint2_Get(
  JPC_DistanceConstraintSettings_t * self
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  RVec3 resultValue = selfCpp->mPoint2;
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

void JPC_DistanceConstraintSettings_mPoint2_Set(
  JPC_DistanceConstraintSettings_t * self,
  JPC_RVec3_t * mPoint2
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  selfCpp->mPoint2 = *reinterpret_cast<RVec3 *>(mPoint2->obj);
};

float JPC_DistanceConstraintSettings_mMinDistance_Get(
  JPC_DistanceConstraintSettings_t * self
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  float result = selfCpp->mMinDistance;
  return result;
};

void JPC_DistanceConstraintSettings_mMinDistance_Set(
  JPC_DistanceConstraintSettings_t * self,
  float mMinDistance
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  selfCpp->mMinDistance = mMinDistance;
};

float JPC_DistanceConstraintSettings_mMaxDistance_Get(
  JPC_DistanceConstraintSettings_t * self
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  float result = selfCpp->mMaxDistance;
  return result;
};

void JPC_DistanceConstraintSettings_mMaxDistance_Set(
  JPC_DistanceConstraintSettings_t * self,
  float mMaxDistance
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  selfCpp->mMaxDistance = mMaxDistance;
};

JPC_SpringSettings_t * JPC_DistanceConstraintSettings_mLimitsSpringSettings_Get(
  JPC_DistanceConstraintSettings_t * self
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  SpringSettings resultValue = selfCpp->mLimitsSpringSettings;
  SpringSettings* result = new SpringSettings(resultValue);
  return reinterpret_cast<JPC_SpringSettings_t *>(result);
};

void JPC_DistanceConstraintSettings_mLimitsSpringSettings_Set(
  JPC_DistanceConstraintSettings_t * self,
  JPC_SpringSettings_t * mLimitsSpringSettings
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  selfCpp->mLimitsSpringSettings = *reinterpret_cast<SpringSettings *>(mLimitsSpringSettings->obj);
};

bool JPC_DistanceConstraintSettings_mEnabled_Get(
  JPC_DistanceConstraintSettings_t * self
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  bool result = selfCpp->mEnabled;
  return result;
};

void JPC_DistanceConstraintSettings_mEnabled_Set(
  JPC_DistanceConstraintSettings_t * self,
  bool mEnabled
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  selfCpp->mEnabled = mEnabled;
};

long JPC_DistanceConstraintSettings_mNumVelocityStepsOverride_Get(
  JPC_DistanceConstraintSettings_t * self
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  long result = selfCpp->mNumVelocityStepsOverride;
  return result;
};

void JPC_DistanceConstraintSettings_mNumVelocityStepsOverride_Set(
  JPC_DistanceConstraintSettings_t * self,
  long mNumVelocityStepsOverride
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  selfCpp->mNumVelocityStepsOverride = mNumVelocityStepsOverride;
};

long JPC_DistanceConstraintSettings_mNumPositionStepsOverride_Get(
  JPC_DistanceConstraintSettings_t * self
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  long result = selfCpp->mNumPositionStepsOverride;
  return result;
};

void JPC_DistanceConstraintSettings_mNumPositionStepsOverride_Set(
  JPC_DistanceConstraintSettings_t * self,
  long mNumPositionStepsOverride
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  selfCpp->mNumPositionStepsOverride = mNumPositionStepsOverride;
};

//endregion properties

#ifdef __cplusplus
}
#endif

