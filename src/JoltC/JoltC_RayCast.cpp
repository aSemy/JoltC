#include "JoltC/JoltC_RayCast.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_RayCast_t * JoltC_RayCast_new_0() {
  JoltC_RayCast_t * cInstance = new JoltC_RayCast_t();
  RayCast * cppInstance = new RayCast();
  cInstance->obj = cppInstance;
  return cInstance;
};

JoltC_RayCast_t * JoltC_RayCast_new_1(
  const JoltC_Vec3_t * inOrigin,
  const JoltC_Vec3_t * inDirection
) {
  JoltC_RayCast_t * cInstance = new JoltC_RayCast_t();
  RayCast * cppInstance = new RayCast(
    *reinterpret_cast<Vec3 *>(inOrigin->obj),
    *reinterpret_cast<Vec3 *>(inDirection->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

const JoltC_RayCast_t * JoltC_RayCast_Transformed(
  JoltC_RayCast_t * self,
  const JoltC_Mat44_t * inTransform
) {
  RayCast * selfCpp = static_cast<RayCast *>(self->obj);
  const RayCast resultValue = selfCpp->Transformed(
  *reinterpret_cast<Mat44 *>(inTransform->obj)
  );
  const RayCast* result = new RayCast(resultValue);
  return reinterpret_cast<const JoltC_RayCast_t *>(result);
};

const JoltC_RayCast_t * JoltC_RayCast_Translated(
  JoltC_RayCast_t * self,
  const JoltC_Vec3_t * inTranslation
) {
  RayCast * selfCpp = static_cast<RayCast *>(self->obj);
  const RayCast resultValue = selfCpp->Translated(
  *reinterpret_cast<Vec3 *>(inTranslation->obj)
  );
  const RayCast* result = new RayCast(resultValue);
  return reinterpret_cast<const JoltC_RayCast_t *>(result);
};

const JoltC_Vec3_t * JoltC_RayCast_GetPointOnRay(
  JoltC_RayCast_t * self,
  float inFraction
) {
  RayCast * selfCpp = static_cast<RayCast *>(self->obj);
  const Vec3 resultValue = selfCpp->GetPointOnRay(
  inFraction
  );
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JoltC_Vec3_t *>(result);
};

//endregion

//region properties

JoltC_Vec3_t * JoltC_RayCast_mOrigin_Get(
  JoltC_RayCast_t * self
) {
  RayCast * selfCpp = static_cast<RayCast *>(self->obj);
  Vec3 resultValue = selfCpp->mOrigin;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_RayCast_mOrigin_Set(
  JoltC_RayCast_t * self,
  JoltC_Vec3_t * mOrigin
) {
  RayCast * selfCpp = static_cast<RayCast *>(self->obj);
  selfCpp->mOrigin = *reinterpret_cast<Vec3 *>(mOrigin->obj);
};

JoltC_Vec3_t * JoltC_RayCast_mDirection_Get(
  JoltC_RayCast_t * self
) {
  RayCast * selfCpp = static_cast<RayCast *>(self->obj);
  Vec3 resultValue = selfCpp->mDirection;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_RayCast_mDirection_Set(
  JoltC_RayCast_t * self,
  JoltC_Vec3_t * mDirection
) {
  RayCast * selfCpp = static_cast<RayCast *>(self->obj);
  selfCpp->mDirection = *reinterpret_cast<Vec3 *>(mDirection->obj);
};

//endregion

#ifdef __cplusplus
}
#endif

