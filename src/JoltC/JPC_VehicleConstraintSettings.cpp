#include "JoltC/JPC_VehicleConstraintSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_VehicleConstraintSettings_t * JPC_VehicleConstraintSettings_new() {
  JPC_VehicleConstraintSettings_t * cInstance = new JPC_VehicleConstraintSettings_t();
  VehicleConstraintSettings * cppInstance = new VehicleConstraintSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

unsigned long JPC_VehicleConstraintSettings_GetRefCount(
  JPC_VehicleConstraintSettings_t * self
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_VehicleConstraintSettings_AddRef(
  JPC_VehicleConstraintSettings_t * self
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_VehicleConstraintSettings_Release(
  JPC_VehicleConstraintSettings_t * self
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  
  selfCpp->Release();
};

//endregion functions

//region properties

JPC_Vec3_t * JPC_VehicleConstraintSettings_mUp_Get(
  JPC_VehicleConstraintSettings_t * self
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mUp;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_VehicleConstraintSettings_mUp_Set(
  JPC_VehicleConstraintSettings_t * self,
  JPC_Vec3_t * mUp
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  selfCpp->mUp = *reinterpret_cast<Vec3 *>(mUp->obj);
};

JPC_Vec3_t * JPC_VehicleConstraintSettings_mForward_Get(
  JPC_VehicleConstraintSettings_t * self
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mForward;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_VehicleConstraintSettings_mForward_Set(
  JPC_VehicleConstraintSettings_t * self,
  JPC_Vec3_t * mForward
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  selfCpp->mForward = *reinterpret_cast<Vec3 *>(mForward->obj);
};

float JPC_VehicleConstraintSettings_mMaxPitchRollAngle_Get(
  JPC_VehicleConstraintSettings_t * self
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  float result = selfCpp->mMaxPitchRollAngle;
  return result;
};

void JPC_VehicleConstraintSettings_mMaxPitchRollAngle_Set(
  JPC_VehicleConstraintSettings_t * self,
  float mMaxPitchRollAngle
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  selfCpp->mMaxPitchRollAngle = mMaxPitchRollAngle;
};

JPC_ArrayWheelSettings_t * JPC_VehicleConstraintSettings_mWheels_Get(
  JPC_VehicleConstraintSettings_t * self
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  ArrayWheelSettings resultValue = selfCpp->mWheels;
  ArrayWheelSettings* result = new ArrayWheelSettings(resultValue);
  return reinterpret_cast<JPC_ArrayWheelSettings_t *>(result);
};

void JPC_VehicleConstraintSettings_mWheels_Set(
  JPC_VehicleConstraintSettings_t * self,
  JPC_ArrayWheelSettings_t * mWheels
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  selfCpp->mWheels = *reinterpret_cast<ArrayWheelSettings *>(mWheels->obj);
};

JPC_ArrayVehicleAntiRollBar_t * JPC_VehicleConstraintSettings_mAntiRollBars_Get(
  JPC_VehicleConstraintSettings_t * self
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  ArrayVehicleAntiRollBar resultValue = selfCpp->mAntiRollBars;
  ArrayVehicleAntiRollBar* result = new ArrayVehicleAntiRollBar(resultValue);
  return reinterpret_cast<JPC_ArrayVehicleAntiRollBar_t *>(result);
};

void JPC_VehicleConstraintSettings_mAntiRollBars_Set(
  JPC_VehicleConstraintSettings_t * self,
  JPC_ArrayVehicleAntiRollBar_t * mAntiRollBars
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  selfCpp->mAntiRollBars = *reinterpret_cast<ArrayVehicleAntiRollBar *>(mAntiRollBars->obj);
};

JPC_VehicleControllerSettings_t * JPC_VehicleConstraintSettings_mController_Get(
  JPC_VehicleConstraintSettings_t * self
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  VehicleControllerSettings * result = selfCpp->mController;
  return reinterpret_cast<JPC_VehicleControllerSettings_t *>(result);
};

void JPC_VehicleConstraintSettings_mController_Set(
  JPC_VehicleConstraintSettings_t * self,
  JPC_VehicleControllerSettings_t * mController
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  selfCpp->mController = reinterpret_cast<VehicleControllerSettings *>(mController->obj);
};

bool JPC_VehicleConstraintSettings_mEnabled_Get(
  JPC_VehicleConstraintSettings_t * self
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  bool result = selfCpp->mEnabled;
  return result;
};

void JPC_VehicleConstraintSettings_mEnabled_Set(
  JPC_VehicleConstraintSettings_t * self,
  bool mEnabled
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  selfCpp->mEnabled = mEnabled;
};

long JPC_VehicleConstraintSettings_mNumVelocityStepsOverride_Get(
  JPC_VehicleConstraintSettings_t * self
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  long result = selfCpp->mNumVelocityStepsOverride;
  return result;
};

void JPC_VehicleConstraintSettings_mNumVelocityStepsOverride_Set(
  JPC_VehicleConstraintSettings_t * self,
  long mNumVelocityStepsOverride
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  selfCpp->mNumVelocityStepsOverride = mNumVelocityStepsOverride;
};

long JPC_VehicleConstraintSettings_mNumPositionStepsOverride_Get(
  JPC_VehicleConstraintSettings_t * self
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  long result = selfCpp->mNumPositionStepsOverride;
  return result;
};

void JPC_VehicleConstraintSettings_mNumPositionStepsOverride_Set(
  JPC_VehicleConstraintSettings_t * self,
  long mNumPositionStepsOverride
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  selfCpp->mNumPositionStepsOverride = mNumPositionStepsOverride;
};

//endregion properties

#ifdef __cplusplus
}
#endif

