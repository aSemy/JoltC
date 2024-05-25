#include "JoltC/JPC_ContactSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_ContactSettings_t * JPC_ContactSettings_new() {
  JPC_ContactSettings_t * cInstance = new JPC_ContactSettings_t();
  ContactSettings * cppInstance = new ContactSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region properties

float JPC_ContactSettings_mCombinedFriction_Get(
  JPC_ContactSettings_t * self
) {
  ContactSettings * selfCpp = static_cast<ContactSettings *>(self->obj);
  float result = selfCpp->mCombinedFriction;
  return result;
};

void JPC_ContactSettings_mCombinedFriction_Set(
  JPC_ContactSettings_t * self,
  float mCombinedFriction
) {
  ContactSettings * selfCpp = static_cast<ContactSettings *>(self->obj);
  selfCpp->mCombinedFriction = mCombinedFriction;
};

float JPC_ContactSettings_mCombinedRestitution_Get(
  JPC_ContactSettings_t * self
) {
  ContactSettings * selfCpp = static_cast<ContactSettings *>(self->obj);
  float result = selfCpp->mCombinedRestitution;
  return result;
};

void JPC_ContactSettings_mCombinedRestitution_Set(
  JPC_ContactSettings_t * self,
  float mCombinedRestitution
) {
  ContactSettings * selfCpp = static_cast<ContactSettings *>(self->obj);
  selfCpp->mCombinedRestitution = mCombinedRestitution;
};

float JPC_ContactSettings_mInvMassScale1_Get(
  JPC_ContactSettings_t * self
) {
  ContactSettings * selfCpp = static_cast<ContactSettings *>(self->obj);
  float result = selfCpp->mInvMassScale1;
  return result;
};

void JPC_ContactSettings_mInvMassScale1_Set(
  JPC_ContactSettings_t * self,
  float mInvMassScale1
) {
  ContactSettings * selfCpp = static_cast<ContactSettings *>(self->obj);
  selfCpp->mInvMassScale1 = mInvMassScale1;
};

float JPC_ContactSettings_mInvInertiaScale1_Get(
  JPC_ContactSettings_t * self
) {
  ContactSettings * selfCpp = static_cast<ContactSettings *>(self->obj);
  float result = selfCpp->mInvInertiaScale1;
  return result;
};

void JPC_ContactSettings_mInvInertiaScale1_Set(
  JPC_ContactSettings_t * self,
  float mInvInertiaScale1
) {
  ContactSettings * selfCpp = static_cast<ContactSettings *>(self->obj);
  selfCpp->mInvInertiaScale1 = mInvInertiaScale1;
};

float JPC_ContactSettings_mInvMassScale2_Get(
  JPC_ContactSettings_t * self
) {
  ContactSettings * selfCpp = static_cast<ContactSettings *>(self->obj);
  float result = selfCpp->mInvMassScale2;
  return result;
};

void JPC_ContactSettings_mInvMassScale2_Set(
  JPC_ContactSettings_t * self,
  float mInvMassScale2
) {
  ContactSettings * selfCpp = static_cast<ContactSettings *>(self->obj);
  selfCpp->mInvMassScale2 = mInvMassScale2;
};

float JPC_ContactSettings_mInvInertiaScale2_Get(
  JPC_ContactSettings_t * self
) {
  ContactSettings * selfCpp = static_cast<ContactSettings *>(self->obj);
  float result = selfCpp->mInvInertiaScale2;
  return result;
};

void JPC_ContactSettings_mInvInertiaScale2_Set(
  JPC_ContactSettings_t * self,
  float mInvInertiaScale2
) {
  ContactSettings * selfCpp = static_cast<ContactSettings *>(self->obj);
  selfCpp->mInvInertiaScale2 = mInvInertiaScale2;
};

bool JPC_ContactSettings_mIsSensor_Get(
  JPC_ContactSettings_t * self
) {
  ContactSettings * selfCpp = static_cast<ContactSettings *>(self->obj);
  bool result = selfCpp->mIsSensor;
  return result;
};

void JPC_ContactSettings_mIsSensor_Set(
  JPC_ContactSettings_t * self,
  bool mIsSensor
) {
  ContactSettings * selfCpp = static_cast<ContactSettings *>(self->obj);
  selfCpp->mIsSensor = mIsSensor;
};

JPC_Vec3_t * JPC_ContactSettings_mRelativeLinearSurfaceVelocity_Get(
  JPC_ContactSettings_t * self
) {
  ContactSettings * selfCpp = static_cast<ContactSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mRelativeLinearSurfaceVelocity;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_ContactSettings_mRelativeLinearSurfaceVelocity_Set(
  JPC_ContactSettings_t * self,
  JPC_Vec3_t * mRelativeLinearSurfaceVelocity
) {
  ContactSettings * selfCpp = static_cast<ContactSettings *>(self->obj);
  selfCpp->mRelativeLinearSurfaceVelocity = *reinterpret_cast<Vec3 *>(mRelativeLinearSurfaceVelocity->obj);
};

JPC_Vec3_t * JPC_ContactSettings_mRelativeAngularSurfaceVelocity_Get(
  JPC_ContactSettings_t * self
) {
  ContactSettings * selfCpp = static_cast<ContactSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mRelativeAngularSurfaceVelocity;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_ContactSettings_mRelativeAngularSurfaceVelocity_Set(
  JPC_ContactSettings_t * self,
  JPC_Vec3_t * mRelativeAngularSurfaceVelocity
) {
  ContactSettings * selfCpp = static_cast<ContactSettings *>(self->obj);
  selfCpp->mRelativeAngularSurfaceVelocity = *reinterpret_cast<Vec3 *>(mRelativeAngularSurfaceVelocity->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

