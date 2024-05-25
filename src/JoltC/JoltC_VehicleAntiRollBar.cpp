#include "JoltC/JoltC_VehicleAntiRollBar.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_VehicleAntiRollBar_t * JoltC_VehicleAntiRollBar_new(
  char** outErrMsg
) {
  try {
    JoltC_VehicleAntiRollBar_t * cInstance = new JoltC_VehicleAntiRollBar_t();
    VehicleAntiRollBar * cppInstance = new VehicleAntiRollBar();
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

//region properties

long JoltC_VehicleAntiRollBar_mLeftWheel_Get(
  JoltC_VehicleAntiRollBar_t * self,
  char** outErrMsg
) {
  VehicleAntiRollBar * selfCpp = static_cast<VehicleAntiRollBar *>(self->obj);
  long result = selfCpp->mLeftWheel;
  return result;
};

void JoltC_VehicleAntiRollBar_mLeftWheel_Set(
  JoltC_VehicleAntiRollBar_t * self,
  long mLeftWheel,
  char** outErrMsg
) {
  VehicleAntiRollBar * selfCpp = static_cast<VehicleAntiRollBar *>(self->obj);
  selfCpp->mLeftWheel = mLeftWheel;
};

long JoltC_VehicleAntiRollBar_mRightWheel_Get(
  JoltC_VehicleAntiRollBar_t * self,
  char** outErrMsg
) {
  VehicleAntiRollBar * selfCpp = static_cast<VehicleAntiRollBar *>(self->obj);
  long result = selfCpp->mRightWheel;
  return result;
};

void JoltC_VehicleAntiRollBar_mRightWheel_Set(
  JoltC_VehicleAntiRollBar_t * self,
  long mRightWheel,
  char** outErrMsg
) {
  VehicleAntiRollBar * selfCpp = static_cast<VehicleAntiRollBar *>(self->obj);
  selfCpp->mRightWheel = mRightWheel;
};

float JoltC_VehicleAntiRollBar_mStiffness_Get(
  JoltC_VehicleAntiRollBar_t * self,
  char** outErrMsg
) {
  VehicleAntiRollBar * selfCpp = static_cast<VehicleAntiRollBar *>(self->obj);
  float result = selfCpp->mStiffness;
  return result;
};

void JoltC_VehicleAntiRollBar_mStiffness_Set(
  JoltC_VehicleAntiRollBar_t * self,
  float mStiffness,
  char** outErrMsg
) {
  VehicleAntiRollBar * selfCpp = static_cast<VehicleAntiRollBar *>(self->obj);
  selfCpp->mStiffness = mStiffness;
};

//endregion properties

#ifdef __cplusplus
}
#endif

