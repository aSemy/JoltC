#include "JoltC/JPC_VehicleEngineSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region properties

float JPC_VehicleEngineSettings_mMaxTorque_Get(
  JPC_VehicleEngineSettings_t * self
) {
  VehicleEngineSettings * selfCpp = static_cast<VehicleEngineSettings *>(self->obj);
  float result = selfCpp->mMaxTorque;
  return result;
};

void JPC_VehicleEngineSettings_mMaxTorque_Set(
  JPC_VehicleEngineSettings_t * self,
  float mMaxTorque
) {
  VehicleEngineSettings * selfCpp = static_cast<VehicleEngineSettings *>(self->obj);
  selfCpp->mMaxTorque = mMaxTorque;
};

float JPC_VehicleEngineSettings_mMinRPM_Get(
  JPC_VehicleEngineSettings_t * self
) {
  VehicleEngineSettings * selfCpp = static_cast<VehicleEngineSettings *>(self->obj);
  float result = selfCpp->mMinRPM;
  return result;
};

void JPC_VehicleEngineSettings_mMinRPM_Set(
  JPC_VehicleEngineSettings_t * self,
  float mMinRPM
) {
  VehicleEngineSettings * selfCpp = static_cast<VehicleEngineSettings *>(self->obj);
  selfCpp->mMinRPM = mMinRPM;
};

float JPC_VehicleEngineSettings_mMaxRPM_Get(
  JPC_VehicleEngineSettings_t * self
) {
  VehicleEngineSettings * selfCpp = static_cast<VehicleEngineSettings *>(self->obj);
  float result = selfCpp->mMaxRPM;
  return result;
};

void JPC_VehicleEngineSettings_mMaxRPM_Set(
  JPC_VehicleEngineSettings_t * self,
  float mMaxRPM
) {
  VehicleEngineSettings * selfCpp = static_cast<VehicleEngineSettings *>(self->obj);
  selfCpp->mMaxRPM = mMaxRPM;
};

JPC_LinearCurve_t * JPC_VehicleEngineSettings_mNormalizedTorque_Get(
  JPC_VehicleEngineSettings_t * self
) {
  VehicleEngineSettings * selfCpp = static_cast<VehicleEngineSettings *>(self->obj);
  LinearCurve resultValue = selfCpp->mNormalizedTorque;
  LinearCurve* result = new LinearCurve(resultValue);
  return reinterpret_cast<JPC_LinearCurve_t *>(result);
};

void JPC_VehicleEngineSettings_mNormalizedTorque_Set(
  JPC_VehicleEngineSettings_t * self,
  JPC_LinearCurve_t * mNormalizedTorque
) {
  VehicleEngineSettings * selfCpp = static_cast<VehicleEngineSettings *>(self->obj);
  selfCpp->mNormalizedTorque = *reinterpret_cast<LinearCurve *>(mNormalizedTorque->obj);
};

float JPC_VehicleEngineSettings_mInertia_Get(
  JPC_VehicleEngineSettings_t * self
) {
  VehicleEngineSettings * selfCpp = static_cast<VehicleEngineSettings *>(self->obj);
  float result = selfCpp->mInertia;
  return result;
};

void JPC_VehicleEngineSettings_mInertia_Set(
  JPC_VehicleEngineSettings_t * self,
  float mInertia
) {
  VehicleEngineSettings * selfCpp = static_cast<VehicleEngineSettings *>(self->obj);
  selfCpp->mInertia = mInertia;
};

float JPC_VehicleEngineSettings_mAngularDamping_Get(
  JPC_VehicleEngineSettings_t * self
) {
  VehicleEngineSettings * selfCpp = static_cast<VehicleEngineSettings *>(self->obj);
  float result = selfCpp->mAngularDamping;
  return result;
};

void JPC_VehicleEngineSettings_mAngularDamping_Set(
  JPC_VehicleEngineSettings_t * self,
  float mAngularDamping
) {
  VehicleEngineSettings * selfCpp = static_cast<VehicleEngineSettings *>(self->obj);
  selfCpp->mAngularDamping = mAngularDamping;
};

//endregion properties

#ifdef __cplusplus
}
#endif

