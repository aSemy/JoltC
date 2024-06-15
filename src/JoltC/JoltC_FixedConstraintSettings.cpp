#include "JoltC/JoltC_FixedConstraintSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `FixedConstraintSettings` instance.
 */
JoltC_FixedConstraintSettings_t * JoltC_FixedConstraintSettings_new() {
  JoltC_FixedConstraintSettings_t * cInstance = new JoltC_FixedConstraintSettings_t();
  FixedConstraintSettings * cppInstance = new FixedConstraintSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_FixedConstraintSettings_destroy(
  JoltC_FixedConstraintSettings_t * self
){
  if (self == NULL) return;
  delete static_cast<FixedConstraintSettings *>(self->obj);
  free(self);
}

//endregion
//region functions

JoltC_Constraint_t * JoltC_FixedConstraintSettings_Create(
  JoltC_FixedConstraintSettings_t * self,
  JoltC_Body_t * inBody1,
  JoltC_Body_t * inBody2
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
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

unsigned long JoltC_FixedConstraintSettings_GetRefCount(
  JoltC_FixedConstraintSettings_t * self
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_FixedConstraintSettings_AddRef(
  JoltC_FixedConstraintSettings_t * self
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_FixedConstraintSettings_Release(
  JoltC_FixedConstraintSettings_t * self
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  selfCpp->Release();
}

//endregion

//region properties

JoltC_EConstraintSpace JoltC_FixedConstraintSettings_mSpace_Get(
  JoltC_FixedConstraintSettings_t * self
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  EConstraintSpace result = selfCpp->mSpace;
  return static_cast<JoltC_EConstraintSpace>(static_cast<int>(result));
}

void JoltC_FixedConstraintSettings_mSpace_Set(
  JoltC_FixedConstraintSettings_t * self,
  JoltC_EConstraintSpace mSpace
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  selfCpp->mSpace = static_cast<EConstraintSpace>(static_cast<int>(mSpace));
}

bool JoltC_FixedConstraintSettings_mAutoDetectPoint_Get(
  JoltC_FixedConstraintSettings_t * self
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  return selfCpp->mAutoDetectPoint;
}

void JoltC_FixedConstraintSettings_mAutoDetectPoint_Set(
  JoltC_FixedConstraintSettings_t * self,
  bool mAutoDetectPoint
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  selfCpp->mAutoDetectPoint = mAutoDetectPoint;
}

JoltC_RVec3_t * JoltC_FixedConstraintSettings_mPoint1_Get(
  JoltC_FixedConstraintSettings_t * self
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  RVec3 * resultPtr = new RVec3();
  *resultPtr = selfCpp->mPoint1;
  JoltC_RVec3_t * result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_FixedConstraintSettings_mPoint1_Set(
  JoltC_FixedConstraintSettings_t * self,
  JoltC_RVec3_t * mPoint1
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  selfCpp->mPoint1 = *static_cast<RVec3 *>(mPoint1->obj);
}

JoltC_Vec3_t * JoltC_FixedConstraintSettings_mAxisX1_Get(
  JoltC_FixedConstraintSettings_t * self
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mAxisX1;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_FixedConstraintSettings_mAxisX1_Set(
  JoltC_FixedConstraintSettings_t * self,
  JoltC_Vec3_t * mAxisX1
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  selfCpp->mAxisX1 = *static_cast<Vec3 *>(mAxisX1->obj);
}

JoltC_Vec3_t * JoltC_FixedConstraintSettings_mAxisY1_Get(
  JoltC_FixedConstraintSettings_t * self
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mAxisY1;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_FixedConstraintSettings_mAxisY1_Set(
  JoltC_FixedConstraintSettings_t * self,
  JoltC_Vec3_t * mAxisY1
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  selfCpp->mAxisY1 = *static_cast<Vec3 *>(mAxisY1->obj);
}

JoltC_RVec3_t * JoltC_FixedConstraintSettings_mPoint2_Get(
  JoltC_FixedConstraintSettings_t * self
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  RVec3 * resultPtr = new RVec3();
  *resultPtr = selfCpp->mPoint2;
  JoltC_RVec3_t * result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_FixedConstraintSettings_mPoint2_Set(
  JoltC_FixedConstraintSettings_t * self,
  JoltC_RVec3_t * mPoint2
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  selfCpp->mPoint2 = *static_cast<RVec3 *>(mPoint2->obj);
}

JoltC_Vec3_t * JoltC_FixedConstraintSettings_mAxisX2_Get(
  JoltC_FixedConstraintSettings_t * self
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mAxisX2;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_FixedConstraintSettings_mAxisX2_Set(
  JoltC_FixedConstraintSettings_t * self,
  JoltC_Vec3_t * mAxisX2
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  selfCpp->mAxisX2 = *static_cast<Vec3 *>(mAxisX2->obj);
}

JoltC_Vec3_t * JoltC_FixedConstraintSettings_mAxisY2_Get(
  JoltC_FixedConstraintSettings_t * self
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mAxisY2;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_FixedConstraintSettings_mAxisY2_Set(
  JoltC_FixedConstraintSettings_t * self,
  JoltC_Vec3_t * mAxisY2
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  selfCpp->mAxisY2 = *static_cast<Vec3 *>(mAxisY2->obj);
}

bool JoltC_FixedConstraintSettings_mEnabled_Get(
  JoltC_FixedConstraintSettings_t * self
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  return selfCpp->mEnabled;
}

void JoltC_FixedConstraintSettings_mEnabled_Set(
  JoltC_FixedConstraintSettings_t * self,
  bool mEnabled
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  selfCpp->mEnabled = mEnabled;
}

long JoltC_FixedConstraintSettings_mNumVelocityStepsOverride_Get(
  JoltC_FixedConstraintSettings_t * self
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  return selfCpp->mNumVelocityStepsOverride;
}

void JoltC_FixedConstraintSettings_mNumVelocityStepsOverride_Set(
  JoltC_FixedConstraintSettings_t * self,
  long mNumVelocityStepsOverride
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  selfCpp->mNumVelocityStepsOverride = mNumVelocityStepsOverride;
}

long JoltC_FixedConstraintSettings_mNumPositionStepsOverride_Get(
  JoltC_FixedConstraintSettings_t * self
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  return selfCpp->mNumPositionStepsOverride;
}

void JoltC_FixedConstraintSettings_mNumPositionStepsOverride_Set(
  JoltC_FixedConstraintSettings_t * self,
  long mNumPositionStepsOverride
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  selfCpp->mNumPositionStepsOverride = mNumPositionStepsOverride;
}

//endregion


#ifdef __cplusplus
}
#endif
