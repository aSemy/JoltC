#include "JoltC/JoltC_RackAndPinionConstraintSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_RackAndPinionConstraintSettings_t * JoltC_RackAndPinionConstraintSettings_new() {
  JoltC_RackAndPinionConstraintSettings_t * cInstance = new JoltC_RackAndPinionConstraintSettings_t();
  RackAndPinionConstraintSettings * cppInstance = new RackAndPinionConstraintSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

void JoltC_RackAndPinionConstraintSettings_SetRatio(
  JoltC_RackAndPinionConstraintSettings_t * self,
  long inNumTeethRack,
  float inRackLength,
  long inNumTeethPinion
) {
  RackAndPinionConstraintSettings * selfCpp = static_cast<RackAndPinionConstraintSettings *>(self->obj);
  selfCpp->SetRatio(
    inNumTeethRack,
    inRackLength,
    inNumTeethPinion
  );
};

JoltC_Constraint_t * JoltC_RackAndPinionConstraintSettings_Create(
  JoltC_RackAndPinionConstraintSettings_t * self,
  JoltC_Body_t * inBody1,
  JoltC_Body_t * inBody2
) {
  RackAndPinionConstraintSettings * selfCpp = static_cast<RackAndPinionConstraintSettings *>(self->obj);
  const Constraint * resultValue = selfCpp->Create(
    *reinterpret_cast<Body *>(inBody1->obj),
    *reinterpret_cast<Body *>(inBody2->obj)
  );
  JoltC_Constraint_t* result = new JoltC_Constraint_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

unsigned long JoltC_RackAndPinionConstraintSettings_GetRefCount(
  JoltC_RackAndPinionConstraintSettings_t * self
) {
  RackAndPinionConstraintSettings * selfCpp = static_cast<RackAndPinionConstraintSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_RackAndPinionConstraintSettings_AddRef(
  JoltC_RackAndPinionConstraintSettings_t * self
) {
  RackAndPinionConstraintSettings * selfCpp = static_cast<RackAndPinionConstraintSettings *>(self->obj);
  selfCpp->AddRef();
};

void JoltC_RackAndPinionConstraintSettings_Release(
  JoltC_RackAndPinionConstraintSettings_t * self
) {
  RackAndPinionConstraintSettings * selfCpp = static_cast<RackAndPinionConstraintSettings *>(self->obj);
  selfCpp->Release();
};

//endregion

//region properties

JoltC_EConstraintSpace JoltC_RackAndPinionConstraintSettings_mSpace_Get(
  JoltC_RackAndPinionConstraintSettings_t * self
) {
  RackAndPinionConstraintSettings * selfCpp = static_cast<RackAndPinionConstraintSettings *>(self->obj);
  EConstraintSpace result = selfCpp->mSpace;
  return static_cast<JoltC_EConstraintSpace>(static_cast<int>(result));
};

void JoltC_RackAndPinionConstraintSettings_mSpace_Set(
  JoltC_RackAndPinionConstraintSettings_t * self,
  JoltC_EConstraintSpace mSpace
) {
  RackAndPinionConstraintSettings * selfCpp = static_cast<RackAndPinionConstraintSettings *>(self->obj);
  selfCpp->mSpace = static_cast<EConstraintSpace>(static_cast<int>(mSpace));
};

JoltC_Vec3_t * JoltC_RackAndPinionConstraintSettings_mHingeAxis_Get(
  JoltC_RackAndPinionConstraintSettings_t * self
) {
  RackAndPinionConstraintSettings * selfCpp = static_cast<RackAndPinionConstraintSettings *>(self->obj);
  const Vec3& resultValue = selfCpp->mHingeAxis;
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_RackAndPinionConstraintSettings_mHingeAxis_Set(
  JoltC_RackAndPinionConstraintSettings_t * self,
  JoltC_Vec3_t * mHingeAxis
) {
  RackAndPinionConstraintSettings * selfCpp = static_cast<RackAndPinionConstraintSettings *>(self->obj);
  selfCpp->mHingeAxis = *reinterpret_cast<Vec3 *>(mHingeAxis->obj);
};

JoltC_Vec3_t * JoltC_RackAndPinionConstraintSettings_mSliderAxis_Get(
  JoltC_RackAndPinionConstraintSettings_t * self
) {
  RackAndPinionConstraintSettings * selfCpp = static_cast<RackAndPinionConstraintSettings *>(self->obj);
  const Vec3& resultValue = selfCpp->mSliderAxis;
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_RackAndPinionConstraintSettings_mSliderAxis_Set(
  JoltC_RackAndPinionConstraintSettings_t * self,
  JoltC_Vec3_t * mSliderAxis
) {
  RackAndPinionConstraintSettings * selfCpp = static_cast<RackAndPinionConstraintSettings *>(self->obj);
  selfCpp->mSliderAxis = *reinterpret_cast<Vec3 *>(mSliderAxis->obj);
};

float JoltC_RackAndPinionConstraintSettings_mRatio_Get(
  JoltC_RackAndPinionConstraintSettings_t * self
) {
  RackAndPinionConstraintSettings * selfCpp = static_cast<RackAndPinionConstraintSettings *>(self->obj);
  float result = selfCpp->mRatio;
  return result;
};

void JoltC_RackAndPinionConstraintSettings_mRatio_Set(
  JoltC_RackAndPinionConstraintSettings_t * self,
  float mRatio
) {
  RackAndPinionConstraintSettings * selfCpp = static_cast<RackAndPinionConstraintSettings *>(self->obj);
  selfCpp->mRatio = mRatio;
};

bool JoltC_RackAndPinionConstraintSettings_mEnabled_Get(
  JoltC_RackAndPinionConstraintSettings_t * self
) {
  RackAndPinionConstraintSettings * selfCpp = static_cast<RackAndPinionConstraintSettings *>(self->obj);
  bool result = selfCpp->mEnabled;
  return result;
};

void JoltC_RackAndPinionConstraintSettings_mEnabled_Set(
  JoltC_RackAndPinionConstraintSettings_t * self,
  bool mEnabled
) {
  RackAndPinionConstraintSettings * selfCpp = static_cast<RackAndPinionConstraintSettings *>(self->obj);
  selfCpp->mEnabled = mEnabled;
};

long JoltC_RackAndPinionConstraintSettings_mNumVelocityStepsOverride_Get(
  JoltC_RackAndPinionConstraintSettings_t * self
) {
  RackAndPinionConstraintSettings * selfCpp = static_cast<RackAndPinionConstraintSettings *>(self->obj);
  long result = selfCpp->mNumVelocityStepsOverride;
  return result;
};

void JoltC_RackAndPinionConstraintSettings_mNumVelocityStepsOverride_Set(
  JoltC_RackAndPinionConstraintSettings_t * self,
  long mNumVelocityStepsOverride
) {
  RackAndPinionConstraintSettings * selfCpp = static_cast<RackAndPinionConstraintSettings *>(self->obj);
  selfCpp->mNumVelocityStepsOverride = mNumVelocityStepsOverride;
};

long JoltC_RackAndPinionConstraintSettings_mNumPositionStepsOverride_Get(
  JoltC_RackAndPinionConstraintSettings_t * self
) {
  RackAndPinionConstraintSettings * selfCpp = static_cast<RackAndPinionConstraintSettings *>(self->obj);
  long result = selfCpp->mNumPositionStepsOverride;
  return result;
};

void JoltC_RackAndPinionConstraintSettings_mNumPositionStepsOverride_Set(
  JoltC_RackAndPinionConstraintSettings_t * self,
  long mNumPositionStepsOverride
) {
  RackAndPinionConstraintSettings * selfCpp = static_cast<RackAndPinionConstraintSettings *>(self->obj);
  selfCpp->mNumPositionStepsOverride = mNumPositionStepsOverride;
};

//endregion

#ifdef __cplusplus
}
#endif

