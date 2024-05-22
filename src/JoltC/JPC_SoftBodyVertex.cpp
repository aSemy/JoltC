#include "JoltC/JPC_SoftBodyVertex.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region properties

JPC_Vec3_t * JPC_SoftBodyVertex_mPreviousPosition_Get(
  JPC_SoftBodyVertex_t * self
) {
  SoftBodyVertex * selfCpp = static_cast<SoftBodyVertex *>(self->obj);
  Vec3 resultValue = selfCpp->mPreviousPosition;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_SoftBodyVertex_mPreviousPosition_Set(
  JPC_SoftBodyVertex_t * self,
  JPC_Vec3_t * mPreviousPosition
) {
  SoftBodyVertex * selfCpp = static_cast<SoftBodyVertex *>(self->obj);
  selfCpp->mPreviousPosition = *reinterpret_cast<Vec3 *>(mPreviousPosition->obj);
};

JPC_Vec3_t * JPC_SoftBodyVertex_mPosition_Get(
  JPC_SoftBodyVertex_t * self
) {
  SoftBodyVertex * selfCpp = static_cast<SoftBodyVertex *>(self->obj);
  Vec3 resultValue = selfCpp->mPosition;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_SoftBodyVertex_mPosition_Set(
  JPC_SoftBodyVertex_t * self,
  JPC_Vec3_t * mPosition
) {
  SoftBodyVertex * selfCpp = static_cast<SoftBodyVertex *>(self->obj);
  selfCpp->mPosition = *reinterpret_cast<Vec3 *>(mPosition->obj);
};

JPC_Vec3_t * JPC_SoftBodyVertex_mVelocity_Get(
  JPC_SoftBodyVertex_t * self
) {
  SoftBodyVertex * selfCpp = static_cast<SoftBodyVertex *>(self->obj);
  Vec3 resultValue = selfCpp->mVelocity;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_SoftBodyVertex_mVelocity_Set(
  JPC_SoftBodyVertex_t * self,
  JPC_Vec3_t * mVelocity
) {
  SoftBodyVertex * selfCpp = static_cast<SoftBodyVertex *>(self->obj);
  selfCpp->mVelocity = *reinterpret_cast<Vec3 *>(mVelocity->obj);
};

float JPC_SoftBodyVertex_mInvMass_Get(
  JPC_SoftBodyVertex_t * self
) {
  SoftBodyVertex * selfCpp = static_cast<SoftBodyVertex *>(self->obj);
  float result = selfCpp->mInvMass;
  return result;
};

void JPC_SoftBodyVertex_mInvMass_Set(
  JPC_SoftBodyVertex_t * self,
  float mInvMass
) {
  SoftBodyVertex * selfCpp = static_cast<SoftBodyVertex *>(self->obj);
  selfCpp->mInvMass = mInvMass;
};

//endregion properties

#ifdef __cplusplus
}
#endif

