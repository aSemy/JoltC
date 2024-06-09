#include "JoltC/JoltC_RRayCast.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `RRayCast` instance.
 */
JoltC_RRayCast_t * JoltC_RRayCast_new_0() {
  JoltC_RRayCast_t * cInstance = new JoltC_RRayCast_t();
  RRayCast * cppInstance = new RRayCast();
  cInstance->obj = cppInstance;
  return cInstance;
};

/**
  Construct a new `RRayCast` instance.
 */
JoltC_RRayCast_t * JoltC_RRayCast_new_1(
  JoltC_RVec3_t * inOrigin,
  JoltC_Vec3_t * inDirection
) {
  const RVec3 * inOriginCpp = static_cast<const RVec3 *>(inOrigin->obj);
  const Vec3 * inDirectionCpp = static_cast<const Vec3 *>(inDirection->obj);
  JoltC_RRayCast_t * cInstance = new JoltC_RRayCast_t();
  RRayCast * cppInstance = new RRayCast(
    *inOriginCpp,
    *inDirectionCpp
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

JoltC_RRayCast_t * JoltC_RRayCast_Transformed(
  JoltC_RRayCast_t * self,
  JoltC_RMat44_t * inTransform
) {
  RRayCast * selfCpp = static_cast<RRayCast *>(self->obj);
  const RMat44 * inTransformCpp = static_cast<const RMat44 *>(inTransform->obj);
  RRayCast * resultPtr = new RRayCast();
  *resultPtr = selfCpp->Transformed(
    *inTransformCpp
  );
  JoltC_RRayCast_t * result = new JoltC_RRayCast_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_RRayCast_t * JoltC_RRayCast_Translated(
  JoltC_RRayCast_t * self,
  JoltC_RVec3_t * inTranslation
) {
  RRayCast * selfCpp = static_cast<RRayCast *>(self->obj);
  const RVec3 * inTranslationCpp = static_cast<const RVec3 *>(inTranslation->obj);
  RRayCast * resultPtr = new RRayCast();
  *resultPtr = selfCpp->Translated(
    *inTranslationCpp
  );
  JoltC_RRayCast_t * result = new JoltC_RRayCast_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_RVec3_t * JoltC_RRayCast_GetPointOnRay(
  JoltC_RRayCast_t * self,
  float inFraction
) {
  RRayCast * selfCpp = static_cast<RRayCast *>(self->obj);
  RVec3 * resultPtr = new RVec3();
  *resultPtr = selfCpp->GetPointOnRay(
    inFraction
  );
  JoltC_RVec3_t * result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

//endregion

//region properties

JoltC_RVec3_t * JoltC_RRayCast_mOrigin_Get(
  JoltC_RRayCast_t * self
) {
  RRayCast * selfCpp = static_cast<RRayCast *>(self->obj);
  RVec3 * resultPtr = new RVec3();
  *resultPtr = selfCpp->mOrigin;
  JoltC_RVec3_t * result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_RRayCast_mOrigin_Set(
  JoltC_RRayCast_t * self,
  JoltC_RVec3_t * mOrigin
) {
  RRayCast * selfCpp = static_cast<RRayCast *>(self->obj);
  selfCpp->mOrigin = *static_cast<RVec3 *>(mOrigin->obj);
};

JoltC_Vec3_t * JoltC_RRayCast_mDirection_Get(
  JoltC_RRayCast_t * self
) {
  RRayCast * selfCpp = static_cast<RRayCast *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mDirection;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_RRayCast_mDirection_Set(
  JoltC_RRayCast_t * self,
  JoltC_Vec3_t * mDirection
) {
  RRayCast * selfCpp = static_cast<RRayCast *>(self->obj);
  selfCpp->mDirection = *static_cast<Vec3 *>(mDirection->obj);
};

//endregion

#ifdef __cplusplus
}
#endif

