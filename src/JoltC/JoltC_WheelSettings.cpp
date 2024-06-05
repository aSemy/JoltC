#include "JoltC/JoltC_WheelSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_WheelSettings_t * JoltC_WheelSettings_new() {
  JoltC_WheelSettings_t * cInstance = new JoltC_WheelSettings_t();
  WheelSettings * cppInstance = new WheelSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region converters

/**
 * Convert an instance of JoltC_WheelSettingsWV_t into JoltC_WheelSettings_t.
 */
JoltC_WheelSettings_t * JoltC_WheelSettings_From_WheelSettingsWV(
  JoltC_WheelSettingsWV_t * subtype
) {
  return (JoltC_WheelSettings_t*) subtype;
};

/**
 * Convert an instance of JoltC_WheelSettingsTV_t into JoltC_WheelSettings_t.
 */
JoltC_WheelSettings_t * JoltC_WheelSettings_From_WheelSettingsTV(
  JoltC_WheelSettingsTV_t * subtype
) {
  return (JoltC_WheelSettings_t*) subtype;
};

//endregion

//region functions

unsigned long JoltC_WheelSettings_GetRefCount(
  JoltC_WheelSettings_t * self
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_WheelSettings_AddRef(
  JoltC_WheelSettings_t * self
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  selfCpp->AddRef();
};

void JoltC_WheelSettings_Release(
  JoltC_WheelSettings_t * self
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  selfCpp->Release();
};

//endregion

//region properties

JoltC_Vec3_t * JoltC_WheelSettings_mPosition_Get(
  JoltC_WheelSettings_t * self
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  const Vec3& resultValue = selfCpp->mPosition;
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_WheelSettings_mPosition_Set(
  JoltC_WheelSettings_t * self,
  JoltC_Vec3_t * mPosition
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  selfCpp->mPosition = *reinterpret_cast<Vec3 *>(mPosition->obj);
};

JoltC_Vec3_t * JoltC_WheelSettings_mSuspensionForcePoint_Get(
  JoltC_WheelSettings_t * self
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  const Vec3& resultValue = selfCpp->mSuspensionForcePoint;
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_WheelSettings_mSuspensionForcePoint_Set(
  JoltC_WheelSettings_t * self,
  JoltC_Vec3_t * mSuspensionForcePoint
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  selfCpp->mSuspensionForcePoint = *reinterpret_cast<Vec3 *>(mSuspensionForcePoint->obj);
};

JoltC_Vec3_t * JoltC_WheelSettings_mSuspensionDirection_Get(
  JoltC_WheelSettings_t * self
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  const Vec3& resultValue = selfCpp->mSuspensionDirection;
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_WheelSettings_mSuspensionDirection_Set(
  JoltC_WheelSettings_t * self,
  JoltC_Vec3_t * mSuspensionDirection
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  selfCpp->mSuspensionDirection = *reinterpret_cast<Vec3 *>(mSuspensionDirection->obj);
};

JoltC_Vec3_t * JoltC_WheelSettings_mSteeringAxis_Get(
  JoltC_WheelSettings_t * self
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  const Vec3& resultValue = selfCpp->mSteeringAxis;
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_WheelSettings_mSteeringAxis_Set(
  JoltC_WheelSettings_t * self,
  JoltC_Vec3_t * mSteeringAxis
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  selfCpp->mSteeringAxis = *reinterpret_cast<Vec3 *>(mSteeringAxis->obj);
};

JoltC_Vec3_t * JoltC_WheelSettings_mWheelUp_Get(
  JoltC_WheelSettings_t * self
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  const Vec3& resultValue = selfCpp->mWheelUp;
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_WheelSettings_mWheelUp_Set(
  JoltC_WheelSettings_t * self,
  JoltC_Vec3_t * mWheelUp
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  selfCpp->mWheelUp = *reinterpret_cast<Vec3 *>(mWheelUp->obj);
};

JoltC_Vec3_t * JoltC_WheelSettings_mWheelForward_Get(
  JoltC_WheelSettings_t * self
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  const Vec3& resultValue = selfCpp->mWheelForward;
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_WheelSettings_mWheelForward_Set(
  JoltC_WheelSettings_t * self,
  JoltC_Vec3_t * mWheelForward
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  selfCpp->mWheelForward = *reinterpret_cast<Vec3 *>(mWheelForward->obj);
};

JoltC_SpringSettings_t * JoltC_WheelSettings_mSuspensionSpring_Get(
  JoltC_WheelSettings_t * self
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  const SpringSettings& resultValue = selfCpp->mSuspensionSpring;
  JoltC_SpringSettings_t* result = new JoltC_SpringSettings_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_WheelSettings_mSuspensionSpring_Set(
  JoltC_WheelSettings_t * self,
  JoltC_SpringSettings_t * mSuspensionSpring
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  selfCpp->mSuspensionSpring = *reinterpret_cast<SpringSettings *>(mSuspensionSpring->obj);
};

float JoltC_WheelSettings_mSuspensionMinLength_Get(
  JoltC_WheelSettings_t * self
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  float result = selfCpp->mSuspensionMinLength;
  return result;
};

void JoltC_WheelSettings_mSuspensionMinLength_Set(
  JoltC_WheelSettings_t * self,
  float mSuspensionMinLength
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  selfCpp->mSuspensionMinLength = mSuspensionMinLength;
};

float JoltC_WheelSettings_mSuspensionMaxLength_Get(
  JoltC_WheelSettings_t * self
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  float result = selfCpp->mSuspensionMaxLength;
  return result;
};

void JoltC_WheelSettings_mSuspensionMaxLength_Set(
  JoltC_WheelSettings_t * self,
  float mSuspensionMaxLength
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  selfCpp->mSuspensionMaxLength = mSuspensionMaxLength;
};

float JoltC_WheelSettings_mSuspensionPreloadLength_Get(
  JoltC_WheelSettings_t * self
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  float result = selfCpp->mSuspensionPreloadLength;
  return result;
};

void JoltC_WheelSettings_mSuspensionPreloadLength_Set(
  JoltC_WheelSettings_t * self,
  float mSuspensionPreloadLength
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  selfCpp->mSuspensionPreloadLength = mSuspensionPreloadLength;
};

float JoltC_WheelSettings_mRadius_Get(
  JoltC_WheelSettings_t * self
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  float result = selfCpp->mRadius;
  return result;
};

void JoltC_WheelSettings_mRadius_Set(
  JoltC_WheelSettings_t * self,
  float mRadius
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  selfCpp->mRadius = mRadius;
};

float JoltC_WheelSettings_mWidth_Get(
  JoltC_WheelSettings_t * self
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  float result = selfCpp->mWidth;
  return result;
};

void JoltC_WheelSettings_mWidth_Set(
  JoltC_WheelSettings_t * self,
  float mWidth
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  selfCpp->mWidth = mWidth;
};

bool JoltC_WheelSettings_mEnableSuspensionForcePoint_Get(
  JoltC_WheelSettings_t * self
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  bool result = selfCpp->mEnableSuspensionForcePoint;
  return result;
};

void JoltC_WheelSettings_mEnableSuspensionForcePoint_Set(
  JoltC_WheelSettings_t * self,
  bool mEnableSuspensionForcePoint
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  selfCpp->mEnableSuspensionForcePoint = mEnableSuspensionForcePoint;
};

//endregion

#ifdef __cplusplus
}
#endif

