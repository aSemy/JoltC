#include "JoltC/JPC_RackAndPinionConstraintSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_RackAndPinionConstraintSettings_t * JPC_RackAndPinionConstraintSettings_new() {
  JPC_RackAndPinionConstraintSettings_t * cInstance = new JPC_RackAndPinionConstraintSettings_t();
  RackAndPinionConstraintSettings * cppInstance = new RackAndPinionConstraintSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

void JPC_RackAndPinionConstraintSettings_SetRatio(
  JPC_RackAndPinionConstraintSettings_t * self,
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

JPC_Constraint_t * JPC_RackAndPinionConstraintSettings_Create(
  JPC_RackAndPinionConstraintSettings_t * self,
  JPC_Body_t * inBody1,
  JPC_Body_t * inBody2
) {
  RackAndPinionConstraintSettings * selfCpp = static_cast<RackAndPinionConstraintSettings *>(self->obj);
  Constraint * result = selfCpp->Create(
  *reinterpret_cast<Body *>(inBody1->obj),
  *reinterpret_cast<Body *>(inBody2->obj)
  );
  return reinterpret_cast<JPC_Constraint_t *>(result);
};

unsigned long JPC_RackAndPinionConstraintSettings_GetRefCount(
  JPC_RackAndPinionConstraintSettings_t * self
) {
  RackAndPinionConstraintSettings * selfCpp = static_cast<RackAndPinionConstraintSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_RackAndPinionConstraintSettings_AddRef(
  JPC_RackAndPinionConstraintSettings_t * self
) {
  RackAndPinionConstraintSettings * selfCpp = static_cast<RackAndPinionConstraintSettings *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_RackAndPinionConstraintSettings_Release(
  JPC_RackAndPinionConstraintSettings_t * self
) {
  RackAndPinionConstraintSettings * selfCpp = static_cast<RackAndPinionConstraintSettings *>(self->obj);
  
  selfCpp->Release();
};

//endregion functions

//region properties

JPC_EConstraintSpace JPC_RackAndPinionConstraintSettings_mSpace_Get(
  JPC_RackAndPinionConstraintSettings_t * self
) {
  RackAndPinionConstraintSettings * selfCpp = static_cast<RackAndPinionConstraintSettings *>(self->obj);
  EConstraintSpace result = selfCpp->mSpace;
  return static_cast<JPC_EConstraintSpace>(static_cast<int>(result));
};

void JPC_RackAndPinionConstraintSettings_mSpace_Set(
  JPC_RackAndPinionConstraintSettings_t * self,
  JPC_EConstraintSpace mSpace
) {
  RackAndPinionConstraintSettings * selfCpp = static_cast<RackAndPinionConstraintSettings *>(self->obj);
  selfCpp->mSpace = static_cast<EConstraintSpace>(static_cast<int>(mSpace));
};

JPC_Vec3_t * JPC_RackAndPinionConstraintSettings_mHingeAxis_Get(
  JPC_RackAndPinionConstraintSettings_t * self
) {
  RackAndPinionConstraintSettings * selfCpp = static_cast<RackAndPinionConstraintSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mHingeAxis;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_RackAndPinionConstraintSettings_mHingeAxis_Set(
  JPC_RackAndPinionConstraintSettings_t * self,
  JPC_Vec3_t * mHingeAxis
) {
  RackAndPinionConstraintSettings * selfCpp = static_cast<RackAndPinionConstraintSettings *>(self->obj);
  selfCpp->mHingeAxis = *reinterpret_cast<Vec3 *>(mHingeAxis->obj);
};

JPC_Vec3_t * JPC_RackAndPinionConstraintSettings_mSliderAxis_Get(
  JPC_RackAndPinionConstraintSettings_t * self
) {
  RackAndPinionConstraintSettings * selfCpp = static_cast<RackAndPinionConstraintSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mSliderAxis;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_RackAndPinionConstraintSettings_mSliderAxis_Set(
  JPC_RackAndPinionConstraintSettings_t * self,
  JPC_Vec3_t * mSliderAxis
) {
  RackAndPinionConstraintSettings * selfCpp = static_cast<RackAndPinionConstraintSettings *>(self->obj);
  selfCpp->mSliderAxis = *reinterpret_cast<Vec3 *>(mSliderAxis->obj);
};

float JPC_RackAndPinionConstraintSettings_mRatio_Get(
  JPC_RackAndPinionConstraintSettings_t * self
) {
  RackAndPinionConstraintSettings * selfCpp = static_cast<RackAndPinionConstraintSettings *>(self->obj);
  float result = selfCpp->mRatio;
  return result;
};

void JPC_RackAndPinionConstraintSettings_mRatio_Set(
  JPC_RackAndPinionConstraintSettings_t * self,
  float mRatio
) {
  RackAndPinionConstraintSettings * selfCpp = static_cast<RackAndPinionConstraintSettings *>(self->obj);
  selfCpp->mRatio = mRatio;
};

bool JPC_RackAndPinionConstraintSettings_mEnabled_Get(
  JPC_RackAndPinionConstraintSettings_t * self
) {
  RackAndPinionConstraintSettings * selfCpp = static_cast<RackAndPinionConstraintSettings *>(self->obj);
  bool result = selfCpp->mEnabled;
  return result;
};

void JPC_RackAndPinionConstraintSettings_mEnabled_Set(
  JPC_RackAndPinionConstraintSettings_t * self,
  bool mEnabled
) {
  RackAndPinionConstraintSettings * selfCpp = static_cast<RackAndPinionConstraintSettings *>(self->obj);
  selfCpp->mEnabled = mEnabled;
};

long JPC_RackAndPinionConstraintSettings_mNumVelocityStepsOverride_Get(
  JPC_RackAndPinionConstraintSettings_t * self
) {
  RackAndPinionConstraintSettings * selfCpp = static_cast<RackAndPinionConstraintSettings *>(self->obj);
  long result = selfCpp->mNumVelocityStepsOverride;
  return result;
};

void JPC_RackAndPinionConstraintSettings_mNumVelocityStepsOverride_Set(
  JPC_RackAndPinionConstraintSettings_t * self,
  long mNumVelocityStepsOverride
) {
  RackAndPinionConstraintSettings * selfCpp = static_cast<RackAndPinionConstraintSettings *>(self->obj);
  selfCpp->mNumVelocityStepsOverride = mNumVelocityStepsOverride;
};

long JPC_RackAndPinionConstraintSettings_mNumPositionStepsOverride_Get(
  JPC_RackAndPinionConstraintSettings_t * self
) {
  RackAndPinionConstraintSettings * selfCpp = static_cast<RackAndPinionConstraintSettings *>(self->obj);
  long result = selfCpp->mNumPositionStepsOverride;
  return result;
};

void JPC_RackAndPinionConstraintSettings_mNumPositionStepsOverride_Set(
  JPC_RackAndPinionConstraintSettings_t * self,
  long mNumPositionStepsOverride
) {
  RackAndPinionConstraintSettings * selfCpp = static_cast<RackAndPinionConstraintSettings *>(self->obj);
  selfCpp->mNumPositionStepsOverride = mNumPositionStepsOverride;
};

//endregion properties

#ifdef __cplusplus
}
#endif

