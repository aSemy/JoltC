#include "JoltC/JoltC_VehicleConstraintSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_VehicleConstraintSettings_t * JoltC_VehicleConstraintSettings_new() {
  JoltC_VehicleConstraintSettings_t * cInstance = new JoltC_VehicleConstraintSettings_t();
  VehicleConstraintSettings * cppInstance = new VehicleConstraintSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

unsigned long JoltC_VehicleConstraintSettings_GetRefCount(
  JoltC_VehicleConstraintSettings_t * self
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_VehicleConstraintSettings_AddRef(
  JoltC_VehicleConstraintSettings_t * self
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  
  selfCpp->AddRef();
};

void JoltC_VehicleConstraintSettings_Release(
  JoltC_VehicleConstraintSettings_t * self
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  
  selfCpp->Release();
};

//endregion

//region properties

JoltC_Vec3_t * JoltC_VehicleConstraintSettings_mUp_Get(
  JoltC_VehicleConstraintSettings_t * self
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  static Vec3 resultValue = selfCpp->mUp;
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_VehicleConstraintSettings_mUp_Set(
  JoltC_VehicleConstraintSettings_t * self,
  JoltC_Vec3_t * mUp
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  selfCpp->mUp = *reinterpret_cast<Vec3 *>(mUp->obj);
};

JoltC_Vec3_t * JoltC_VehicleConstraintSettings_mForward_Get(
  JoltC_VehicleConstraintSettings_t * self
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  static Vec3 resultValue = selfCpp->mForward;
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_VehicleConstraintSettings_mForward_Set(
  JoltC_VehicleConstraintSettings_t * self,
  JoltC_Vec3_t * mForward
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  selfCpp->mForward = *reinterpret_cast<Vec3 *>(mForward->obj);
};

float JoltC_VehicleConstraintSettings_mMaxPitchRollAngle_Get(
  JoltC_VehicleConstraintSettings_t * self
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  float result = selfCpp->mMaxPitchRollAngle;
  return result;
};

void JoltC_VehicleConstraintSettings_mMaxPitchRollAngle_Set(
  JoltC_VehicleConstraintSettings_t * self,
  float mMaxPitchRollAngle
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  selfCpp->mMaxPitchRollAngle = mMaxPitchRollAngle;
};

JoltC_ArrayWheelSettings_t * JoltC_VehicleConstraintSettings_mWheels_Get(
  JoltC_VehicleConstraintSettings_t * self
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  static ArrayWheelSettings resultValue = selfCpp->mWheels;
  JoltC_ArrayWheelSettings_t* result = new JoltC_ArrayWheelSettings_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_VehicleConstraintSettings_mWheels_Set(
  JoltC_VehicleConstraintSettings_t * self,
  JoltC_ArrayWheelSettings_t * mWheels
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  selfCpp->mWheels = *reinterpret_cast<ArrayWheelSettings *>(mWheels->obj);
};

JoltC_ArrayVehicleAntiRollBar_t * JoltC_VehicleConstraintSettings_mAntiRollBars_Get(
  JoltC_VehicleConstraintSettings_t * self
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  static ArrayVehicleAntiRollBar resultValue = selfCpp->mAntiRollBars;
  JoltC_ArrayVehicleAntiRollBar_t* result = new JoltC_ArrayVehicleAntiRollBar_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_VehicleConstraintSettings_mAntiRollBars_Set(
  JoltC_VehicleConstraintSettings_t * self,
  JoltC_ArrayVehicleAntiRollBar_t * mAntiRollBars
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  selfCpp->mAntiRollBars = *reinterpret_cast<ArrayVehicleAntiRollBar *>(mAntiRollBars->obj);
};

JoltC_VehicleControllerSettings_t * JoltC_VehicleConstraintSettings_mController_Get(
  JoltC_VehicleConstraintSettings_t * self
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  VehicleControllerSettings * resultValue = selfCpp->mController;
  JoltC_VehicleControllerSettings_t* result = new JoltC_VehicleControllerSettings_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_VehicleConstraintSettings_mController_Set(
  JoltC_VehicleConstraintSettings_t * self,
  JoltC_VehicleControllerSettings_t * mController
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  selfCpp->mController = reinterpret_cast<VehicleControllerSettings *>(mController->obj);
};

bool JoltC_VehicleConstraintSettings_mEnabled_Get(
  JoltC_VehicleConstraintSettings_t * self
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  bool result = selfCpp->mEnabled;
  return result;
};

void JoltC_VehicleConstraintSettings_mEnabled_Set(
  JoltC_VehicleConstraintSettings_t * self,
  bool mEnabled
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  selfCpp->mEnabled = mEnabled;
};

long JoltC_VehicleConstraintSettings_mNumVelocityStepsOverride_Get(
  JoltC_VehicleConstraintSettings_t * self
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  long result = selfCpp->mNumVelocityStepsOverride;
  return result;
};

void JoltC_VehicleConstraintSettings_mNumVelocityStepsOverride_Set(
  JoltC_VehicleConstraintSettings_t * self,
  long mNumVelocityStepsOverride
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  selfCpp->mNumVelocityStepsOverride = mNumVelocityStepsOverride;
};

long JoltC_VehicleConstraintSettings_mNumPositionStepsOverride_Get(
  JoltC_VehicleConstraintSettings_t * self
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  long result = selfCpp->mNumPositionStepsOverride;
  return result;
};

void JoltC_VehicleConstraintSettings_mNumPositionStepsOverride_Set(
  JoltC_VehicleConstraintSettings_t * self,
  long mNumPositionStepsOverride
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  selfCpp->mNumPositionStepsOverride = mNumPositionStepsOverride;
};

//endregion

#ifdef __cplusplus
}
#endif

