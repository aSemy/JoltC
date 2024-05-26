#include "JoltC/JoltC_ContactSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ContactSettings_t * JoltC_ContactSettings_new() {
  JoltC_ContactSettings_t * cInstance = new JoltC_ContactSettings_t();
  ContactSettings * cppInstance = new ContactSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region properties

float JoltC_ContactSettings_mCombinedFriction_Get(
  JoltC_ContactSettings_t * self
) {
  ContactSettings * selfCpp = static_cast<ContactSettings *>(self->obj);
  float result = selfCpp->mCombinedFriction;
  return result;
};

void JoltC_ContactSettings_mCombinedFriction_Set(
  JoltC_ContactSettings_t * self,
  float mCombinedFriction
) {
  ContactSettings * selfCpp = static_cast<ContactSettings *>(self->obj);
  selfCpp->mCombinedFriction = mCombinedFriction;
};

float JoltC_ContactSettings_mCombinedRestitution_Get(
  JoltC_ContactSettings_t * self
) {
  ContactSettings * selfCpp = static_cast<ContactSettings *>(self->obj);
  float result = selfCpp->mCombinedRestitution;
  return result;
};

void JoltC_ContactSettings_mCombinedRestitution_Set(
  JoltC_ContactSettings_t * self,
  float mCombinedRestitution
) {
  ContactSettings * selfCpp = static_cast<ContactSettings *>(self->obj);
  selfCpp->mCombinedRestitution = mCombinedRestitution;
};

float JoltC_ContactSettings_mInvMassScale1_Get(
  JoltC_ContactSettings_t * self
) {
  ContactSettings * selfCpp = static_cast<ContactSettings *>(self->obj);
  float result = selfCpp->mInvMassScale1;
  return result;
};

void JoltC_ContactSettings_mInvMassScale1_Set(
  JoltC_ContactSettings_t * self,
  float mInvMassScale1
) {
  ContactSettings * selfCpp = static_cast<ContactSettings *>(self->obj);
  selfCpp->mInvMassScale1 = mInvMassScale1;
};

float JoltC_ContactSettings_mInvInertiaScale1_Get(
  JoltC_ContactSettings_t * self
) {
  ContactSettings * selfCpp = static_cast<ContactSettings *>(self->obj);
  float result = selfCpp->mInvInertiaScale1;
  return result;
};

void JoltC_ContactSettings_mInvInertiaScale1_Set(
  JoltC_ContactSettings_t * self,
  float mInvInertiaScale1
) {
  ContactSettings * selfCpp = static_cast<ContactSettings *>(self->obj);
  selfCpp->mInvInertiaScale1 = mInvInertiaScale1;
};

float JoltC_ContactSettings_mInvMassScale2_Get(
  JoltC_ContactSettings_t * self
) {
  ContactSettings * selfCpp = static_cast<ContactSettings *>(self->obj);
  float result = selfCpp->mInvMassScale2;
  return result;
};

void JoltC_ContactSettings_mInvMassScale2_Set(
  JoltC_ContactSettings_t * self,
  float mInvMassScale2
) {
  ContactSettings * selfCpp = static_cast<ContactSettings *>(self->obj);
  selfCpp->mInvMassScale2 = mInvMassScale2;
};

float JoltC_ContactSettings_mInvInertiaScale2_Get(
  JoltC_ContactSettings_t * self
) {
  ContactSettings * selfCpp = static_cast<ContactSettings *>(self->obj);
  float result = selfCpp->mInvInertiaScale2;
  return result;
};

void JoltC_ContactSettings_mInvInertiaScale2_Set(
  JoltC_ContactSettings_t * self,
  float mInvInertiaScale2
) {
  ContactSettings * selfCpp = static_cast<ContactSettings *>(self->obj);
  selfCpp->mInvInertiaScale2 = mInvInertiaScale2;
};

bool JoltC_ContactSettings_mIsSensor_Get(
  JoltC_ContactSettings_t * self
) {
  ContactSettings * selfCpp = static_cast<ContactSettings *>(self->obj);
  bool result = selfCpp->mIsSensor;
  return result;
};

void JoltC_ContactSettings_mIsSensor_Set(
  JoltC_ContactSettings_t * self,
  bool mIsSensor
) {
  ContactSettings * selfCpp = static_cast<ContactSettings *>(self->obj);
  selfCpp->mIsSensor = mIsSensor;
};

JoltC_Vec3_t * JoltC_ContactSettings_mRelativeLinearSurfaceVelocity_Get(
  JoltC_ContactSettings_t * self
) {
  ContactSettings * selfCpp = static_cast<ContactSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mRelativeLinearSurfaceVelocity;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_ContactSettings_mRelativeLinearSurfaceVelocity_Set(
  JoltC_ContactSettings_t * self,
  JoltC_Vec3_t * mRelativeLinearSurfaceVelocity
) {
  ContactSettings * selfCpp = static_cast<ContactSettings *>(self->obj);
  selfCpp->mRelativeLinearSurfaceVelocity = *reinterpret_cast<Vec3 *>(mRelativeLinearSurfaceVelocity->obj);
};

JoltC_Vec3_t * JoltC_ContactSettings_mRelativeAngularSurfaceVelocity_Get(
  JoltC_ContactSettings_t * self
) {
  ContactSettings * selfCpp = static_cast<ContactSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mRelativeAngularSurfaceVelocity;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_ContactSettings_mRelativeAngularSurfaceVelocity_Set(
  JoltC_ContactSettings_t * self,
  JoltC_Vec3_t * mRelativeAngularSurfaceVelocity
) {
  ContactSettings * selfCpp = static_cast<ContactSettings *>(self->obj);
  selfCpp->mRelativeAngularSurfaceVelocity = *reinterpret_cast<Vec3 *>(mRelativeAngularSurfaceVelocity->obj);
};

//endregion

#ifdef __cplusplus
}
#endif

