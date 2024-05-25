#include "JoltC/JoltC_VehicleTrackSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region properties

long JoltC_VehicleTrackSettings_mDrivenWheel_Get(
  JoltC_VehicleTrackSettings_t * self,
  char** outErrMsg
) {
  VehicleTrackSettings * selfCpp = static_cast<VehicleTrackSettings *>(self->obj);
  long result = selfCpp->mDrivenWheel;
  return result;
};

void JoltC_VehicleTrackSettings_mDrivenWheel_Set(
  JoltC_VehicleTrackSettings_t * self,
  long mDrivenWheel,
  char** outErrMsg
) {
  VehicleTrackSettings * selfCpp = static_cast<VehicleTrackSettings *>(self->obj);
  selfCpp->mDrivenWheel = mDrivenWheel;
};

JoltC_ArrayUint_t * JoltC_VehicleTrackSettings_mWheels_Get(
  JoltC_VehicleTrackSettings_t * self,
  char** outErrMsg
) {
  VehicleTrackSettings * selfCpp = static_cast<VehicleTrackSettings *>(self->obj);
  ArrayUint resultValue = selfCpp->mWheels;
  ArrayUint* result = new ArrayUint(resultValue);
  return reinterpret_cast<JoltC_ArrayUint_t *>(result);
};

void JoltC_VehicleTrackSettings_mWheels_Set(
  JoltC_VehicleTrackSettings_t * self,
  JoltC_ArrayUint_t * mWheels,
  char** outErrMsg
) {
  VehicleTrackSettings * selfCpp = static_cast<VehicleTrackSettings *>(self->obj);
  selfCpp->mWheels = *reinterpret_cast<ArrayUint *>(mWheels->obj);
};

float JoltC_VehicleTrackSettings_mInertia_Get(
  JoltC_VehicleTrackSettings_t * self,
  char** outErrMsg
) {
  VehicleTrackSettings * selfCpp = static_cast<VehicleTrackSettings *>(self->obj);
  float result = selfCpp->mInertia;
  return result;
};

void JoltC_VehicleTrackSettings_mInertia_Set(
  JoltC_VehicleTrackSettings_t * self,
  float mInertia,
  char** outErrMsg
) {
  VehicleTrackSettings * selfCpp = static_cast<VehicleTrackSettings *>(self->obj);
  selfCpp->mInertia = mInertia;
};

float JoltC_VehicleTrackSettings_mAngularDamping_Get(
  JoltC_VehicleTrackSettings_t * self,
  char** outErrMsg
) {
  VehicleTrackSettings * selfCpp = static_cast<VehicleTrackSettings *>(self->obj);
  float result = selfCpp->mAngularDamping;
  return result;
};

void JoltC_VehicleTrackSettings_mAngularDamping_Set(
  JoltC_VehicleTrackSettings_t * self,
  float mAngularDamping,
  char** outErrMsg
) {
  VehicleTrackSettings * selfCpp = static_cast<VehicleTrackSettings *>(self->obj);
  selfCpp->mAngularDamping = mAngularDamping;
};

float JoltC_VehicleTrackSettings_mMaxBrakeTorque_Get(
  JoltC_VehicleTrackSettings_t * self,
  char** outErrMsg
) {
  VehicleTrackSettings * selfCpp = static_cast<VehicleTrackSettings *>(self->obj);
  float result = selfCpp->mMaxBrakeTorque;
  return result;
};

void JoltC_VehicleTrackSettings_mMaxBrakeTorque_Set(
  JoltC_VehicleTrackSettings_t * self,
  float mMaxBrakeTorque,
  char** outErrMsg
) {
  VehicleTrackSettings * selfCpp = static_cast<VehicleTrackSettings *>(self->obj);
  selfCpp->mMaxBrakeTorque = mMaxBrakeTorque;
};

float JoltC_VehicleTrackSettings_mDifferentialRatio_Get(
  JoltC_VehicleTrackSettings_t * self,
  char** outErrMsg
) {
  VehicleTrackSettings * selfCpp = static_cast<VehicleTrackSettings *>(self->obj);
  float result = selfCpp->mDifferentialRatio;
  return result;
};

void JoltC_VehicleTrackSettings_mDifferentialRatio_Set(
  JoltC_VehicleTrackSettings_t * self,
  float mDifferentialRatio,
  char** outErrMsg
) {
  VehicleTrackSettings * selfCpp = static_cast<VehicleTrackSettings *>(self->obj);
  selfCpp->mDifferentialRatio = mDifferentialRatio;
};

//endregion properties

#ifdef __cplusplus
}
#endif

