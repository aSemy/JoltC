#include "JoltC/JoltC_VehicleEngineSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region properties

float JoltC_VehicleEngineSettings_mMaxTorque_Get(
  JoltC_VehicleEngineSettings_t * self,
  char** outErrMsg
) {
  VehicleEngineSettings * selfCpp = static_cast<VehicleEngineSettings *>(self->obj);
  float result = selfCpp->mMaxTorque;
  return result;
};

void JoltC_VehicleEngineSettings_mMaxTorque_Set(
  JoltC_VehicleEngineSettings_t * self,
  float mMaxTorque,
  char** outErrMsg
) {
  VehicleEngineSettings * selfCpp = static_cast<VehicleEngineSettings *>(self->obj);
  selfCpp->mMaxTorque = mMaxTorque;
};

float JoltC_VehicleEngineSettings_mMinRPM_Get(
  JoltC_VehicleEngineSettings_t * self,
  char** outErrMsg
) {
  VehicleEngineSettings * selfCpp = static_cast<VehicleEngineSettings *>(self->obj);
  float result = selfCpp->mMinRPM;
  return result;
};

void JoltC_VehicleEngineSettings_mMinRPM_Set(
  JoltC_VehicleEngineSettings_t * self,
  float mMinRPM,
  char** outErrMsg
) {
  VehicleEngineSettings * selfCpp = static_cast<VehicleEngineSettings *>(self->obj);
  selfCpp->mMinRPM = mMinRPM;
};

float JoltC_VehicleEngineSettings_mMaxRPM_Get(
  JoltC_VehicleEngineSettings_t * self,
  char** outErrMsg
) {
  VehicleEngineSettings * selfCpp = static_cast<VehicleEngineSettings *>(self->obj);
  float result = selfCpp->mMaxRPM;
  return result;
};

void JoltC_VehicleEngineSettings_mMaxRPM_Set(
  JoltC_VehicleEngineSettings_t * self,
  float mMaxRPM,
  char** outErrMsg
) {
  VehicleEngineSettings * selfCpp = static_cast<VehicleEngineSettings *>(self->obj);
  selfCpp->mMaxRPM = mMaxRPM;
};

JoltC_LinearCurve_t * JoltC_VehicleEngineSettings_mNormalizedTorque_Get(
  JoltC_VehicleEngineSettings_t * self,
  char** outErrMsg
) {
  VehicleEngineSettings * selfCpp = static_cast<VehicleEngineSettings *>(self->obj);
  LinearCurve resultValue = selfCpp->mNormalizedTorque;
  LinearCurve* result = new LinearCurve(resultValue);
  return reinterpret_cast<JoltC_LinearCurve_t *>(result);
};

void JoltC_VehicleEngineSettings_mNormalizedTorque_Set(
  JoltC_VehicleEngineSettings_t * self,
  JoltC_LinearCurve_t * mNormalizedTorque,
  char** outErrMsg
) {
  VehicleEngineSettings * selfCpp = static_cast<VehicleEngineSettings *>(self->obj);
  selfCpp->mNormalizedTorque = *reinterpret_cast<LinearCurve *>(mNormalizedTorque->obj);
};

float JoltC_VehicleEngineSettings_mInertia_Get(
  JoltC_VehicleEngineSettings_t * self,
  char** outErrMsg
) {
  VehicleEngineSettings * selfCpp = static_cast<VehicleEngineSettings *>(self->obj);
  float result = selfCpp->mInertia;
  return result;
};

void JoltC_VehicleEngineSettings_mInertia_Set(
  JoltC_VehicleEngineSettings_t * self,
  float mInertia,
  char** outErrMsg
) {
  VehicleEngineSettings * selfCpp = static_cast<VehicleEngineSettings *>(self->obj);
  selfCpp->mInertia = mInertia;
};

float JoltC_VehicleEngineSettings_mAngularDamping_Get(
  JoltC_VehicleEngineSettings_t * self,
  char** outErrMsg
) {
  VehicleEngineSettings * selfCpp = static_cast<VehicleEngineSettings *>(self->obj);
  float result = selfCpp->mAngularDamping;
  return result;
};

void JoltC_VehicleEngineSettings_mAngularDamping_Set(
  JoltC_VehicleEngineSettings_t * self,
  float mAngularDamping,
  char** outErrMsg
) {
  VehicleEngineSettings * selfCpp = static_cast<VehicleEngineSettings *>(self->obj);
  selfCpp->mAngularDamping = mAngularDamping;
};

//endregion properties

#ifdef __cplusplus
}
#endif

