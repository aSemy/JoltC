#include "JoltC/JoltC_VehicleEngineSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_VehicleEngineSettings_destroy(
  JoltC_VehicleEngineSettings_t * self
){
  if (self == NULL) return;
  delete static_cast<VehicleEngineSettings *>(self->obj);
  free(self);
}

//endregion
//region converters

/**
 * Convert an instance of JoltC_VehicleEngine_t into JoltC_VehicleEngineSettings_t.
 */
JoltC_VehicleEngineSettings_t * JoltC_VehicleEngineSettings_From_VehicleEngine(
  JoltC_VehicleEngine_t * subtype
) {
  return (JoltC_VehicleEngineSettings_t*) subtype;
};

//endregion

//region properties

float JoltC_VehicleEngineSettings_mMaxTorque_Get(
  JoltC_VehicleEngineSettings_t * self
) {
  VehicleEngineSettings * selfCpp = static_cast<VehicleEngineSettings *>(self->obj);
  return selfCpp->mMaxTorque;
}

void JoltC_VehicleEngineSettings_mMaxTorque_Set(
  JoltC_VehicleEngineSettings_t * self,
  float mMaxTorque
) {
  VehicleEngineSettings * selfCpp = static_cast<VehicleEngineSettings *>(self->obj);
  selfCpp->mMaxTorque = mMaxTorque;
}

float JoltC_VehicleEngineSettings_mMinRPM_Get(
  JoltC_VehicleEngineSettings_t * self
) {
  VehicleEngineSettings * selfCpp = static_cast<VehicleEngineSettings *>(self->obj);
  return selfCpp->mMinRPM;
}

void JoltC_VehicleEngineSettings_mMinRPM_Set(
  JoltC_VehicleEngineSettings_t * self,
  float mMinRPM
) {
  VehicleEngineSettings * selfCpp = static_cast<VehicleEngineSettings *>(self->obj);
  selfCpp->mMinRPM = mMinRPM;
}

float JoltC_VehicleEngineSettings_mMaxRPM_Get(
  JoltC_VehicleEngineSettings_t * self
) {
  VehicleEngineSettings * selfCpp = static_cast<VehicleEngineSettings *>(self->obj);
  return selfCpp->mMaxRPM;
}

void JoltC_VehicleEngineSettings_mMaxRPM_Set(
  JoltC_VehicleEngineSettings_t * self,
  float mMaxRPM
) {
  VehicleEngineSettings * selfCpp = static_cast<VehicleEngineSettings *>(self->obj);
  selfCpp->mMaxRPM = mMaxRPM;
}

JoltC_LinearCurve_t * JoltC_VehicleEngineSettings_mNormalizedTorque_Get(
  JoltC_VehicleEngineSettings_t * self
) {
  VehicleEngineSettings * selfCpp = static_cast<VehicleEngineSettings *>(self->obj);
  LinearCurve * resultPtr = new LinearCurve();
  *resultPtr = selfCpp->mNormalizedTorque;
  JoltC_LinearCurve_t * result = new JoltC_LinearCurve_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_VehicleEngineSettings_mNormalizedTorque_Set(
  JoltC_VehicleEngineSettings_t * self,
  JoltC_LinearCurve_t * mNormalizedTorque
) {
  VehicleEngineSettings * selfCpp = static_cast<VehicleEngineSettings *>(self->obj);
  selfCpp->mNormalizedTorque = *static_cast<LinearCurve *>(mNormalizedTorque->obj);
}

float JoltC_VehicleEngineSettings_mInertia_Get(
  JoltC_VehicleEngineSettings_t * self
) {
  VehicleEngineSettings * selfCpp = static_cast<VehicleEngineSettings *>(self->obj);
  return selfCpp->mInertia;
}

void JoltC_VehicleEngineSettings_mInertia_Set(
  JoltC_VehicleEngineSettings_t * self,
  float mInertia
) {
  VehicleEngineSettings * selfCpp = static_cast<VehicleEngineSettings *>(self->obj);
  selfCpp->mInertia = mInertia;
}

float JoltC_VehicleEngineSettings_mAngularDamping_Get(
  JoltC_VehicleEngineSettings_t * self
) {
  VehicleEngineSettings * selfCpp = static_cast<VehicleEngineSettings *>(self->obj);
  return selfCpp->mAngularDamping;
}

void JoltC_VehicleEngineSettings_mAngularDamping_Set(
  JoltC_VehicleEngineSettings_t * self,
  float mAngularDamping
) {
  VehicleEngineSettings * selfCpp = static_cast<VehicleEngineSettings *>(self->obj);
  selfCpp->mAngularDamping = mAngularDamping;
}

//endregion


#ifdef __cplusplus
}
#endif
