#include "JoltC/JoltC_VehicleAntiRollBar.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_VehicleAntiRollBar_t * JoltC_VehicleAntiRollBar_new() {
  JoltC_VehicleAntiRollBar_t * cInstance = new JoltC_VehicleAntiRollBar_t();
  VehicleAntiRollBar * cppInstance = new VehicleAntiRollBar();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region properties

long JoltC_VehicleAntiRollBar_mLeftWheel_Get(
  JoltC_VehicleAntiRollBar_t * self
) {
  VehicleAntiRollBar * selfCpp = static_cast<VehicleAntiRollBar *>(self->obj);
  long result = selfCpp->mLeftWheel;
  return result;
};

void JoltC_VehicleAntiRollBar_mLeftWheel_Set(
  JoltC_VehicleAntiRollBar_t * self,
  long mLeftWheel
) {
  VehicleAntiRollBar * selfCpp = static_cast<VehicleAntiRollBar *>(self->obj);
  selfCpp->mLeftWheel = mLeftWheel;
};

long JoltC_VehicleAntiRollBar_mRightWheel_Get(
  JoltC_VehicleAntiRollBar_t * self
) {
  VehicleAntiRollBar * selfCpp = static_cast<VehicleAntiRollBar *>(self->obj);
  long result = selfCpp->mRightWheel;
  return result;
};

void JoltC_VehicleAntiRollBar_mRightWheel_Set(
  JoltC_VehicleAntiRollBar_t * self,
  long mRightWheel
) {
  VehicleAntiRollBar * selfCpp = static_cast<VehicleAntiRollBar *>(self->obj);
  selfCpp->mRightWheel = mRightWheel;
};

float JoltC_VehicleAntiRollBar_mStiffness_Get(
  JoltC_VehicleAntiRollBar_t * self
) {
  VehicleAntiRollBar * selfCpp = static_cast<VehicleAntiRollBar *>(self->obj);
  float result = selfCpp->mStiffness;
  return result;
};

void JoltC_VehicleAntiRollBar_mStiffness_Set(
  JoltC_VehicleAntiRollBar_t * self,
  float mStiffness
) {
  VehicleAntiRollBar * selfCpp = static_cast<VehicleAntiRollBar *>(self->obj);
  selfCpp->mStiffness = mStiffness;
};

//endregion

#ifdef __cplusplus
}
#endif

