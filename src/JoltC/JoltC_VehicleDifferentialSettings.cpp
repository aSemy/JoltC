#include "JoltC/JoltC_VehicleDifferentialSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_VehicleDifferentialSettings_t * JoltC_VehicleDifferentialSettings_new() {
  JoltC_VehicleDifferentialSettings_t * cInstance = new JoltC_VehicleDifferentialSettings_t();
  VehicleDifferentialSettings * cppInstance = new VehicleDifferentialSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region properties

long JoltC_VehicleDifferentialSettings_mLeftWheel_Get(
  JoltC_VehicleDifferentialSettings_t * self
) {
  VehicleDifferentialSettings * selfCpp = static_cast<VehicleDifferentialSettings *>(self->obj);
  long result = selfCpp->mLeftWheel;
  return result;
};

void JoltC_VehicleDifferentialSettings_mLeftWheel_Set(
  JoltC_VehicleDifferentialSettings_t * self,
  long mLeftWheel
) {
  VehicleDifferentialSettings * selfCpp = static_cast<VehicleDifferentialSettings *>(self->obj);
  selfCpp->mLeftWheel = mLeftWheel;
};

long JoltC_VehicleDifferentialSettings_mRightWheel_Get(
  JoltC_VehicleDifferentialSettings_t * self
) {
  VehicleDifferentialSettings * selfCpp = static_cast<VehicleDifferentialSettings *>(self->obj);
  long result = selfCpp->mRightWheel;
  return result;
};

void JoltC_VehicleDifferentialSettings_mRightWheel_Set(
  JoltC_VehicleDifferentialSettings_t * self,
  long mRightWheel
) {
  VehicleDifferentialSettings * selfCpp = static_cast<VehicleDifferentialSettings *>(self->obj);
  selfCpp->mRightWheel = mRightWheel;
};

float JoltC_VehicleDifferentialSettings_mDifferentialRatio_Get(
  JoltC_VehicleDifferentialSettings_t * self
) {
  VehicleDifferentialSettings * selfCpp = static_cast<VehicleDifferentialSettings *>(self->obj);
  float result = selfCpp->mDifferentialRatio;
  return result;
};

void JoltC_VehicleDifferentialSettings_mDifferentialRatio_Set(
  JoltC_VehicleDifferentialSettings_t * self,
  float mDifferentialRatio
) {
  VehicleDifferentialSettings * selfCpp = static_cast<VehicleDifferentialSettings *>(self->obj);
  selfCpp->mDifferentialRatio = mDifferentialRatio;
};

float JoltC_VehicleDifferentialSettings_mLeftRightSplit_Get(
  JoltC_VehicleDifferentialSettings_t * self
) {
  VehicleDifferentialSettings * selfCpp = static_cast<VehicleDifferentialSettings *>(self->obj);
  float result = selfCpp->mLeftRightSplit;
  return result;
};

void JoltC_VehicleDifferentialSettings_mLeftRightSplit_Set(
  JoltC_VehicleDifferentialSettings_t * self,
  float mLeftRightSplit
) {
  VehicleDifferentialSettings * selfCpp = static_cast<VehicleDifferentialSettings *>(self->obj);
  selfCpp->mLeftRightSplit = mLeftRightSplit;
};

float JoltC_VehicleDifferentialSettings_mLimitedSlipRatio_Get(
  JoltC_VehicleDifferentialSettings_t * self
) {
  VehicleDifferentialSettings * selfCpp = static_cast<VehicleDifferentialSettings *>(self->obj);
  float result = selfCpp->mLimitedSlipRatio;
  return result;
};

void JoltC_VehicleDifferentialSettings_mLimitedSlipRatio_Set(
  JoltC_VehicleDifferentialSettings_t * self,
  float mLimitedSlipRatio
) {
  VehicleDifferentialSettings * selfCpp = static_cast<VehicleDifferentialSettings *>(self->obj);
  selfCpp->mLimitedSlipRatio = mLimitedSlipRatio;
};

float JoltC_VehicleDifferentialSettings_mEngineTorqueRatio_Get(
  JoltC_VehicleDifferentialSettings_t * self
) {
  VehicleDifferentialSettings * selfCpp = static_cast<VehicleDifferentialSettings *>(self->obj);
  float result = selfCpp->mEngineTorqueRatio;
  return result;
};

void JoltC_VehicleDifferentialSettings_mEngineTorqueRatio_Set(
  JoltC_VehicleDifferentialSettings_t * self,
  float mEngineTorqueRatio
) {
  VehicleDifferentialSettings * selfCpp = static_cast<VehicleDifferentialSettings *>(self->obj);
  selfCpp->mEngineTorqueRatio = mEngineTorqueRatio;
};

//endregion

#ifdef __cplusplus
}
#endif

