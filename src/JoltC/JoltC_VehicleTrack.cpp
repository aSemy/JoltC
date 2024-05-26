#include "JoltC/JoltC_VehicleTrack.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region properties

float JoltC_VehicleTrack_mAngularVelocity_Get(
  JoltC_VehicleTrack_t * self
) {
  VehicleTrack * selfCpp = static_cast<VehicleTrack *>(self->obj);
  float result = selfCpp->mAngularVelocity;
  return result;
};

void JoltC_VehicleTrack_mAngularVelocity_Set(
  JoltC_VehicleTrack_t * self,
  float mAngularVelocity
) {
  VehicleTrack * selfCpp = static_cast<VehicleTrack *>(self->obj);
  selfCpp->mAngularVelocity = mAngularVelocity;
};

long JoltC_VehicleTrack_mDrivenWheel_Get(
  JoltC_VehicleTrack_t * self
) {
  VehicleTrack * selfCpp = static_cast<VehicleTrack *>(self->obj);
  long result = selfCpp->mDrivenWheel;
  return result;
};

void JoltC_VehicleTrack_mDrivenWheel_Set(
  JoltC_VehicleTrack_t * self,
  long mDrivenWheel
) {
  VehicleTrack * selfCpp = static_cast<VehicleTrack *>(self->obj);
  selfCpp->mDrivenWheel = mDrivenWheel;
};

JoltC_ArrayUint_t * JoltC_VehicleTrack_mWheels_Get(
  JoltC_VehicleTrack_t * self
) {
  VehicleTrack * selfCpp = static_cast<VehicleTrack *>(self->obj);
  static ArrayUint resultValue = selfCpp->mWheels;
  JoltC_ArrayUint_t* result = new JoltC_ArrayUint_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_VehicleTrack_mWheels_Set(
  JoltC_VehicleTrack_t * self,
  JoltC_ArrayUint_t * mWheels
) {
  VehicleTrack * selfCpp = static_cast<VehicleTrack *>(self->obj);
  selfCpp->mWheels = *reinterpret_cast<ArrayUint *>(mWheels->obj);
};

float JoltC_VehicleTrack_mInertia_Get(
  JoltC_VehicleTrack_t * self
) {
  VehicleTrack * selfCpp = static_cast<VehicleTrack *>(self->obj);
  float result = selfCpp->mInertia;
  return result;
};

void JoltC_VehicleTrack_mInertia_Set(
  JoltC_VehicleTrack_t * self,
  float mInertia
) {
  VehicleTrack * selfCpp = static_cast<VehicleTrack *>(self->obj);
  selfCpp->mInertia = mInertia;
};

float JoltC_VehicleTrack_mAngularDamping_Get(
  JoltC_VehicleTrack_t * self
) {
  VehicleTrack * selfCpp = static_cast<VehicleTrack *>(self->obj);
  float result = selfCpp->mAngularDamping;
  return result;
};

void JoltC_VehicleTrack_mAngularDamping_Set(
  JoltC_VehicleTrack_t * self,
  float mAngularDamping
) {
  VehicleTrack * selfCpp = static_cast<VehicleTrack *>(self->obj);
  selfCpp->mAngularDamping = mAngularDamping;
};

float JoltC_VehicleTrack_mMaxBrakeTorque_Get(
  JoltC_VehicleTrack_t * self
) {
  VehicleTrack * selfCpp = static_cast<VehicleTrack *>(self->obj);
  float result = selfCpp->mMaxBrakeTorque;
  return result;
};

void JoltC_VehicleTrack_mMaxBrakeTorque_Set(
  JoltC_VehicleTrack_t * self,
  float mMaxBrakeTorque
) {
  VehicleTrack * selfCpp = static_cast<VehicleTrack *>(self->obj);
  selfCpp->mMaxBrakeTorque = mMaxBrakeTorque;
};

float JoltC_VehicleTrack_mDifferentialRatio_Get(
  JoltC_VehicleTrack_t * self
) {
  VehicleTrack * selfCpp = static_cast<VehicleTrack *>(self->obj);
  float result = selfCpp->mDifferentialRatio;
  return result;
};

void JoltC_VehicleTrack_mDifferentialRatio_Set(
  JoltC_VehicleTrack_t * self,
  float mDifferentialRatio
) {
  VehicleTrack * selfCpp = static_cast<VehicleTrack *>(self->obj);
  selfCpp->mDifferentialRatio = mDifferentialRatio;
};

//endregion

#ifdef __cplusplus
}
#endif

