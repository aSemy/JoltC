#include "JoltC/JoltC_VehicleTrack.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region properties

float JoltC_VehicleTrack_mAngularVelocity_Get(
  JoltC_VehicleTrack_t * self
) {
  VehicleTrack * selfCpp = static_cast<VehicleTrack *>(self->obj);
  return selfCpp->mAngularVelocity;
}

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
  return selfCpp->mDrivenWheel;
}

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
  ArrayUint * resultPtr = new ArrayUint();
  *resultPtr = selfCpp->mWheels;
  JoltC_ArrayUint_t * result = new JoltC_ArrayUint_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_VehicleTrack_mWheels_Set(
  JoltC_VehicleTrack_t * self,
  JoltC_ArrayUint_t * mWheels
) {
  VehicleTrack * selfCpp = static_cast<VehicleTrack *>(self->obj);
  selfCpp->mWheels = *static_cast<ArrayUint *>(mWheels->obj);
};

float JoltC_VehicleTrack_mInertia_Get(
  JoltC_VehicleTrack_t * self
) {
  VehicleTrack * selfCpp = static_cast<VehicleTrack *>(self->obj);
  return selfCpp->mInertia;
}

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
  return selfCpp->mAngularDamping;
}

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
  return selfCpp->mMaxBrakeTorque;
}

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
  return selfCpp->mDifferentialRatio;
}

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

