#include "JoltC/JPC_RayCast.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_RayCast_t * JPC_RayCast_new_0() {
  JPC_RayCast_t * cInstance = new JPC_RayCast_t();
  RayCast * cppInstance = new RayCast();
  cInstance->obj = cppInstance;
  return cInstance;
};

JPC_RayCast_t * JPC_RayCast_new_1(
  const JPC_Vec3_t * inOrigin,
  const JPC_Vec3_t * inDirection
) {
  JPC_RayCast_t * cInstance = new JPC_RayCast_t();
  RayCast * cppInstance = new RayCast(
    *reinterpret_cast<Vec3 *>(inOrigin->obj),
    *reinterpret_cast<Vec3 *>(inDirection->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

const JPC_RayCast_t * JPC_RayCast_Transformed(
  JPC_RayCast_t * self,
  const JPC_Mat44_t * inTransform
) {
  RayCast * selfCpp = static_cast<RayCast *>(self->obj);
  const RayCast resultValue = selfCpp->Transformed(
  *reinterpret_cast<Mat44 *>(inTransform->obj)
  );
  const RayCast* result = new RayCast(resultValue);
  return reinterpret_cast<const JPC_RayCast_t *>(result);
};

const JPC_RayCast_t * JPC_RayCast_Translated(
  JPC_RayCast_t * self,
  const JPC_Vec3_t * inTranslation
) {
  RayCast * selfCpp = static_cast<RayCast *>(self->obj);
  const RayCast resultValue = selfCpp->Translated(
  *reinterpret_cast<Vec3 *>(inTranslation->obj)
  );
  const RayCast* result = new RayCast(resultValue);
  return reinterpret_cast<const JPC_RayCast_t *>(result);
};

const JPC_Vec3_t * JPC_RayCast_GetPointOnRay(
  JPC_RayCast_t * self,
  float inFraction
) {
  RayCast * selfCpp = static_cast<RayCast *>(self->obj);
  const Vec3 resultValue = selfCpp->GetPointOnRay(
  inFraction
  );
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JPC_Vec3_t *>(result);
};

//endregion functions

//region properties

JPC_Vec3_t * JPC_RayCast_mOrigin_Get(
  JPC_RayCast_t * self
) {
  RayCast * selfCpp = static_cast<RayCast *>(self->obj);
  Vec3 resultValue = selfCpp->mOrigin;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_RayCast_mOrigin_Set(
  JPC_RayCast_t * self,
  JPC_Vec3_t * mOrigin
) {
  RayCast * selfCpp = static_cast<RayCast *>(self->obj);
  selfCpp->mOrigin = *reinterpret_cast<Vec3 *>(mOrigin->obj);
};

JPC_Vec3_t * JPC_RayCast_mDirection_Get(
  JPC_RayCast_t * self
) {
  RayCast * selfCpp = static_cast<RayCast *>(self->obj);
  Vec3 resultValue = selfCpp->mDirection;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_RayCast_mDirection_Set(
  JPC_RayCast_t * self,
  JPC_Vec3_t * mDirection
) {
  RayCast * selfCpp = static_cast<RayCast *>(self->obj);
  selfCpp->mDirection = *reinterpret_cast<Vec3 *>(mDirection->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

