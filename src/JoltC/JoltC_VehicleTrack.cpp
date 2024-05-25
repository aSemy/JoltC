#include "JoltC/JPC_VehicleTrack.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region properties

float JPC_VehicleTrack_mAngularVelocity_Get(
  JPC_VehicleTrack_t * self
) {
  VehicleTrack * selfCpp = static_cast<VehicleTrack *>(self->obj);
  float result = selfCpp->mAngularVelocity;
  return result;
};

void JPC_VehicleTrack_mAngularVelocity_Set(
  JPC_VehicleTrack_t * self,
  float mAngularVelocity
) {
  VehicleTrack * selfCpp = static_cast<VehicleTrack *>(self->obj);
  selfCpp->mAngularVelocity = mAngularVelocity;
};

long JPC_VehicleTrack_mDrivenWheel_Get(
  JPC_VehicleTrack_t * self
) {
  VehicleTrack * selfCpp = static_cast<VehicleTrack *>(self->obj);
  long result = selfCpp->mDrivenWheel;
  return result;
};

void JPC_VehicleTrack_mDrivenWheel_Set(
  JPC_VehicleTrack_t * self,
  long mDrivenWheel
) {
  VehicleTrack * selfCpp = static_cast<VehicleTrack *>(self->obj);
  selfCpp->mDrivenWheel = mDrivenWheel;
};

JPC_ArrayUint_t * JPC_VehicleTrack_mWheels_Get(
  JPC_VehicleTrack_t * self
) {
  VehicleTrack * selfCpp = static_cast<VehicleTrack *>(self->obj);
  ArrayUint resultValue = selfCpp->mWheels;
  ArrayUint* result = new ArrayUint(resultValue);
  return reinterpret_cast<JPC_ArrayUint_t *>(result);
};

void JPC_VehicleTrack_mWheels_Set(
  JPC_VehicleTrack_t * self,
  JPC_ArrayUint_t * mWheels
) {
  VehicleTrack * selfCpp = static_cast<VehicleTrack *>(self->obj);
  selfCpp->mWheels = *reinterpret_cast<ArrayUint *>(mWheels->obj);
};

float JPC_VehicleTrack_mInertia_Get(
  JPC_VehicleTrack_t * self
) {
  VehicleTrack * selfCpp = static_cast<VehicleTrack *>(self->obj);
  float result = selfCpp->mInertia;
  return result;
};

void JPC_VehicleTrack_mInertia_Set(
  JPC_VehicleTrack_t * self,
  float mInertia
) {
  VehicleTrack * selfCpp = static_cast<VehicleTrack *>(self->obj);
  selfCpp->mInertia = mInertia;
};

float JPC_VehicleTrack_mAngularDamping_Get(
  JPC_VehicleTrack_t * self
) {
  VehicleTrack * selfCpp = static_cast<VehicleTrack *>(self->obj);
  float result = selfCpp->mAngularDamping;
  return result;
};

void JPC_VehicleTrack_mAngularDamping_Set(
  JPC_VehicleTrack_t * self,
  float mAngularDamping
) {
  VehicleTrack * selfCpp = static_cast<VehicleTrack *>(self->obj);
  selfCpp->mAngularDamping = mAngularDamping;
};

float JPC_VehicleTrack_mMaxBrakeTorque_Get(
  JPC_VehicleTrack_t * self
) {
  VehicleTrack * selfCpp = static_cast<VehicleTrack *>(self->obj);
  float result = selfCpp->mMaxBrakeTorque;
  return result;
};

void JPC_VehicleTrack_mMaxBrakeTorque_Set(
  JPC_VehicleTrack_t * self,
  float mMaxBrakeTorque
) {
  VehicleTrack * selfCpp = static_cast<VehicleTrack *>(self->obj);
  selfCpp->mMaxBrakeTorque = mMaxBrakeTorque;
};

float JPC_VehicleTrack_mDifferentialRatio_Get(
  JPC_VehicleTrack_t * self
) {
  VehicleTrack * selfCpp = static_cast<VehicleTrack *>(self->obj);
  float result = selfCpp->mDifferentialRatio;
  return result;
};

void JPC_VehicleTrack_mDifferentialRatio_Set(
  JPC_VehicleTrack_t * self,
  float mDifferentialRatio
) {
  VehicleTrack * selfCpp = static_cast<VehicleTrack *>(self->obj);
  selfCpp->mDifferentialRatio = mDifferentialRatio;
};

//endregion properties

#ifdef __cplusplus
}
#endif

