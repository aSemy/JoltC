#include "JoltC/JPC_WheelSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_WheelSettings_t * JPC_WheelSettings_new() {
  JPC_WheelSettings_t * cInstance = new JPC_WheelSettings_t();
  WheelSettings * cppInstance = new WheelSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

unsigned long JPC_WheelSettings_GetRefCount(
  JPC_WheelSettings_t * self
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_WheelSettings_AddRef(
  JPC_WheelSettings_t * self
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_WheelSettings_Release(
  JPC_WheelSettings_t * self
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  
  selfCpp->Release();
};

//endregion functions

//region properties

JPC_Vec3_t * JPC_WheelSettings_mPosition_Get(
  JPC_WheelSettings_t * self
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mPosition;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_WheelSettings_mPosition_Set(
  JPC_WheelSettings_t * self,
  JPC_Vec3_t * mPosition
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  selfCpp->mPosition = *reinterpret_cast<Vec3 *>(mPosition->obj);
};

JPC_Vec3_t * JPC_WheelSettings_mSuspensionForcePoint_Get(
  JPC_WheelSettings_t * self
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mSuspensionForcePoint;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_WheelSettings_mSuspensionForcePoint_Set(
  JPC_WheelSettings_t * self,
  JPC_Vec3_t * mSuspensionForcePoint
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  selfCpp->mSuspensionForcePoint = *reinterpret_cast<Vec3 *>(mSuspensionForcePoint->obj);
};

JPC_Vec3_t * JPC_WheelSettings_mSuspensionDirection_Get(
  JPC_WheelSettings_t * self
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mSuspensionDirection;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_WheelSettings_mSuspensionDirection_Set(
  JPC_WheelSettings_t * self,
  JPC_Vec3_t * mSuspensionDirection
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  selfCpp->mSuspensionDirection = *reinterpret_cast<Vec3 *>(mSuspensionDirection->obj);
};

JPC_Vec3_t * JPC_WheelSettings_mSteeringAxis_Get(
  JPC_WheelSettings_t * self
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mSteeringAxis;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_WheelSettings_mSteeringAxis_Set(
  JPC_WheelSettings_t * self,
  JPC_Vec3_t * mSteeringAxis
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  selfCpp->mSteeringAxis = *reinterpret_cast<Vec3 *>(mSteeringAxis->obj);
};

JPC_Vec3_t * JPC_WheelSettings_mWheelUp_Get(
  JPC_WheelSettings_t * self
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mWheelUp;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_WheelSettings_mWheelUp_Set(
  JPC_WheelSettings_t * self,
  JPC_Vec3_t * mWheelUp
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  selfCpp->mWheelUp = *reinterpret_cast<Vec3 *>(mWheelUp->obj);
};

JPC_Vec3_t * JPC_WheelSettings_mWheelForward_Get(
  JPC_WheelSettings_t * self
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mWheelForward;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_WheelSettings_mWheelForward_Set(
  JPC_WheelSettings_t * self,
  JPC_Vec3_t * mWheelForward
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  selfCpp->mWheelForward = *reinterpret_cast<Vec3 *>(mWheelForward->obj);
};

JPC_SpringSettings_t * JPC_WheelSettings_mSuspensionSpring_Get(
  JPC_WheelSettings_t * self
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  SpringSettings resultValue = selfCpp->mSuspensionSpring;
  SpringSettings* result = new SpringSettings(resultValue);
  return reinterpret_cast<JPC_SpringSettings_t *>(result);
};

void JPC_WheelSettings_mSuspensionSpring_Set(
  JPC_WheelSettings_t * self,
  JPC_SpringSettings_t * mSuspensionSpring
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  selfCpp->mSuspensionSpring = *reinterpret_cast<SpringSettings *>(mSuspensionSpring->obj);
};

float JPC_WheelSettings_mSuspensionMinLength_Get(
  JPC_WheelSettings_t * self
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  float result = selfCpp->mSuspensionMinLength;
  return result;
};

void JPC_WheelSettings_mSuspensionMinLength_Set(
  JPC_WheelSettings_t * self,
  float mSuspensionMinLength
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  selfCpp->mSuspensionMinLength = mSuspensionMinLength;
};

float JPC_WheelSettings_mSuspensionMaxLength_Get(
  JPC_WheelSettings_t * self
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  float result = selfCpp->mSuspensionMaxLength;
  return result;
};

void JPC_WheelSettings_mSuspensionMaxLength_Set(
  JPC_WheelSettings_t * self,
  float mSuspensionMaxLength
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  selfCpp->mSuspensionMaxLength = mSuspensionMaxLength;
};

float JPC_WheelSettings_mSuspensionPreloadLength_Get(
  JPC_WheelSettings_t * self
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  float result = selfCpp->mSuspensionPreloadLength;
  return result;
};

void JPC_WheelSettings_mSuspensionPreloadLength_Set(
  JPC_WheelSettings_t * self,
  float mSuspensionPreloadLength
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  selfCpp->mSuspensionPreloadLength = mSuspensionPreloadLength;
};

float JPC_WheelSettings_mRadius_Get(
  JPC_WheelSettings_t * self
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  float result = selfCpp->mRadius;
  return result;
};

void JPC_WheelSettings_mRadius_Set(
  JPC_WheelSettings_t * self,
  float mRadius
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  selfCpp->mRadius = mRadius;
};

float JPC_WheelSettings_mWidth_Get(
  JPC_WheelSettings_t * self
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  float result = selfCpp->mWidth;
  return result;
};

void JPC_WheelSettings_mWidth_Set(
  JPC_WheelSettings_t * self,
  float mWidth
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  selfCpp->mWidth = mWidth;
};

bool JPC_WheelSettings_mEnableSuspensionForcePoint_Get(
  JPC_WheelSettings_t * self
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  bool result = selfCpp->mEnableSuspensionForcePoint;
  return result;
};

void JPC_WheelSettings_mEnableSuspensionForcePoint_Set(
  JPC_WheelSettings_t * self,
  bool mEnableSuspensionForcePoint
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  selfCpp->mEnableSuspensionForcePoint = mEnableSuspensionForcePoint;
};

//endregion properties

#ifdef __cplusplus
}
#endif

