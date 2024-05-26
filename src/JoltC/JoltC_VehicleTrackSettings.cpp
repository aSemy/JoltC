#include "JoltC/JoltC_VehicleTrackSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region converters

/**
 * Convert an instance of JoltC_VehicleTrack_t into JoltC_VehicleTrackSettings_t.
 */
JoltC_VehicleTrackSettings_t * JoltC_VehicleTrackSettings_From_VehicleTrack(
  JoltC_VehicleTrack_t * subtype
) {
  return (JoltC_VehicleTrackSettings_t*) subtype;
};

//endregion

//region properties

long JoltC_VehicleTrackSettings_mDrivenWheel_Get(
  JoltC_VehicleTrackSettings_t * self
) {
  VehicleTrackSettings * selfCpp = static_cast<VehicleTrackSettings *>(self->obj);
  long result = selfCpp->mDrivenWheel;
  return result;
};

void JoltC_VehicleTrackSettings_mDrivenWheel_Set(
  JoltC_VehicleTrackSettings_t * self,
  long mDrivenWheel
) {
  VehicleTrackSettings * selfCpp = static_cast<VehicleTrackSettings *>(self->obj);
  selfCpp->mDrivenWheel = mDrivenWheel;
};

JoltC_ArrayUint_t * JoltC_VehicleTrackSettings_mWheels_Get(
  JoltC_VehicleTrackSettings_t * self
) {
  VehicleTrackSettings * selfCpp = static_cast<VehicleTrackSettings *>(self->obj);
  static ArrayUint resultValue = selfCpp->mWheels;
  JoltC_ArrayUint_t* result = new JoltC_ArrayUint_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_VehicleTrackSettings_mWheels_Set(
  JoltC_VehicleTrackSettings_t * self,
  JoltC_ArrayUint_t * mWheels
) {
  VehicleTrackSettings * selfCpp = static_cast<VehicleTrackSettings *>(self->obj);
  selfCpp->mWheels = *reinterpret_cast<ArrayUint *>(mWheels->obj);
};

float JoltC_VehicleTrackSettings_mInertia_Get(
  JoltC_VehicleTrackSettings_t * self
) {
  VehicleTrackSettings * selfCpp = static_cast<VehicleTrackSettings *>(self->obj);
  float result = selfCpp->mInertia;
  return result;
};

void JoltC_VehicleTrackSettings_mInertia_Set(
  JoltC_VehicleTrackSettings_t * self,
  float mInertia
) {
  VehicleTrackSettings * selfCpp = static_cast<VehicleTrackSettings *>(self->obj);
  selfCpp->mInertia = mInertia;
};

float JoltC_VehicleTrackSettings_mAngularDamping_Get(
  JoltC_VehicleTrackSettings_t * self
) {
  VehicleTrackSettings * selfCpp = static_cast<VehicleTrackSettings *>(self->obj);
  float result = selfCpp->mAngularDamping;
  return result;
};

void JoltC_VehicleTrackSettings_mAngularDamping_Set(
  JoltC_VehicleTrackSettings_t * self,
  float mAngularDamping
) {
  VehicleTrackSettings * selfCpp = static_cast<VehicleTrackSettings *>(self->obj);
  selfCpp->mAngularDamping = mAngularDamping;
};

float JoltC_VehicleTrackSettings_mMaxBrakeTorque_Get(
  JoltC_VehicleTrackSettings_t * self
) {
  VehicleTrackSettings * selfCpp = static_cast<VehicleTrackSettings *>(self->obj);
  float result = selfCpp->mMaxBrakeTorque;
  return result;
};

void JoltC_VehicleTrackSettings_mMaxBrakeTorque_Set(
  JoltC_VehicleTrackSettings_t * self,
  float mMaxBrakeTorque
) {
  VehicleTrackSettings * selfCpp = static_cast<VehicleTrackSettings *>(self->obj);
  selfCpp->mMaxBrakeTorque = mMaxBrakeTorque;
};

float JoltC_VehicleTrackSettings_mDifferentialRatio_Get(
  JoltC_VehicleTrackSettings_t * self
) {
  VehicleTrackSettings * selfCpp = static_cast<VehicleTrackSettings *>(self->obj);
  float result = selfCpp->mDifferentialRatio;
  return result;
};

void JoltC_VehicleTrackSettings_mDifferentialRatio_Set(
  JoltC_VehicleTrackSettings_t * self,
  float mDifferentialRatio
) {
  VehicleTrackSettings * selfCpp = static_cast<VehicleTrackSettings *>(self->obj);
  selfCpp->mDifferentialRatio = mDifferentialRatio;
};

//endregion

#ifdef __cplusplus
}
#endif

