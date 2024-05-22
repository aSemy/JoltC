#include "JoltC/JPC_VehicleTrackSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region properties

long JPC_VehicleTrackSettings_mDrivenWheel_Get(
  JPC_VehicleTrackSettings_t * self
) {
  VehicleTrackSettings * selfCpp = static_cast<VehicleTrackSettings *>(self->obj);
  long result = selfCpp->mDrivenWheel;
  return result;
};

void JPC_VehicleTrackSettings_mDrivenWheel_Set(
  JPC_VehicleTrackSettings_t * self,
  long mDrivenWheel
) {
  VehicleTrackSettings * selfCpp = static_cast<VehicleTrackSettings *>(self->obj);
  selfCpp->mDrivenWheel = mDrivenWheel;
};

JPC_ArrayUint_t * JPC_VehicleTrackSettings_mWheels_Get(
  JPC_VehicleTrackSettings_t * self
) {
  VehicleTrackSettings * selfCpp = static_cast<VehicleTrackSettings *>(self->obj);
  ArrayUint resultValue = selfCpp->mWheels;
  ArrayUint* result = new ArrayUint(resultValue);
  return reinterpret_cast<JPC_ArrayUint_t *>(result);
};

void JPC_VehicleTrackSettings_mWheels_Set(
  JPC_VehicleTrackSettings_t * self,
  JPC_ArrayUint_t * mWheels
) {
  VehicleTrackSettings * selfCpp = static_cast<VehicleTrackSettings *>(self->obj);
  selfCpp->mWheels = *reinterpret_cast<ArrayUint *>(mWheels->obj);
};

float JPC_VehicleTrackSettings_mInertia_Get(
  JPC_VehicleTrackSettings_t * self
) {
  VehicleTrackSettings * selfCpp = static_cast<VehicleTrackSettings *>(self->obj);
  float result = selfCpp->mInertia;
  return result;
};

void JPC_VehicleTrackSettings_mInertia_Set(
  JPC_VehicleTrackSettings_t * self,
  float mInertia
) {
  VehicleTrackSettings * selfCpp = static_cast<VehicleTrackSettings *>(self->obj);
  selfCpp->mInertia = mInertia;
};

float JPC_VehicleTrackSettings_mAngularDamping_Get(
  JPC_VehicleTrackSettings_t * self
) {
  VehicleTrackSettings * selfCpp = static_cast<VehicleTrackSettings *>(self->obj);
  float result = selfCpp->mAngularDamping;
  return result;
};

void JPC_VehicleTrackSettings_mAngularDamping_Set(
  JPC_VehicleTrackSettings_t * self,
  float mAngularDamping
) {
  VehicleTrackSettings * selfCpp = static_cast<VehicleTrackSettings *>(self->obj);
  selfCpp->mAngularDamping = mAngularDamping;
};

float JPC_VehicleTrackSettings_mMaxBrakeTorque_Get(
  JPC_VehicleTrackSettings_t * self
) {
  VehicleTrackSettings * selfCpp = static_cast<VehicleTrackSettings *>(self->obj);
  float result = selfCpp->mMaxBrakeTorque;
  return result;
};

void JPC_VehicleTrackSettings_mMaxBrakeTorque_Set(
  JPC_VehicleTrackSettings_t * self,
  float mMaxBrakeTorque
) {
  VehicleTrackSettings * selfCpp = static_cast<VehicleTrackSettings *>(self->obj);
  selfCpp->mMaxBrakeTorque = mMaxBrakeTorque;
};

float JPC_VehicleTrackSettings_mDifferentialRatio_Get(
  JPC_VehicleTrackSettings_t * self
) {
  VehicleTrackSettings * selfCpp = static_cast<VehicleTrackSettings *>(self->obj);
  float result = selfCpp->mDifferentialRatio;
  return result;
};

void JPC_VehicleTrackSettings_mDifferentialRatio_Set(
  JPC_VehicleTrackSettings_t * self,
  float mDifferentialRatio
) {
  VehicleTrackSettings * selfCpp = static_cast<VehicleTrackSettings *>(self->obj);
  selfCpp->mDifferentialRatio = mDifferentialRatio;
};

//endregion properties

#ifdef __cplusplus
}
#endif

