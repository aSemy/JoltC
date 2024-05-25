#include "JoltC/JoltC_VehicleConstraintSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_VehicleConstraintSettings_t * JoltC_VehicleConstraintSettings_new(
  char** outErrMsg
) {
  try {
    JoltC_VehicleConstraintSettings_t * cInstance = new JoltC_VehicleConstraintSettings_t();
    VehicleConstraintSettings * cppInstance = new VehicleConstraintSettings();
    cInstance->obj = cppInstance;
    return cInstance;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

//endregion constructors

//region functions

unsigned long JoltC_VehicleConstraintSettings_GetRefCount(
  JoltC_VehicleConstraintSettings_t * self,
  char** outErrMsg
) {
  try {
    VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
    unsigned long result = selfCpp->GetRefCount();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_VehicleConstraintSettings_AddRef(
  JoltC_VehicleConstraintSettings_t * self,
  char** outErrMsg
) {
  try {
    VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_VehicleConstraintSettings_Release(
  JoltC_VehicleConstraintSettings_t * self,
  char** outErrMsg
) {
  try {
    VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
    
    selfCpp->Release();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

//endregion functions

//region properties

JoltC_Vec3_t * JoltC_VehicleConstraintSettings_mUp_Get(
  JoltC_VehicleConstraintSettings_t * self,
  char** outErrMsg
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mUp;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_VehicleConstraintSettings_mUp_Set(
  JoltC_VehicleConstraintSettings_t * self,
  JoltC_Vec3_t * mUp,
  char** outErrMsg
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  selfCpp->mUp = *reinterpret_cast<Vec3 *>(mUp->obj);
};

JoltC_Vec3_t * JoltC_VehicleConstraintSettings_mForward_Get(
  JoltC_VehicleConstraintSettings_t * self,
  char** outErrMsg
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mForward;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_VehicleConstraintSettings_mForward_Set(
  JoltC_VehicleConstraintSettings_t * self,
  JoltC_Vec3_t * mForward,
  char** outErrMsg
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  selfCpp->mForward = *reinterpret_cast<Vec3 *>(mForward->obj);
};

float JoltC_VehicleConstraintSettings_mMaxPitchRollAngle_Get(
  JoltC_VehicleConstraintSettings_t * self,
  char** outErrMsg
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  float result = selfCpp->mMaxPitchRollAngle;
  return result;
};

void JoltC_VehicleConstraintSettings_mMaxPitchRollAngle_Set(
  JoltC_VehicleConstraintSettings_t * self,
  float mMaxPitchRollAngle,
  char** outErrMsg
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  selfCpp->mMaxPitchRollAngle = mMaxPitchRollAngle;
};

JoltC_ArrayWheelSettings_t * JoltC_VehicleConstraintSettings_mWheels_Get(
  JoltC_VehicleConstraintSettings_t * self,
  char** outErrMsg
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  ArrayWheelSettings resultValue = selfCpp->mWheels;
  ArrayWheelSettings* result = new ArrayWheelSettings(resultValue);
  return reinterpret_cast<JoltC_ArrayWheelSettings_t *>(result);
};

void JoltC_VehicleConstraintSettings_mWheels_Set(
  JoltC_VehicleConstraintSettings_t * self,
  JoltC_ArrayWheelSettings_t * mWheels,
  char** outErrMsg
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  selfCpp->mWheels = *reinterpret_cast<ArrayWheelSettings *>(mWheels->obj);
};

JoltC_ArrayVehicleAntiRollBar_t * JoltC_VehicleConstraintSettings_mAntiRollBars_Get(
  JoltC_VehicleConstraintSettings_t * self,
  char** outErrMsg
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  ArrayVehicleAntiRollBar resultValue = selfCpp->mAntiRollBars;
  ArrayVehicleAntiRollBar* result = new ArrayVehicleAntiRollBar(resultValue);
  return reinterpret_cast<JoltC_ArrayVehicleAntiRollBar_t *>(result);
};

void JoltC_VehicleConstraintSettings_mAntiRollBars_Set(
  JoltC_VehicleConstraintSettings_t * self,
  JoltC_ArrayVehicleAntiRollBar_t * mAntiRollBars,
  char** outErrMsg
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  selfCpp->mAntiRollBars = *reinterpret_cast<ArrayVehicleAntiRollBar *>(mAntiRollBars->obj);
};

JoltC_VehicleControllerSettings_t * JoltC_VehicleConstraintSettings_mController_Get(
  JoltC_VehicleConstraintSettings_t * self,
  char** outErrMsg
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  VehicleControllerSettings * result = selfCpp->mController;
  return reinterpret_cast<JoltC_VehicleControllerSettings_t *>(result);
};

void JoltC_VehicleConstraintSettings_mController_Set(
  JoltC_VehicleConstraintSettings_t * self,
  JoltC_VehicleControllerSettings_t * mController,
  char** outErrMsg
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  selfCpp->mController = reinterpret_cast<VehicleControllerSettings *>(mController->obj);
};

bool JoltC_VehicleConstraintSettings_mEnabled_Get(
  JoltC_VehicleConstraintSettings_t * self,
  char** outErrMsg
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  bool result = selfCpp->mEnabled;
  return result;
};

void JoltC_VehicleConstraintSettings_mEnabled_Set(
  JoltC_VehicleConstraintSettings_t * self,
  bool mEnabled,
  char** outErrMsg
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  selfCpp->mEnabled = mEnabled;
};

long JoltC_VehicleConstraintSettings_mNumVelocityStepsOverride_Get(
  JoltC_VehicleConstraintSettings_t * self,
  char** outErrMsg
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  long result = selfCpp->mNumVelocityStepsOverride;
  return result;
};

void JoltC_VehicleConstraintSettings_mNumVelocityStepsOverride_Set(
  JoltC_VehicleConstraintSettings_t * self,
  long mNumVelocityStepsOverride,
  char** outErrMsg
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  selfCpp->mNumVelocityStepsOverride = mNumVelocityStepsOverride;
};

long JoltC_VehicleConstraintSettings_mNumPositionStepsOverride_Get(
  JoltC_VehicleConstraintSettings_t * self,
  char** outErrMsg
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  long result = selfCpp->mNumPositionStepsOverride;
  return result;
};

void JoltC_VehicleConstraintSettings_mNumPositionStepsOverride_Set(
  JoltC_VehicleConstraintSettings_t * self,
  long mNumPositionStepsOverride,
  char** outErrMsg
) {
  VehicleConstraintSettings * selfCpp = static_cast<VehicleConstraintSettings *>(self->obj);
  selfCpp->mNumPositionStepsOverride = mNumPositionStepsOverride;
};

//endregion properties

#ifdef __cplusplus
}
#endif

