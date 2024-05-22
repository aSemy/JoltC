#include "JoltC/JPC_VehicleEngine.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JPC_VehicleEngine_ClampRPM(
  JPC_VehicleEngine_t * self
) {
  VehicleEngine * selfCpp = static_cast<VehicleEngine *>(self->obj);
  
  selfCpp->ClampRPM();
};

float JPC_VehicleEngine_GetCurrentRPM(
  JPC_VehicleEngine_t * self
) {
  VehicleEngine * selfCpp = static_cast<VehicleEngine *>(self->obj);
  float result = selfCpp->GetCurrentRPM();
  return result;
};

void JPC_VehicleEngine_SetCurrentRPM(
  JPC_VehicleEngine_t * self,
  float inRPM
) {
  VehicleEngine * selfCpp = static_cast<VehicleEngine *>(self->obj);
  
  selfCpp->SetCurrentRPM(
  inRPM
  );
};

float JPC_VehicleEngine_GetAngularVelocity(
  JPC_VehicleEngine_t * self
) {
  VehicleEngine * selfCpp = static_cast<VehicleEngine *>(self->obj);
  float result = selfCpp->GetAngularVelocity();
  return result;
};

float JPC_VehicleEngine_GetTorque(
  JPC_VehicleEngine_t * self,
  float inAcceleration
) {
  VehicleEngine * selfCpp = static_cast<VehicleEngine *>(self->obj);
  float result = selfCpp->GetTorque(
  inAcceleration
  );
  return result;
};

//endregion functions

//region properties

float JPC_VehicleEngine_mMaxTorque_Get(
  JPC_VehicleEngine_t * self
) {
  VehicleEngine * selfCpp = static_cast<VehicleEngine *>(self->obj);
  float result = selfCpp->mMaxTorque;
  return result;
};

void JPC_VehicleEngine_mMaxTorque_Set(
  JPC_VehicleEngine_t * self,
  float mMaxTorque
) {
  VehicleEngine * selfCpp = static_cast<VehicleEngine *>(self->obj);
  selfCpp->mMaxTorque = mMaxTorque;
};

float JPC_VehicleEngine_mMinRPM_Get(
  JPC_VehicleEngine_t * self
) {
  VehicleEngine * selfCpp = static_cast<VehicleEngine *>(self->obj);
  float result = selfCpp->mMinRPM;
  return result;
};

void JPC_VehicleEngine_mMinRPM_Set(
  JPC_VehicleEngine_t * self,
  float mMinRPM
) {
  VehicleEngine * selfCpp = static_cast<VehicleEngine *>(self->obj);
  selfCpp->mMinRPM = mMinRPM;
};

float JPC_VehicleEngine_mMaxRPM_Get(
  JPC_VehicleEngine_t * self
) {
  VehicleEngine * selfCpp = static_cast<VehicleEngine *>(self->obj);
  float result = selfCpp->mMaxRPM;
  return result;
};

void JPC_VehicleEngine_mMaxRPM_Set(
  JPC_VehicleEngine_t * self,
  float mMaxRPM
) {
  VehicleEngine * selfCpp = static_cast<VehicleEngine *>(self->obj);
  selfCpp->mMaxRPM = mMaxRPM;
};

JPC_LinearCurve_t * JPC_VehicleEngine_mNormalizedTorque_Get(
  JPC_VehicleEngine_t * self
) {
  VehicleEngine * selfCpp = static_cast<VehicleEngine *>(self->obj);
  LinearCurve resultValue = selfCpp->mNormalizedTorque;
  LinearCurve* result = new LinearCurve(resultValue);
  return reinterpret_cast<JPC_LinearCurve_t *>(result);
};

void JPC_VehicleEngine_mNormalizedTorque_Set(
  JPC_VehicleEngine_t * self,
  JPC_LinearCurve_t * mNormalizedTorque
) {
  VehicleEngine * selfCpp = static_cast<VehicleEngine *>(self->obj);
  selfCpp->mNormalizedTorque = *reinterpret_cast<LinearCurve *>(mNormalizedTorque->obj);
};

float JPC_VehicleEngine_mInertia_Get(
  JPC_VehicleEngine_t * self
) {
  VehicleEngine * selfCpp = static_cast<VehicleEngine *>(self->obj);
  float result = selfCpp->mInertia;
  return result;
};

void JPC_VehicleEngine_mInertia_Set(
  JPC_VehicleEngine_t * self,
  float mInertia
) {
  VehicleEngine * selfCpp = static_cast<VehicleEngine *>(self->obj);
  selfCpp->mInertia = mInertia;
};

float JPC_VehicleEngine_mAngularDamping_Get(
  JPC_VehicleEngine_t * self
) {
  VehicleEngine * selfCpp = static_cast<VehicleEngine *>(self->obj);
  float result = selfCpp->mAngularDamping;
  return result;
};

void JPC_VehicleEngine_mAngularDamping_Set(
  JPC_VehicleEngine_t * self,
  float mAngularDamping
) {
  VehicleEngine * selfCpp = static_cast<VehicleEngine *>(self->obj);
  selfCpp->mAngularDamping = mAngularDamping;
};

//endregion properties

#ifdef __cplusplus
}
#endif

