#include "JoltC/JPC_RRayCast.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_RRayCast_t * JPC_RRayCast_new_0() {
  JPC_RRayCast_t * cInstance = new JPC_RRayCast_t();
  RRayCast * cppInstance = new RRayCast();
  cInstance->obj = cppInstance;
  return cInstance;
};

JPC_RRayCast_t * JPC_RRayCast_new_1(
  const JPC_RVec3_t * inOrigin,
  const JPC_Vec3_t * inDirection
) {
  JPC_RRayCast_t * cInstance = new JPC_RRayCast_t();
  RRayCast * cppInstance = new RRayCast(
    *reinterpret_cast<RVec3 *>(inOrigin->obj),
    *reinterpret_cast<Vec3 *>(inDirection->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

const JPC_RRayCast_t * JPC_RRayCast_Transformed(
  JPC_RRayCast_t * self,
  const JPC_RMat44_t * inTransform
) {
  RRayCast * selfCpp = static_cast<RRayCast *>(self->obj);
  const RRayCast resultValue = selfCpp->Transformed(
  *reinterpret_cast<RMat44 *>(inTransform->obj)
  );
  const RRayCast* result = new RRayCast(resultValue);
  return reinterpret_cast<const JPC_RRayCast_t *>(result);
};

const JPC_RRayCast_t * JPC_RRayCast_Translated(
  JPC_RRayCast_t * self,
  const JPC_RVec3_t * inTranslation
) {
  RRayCast * selfCpp = static_cast<RRayCast *>(self->obj);
  const RRayCast resultValue = selfCpp->Translated(
  *reinterpret_cast<RVec3 *>(inTranslation->obj)
  );
  const RRayCast* result = new RRayCast(resultValue);
  return reinterpret_cast<const JPC_RRayCast_t *>(result);
};

const JPC_RVec3_t * JPC_RRayCast_GetPointOnRay(
  JPC_RRayCast_t * self,
  float inFraction
) {
  RRayCast * selfCpp = static_cast<RRayCast *>(self->obj);
  const RVec3 resultValue = selfCpp->GetPointOnRay(
  inFraction
  );
  const RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<const JPC_RVec3_t *>(result);
};

//endregion functions

//region properties

JPC_RVec3_t * JPC_RRayCast_mOrigin_Get(
  JPC_RRayCast_t * self
) {
  RRayCast * selfCpp = static_cast<RRayCast *>(self->obj);
  RVec3 resultValue = selfCpp->mOrigin;
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

void JPC_RRayCast_mOrigin_Set(
  JPC_RRayCast_t * self,
  JPC_RVec3_t * mOrigin
) {
  RRayCast * selfCpp = static_cast<RRayCast *>(self->obj);
  selfCpp->mOrigin = *reinterpret_cast<RVec3 *>(mOrigin->obj);
};

JPC_Vec3_t * JPC_RRayCast_mDirection_Get(
  JPC_RRayCast_t * self
) {
  RRayCast * selfCpp = static_cast<RRayCast *>(self->obj);
  Vec3 resultValue = selfCpp->mDirection;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_RRayCast_mDirection_Set(
  JPC_RRayCast_t * self,
  JPC_Vec3_t * mDirection
) {
  RRayCast * selfCpp = static_cast<RRayCast *>(self->obj);
  selfCpp->mDirection = *reinterpret_cast<Vec3 *>(mDirection->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

