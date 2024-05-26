#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_VehicleConstraintSettings_t * JoltC_VehicleConstraintSettings_new();

//endregion

//region functions

unsigned long JoltC_VehicleConstraintSettings_GetRefCount(
  JoltC_VehicleConstraintSettings_t * self
);

void JoltC_VehicleConstraintSettings_AddRef(
  JoltC_VehicleConstraintSettings_t * self
);

void JoltC_VehicleConstraintSettings_Release(
  JoltC_VehicleConstraintSettings_t * self
);

//endregion

//region properties

JoltC_Vec3_t * JoltC_VehicleConstraintSettings_mUp_Get(
  JoltC_VehicleConstraintSettings_t * self
);

void JoltC_VehicleConstraintSettings_mUp_Set(
  JoltC_VehicleConstraintSettings_t * self,
  JoltC_Vec3_t * mUp
);

JoltC_Vec3_t * JoltC_VehicleConstraintSettings_mForward_Get(
  JoltC_VehicleConstraintSettings_t * self
);

void JoltC_VehicleConstraintSettings_mForward_Set(
  JoltC_VehicleConstraintSettings_t * self,
  JoltC_Vec3_t * mForward
);

float JoltC_VehicleConstraintSettings_mMaxPitchRollAngle_Get(
  JoltC_VehicleConstraintSettings_t * self
);

void JoltC_VehicleConstraintSettings_mMaxPitchRollAngle_Set(
  JoltC_VehicleConstraintSettings_t * self,
  float mMaxPitchRollAngle
);

JoltC_ArrayWheelSettings_t * JoltC_VehicleConstraintSettings_mWheels_Get(
  JoltC_VehicleConstraintSettings_t * self
);

void JoltC_VehicleConstraintSettings_mWheels_Set(
  JoltC_VehicleConstraintSettings_t * self,
  JoltC_ArrayWheelSettings_t * mWheels
);

JoltC_ArrayVehicleAntiRollBar_t * JoltC_VehicleConstraintSettings_mAntiRollBars_Get(
  JoltC_VehicleConstraintSettings_t * self
);

void JoltC_VehicleConstraintSettings_mAntiRollBars_Set(
  JoltC_VehicleConstraintSettings_t * self,
  JoltC_ArrayVehicleAntiRollBar_t * mAntiRollBars
);

JoltC_VehicleControllerSettings_t * JoltC_VehicleConstraintSettings_mController_Get(
  JoltC_VehicleConstraintSettings_t * self
);

void JoltC_VehicleConstraintSettings_mController_Set(
  JoltC_VehicleConstraintSettings_t * self,
  JoltC_VehicleControllerSettings_t * mController
);

bool JoltC_VehicleConstraintSettings_mEnabled_Get(
  JoltC_VehicleConstraintSettings_t * self
);

void JoltC_VehicleConstraintSettings_mEnabled_Set(
  JoltC_VehicleConstraintSettings_t * self,
  bool mEnabled
);

long JoltC_VehicleConstraintSettings_mNumVelocityStepsOverride_Get(
  JoltC_VehicleConstraintSettings_t * self
);

void JoltC_VehicleConstraintSettings_mNumVelocityStepsOverride_Set(
  JoltC_VehicleConstraintSettings_t * self,
  long mNumVelocityStepsOverride
);

long JoltC_VehicleConstraintSettings_mNumPositionStepsOverride_Get(
  JoltC_VehicleConstraintSettings_t * self
);

void JoltC_VehicleConstraintSettings_mNumPositionStepsOverride_Set(
  JoltC_VehicleConstraintSettings_t * self,
  long mNumPositionStepsOverride
);

//endregion


#ifdef __cplusplus
}
#endif

