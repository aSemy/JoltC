#include "JoltC/JoltC_VehicleConstraintSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `VehicleConstraintSettings` instance.
 */
JoltC_VehicleConstraintSettings_t * JoltC_VehicleConstraintSettings_new() {
  JoltC_VehicleConstraintSettings_t * cInstance = new JoltC_VehicleConstraintSettings_t();
  VehicleConstraintSettings * cppInstance = new VehicleConstraintSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_VehicleConstraintSettings_destroy(
  JoltC_VehicleConstraintSettings_t * self
){
  if (self == NULL) return;
  delete static_cast<VehicleConstraintSettings *>(self->obj);
  free(self);
}

//endregion
//region functions

unsigned long JoltC_VehicleConstraintSettings_GetRefCount(
  JoltC_VehicleConstraintSettings_t * self
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_VehicleConstraintSettings_AddRef(
  JoltC_VehicleConstraintSettings_t * self
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_VehicleConstraintSettings_Release(
  JoltC_VehicleConstraintSettings_t * self
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  selfCpp->Release();
}

//endregion

//region properties

JoltC_Vec3_t * JoltC_VehicleConstraintSettings_mUp_Get(
  JoltC_VehicleConstraintSettings_t * self
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mUp;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_VehicleConstraintSettings_mUp_Set(
  JoltC_VehicleConstraintSettings_t * self,
  JoltC_Vec3_t * mUp
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  selfCpp->mUp = *static_cast<Vec3 *>(mUp->obj);
}

JoltC_Vec3_t * JoltC_VehicleConstraintSettings_mForward_Get(
  JoltC_VehicleConstraintSettings_t * self
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mForward;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_VehicleConstraintSettings_mForward_Set(
  JoltC_VehicleConstraintSettings_t * self,
  JoltC_Vec3_t * mForward
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  selfCpp->mForward = *static_cast<Vec3 *>(mForward->obj);
}

float JoltC_VehicleConstraintSettings_mMaxPitchRollAngle_Get(
  JoltC_VehicleConstraintSettings_t * self
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  return selfCpp->mMaxPitchRollAngle;
}

void JoltC_VehicleConstraintSettings_mMaxPitchRollAngle_Set(
  JoltC_VehicleConstraintSettings_t * self,
  float mMaxPitchRollAngle
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  selfCpp->mMaxPitchRollAngle = mMaxPitchRollAngle;
}

JoltC_ArrayWheelSettings_t * JoltC_VehicleConstraintSettings_mWheels_Get(
  JoltC_VehicleConstraintSettings_t * self
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  ArrayWheelSettings * resultPtr = new ArrayWheelSettings();
  *resultPtr = selfCpp->mWheels;
  JoltC_ArrayWheelSettings_t * result = new JoltC_ArrayWheelSettings_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_VehicleConstraintSettings_mWheels_Set(
  JoltC_VehicleConstraintSettings_t * self,
  JoltC_ArrayWheelSettings_t * mWheels
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  selfCpp->mWheels = *static_cast<ArrayWheelSettings *>(mWheels->obj);
}

JoltC_ArrayVehicleAntiRollBar_t * JoltC_VehicleConstraintSettings_mAntiRollBars_Get(
  JoltC_VehicleConstraintSettings_t * self
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  ArrayVehicleAntiRollBar * resultPtr = new ArrayVehicleAntiRollBar();
  *resultPtr = selfCpp->mAntiRollBars;
  JoltC_ArrayVehicleAntiRollBar_t * result = new JoltC_ArrayVehicleAntiRollBar_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_VehicleConstraintSettings_mAntiRollBars_Set(
  JoltC_VehicleConstraintSettings_t * self,
  JoltC_ArrayVehicleAntiRollBar_t * mAntiRollBars
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  selfCpp->mAntiRollBars = *static_cast<ArrayVehicleAntiRollBar *>(mAntiRollBars->obj);
}

JoltC_VehicleControllerSettings_t * JoltC_VehicleConstraintSettings_mController_Get(
  JoltC_VehicleConstraintSettings_t * self
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  const VehicleControllerSettings * resultPtr = selfCpp->mController;
  JoltC_VehicleControllerSettings_t * result = new JoltC_VehicleControllerSettings_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

void JoltC_VehicleConstraintSettings_mController_Set(
  JoltC_VehicleConstraintSettings_t * self,
  JoltC_VehicleControllerSettings_t * mController
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  selfCpp->mController = static_cast<VehicleControllerSettings *>(mController->obj);
}

bool JoltC_VehicleConstraintSettings_mEnabled_Get(
  JoltC_VehicleConstraintSettings_t * self
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  return selfCpp->mEnabled;
}

void JoltC_VehicleConstraintSettings_mEnabled_Set(
  JoltC_VehicleConstraintSettings_t * self,
  bool mEnabled
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  selfCpp->mEnabled = mEnabled;
}

long JoltC_VehicleConstraintSettings_mNumVelocityStepsOverride_Get(
  JoltC_VehicleConstraintSettings_t * self
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  return selfCpp->mNumVelocityStepsOverride;
}

void JoltC_VehicleConstraintSettings_mNumVelocityStepsOverride_Set(
  JoltC_VehicleConstraintSettings_t * self,
  long mNumVelocityStepsOverride
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  selfCpp->mNumVelocityStepsOverride = mNumVelocityStepsOverride;
}

long JoltC_VehicleConstraintSettings_mNumPositionStepsOverride_Get(
  JoltC_VehicleConstraintSettings_t * self
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  return selfCpp->mNumPositionStepsOverride;
}

void JoltC_VehicleConstraintSettings_mNumPositionStepsOverride_Set(
  JoltC_VehicleConstraintSettings_t * self,
  long mNumPositionStepsOverride
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  selfCpp->mNumPositionStepsOverride = mNumPositionStepsOverride;
}

//endregion


#ifdef __cplusplus
}
#endif
