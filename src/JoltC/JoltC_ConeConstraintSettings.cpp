#include "JoltC/JPC_ConeConstraintSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_ConeConstraintSettings_t * JPC_ConeConstraintSettings_new() {
  JPC_ConeConstraintSettings_t * cInstance = new JPC_ConeConstraintSettings_t();
  ConeConstraintSettings * cppInstance = new ConeConstraintSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

JPC_Constraint_t * JPC_ConeConstraintSettings_Create(
  JPC_ConeConstraintSettings_t * self,
  JPC_Body_t * inBody1,
  JPC_Body_t * inBody2
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  Constraint * result = selfCpp->Create(
  *reinterpret_cast<Body *>(inBody1->obj),
  *reinterpret_cast<Body *>(inBody2->obj)
  );
  return reinterpret_cast<JPC_Constraint_t *>(result);
};

unsigned long JPC_ConeConstraintSettings_GetRefCount(
  JPC_ConeConstraintSettings_t * self
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_ConeConstraintSettings_AddRef(
  JPC_ConeConstraintSettings_t * self
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_ConeConstraintSettings_Release(
  JPC_ConeConstraintSettings_t * self
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  
  selfCpp->Release();
};

//endregion functions

//region properties

JPC_EConstraintSpace JPC_ConeConstraintSettings_mSpace_Get(
  JPC_ConeConstraintSettings_t * self
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  EConstraintSpace result = selfCpp->mSpace;
  return static_cast<JPC_EConstraintSpace>(static_cast<int>(result));
};

void JPC_ConeConstraintSettings_mSpace_Set(
  JPC_ConeConstraintSettings_t * self,
  JPC_EConstraintSpace mSpace
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  selfCpp->mSpace = static_cast<EConstraintSpace>(static_cast<int>(mSpace));
};

JPC_RVec3_t * JPC_ConeConstraintSettings_mPoint1_Get(
  JPC_ConeConstraintSettings_t * self
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  RVec3 resultValue = selfCpp->mPoint1;
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

void JPC_ConeConstraintSettings_mPoint1_Set(
  JPC_ConeConstraintSettings_t * self,
  JPC_RVec3_t * mPoint1
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  selfCpp->mPoint1 = *reinterpret_cast<RVec3 *>(mPoint1->obj);
};

JPC_Vec3_t * JPC_ConeConstraintSettings_mTwistAxis1_Get(
  JPC_ConeConstraintSettings_t * self
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mTwistAxis1;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_ConeConstraintSettings_mTwistAxis1_Set(
  JPC_ConeConstraintSettings_t * self,
  JPC_Vec3_t * mTwistAxis1
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  selfCpp->mTwistAxis1 = *reinterpret_cast<Vec3 *>(mTwistAxis1->obj);
};

JPC_RVec3_t * JPC_ConeConstraintSettings_mPoint2_Get(
  JPC_ConeConstraintSettings_t * self
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  RVec3 resultValue = selfCpp->mPoint2;
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

void JPC_ConeConstraintSettings_mPoint2_Set(
  JPC_ConeConstraintSettings_t * self,
  JPC_RVec3_t * mPoint2
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  selfCpp->mPoint2 = *reinterpret_cast<RVec3 *>(mPoint2->obj);
};

JPC_Vec3_t * JPC_ConeConstraintSettings_mTwistAxis2_Get(
  JPC_ConeConstraintSettings_t * self
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mTwistAxis2;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_ConeConstraintSettings_mTwistAxis2_Set(
  JPC_ConeConstraintSettings_t * self,
  JPC_Vec3_t * mTwistAxis2
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  selfCpp->mTwistAxis2 = *reinterpret_cast<Vec3 *>(mTwistAxis2->obj);
};

float JPC_ConeConstraintSettings_mHalfConeAngle_Get(
  JPC_ConeConstraintSettings_t * self
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  float result = selfCpp->mHalfConeAngle;
  return result;
};

void JPC_ConeConstraintSettings_mHalfConeAngle_Set(
  JPC_ConeConstraintSettings_t * self,
  float mHalfConeAngle
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  selfCpp->mHalfConeAngle = mHalfConeAngle;
};

bool JPC_ConeConstraintSettings_mEnabled_Get(
  JPC_ConeConstraintSettings_t * self
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  bool result = selfCpp->mEnabled;
  return result;
};

void JPC_ConeConstraintSettings_mEnabled_Set(
  JPC_ConeConstraintSettings_t * self,
  bool mEnabled
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  selfCpp->mEnabled = mEnabled;
};

long JPC_ConeConstraintSettings_mNumVelocityStepsOverride_Get(
  JPC_ConeConstraintSettings_t * self
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  long result = selfCpp->mNumVelocityStepsOverride;
  return result;
};

void JPC_ConeConstraintSettings_mNumVelocityStepsOverride_Set(
  JPC_ConeConstraintSettings_t * self,
  long mNumVelocityStepsOverride
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  selfCpp->mNumVelocityStepsOverride = mNumVelocityStepsOverride;
};

long JPC_ConeConstraintSettings_mNumPositionStepsOverride_Get(
  JPC_ConeConstraintSettings_t * self
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  long result = selfCpp->mNumPositionStepsOverride;
  return result;
};

void JPC_ConeConstraintSettings_mNumPositionStepsOverride_Set(
  JPC_ConeConstraintSettings_t * self,
  long mNumPositionStepsOverride
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  selfCpp->mNumPositionStepsOverride = mNumPositionStepsOverride;
};

//endregion properties

#ifdef __cplusplus
}
#endif

