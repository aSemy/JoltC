#include "JoltC/JoltC_VehicleTransmission.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_VehicleTransmission_Set(
  JoltC_VehicleTransmission_t * self,
  long inCurrentGear,
  float inClutchFriction,
  char** outErrMsg
) {
  try {
    VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
    
    selfCpp->Set(
    inCurrentGear,
    inClutchFriction
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

long JoltC_VehicleTransmission_GetCurrentGear(
  JoltC_VehicleTransmission_t * self,
  char** outErrMsg
) {
  try {
    VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
    long result = selfCpp->GetCurrentGear();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_VehicleTransmission_GetClutchFriction(
  JoltC_VehicleTransmission_t * self,
  char** outErrMsg
) {
  try {
    VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
    float result = selfCpp->GetClutchFriction();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_VehicleTransmission_IsSwitchingGear(
  JoltC_VehicleTransmission_t * self,
  char** outErrMsg
) {
  try {
    VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
    bool result = selfCpp->IsSwitchingGear();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_VehicleTransmission_GetCurrentRatio(
  JoltC_VehicleTransmission_t * self,
  char** outErrMsg
) {
  try {
    VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
    float result = selfCpp->GetCurrentRatio();
    return result;
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

JoltC_ETransmissionMode JoltC_VehicleTransmission_mMode_Get(
  JoltC_VehicleTransmission_t * self,
  char** outErrMsg
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  ETransmissionMode result = selfCpp->mMode;
  return static_cast<JoltC_ETransmissionMode>(static_cast<int>(result));
};

void JoltC_VehicleTransmission_mMode_Set(
  JoltC_VehicleTransmission_t * self,
  JoltC_ETransmissionMode mMode,
  char** outErrMsg
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  selfCpp->mMode = static_cast<ETransmissionMode>(static_cast<int>(mMode));
};

JoltC_ArrayFloat_t * JoltC_VehicleTransmission_mGearRatios_Get(
  JoltC_VehicleTransmission_t * self,
  char** outErrMsg
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  ArrayFloat resultValue = selfCpp->mGearRatios;
  ArrayFloat* result = new ArrayFloat(resultValue);
  return reinterpret_cast<JoltC_ArrayFloat_t *>(result);
};

void JoltC_VehicleTransmission_mGearRatios_Set(
  JoltC_VehicleTransmission_t * self,
  JoltC_ArrayFloat_t * mGearRatios,
  char** outErrMsg
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  selfCpp->mGearRatios = *reinterpret_cast<ArrayFloat *>(mGearRatios->obj);
};

JoltC_ArrayFloat_t * JoltC_VehicleTransmission_mReverseGearRatios_Get(
  JoltC_VehicleTransmission_t * self,
  char** outErrMsg
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  ArrayFloat resultValue = selfCpp->mReverseGearRatios;
  ArrayFloat* result = new ArrayFloat(resultValue);
  return reinterpret_cast<JoltC_ArrayFloat_t *>(result);
};

void JoltC_VehicleTransmission_mReverseGearRatios_Set(
  JoltC_VehicleTransmission_t * self,
  JoltC_ArrayFloat_t * mReverseGearRatios,
  char** outErrMsg
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  selfCpp->mReverseGearRatios = *reinterpret_cast<ArrayFloat *>(mReverseGearRatios->obj);
};

float JoltC_VehicleTransmission_mSwitchTime_Get(
  JoltC_VehicleTransmission_t * self,
  char** outErrMsg
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  float result = selfCpp->mSwitchTime;
  return result;
};

void JoltC_VehicleTransmission_mSwitchTime_Set(
  JoltC_VehicleTransmission_t * self,
  float mSwitchTime,
  char** outErrMsg
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  selfCpp->mSwitchTime = mSwitchTime;
};

float JoltC_VehicleTransmission_mClutchReleaseTime_Get(
  JoltC_VehicleTransmission_t * self,
  char** outErrMsg
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  float result = selfCpp->mClutchReleaseTime;
  return result;
};

void JoltC_VehicleTransmission_mClutchReleaseTime_Set(
  JoltC_VehicleTransmission_t * self,
  float mClutchReleaseTime,
  char** outErrMsg
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  selfCpp->mClutchReleaseTime = mClutchReleaseTime;
};

float JoltC_VehicleTransmission_mSwitchLatency_Get(
  JoltC_VehicleTransmission_t * self,
  char** outErrMsg
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  float result = selfCpp->mSwitchLatency;
  return result;
};

void JoltC_VehicleTransmission_mSwitchLatency_Set(
  JoltC_VehicleTransmission_t * self,
  float mSwitchLatency,
  char** outErrMsg
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  selfCpp->mSwitchLatency = mSwitchLatency;
};

float JoltC_VehicleTransmission_mShiftUpRPM_Get(
  JoltC_VehicleTransmission_t * self,
  char** outErrMsg
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  float result = selfCpp->mShiftUpRPM;
  return result;
};

void JoltC_VehicleTransmission_mShiftUpRPM_Set(
  JoltC_VehicleTransmission_t * self,
  float mShiftUpRPM,
  char** outErrMsg
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  selfCpp->mShiftUpRPM = mShiftUpRPM;
};

float JoltC_VehicleTransmission_mShiftDownRPM_Get(
  JoltC_VehicleTransmission_t * self,
  char** outErrMsg
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  float result = selfCpp->mShiftDownRPM;
  return result;
};

void JoltC_VehicleTransmission_mShiftDownRPM_Set(
  JoltC_VehicleTransmission_t * self,
  float mShiftDownRPM,
  char** outErrMsg
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  selfCpp->mShiftDownRPM = mShiftDownRPM;
};

float JoltC_VehicleTransmission_mClutchStrength_Get(
  JoltC_VehicleTransmission_t * self,
  char** outErrMsg
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  float result = selfCpp->mClutchStrength;
  return result;
};

void JoltC_VehicleTransmission_mClutchStrength_Set(
  JoltC_VehicleTransmission_t * self,
  float mClutchStrength,
  char** outErrMsg
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  selfCpp->mClutchStrength = mClutchStrength;
};

//endregion properties

#ifdef __cplusplus
}
#endif
