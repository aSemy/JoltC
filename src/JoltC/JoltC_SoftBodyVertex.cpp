#include "JoltC/JoltC_SoftBodyVertex.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region properties

JoltC_Vec3_t * JoltC_SoftBodyVertex_mPreviousPosition_Get(
  JoltC_SoftBodyVertex_t * self
) {
  SoftBodyVertex * selfCpp = static_cast<SoftBodyVertex *>(self->obj);
  static Vec3 resultValue = selfCpp->mPreviousPosition;
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_SoftBodyVertex_mPreviousPosition_Set(
  JoltC_SoftBodyVertex_t * self,
  JoltC_Vec3_t * mPreviousPosition
) {
  SoftBodyVertex * selfCpp = static_cast<SoftBodyVertex *>(self->obj);
  selfCpp->mPreviousPosition = *reinterpret_cast<Vec3 *>(mPreviousPosition->obj);
};

JoltC_Vec3_t * JoltC_SoftBodyVertex_mPosition_Get(
  JoltC_SoftBodyVertex_t * self
) {
  SoftBodyVertex * selfCpp = static_cast<SoftBodyVertex *>(self->obj);
  static Vec3 resultValue = selfCpp->mPosition;
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_SoftBodyVertex_mPosition_Set(
  JoltC_SoftBodyVertex_t * self,
  JoltC_Vec3_t * mPosition
) {
  SoftBodyVertex * selfCpp = static_cast<SoftBodyVertex *>(self->obj);
  selfCpp->mPosition = *reinterpret_cast<Vec3 *>(mPosition->obj);
};

JoltC_Vec3_t * JoltC_SoftBodyVertex_mVelocity_Get(
  JoltC_SoftBodyVertex_t * self
) {
  SoftBodyVertex * selfCpp = static_cast<SoftBodyVertex *>(self->obj);
  static Vec3 resultValue = selfCpp->mVelocity;
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_SoftBodyVertex_mVelocity_Set(
  JoltC_SoftBodyVertex_t * self,
  JoltC_Vec3_t * mVelocity
) {
  SoftBodyVertex * selfCpp = static_cast<SoftBodyVertex *>(self->obj);
  selfCpp->mVelocity = *reinterpret_cast<Vec3 *>(mVelocity->obj);
};

float JoltC_SoftBodyVertex_mInvMass_Get(
  JoltC_SoftBodyVertex_t * self
) {
  SoftBodyVertex * selfCpp = static_cast<SoftBodyVertex *>(self->obj);
  float result = selfCpp->mInvMass;
  return result;
};

void JoltC_SoftBodyVertex_mInvMass_Set(
  JoltC_SoftBodyVertex_t * self,
  float mInvMass
) {
  SoftBodyVertex * selfCpp = static_cast<SoftBodyVertex *>(self->obj);
  selfCpp->mInvMass = mInvMass;
};

//endregion

#ifdef __cplusplus
}
#endif

