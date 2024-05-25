#include "JoltC/JPC_VehicleDifferentialSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_VehicleDifferentialSettings_t * JPC_VehicleDifferentialSettings_new() {
  JPC_VehicleDifferentialSettings_t * cInstance = new JPC_VehicleDifferentialSettings_t();
  VehicleDifferentialSettings * cppInstance = new VehicleDifferentialSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region properties

long JPC_VehicleDifferentialSettings_mLeftWheel_Get(
  JPC_VehicleDifferentialSettings_t * self
) {
  VehicleDifferentialSettings * selfCpp = static_cast<VehicleDifferentialSettings *>(self->obj);
  long result = selfCpp->mLeftWheel;
  return result;
};

void JPC_VehicleDifferentialSettings_mLeftWheel_Set(
  JPC_VehicleDifferentialSettings_t * self,
  long mLeftWheel
) {
  VehicleDifferentialSettings * selfCpp = static_cast<VehicleDifferentialSettings *>(self->obj);
  selfCpp->mLeftWheel = mLeftWheel;
};

long JPC_VehicleDifferentialSettings_mRightWheel_Get(
  JPC_VehicleDifferentialSettings_t * self
) {
  VehicleDifferentialSettings * selfCpp = static_cast<VehicleDifferentialSettings *>(self->obj);
  long result = selfCpp->mRightWheel;
  return result;
};

void JPC_VehicleDifferentialSettings_mRightWheel_Set(
  JPC_VehicleDifferentialSettings_t * self,
  long mRightWheel
) {
  VehicleDifferentialSettings * selfCpp = static_cast<VehicleDifferentialSettings *>(self->obj);
  selfCpp->mRightWheel = mRightWheel;
};

float JPC_VehicleDifferentialSettings_mDifferentialRatio_Get(
  JPC_VehicleDifferentialSettings_t * self
) {
  VehicleDifferentialSettings * selfCpp = static_cast<VehicleDifferentialSettings *>(self->obj);
  float result = selfCpp->mDifferentialRatio;
  return result;
};

void JPC_VehicleDifferentialSettings_mDifferentialRatio_Set(
  JPC_VehicleDifferentialSettings_t * self,
  float mDifferentialRatio
) {
  VehicleDifferentialSettings * selfCpp = static_cast<VehicleDifferentialSettings *>(self->obj);
  selfCpp->mDifferentialRatio = mDifferentialRatio;
};

float JPC_VehicleDifferentialSettings_mLeftRightSplit_Get(
  JPC_VehicleDifferentialSettings_t * self
) {
  VehicleDifferentialSettings * selfCpp = static_cast<VehicleDifferentialSettings *>(self->obj);
  float result = selfCpp->mLeftRightSplit;
  return result;
};

void JPC_VehicleDifferentialSettings_mLeftRightSplit_Set(
  JPC_VehicleDifferentialSettings_t * self,
  float mLeftRightSplit
) {
  VehicleDifferentialSettings * selfCpp = static_cast<VehicleDifferentialSettings *>(self->obj);
  selfCpp->mLeftRightSplit = mLeftRightSplit;
};

float JPC_VehicleDifferentialSettings_mLimitedSlipRatio_Get(
  JPC_VehicleDifferentialSettings_t * self
) {
  VehicleDifferentialSettings * selfCpp = static_cast<VehicleDifferentialSettings *>(self->obj);
  float result = selfCpp->mLimitedSlipRatio;
  return result;
};

void JPC_VehicleDifferentialSettings_mLimitedSlipRatio_Set(
  JPC_VehicleDifferentialSettings_t * self,
  float mLimitedSlipRatio
) {
  VehicleDifferentialSettings * selfCpp = static_cast<VehicleDifferentialSettings *>(self->obj);
  selfCpp->mLimitedSlipRatio = mLimitedSlipRatio;
};

float JPC_VehicleDifferentialSettings_mEngineTorqueRatio_Get(
  JPC_VehicleDifferentialSettings_t * self
) {
  VehicleDifferentialSettings * selfCpp = static_cast<VehicleDifferentialSettings *>(self->obj);
  float result = selfCpp->mEngineTorqueRatio;
  return result;
};

void JPC_VehicleDifferentialSettings_mEngineTorqueRatio_Set(
  JPC_VehicleDifferentialSettings_t * self,
  float mEngineTorqueRatio
) {
  VehicleDifferentialSettings * selfCpp = static_cast<VehicleDifferentialSettings *>(self->obj);
  selfCpp->mEngineTorqueRatio = mEngineTorqueRatio;
};

//endregion properties

#ifdef __cplusplus
}
#endif

