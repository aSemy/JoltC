#include "JoltC/JoltC_SoftBodyVertex.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_SoftBodyVertex_destroy(
  JoltC_SoftBodyVertex_t * self
){
  if (self == NULL) return;
  delete static_cast<SoftBodyVertex *>(self->obj);
  free(self);
}

//endregion
//region properties

JoltC_Vec3_t * JoltC_SoftBodyVertex_mPreviousPosition_Get(
  JoltC_SoftBodyVertex_t * self
) {
  SoftBodyVertex * selfCpp = static_cast<SoftBodyVertex *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mPreviousPosition;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_SoftBodyVertex_mPreviousPosition_Set(
  JoltC_SoftBodyVertex_t * self,
  JoltC_Vec3_t * mPreviousPosition
) {
  SoftBodyVertex * selfCpp = static_cast<SoftBodyVertex *>(self->obj);
  selfCpp->mPreviousPosition = *static_cast<Vec3 *>(mPreviousPosition->obj);
}

JoltC_Vec3_t * JoltC_SoftBodyVertex_mPosition_Get(
  JoltC_SoftBodyVertex_t * self
) {
  SoftBodyVertex * selfCpp = static_cast<SoftBodyVertex *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mPosition;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_SoftBodyVertex_mPosition_Set(
  JoltC_SoftBodyVertex_t * self,
  JoltC_Vec3_t * mPosition
) {
  SoftBodyVertex * selfCpp = static_cast<SoftBodyVertex *>(self->obj);
  selfCpp->mPosition = *static_cast<Vec3 *>(mPosition->obj);
}

JoltC_Vec3_t * JoltC_SoftBodyVertex_mVelocity_Get(
  JoltC_SoftBodyVertex_t * self
) {
  SoftBodyVertex * selfCpp = static_cast<SoftBodyVertex *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mVelocity;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_SoftBodyVertex_mVelocity_Set(
  JoltC_SoftBodyVertex_t * self,
  JoltC_Vec3_t * mVelocity
) {
  SoftBodyVertex * selfCpp = static_cast<SoftBodyVertex *>(self->obj);
  selfCpp->mVelocity = *static_cast<Vec3 *>(mVelocity->obj);
}

float JoltC_SoftBodyVertex_mInvMass_Get(
  JoltC_SoftBodyVertex_t * self
) {
  SoftBodyVertex * selfCpp = static_cast<SoftBodyVertex *>(self->obj);
  return selfCpp->mInvMass;
}

void JoltC_SoftBodyVertex_mInvMass_Set(
  JoltC_SoftBodyVertex_t * self,
  float mInvMass
) {
  SoftBodyVertex * selfCpp = static_cast<SoftBodyVertex *>(self->obj);
  selfCpp->mInvMass = mInvMass;
}

//endregion


#ifdef __cplusplus
}
#endif
