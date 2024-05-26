#include "JoltC/JoltC_VehicleEngine.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_VehicleEngine_ClampRPM(
  JoltC_VehicleEngine_t * self
) {
  VehicleEngine * selfCpp = static_cast<VehicleEngine *>(self->obj);
  
  selfCpp->ClampRPM();
};

float JoltC_VehicleEngine_GetCurrentRPM(
  JoltC_VehicleEngine_t * self
) {
  VehicleEngine * selfCpp = static_cast<VehicleEngine *>(self->obj);
  float result = selfCpp->GetCurrentRPM();
  return result;
};

void JoltC_VehicleEngine_SetCurrentRPM(
  JoltC_VehicleEngine_t * self,
  float inRPM
) {
  VehicleEngine * selfCpp = static_cast<VehicleEngine *>(self->obj);
  
  selfCpp->SetCurrentRPM(
    inRPM
  );
};

float JoltC_VehicleEngine_GetAngularVelocity(
  JoltC_VehicleEngine_t * self
) {
  VehicleEngine * selfCpp = static_cast<VehicleEngine *>(self->obj);
  float result = selfCpp->GetAngularVelocity();
  return result;
};

float JoltC_VehicleEngine_GetTorque(
  JoltC_VehicleEngine_t * self,
  float inAcceleration
) {
  VehicleEngine * selfCpp = static_cast<VehicleEngine *>(self->obj);
  float result = selfCpp->GetTorque(
    inAcceleration
  );
  return result;
};

//endregion

//region properties

float JoltC_VehicleEngine_mMaxTorque_Get(
  JoltC_VehicleEngine_t * self
) {
  VehicleEngine * selfCpp = static_cast<VehicleEngine *>(self->obj);
  float result = selfCpp->mMaxTorque;
  return result;
};

void JoltC_VehicleEngine_mMaxTorque_Set(
  JoltC_VehicleEngine_t * self,
  float mMaxTorque
) {
  VehicleEngine * selfCpp = static_cast<VehicleEngine *>(self->obj);
  selfCpp->mMaxTorque = mMaxTorque;
};

float JoltC_VehicleEngine_mMinRPM_Get(
  JoltC_VehicleEngine_t * self
) {
  VehicleEngine * selfCpp = static_cast<VehicleEngine *>(self->obj);
  float result = selfCpp->mMinRPM;
  return result;
};

void JoltC_VehicleEngine_mMinRPM_Set(
  JoltC_VehicleEngine_t * self,
  float mMinRPM
) {
  VehicleEngine * selfCpp = static_cast<VehicleEngine *>(self->obj);
  selfCpp->mMinRPM = mMinRPM;
};

float JoltC_VehicleEngine_mMaxRPM_Get(
  JoltC_VehicleEngine_t * self
) {
  VehicleEngine * selfCpp = static_cast<VehicleEngine *>(self->obj);
  float result = selfCpp->mMaxRPM;
  return result;
};

void JoltC_VehicleEngine_mMaxRPM_Set(
  JoltC_VehicleEngine_t * self,
  float mMaxRPM
) {
  VehicleEngine * selfCpp = static_cast<VehicleEngine *>(self->obj);
  selfCpp->mMaxRPM = mMaxRPM;
};

JoltC_LinearCurve_t * JoltC_VehicleEngine_mNormalizedTorque_Get(
  JoltC_VehicleEngine_t * self
) {
  VehicleEngine * selfCpp = static_cast<VehicleEngine *>(self->obj);
  static LinearCurve resultValue = selfCpp->mNormalizedTorque;
  JoltC_LinearCurve_t* result = new JoltC_LinearCurve_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_VehicleEngine_mNormalizedTorque_Set(
  JoltC_VehicleEngine_t * self,
  JoltC_LinearCurve_t * mNormalizedTorque
) {
  VehicleEngine * selfCpp = static_cast<VehicleEngine *>(self->obj);
  selfCpp->mNormalizedTorque = *reinterpret_cast<LinearCurve *>(mNormalizedTorque->obj);
};

float JoltC_VehicleEngine_mInertia_Get(
  JoltC_VehicleEngine_t * self
) {
  VehicleEngine * selfCpp = static_cast<VehicleEngine *>(self->obj);
  float result = selfCpp->mInertia;
  return result;
};

void JoltC_VehicleEngine_mInertia_Set(
  JoltC_VehicleEngine_t * self,
  float mInertia
) {
  VehicleEngine * selfCpp = static_cast<VehicleEngine *>(self->obj);
  selfCpp->mInertia = mInertia;
};

float JoltC_VehicleEngine_mAngularDamping_Get(
  JoltC_VehicleEngine_t * self
) {
  VehicleEngine * selfCpp = static_cast<VehicleEngine *>(self->obj);
  float result = selfCpp->mAngularDamping;
  return result;
};

void JoltC_VehicleEngine_mAngularDamping_Set(
  JoltC_VehicleEngine_t * self,
  float mAngularDamping
) {
  VehicleEngine * selfCpp = static_cast<VehicleEngine *>(self->obj);
  selfCpp->mAngularDamping = mAngularDamping;
};

//endregion

#ifdef __cplusplus
}
#endif

