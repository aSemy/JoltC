#include "JoltC/JoltC_ConeConstraintSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `ConeConstraintSettings` instance.
 */
JoltC_ConeConstraintSettings_t * JoltC_ConeConstraintSettings_new() {
  JoltC_ConeConstraintSettings_t * cInstance = new JoltC_ConeConstraintSettings_t();
  ConeConstraintSettings * cppInstance = new ConeConstraintSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_ConeConstraintSettings_destroy(
  JoltC_ConeConstraintSettings_t * self
){
  if (self == NULL) return;
  delete static_cast<ConeConstraintSettings *>(self->obj);
  free(self);
}

//endregion
//region functions

JoltC_Constraint_t * JoltC_ConeConstraintSettings_Create(
  JoltC_ConeConstraintSettings_t * self,
  JoltC_Body_t * inBody1,
  JoltC_Body_t * inBody2
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  Body * inBody1Cpp = static_cast<Body *>(inBody1->obj);
  Body * inBody2Cpp = static_cast<Body *>(inBody2->obj);
  const Constraint * resultPtr = selfCpp->Create(
    *inBody1Cpp,
    *inBody2Cpp
  );
  JoltC_Constraint_t * result = new JoltC_Constraint_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

unsigned long JoltC_ConeConstraintSettings_GetRefCount(
  JoltC_ConeConstraintSettings_t * self
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_ConeConstraintSettings_AddRef(
  JoltC_ConeConstraintSettings_t * self
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_ConeConstraintSettings_Release(
  JoltC_ConeConstraintSettings_t * self
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  selfCpp->Release();
}

//endregion

//region properties

JoltC_EConstraintSpace JoltC_ConeConstraintSettings_mSpace_Get(
  JoltC_ConeConstraintSettings_t * self
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  EConstraintSpace result = selfCpp->mSpace;
  return static_cast<JoltC_EConstraintSpace>(static_cast<int>(result));
}

void JoltC_ConeConstraintSettings_mSpace_Set(
  JoltC_ConeConstraintSettings_t * self,
  JoltC_EConstraintSpace mSpace
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  selfCpp->mSpace = static_cast<EConstraintSpace>(static_cast<int>(mSpace));
}

JoltC_RVec3_t * JoltC_ConeConstraintSettings_mPoint1_Get(
  JoltC_ConeConstraintSettings_t * self
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  RVec3 * resultPtr = new RVec3();
  *resultPtr = selfCpp->mPoint1;
  JoltC_RVec3_t * result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_ConeConstraintSettings_mPoint1_Set(
  JoltC_ConeConstraintSettings_t * self,
  JoltC_RVec3_t * mPoint1
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  selfCpp->mPoint1 = *static_cast<RVec3 *>(mPoint1->obj);
}

JoltC_Vec3_t * JoltC_ConeConstraintSettings_mTwistAxis1_Get(
  JoltC_ConeConstraintSettings_t * self
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mTwistAxis1;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_ConeConstraintSettings_mTwistAxis1_Set(
  JoltC_ConeConstraintSettings_t * self,
  JoltC_Vec3_t * mTwistAxis1
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  selfCpp->mTwistAxis1 = *static_cast<Vec3 *>(mTwistAxis1->obj);
}

JoltC_RVec3_t * JoltC_ConeConstraintSettings_mPoint2_Get(
  JoltC_ConeConstraintSettings_t * self
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  RVec3 * resultPtr = new RVec3();
  *resultPtr = selfCpp->mPoint2;
  JoltC_RVec3_t * result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_ConeConstraintSettings_mPoint2_Set(
  JoltC_ConeConstraintSettings_t * self,
  JoltC_RVec3_t * mPoint2
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  selfCpp->mPoint2 = *static_cast<RVec3 *>(mPoint2->obj);
}

JoltC_Vec3_t * JoltC_ConeConstraintSettings_mTwistAxis2_Get(
  JoltC_ConeConstraintSettings_t * self
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mTwistAxis2;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_ConeConstraintSettings_mTwistAxis2_Set(
  JoltC_ConeConstraintSettings_t * self,
  JoltC_Vec3_t * mTwistAxis2
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  selfCpp->mTwistAxis2 = *static_cast<Vec3 *>(mTwistAxis2->obj);
}

float JoltC_ConeConstraintSettings_mHalfConeAngle_Get(
  JoltC_ConeConstraintSettings_t * self
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  return selfCpp->mHalfConeAngle;
}

void JoltC_ConeConstraintSettings_mHalfConeAngle_Set(
  JoltC_ConeConstraintSettings_t * self,
  float mHalfConeAngle
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  selfCpp->mHalfConeAngle = mHalfConeAngle;
}

bool JoltC_ConeConstraintSettings_mEnabled_Get(
  JoltC_ConeConstraintSettings_t * self
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  return selfCpp->mEnabled;
}

void JoltC_ConeConstraintSettings_mEnabled_Set(
  JoltC_ConeConstraintSettings_t * self,
  bool mEnabled
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  selfCpp->mEnabled = mEnabled;
}

long JoltC_ConeConstraintSettings_mNumVelocityStepsOverride_Get(
  JoltC_ConeConstraintSettings_t * self
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  return selfCpp->mNumVelocityStepsOverride;
}

void JoltC_ConeConstraintSettings_mNumVelocityStepsOverride_Set(
  JoltC_ConeConstraintSettings_t * self,
  long mNumVelocityStepsOverride
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  selfCpp->mNumVelocityStepsOverride = mNumVelocityStepsOverride;
}

long JoltC_ConeConstraintSettings_mNumPositionStepsOverride_Get(
  JoltC_ConeConstraintSettings_t * self
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  return selfCpp->mNumPositionStepsOverride;
}

void JoltC_ConeConstraintSettings_mNumPositionStepsOverride_Set(
  JoltC_ConeConstraintSettings_t * self,
  long mNumPositionStepsOverride
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  selfCpp->mNumPositionStepsOverride = mNumPositionStepsOverride;
}

//endregion


#ifdef __cplusplus
}
#endif
