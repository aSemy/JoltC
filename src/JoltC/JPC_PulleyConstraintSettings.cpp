#include "JoltC/JPC_PulleyConstraintSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_PulleyConstraintSettings_t * JPC_PulleyConstraintSettings_new() {
  JPC_PulleyConstraintSettings_t * cInstance = new JPC_PulleyConstraintSettings_t();
  PulleyConstraintSettings * cppInstance = new PulleyConstraintSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

JPC_Constraint_t * JPC_PulleyConstraintSettings_Create(
  JPC_PulleyConstraintSettings_t * self,
  JPC_Body_t * inBody1,
  JPC_Body_t * inBody2
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  Constraint * result = selfCpp->Create(
  *reinterpret_cast<Body *>(inBody1->obj),
  *reinterpret_cast<Body *>(inBody2->obj)
  );
  return reinterpret_cast<JPC_Constraint_t *>(result);
};

unsigned long JPC_PulleyConstraintSettings_GetRefCount(
  JPC_PulleyConstraintSettings_t * self
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_PulleyConstraintSettings_AddRef(
  JPC_PulleyConstraintSettings_t * self
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_PulleyConstraintSettings_Release(
  JPC_PulleyConstraintSettings_t * self
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  
  selfCpp->Release();
};

//endregion functions

//region properties

JPC_EConstraintSpace JPC_PulleyConstraintSettings_mSpace_Get(
  JPC_PulleyConstraintSettings_t * self
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  EConstraintSpace result = selfCpp->mSpace;
  return static_cast<JPC_EConstraintSpace>(static_cast<int>(result));
};

void JPC_PulleyConstraintSettings_mSpace_Set(
  JPC_PulleyConstraintSettings_t * self,
  JPC_EConstraintSpace mSpace
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  selfCpp->mSpace = static_cast<EConstraintSpace>(static_cast<int>(mSpace));
};

JPC_RVec3_t * JPC_PulleyConstraintSettings_mBodyPoint1_Get(
  JPC_PulleyConstraintSettings_t * self
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  RVec3 resultValue = selfCpp->mBodyPoint1;
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

void JPC_PulleyConstraintSettings_mBodyPoint1_Set(
  JPC_PulleyConstraintSettings_t * self,
  JPC_RVec3_t * mBodyPoint1
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  selfCpp->mBodyPoint1 = *reinterpret_cast<RVec3 *>(mBodyPoint1->obj);
};

JPC_RVec3_t * JPC_PulleyConstraintSettings_mFixedPoint1_Get(
  JPC_PulleyConstraintSettings_t * self
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  RVec3 resultValue = selfCpp->mFixedPoint1;
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

void JPC_PulleyConstraintSettings_mFixedPoint1_Set(
  JPC_PulleyConstraintSettings_t * self,
  JPC_RVec3_t * mFixedPoint1
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  selfCpp->mFixedPoint1 = *reinterpret_cast<RVec3 *>(mFixedPoint1->obj);
};

JPC_RVec3_t * JPC_PulleyConstraintSettings_mBodyPoint2_Get(
  JPC_PulleyConstraintSettings_t * self
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  RVec3 resultValue = selfCpp->mBodyPoint2;
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

void JPC_PulleyConstraintSettings_mBodyPoint2_Set(
  JPC_PulleyConstraintSettings_t * self,
  JPC_RVec3_t * mBodyPoint2
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  selfCpp->mBodyPoint2 = *reinterpret_cast<RVec3 *>(mBodyPoint2->obj);
};

JPC_RVec3_t * JPC_PulleyConstraintSettings_mFixedPoint2_Get(
  JPC_PulleyConstraintSettings_t * self
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  RVec3 resultValue = selfCpp->mFixedPoint2;
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

void JPC_PulleyConstraintSettings_mFixedPoint2_Set(
  JPC_PulleyConstraintSettings_t * self,
  JPC_RVec3_t * mFixedPoint2
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  selfCpp->mFixedPoint2 = *reinterpret_cast<RVec3 *>(mFixedPoint2->obj);
};

float JPC_PulleyConstraintSettings_mRatio_Get(
  JPC_PulleyConstraintSettings_t * self
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  float result = selfCpp->mRatio;
  return result;
};

void JPC_PulleyConstraintSettings_mRatio_Set(
  JPC_PulleyConstraintSettings_t * self,
  float mRatio
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  selfCpp->mRatio = mRatio;
};

float JPC_PulleyConstraintSettings_mMinLength_Get(
  JPC_PulleyConstraintSettings_t * self
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  float result = selfCpp->mMinLength;
  return result;
};

void JPC_PulleyConstraintSettings_mMinLength_Set(
  JPC_PulleyConstraintSettings_t * self,
  float mMinLength
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  selfCpp->mMinLength = mMinLength;
};

float JPC_PulleyConstraintSettings_mMaxLength_Get(
  JPC_PulleyConstraintSettings_t * self
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  float result = selfCpp->mMaxLength;
  return result;
};

void JPC_PulleyConstraintSettings_mMaxLength_Set(
  JPC_PulleyConstraintSettings_t * self,
  float mMaxLength
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  selfCpp->mMaxLength = mMaxLength;
};

bool JPC_PulleyConstraintSettings_mEnabled_Get(
  JPC_PulleyConstraintSettings_t * self
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  bool result = selfCpp->mEnabled;
  return result;
};

void JPC_PulleyConstraintSettings_mEnabled_Set(
  JPC_PulleyConstraintSettings_t * self,
  bool mEnabled
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  selfCpp->mEnabled = mEnabled;
};

long JPC_PulleyConstraintSettings_mNumVelocityStepsOverride_Get(
  JPC_PulleyConstraintSettings_t * self
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  long result = selfCpp->mNumVelocityStepsOverride;
  return result;
};

void JPC_PulleyConstraintSettings_mNumVelocityStepsOverride_Set(
  JPC_PulleyConstraintSettings_t * self,
  long mNumVelocityStepsOverride
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  selfCpp->mNumVelocityStepsOverride = mNumVelocityStepsOverride;
};

long JPC_PulleyConstraintSettings_mNumPositionStepsOverride_Get(
  JPC_PulleyConstraintSettings_t * self
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  long result = selfCpp->mNumPositionStepsOverride;
  return result;
};

void JPC_PulleyConstraintSettings_mNumPositionStepsOverride_Set(
  JPC_PulleyConstraintSettings_t * self,
  long mNumPositionStepsOverride
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  selfCpp->mNumPositionStepsOverride = mNumPositionStepsOverride;
};

//endregion properties

#ifdef __cplusplus
}
#endif

