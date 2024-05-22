#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_VehicleConstraintSettings_t * JPC_VehicleConstraintSettings_new();

//endregion constructors

//region functions

unsigned long JPC_VehicleConstraintSettings_GetRefCount(
  JPC_VehicleConstraintSettings_t * self
);

void JPC_VehicleConstraintSettings_AddRef(
  JPC_VehicleConstraintSettings_t * self
);

void JPC_VehicleConstraintSettings_Release(
  JPC_VehicleConstraintSettings_t * self
);

//endregion functions

//region properties

JPC_Vec3_t * JPC_VehicleConstraintSettings_mUp_Get(
  JPC_VehicleConstraintSettings_t * self
);

void JPC_VehicleConstraintSettings_mUp_Set(
  JPC_VehicleConstraintSettings_t * self,
  JPC_Vec3_t * mUp
);

JPC_Vec3_t * JPC_VehicleConstraintSettings_mForward_Get(
  JPC_VehicleConstraintSettings_t * self
);

void JPC_VehicleConstraintSettings_mForward_Set(
  JPC_VehicleConstraintSettings_t * self,
  JPC_Vec3_t * mForward
);

float JPC_VehicleConstraintSettings_mMaxPitchRollAngle_Get(
  JPC_VehicleConstraintSettings_t * self
);

void JPC_VehicleConstraintSettings_mMaxPitchRollAngle_Set(
  JPC_VehicleConstraintSettings_t * self,
  float mMaxPitchRollAngle
);

JPC_ArrayWheelSettings_t * JPC_VehicleConstraintSettings_mWheels_Get(
  JPC_VehicleConstraintSettings_t * self
);

void JPC_VehicleConstraintSettings_mWheels_Set(
  JPC_VehicleConstraintSettings_t * self,
  JPC_ArrayWheelSettings_t * mWheels
);

JPC_ArrayVehicleAntiRollBar_t * JPC_VehicleConstraintSettings_mAntiRollBars_Get(
  JPC_VehicleConstraintSettings_t * self
);

void JPC_VehicleConstraintSettings_mAntiRollBars_Set(
  JPC_VehicleConstraintSettings_t * self,
  JPC_ArrayVehicleAntiRollBar_t * mAntiRollBars
);

JPC_VehicleControllerSettings_t * JPC_VehicleConstraintSettings_mController_Get(
  JPC_VehicleConstraintSettings_t * self
);

void JPC_VehicleConstraintSettings_mController_Set(
  JPC_VehicleConstraintSettings_t * self,
  JPC_VehicleControllerSettings_t * mController
);

bool JPC_VehicleConstraintSettings_mEnabled_Get(
  JPC_VehicleConstraintSettings_t * self
);

void JPC_VehicleConstraintSettings_mEnabled_Set(
  JPC_VehicleConstraintSettings_t * self,
  bool mEnabled
);

long JPC_VehicleConstraintSettings_mNumVelocityStepsOverride_Get(
  JPC_VehicleConstraintSettings_t * self
);

void JPC_VehicleConstraintSettings_mNumVelocityStepsOverride_Set(
  JPC_VehicleConstraintSettings_t * self,
  long mNumVelocityStepsOverride
);

long JPC_VehicleConstraintSettings_mNumPositionStepsOverride_Get(
  JPC_VehicleConstraintSettings_t * self
);

void JPC_VehicleConstraintSettings_mNumPositionStepsOverride_Set(
  JPC_VehicleConstraintSettings_t * self,
  long mNumPositionStepsOverride
);

//endregion properties


#ifdef __cplusplus
}
#endif

