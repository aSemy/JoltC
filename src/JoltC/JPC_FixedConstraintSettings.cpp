#include "JoltC/JPC_FixedConstraintSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_FixedConstraintSettings_t * JPC_FixedConstraintSettings_new() {
  JPC_FixedConstraintSettings_t * cInstance = new JPC_FixedConstraintSettings_t();
  FixedConstraintSettings * cppInstance = new FixedConstraintSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

JPC_Constraint_t * JPC_FixedConstraintSettings_Create(
  JPC_FixedConstraintSettings_t * self,
  JPC_Body_t * inBody1,
  JPC_Body_t * inBody2
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  Constraint * result = selfCpp->Create(
  *reinterpret_cast<Body *>(inBody1->obj),
  *reinterpret_cast<Body *>(inBody2->obj)
  );
  return reinterpret_cast<JPC_Constraint_t *>(result);
};

unsigned long JPC_FixedConstraintSettings_GetRefCount(
  JPC_FixedConstraintSettings_t * self
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_FixedConstraintSettings_AddRef(
  JPC_FixedConstraintSettings_t * self
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_FixedConstraintSettings_Release(
  JPC_FixedConstraintSettings_t * self
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  
  selfCpp->Release();
};

//endregion functions

//region properties

JPC_EConstraintSpace JPC_FixedConstraintSettings_mSpace_Get(
  JPC_FixedConstraintSettings_t * self
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  EConstraintSpace result = selfCpp->mSpace;
  return static_cast<JPC_EConstraintSpace>(static_cast<int>(result));
};

void JPC_FixedConstraintSettings_mSpace_Set(
  JPC_FixedConstraintSettings_t * self,
  JPC_EConstraintSpace mSpace
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  selfCpp->mSpace = static_cast<EConstraintSpace>(static_cast<int>(mSpace));
};

bool JPC_FixedConstraintSettings_mAutoDetectPoint_Get(
  JPC_FixedConstraintSettings_t * self
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  bool result = selfCpp->mAutoDetectPoint;
  return result;
};

void JPC_FixedConstraintSettings_mAutoDetectPoint_Set(
  JPC_FixedConstraintSettings_t * self,
  bool mAutoDetectPoint
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  selfCpp->mAutoDetectPoint = mAutoDetectPoint;
};

JPC_RVec3_t * JPC_FixedConstraintSettings_mPoint1_Get(
  JPC_FixedConstraintSettings_t * self
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  RVec3 resultValue = selfCpp->mPoint1;
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

void JPC_FixedConstraintSettings_mPoint1_Set(
  JPC_FixedConstraintSettings_t * self,
  JPC_RVec3_t * mPoint1
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  selfCpp->mPoint1 = *reinterpret_cast<RVec3 *>(mPoint1->obj);
};

JPC_Vec3_t * JPC_FixedConstraintSettings_mAxisX1_Get(
  JPC_FixedConstraintSettings_t * self
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mAxisX1;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_FixedConstraintSettings_mAxisX1_Set(
  JPC_FixedConstraintSettings_t * self,
  JPC_Vec3_t * mAxisX1
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  selfCpp->mAxisX1 = *reinterpret_cast<Vec3 *>(mAxisX1->obj);
};

JPC_Vec3_t * JPC_FixedConstraintSettings_mAxisY1_Get(
  JPC_FixedConstraintSettings_t * self
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mAxisY1;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_FixedConstraintSettings_mAxisY1_Set(
  JPC_FixedConstraintSettings_t * self,
  JPC_Vec3_t * mAxisY1
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  selfCpp->mAxisY1 = *reinterpret_cast<Vec3 *>(mAxisY1->obj);
};

JPC_RVec3_t * JPC_FixedConstraintSettings_mPoint2_Get(
  JPC_FixedConstraintSettings_t * self
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  RVec3 resultValue = selfCpp->mPoint2;
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

void JPC_FixedConstraintSettings_mPoint2_Set(
  JPC_FixedConstraintSettings_t * self,
  JPC_RVec3_t * mPoint2
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  selfCpp->mPoint2 = *reinterpret_cast<RVec3 *>(mPoint2->obj);
};

JPC_Vec3_t * JPC_FixedConstraintSettings_mAxisX2_Get(
  JPC_FixedConstraintSettings_t * self
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mAxisX2;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_FixedConstraintSettings_mAxisX2_Set(
  JPC_FixedConstraintSettings_t * self,
  JPC_Vec3_t * mAxisX2
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  selfCpp->mAxisX2 = *reinterpret_cast<Vec3 *>(mAxisX2->obj);
};

JPC_Vec3_t * JPC_FixedConstraintSettings_mAxisY2_Get(
  JPC_FixedConstraintSettings_t * self
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mAxisY2;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_FixedConstraintSettings_mAxisY2_Set(
  JPC_FixedConstraintSettings_t * self,
  JPC_Vec3_t * mAxisY2
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  selfCpp->mAxisY2 = *reinterpret_cast<Vec3 *>(mAxisY2->obj);
};

bool JPC_FixedConstraintSettings_mEnabled_Get(
  JPC_FixedConstraintSettings_t * self
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  bool result = selfCpp->mEnabled;
  return result;
};

void JPC_FixedConstraintSettings_mEnabled_Set(
  JPC_FixedConstraintSettings_t * self,
  bool mEnabled
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  selfCpp->mEnabled = mEnabled;
};

long JPC_FixedConstraintSettings_mNumVelocityStepsOverride_Get(
  JPC_FixedConstraintSettings_t * self
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  long result = selfCpp->mNumVelocityStepsOverride;
  return result;
};

void JPC_FixedConstraintSettings_mNumVelocityStepsOverride_Set(
  JPC_FixedConstraintSettings_t * self,
  long mNumVelocityStepsOverride
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  selfCpp->mNumVelocityStepsOverride = mNumVelocityStepsOverride;
};

long JPC_FixedConstraintSettings_mNumPositionStepsOverride_Get(
  JPC_FixedConstraintSettings_t * self
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  long result = selfCpp->mNumPositionStepsOverride;
  return result;
};

void JPC_FixedConstraintSettings_mNumPositionStepsOverride_Set(
  JPC_FixedConstraintSettings_t * self,
  long mNumPositionStepsOverride
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  selfCpp->mNumPositionStepsOverride = mNumPositionStepsOverride;
};

//endregion properties

#ifdef __cplusplus
}
#endif

