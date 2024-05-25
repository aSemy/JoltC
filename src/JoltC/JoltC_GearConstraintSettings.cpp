#include "JoltC/JPC_GearConstraintSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_GearConstraintSettings_t * JPC_GearConstraintSettings_new() {
  JPC_GearConstraintSettings_t * cInstance = new JPC_GearConstraintSettings_t();
  GearConstraintSettings * cppInstance = new GearConstraintSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

void JPC_GearConstraintSettings_SetRatio(
  JPC_GearConstraintSettings_t * self,
  long inNumTeethGear1,
  long inNumTeethGear2
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  
  selfCpp->SetRatio(
  inNumTeethGear1,
  inNumTeethGear2
  );
};

JPC_Constraint_t * JPC_GearConstraintSettings_Create(
  JPC_GearConstraintSettings_t * self,
  JPC_Body_t * inBody1,
  JPC_Body_t * inBody2
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  Constraint * result = selfCpp->Create(
  *reinterpret_cast<Body *>(inBody1->obj),
  *reinterpret_cast<Body *>(inBody2->obj)
  );
  return reinterpret_cast<JPC_Constraint_t *>(result);
};

unsigned long JPC_GearConstraintSettings_GetRefCount(
  JPC_GearConstraintSettings_t * self
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_GearConstraintSettings_AddRef(
  JPC_GearConstraintSettings_t * self
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_GearConstraintSettings_Release(
  JPC_GearConstraintSettings_t * self
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  
  selfCpp->Release();
};

//endregion functions

//region properties

JPC_EConstraintSpace JPC_GearConstraintSettings_mSpace_Get(
  JPC_GearConstraintSettings_t * self
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  EConstraintSpace result = selfCpp->mSpace;
  return static_cast<JPC_EConstraintSpace>(static_cast<int>(result));
};

void JPC_GearConstraintSettings_mSpace_Set(
  JPC_GearConstraintSettings_t * self,
  JPC_EConstraintSpace mSpace
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  selfCpp->mSpace = static_cast<EConstraintSpace>(static_cast<int>(mSpace));
};

JPC_Vec3_t * JPC_GearConstraintSettings_mHingeAxis1_Get(
  JPC_GearConstraintSettings_t * self
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mHingeAxis1;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_GearConstraintSettings_mHingeAxis1_Set(
  JPC_GearConstraintSettings_t * self,
  JPC_Vec3_t * mHingeAxis1
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  selfCpp->mHingeAxis1 = *reinterpret_cast<Vec3 *>(mHingeAxis1->obj);
};

JPC_Vec3_t * JPC_GearConstraintSettings_mHingeAxis2_Get(
  JPC_GearConstraintSettings_t * self
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mHingeAxis2;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_GearConstraintSettings_mHingeAxis2_Set(
  JPC_GearConstraintSettings_t * self,
  JPC_Vec3_t * mHingeAxis2
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  selfCpp->mHingeAxis2 = *reinterpret_cast<Vec3 *>(mHingeAxis2->obj);
};

float JPC_GearConstraintSettings_mRatio_Get(
  JPC_GearConstraintSettings_t * self
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  float result = selfCpp->mRatio;
  return result;
};

void JPC_GearConstraintSettings_mRatio_Set(
  JPC_GearConstraintSettings_t * self,
  float mRatio
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  selfCpp->mRatio = mRatio;
};

bool JPC_GearConstraintSettings_mEnabled_Get(
  JPC_GearConstraintSettings_t * self
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  bool result = selfCpp->mEnabled;
  return result;
};

void JPC_GearConstraintSettings_mEnabled_Set(
  JPC_GearConstraintSettings_t * self,
  bool mEnabled
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  selfCpp->mEnabled = mEnabled;
};

long JPC_GearConstraintSettings_mNumVelocityStepsOverride_Get(
  JPC_GearConstraintSettings_t * self
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  long result = selfCpp->mNumVelocityStepsOverride;
  return result;
};

void JPC_GearConstraintSettings_mNumVelocityStepsOverride_Set(
  JPC_GearConstraintSettings_t * self,
  long mNumVelocityStepsOverride
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  selfCpp->mNumVelocityStepsOverride = mNumVelocityStepsOverride;
};

long JPC_GearConstraintSettings_mNumPositionStepsOverride_Get(
  JPC_GearConstraintSettings_t * self
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  long result = selfCpp->mNumPositionStepsOverride;
  return result;
};

void JPC_GearConstraintSettings_mNumPositionStepsOverride_Set(
  JPC_GearConstraintSettings_t * self,
  long mNumPositionStepsOverride
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  selfCpp->mNumPositionStepsOverride = mNumPositionStepsOverride;
};

//endregion properties

#ifdef __cplusplus
}
#endif

