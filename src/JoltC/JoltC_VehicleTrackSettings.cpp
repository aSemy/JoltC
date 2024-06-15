#include "JoltC/JoltC_VehicleTrackSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_VehicleTrackSettings_destroy(
  JoltC_VehicleTrackSettings_t * self
){
  if (self == NULL) return;
  delete static_cast<VehicleTrackSettings *>(self->obj);
  free(self);
}

//endregion
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
  return selfCpp->mDrivenWheel;
}

void JoltC_VehicleTrackSettings_mDrivenWheel_Set(
  JoltC_VehicleTrackSettings_t * self,
  long mDrivenWheel
) {
  VehicleTrackSettings * selfCpp = static_cast<VehicleTrackSettings *>(self->obj);
  selfCpp->mDrivenWheel = mDrivenWheel;
}

JoltC_ArrayUint_t * JoltC_VehicleTrackSettings_mWheels_Get(
  JoltC_VehicleTrackSettings_t * self
) {
  VehicleTrackSettings * selfCpp = static_cast<VehicleTrackSettings *>(self->obj);
  ArrayUint * resultPtr = new ArrayUint();
  *resultPtr = selfCpp->mWheels;
  JoltC_ArrayUint_t * result = new JoltC_ArrayUint_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_VehicleTrackSettings_mWheels_Set(
  JoltC_VehicleTrackSettings_t * self,
  JoltC_ArrayUint_t * mWheels
) {
  VehicleTrackSettings * selfCpp = static_cast<VehicleTrackSettings *>(self->obj);
  selfCpp->mWheels = *static_cast<ArrayUint *>(mWheels->obj);
}

float JoltC_VehicleTrackSettings_mInertia_Get(
  JoltC_VehicleTrackSettings_t * self
) {
  VehicleTrackSettings * selfCpp = static_cast<VehicleTrackSettings *>(self->obj);
  return selfCpp->mInertia;
}

void JoltC_VehicleTrackSettings_mInertia_Set(
  JoltC_VehicleTrackSettings_t * self,
  float mInertia
) {
  VehicleTrackSettings * selfCpp = static_cast<VehicleTrackSettings *>(self->obj);
  selfCpp->mInertia = mInertia;
}

float JoltC_VehicleTrackSettings_mAngularDamping_Get(
  JoltC_VehicleTrackSettings_t * self
) {
  VehicleTrackSettings * selfCpp = static_cast<VehicleTrackSettings *>(self->obj);
  return selfCpp->mAngularDamping;
}

void JoltC_VehicleTrackSettings_mAngularDamping_Set(
  JoltC_VehicleTrackSettings_t * self,
  float mAngularDamping
) {
  VehicleTrackSettings * selfCpp = static_cast<VehicleTrackSettings *>(self->obj);
  selfCpp->mAngularDamping = mAngularDamping;
}

float JoltC_VehicleTrackSettings_mMaxBrakeTorque_Get(
  JoltC_VehicleTrackSettings_t * self
) {
  VehicleTrackSettings * selfCpp = static_cast<VehicleTrackSettings *>(self->obj);
  return selfCpp->mMaxBrakeTorque;
}

void JoltC_VehicleTrackSettings_mMaxBrakeTorque_Set(
  JoltC_VehicleTrackSettings_t * self,
  float mMaxBrakeTorque
) {
  VehicleTrackSettings * selfCpp = static_cast<VehicleTrackSettings *>(self->obj);
  selfCpp->mMaxBrakeTorque = mMaxBrakeTorque;
}

float JoltC_VehicleTrackSettings_mDifferentialRatio_Get(
  JoltC_VehicleTrackSettings_t * self
) {
  VehicleTrackSettings * selfCpp = static_cast<VehicleTrackSettings *>(self->obj);
  return selfCpp->mDifferentialRatio;
}

void JoltC_VehicleTrackSettings_mDifferentialRatio_Set(
  JoltC_VehicleTrackSettings_t * self,
  float mDifferentialRatio
) {
  VehicleTrackSettings * selfCpp = static_cast<VehicleTrackSettings *>(self->obj);
  selfCpp->mDifferentialRatio = mDifferentialRatio;
}

//endregion


#ifdef __cplusplus
}
#endif
