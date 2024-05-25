#include "JoltC/JoltC_SoftBodyVertex.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region properties

JoltC_Vec3_t * JoltC_SoftBodyVertex_mPreviousPosition_Get(
  JoltC_SoftBodyVertex_t * self,
  char** outErrMsg
) {
  SoftBodyVertex * selfCpp = static_cast<SoftBodyVertex *>(self->obj);
  Vec3 resultValue = selfCpp->mPreviousPosition;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_SoftBodyVertex_mPreviousPosition_Set(
  JoltC_SoftBodyVertex_t * self,
  JoltC_Vec3_t * mPreviousPosition,
  char** outErrMsg
) {
  SoftBodyVertex * selfCpp = static_cast<SoftBodyVertex *>(self->obj);
  selfCpp->mPreviousPosition = *reinterpret_cast<Vec3 *>(mPreviousPosition->obj);
};

JoltC_Vec3_t * JoltC_SoftBodyVertex_mPosition_Get(
  JoltC_SoftBodyVertex_t * self,
  char** outErrMsg
) {
  SoftBodyVertex * selfCpp = static_cast<SoftBodyVertex *>(self->obj);
  Vec3 resultValue = selfCpp->mPosition;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_SoftBodyVertex_mPosition_Set(
  JoltC_SoftBodyVertex_t * self,
  JoltC_Vec3_t * mPosition,
  char** outErrMsg
) {
  SoftBodyVertex * selfCpp = static_cast<SoftBodyVertex *>(self->obj);
  selfCpp->mPosition = *reinterpret_cast<Vec3 *>(mPosition->obj);
};

JoltC_Vec3_t * JoltC_SoftBodyVertex_mVelocity_Get(
  JoltC_SoftBodyVertex_t * self,
  char** outErrMsg
) {
  SoftBodyVertex * selfCpp = static_cast<SoftBodyVertex *>(self->obj);
  Vec3 resultValue = selfCpp->mVelocity;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_SoftBodyVertex_mVelocity_Set(
  JoltC_SoftBodyVertex_t * self,
  JoltC_Vec3_t * mVelocity,
  char** outErrMsg
) {
  SoftBodyVertex * selfCpp = static_cast<SoftBodyVertex *>(self->obj);
  selfCpp->mVelocity = *reinterpret_cast<Vec3 *>(mVelocity->obj);
};

float JoltC_SoftBodyVertex_mInvMass_Get(
  JoltC_SoftBodyVertex_t * self,
  char** outErrMsg
) {
  SoftBodyVertex * selfCpp = static_cast<SoftBodyVertex *>(self->obj);
  float result = selfCpp->mInvMass;
  return result;
};

void JoltC_SoftBodyVertex_mInvMass_Set(
  JoltC_SoftBodyVertex_t * self,
  float mInvMass,
  char** outErrMsg
) {
  SoftBodyVertex * selfCpp = static_cast<SoftBodyVertex *>(self->obj);
  selfCpp->mInvMass = mInvMass;
};

//endregion properties

#ifdef __cplusplus
}
#endif

