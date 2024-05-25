#include "JoltC/JPC_VehicleAntiRollBar.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_VehicleAntiRollBar_t * JPC_VehicleAntiRollBar_new() {
  JPC_VehicleAntiRollBar_t * cInstance = new JPC_VehicleAntiRollBar_t();
  VehicleAntiRollBar * cppInstance = new VehicleAntiRollBar();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region properties

long JPC_VehicleAntiRollBar_mLeftWheel_Get(
  JPC_VehicleAntiRollBar_t * self
) {
  VehicleAntiRollBar * selfCpp = static_cast<VehicleAntiRollBar *>(self->obj);
  long result = selfCpp->mLeftWheel;
  return result;
};

void JPC_VehicleAntiRollBar_mLeftWheel_Set(
  JPC_VehicleAntiRollBar_t * self,
  long mLeftWheel
) {
  VehicleAntiRollBar * selfCpp = static_cast<VehicleAntiRollBar *>(self->obj);
  selfCpp->mLeftWheel = mLeftWheel;
};

long JPC_VehicleAntiRollBar_mRightWheel_Get(
  JPC_VehicleAntiRollBar_t * self
) {
  VehicleAntiRollBar * selfCpp = static_cast<VehicleAntiRollBar *>(self->obj);
  long result = selfCpp->mRightWheel;
  return result;
};

void JPC_VehicleAntiRollBar_mRightWheel_Set(
  JPC_VehicleAntiRollBar_t * self,
  long mRightWheel
) {
  VehicleAntiRollBar * selfCpp = static_cast<VehicleAntiRollBar *>(self->obj);
  selfCpp->mRightWheel = mRightWheel;
};

float JPC_VehicleAntiRollBar_mStiffness_Get(
  JPC_VehicleAntiRollBar_t * self
) {
  VehicleAntiRollBar * selfCpp = static_cast<VehicleAntiRollBar *>(self->obj);
  float result = selfCpp->mStiffness;
  return result;
};

void JPC_VehicleAntiRollBar_mStiffness_Set(
  JPC_VehicleAntiRollBar_t * self,
  float mStiffness
) {
  VehicleAntiRollBar * selfCpp = static_cast<VehicleAntiRollBar *>(self->obj);
  selfCpp->mStiffness = mStiffness;
};

//endregion properties

#ifdef __cplusplus
}
#endif

