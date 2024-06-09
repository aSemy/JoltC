#include "JoltC/JoltC_RayCast.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `RayCast` instance.
 */
JoltC_RayCast_t * JoltC_RayCast_new_0() {
  JoltC_RayCast_t * cInstance = new JoltC_RayCast_t();
  RayCast * cppInstance = new RayCast();
  cInstance->obj = cppInstance;
  return cInstance;
};

/**
  Construct a new `RayCast` instance.
 */
JoltC_RayCast_t * JoltC_RayCast_new_1(
  JoltC_Vec3_t * inOrigin,
  JoltC_Vec3_t * inDirection
) {
  const Vec3 * inOriginCpp = static_cast<const Vec3 *>(inOrigin->obj);
  const Vec3 * inDirectionCpp = static_cast<const Vec3 *>(inDirection->obj);
  JoltC_RayCast_t * cInstance = new JoltC_RayCast_t();
  RayCast * cppInstance = new RayCast(
    *inOriginCpp,
    *inDirectionCpp
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

JoltC_RayCast_t * JoltC_RayCast_Transformed(
  JoltC_RayCast_t * self,
  JoltC_Mat44_t * inTransform
) {
  RayCast * selfCpp = static_cast<RayCast *>(self->obj);
  const Mat44 * inTransformCpp = static_cast<const Mat44 *>(inTransform->obj);
  RayCast * resultPtr = new RayCast();
  *resultPtr = selfCpp->Transformed(
    *inTransformCpp
  );
  JoltC_RayCast_t * result = new JoltC_RayCast_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_RayCast_t * JoltC_RayCast_Translated(
  JoltC_RayCast_t * self,
  JoltC_Vec3_t * inTranslation
) {
  RayCast * selfCpp = static_cast<RayCast *>(self->obj);
  const Vec3 * inTranslationCpp = static_cast<const Vec3 *>(inTranslation->obj);
  RayCast * resultPtr = new RayCast();
  *resultPtr = selfCpp->Translated(
    *inTranslationCpp
  );
  JoltC_RayCast_t * result = new JoltC_RayCast_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_RayCast_GetPointOnRay(
  JoltC_RayCast_t * self,
  float inFraction
) {
  RayCast * selfCpp = static_cast<RayCast *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetPointOnRay(
    inFraction
  );
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

//endregion

//region properties

JoltC_Vec3_t * JoltC_RayCast_mOrigin_Get(
  JoltC_RayCast_t * self
) {
  RayCast * selfCpp = static_cast<RayCast *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mOrigin;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_RayCast_mOrigin_Set(
  JoltC_RayCast_t * self,
  JoltC_Vec3_t * mOrigin
) {
  RayCast * selfCpp = static_cast<RayCast *>(self->obj);
  selfCpp->mOrigin = *static_cast<Vec3 *>(mOrigin->obj);
};

JoltC_Vec3_t * JoltC_RayCast_mDirection_Get(
  JoltC_RayCast_t * self
) {
  RayCast * selfCpp = static_cast<RayCast *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mDirection;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_RayCast_mDirection_Set(
  JoltC_RayCast_t * self,
  JoltC_Vec3_t * mDirection
) {
  RayCast * selfCpp = static_cast<RayCast *>(self->obj);
  selfCpp->mDirection = *static_cast<Vec3 *>(mDirection->obj);
};

//endregion

#ifdef __cplusplus
}
#endif

