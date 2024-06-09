#include "JoltC/JoltC_RShapeCast.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `RShapeCast` instance.
 */
JoltC_RShapeCast_t * JoltC_RShapeCast_new(
  JoltC_Shape_t * inShape,
  JoltC_Vec3_t * inScale,
  JoltC_RMat44_t * inCenterOfMassStart,
  JoltC_Vec3_t * inDirection
) {
  const Shape * inShapeCpp = static_cast<const Shape *>(inShape->obj);
  const Vec3 * inScaleCpp = static_cast<const Vec3 *>(inScale->obj);
  const RMat44 * inCenterOfMassStartCpp = static_cast<const RMat44 *>(inCenterOfMassStart->obj);
  const Vec3 * inDirectionCpp = static_cast<const Vec3 *>(inDirection->obj);
  JoltC_RShapeCast_t * cInstance = new JoltC_RShapeCast_t();
  RShapeCast * cppInstance = new RShapeCast(
    inShapeCpp,
    *inScaleCpp,
    *inCenterOfMassStartCpp,
    *inDirectionCpp
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

JoltC_RVec3_t * JoltC_RShapeCast_GetPointOnRay(
  JoltC_RShapeCast_t * self,
  float inFraction
) {
  RShapeCast * selfCpp = static_cast<RShapeCast *>(self->obj);
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

JoltC_Shape_t * JoltC_RShapeCast_mShape_Get(
  JoltC_RShapeCast_t * self
) {
  RShapeCast * selfCpp = static_cast<RShapeCast *>(self->obj);
  const Shape * resultPtr = selfCpp->mShape;
  JoltC_Shape_t * result = new JoltC_Shape_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_Vec3_t * JoltC_RShapeCast_mScale_Get(
  JoltC_RShapeCast_t * self
) {
  RShapeCast * selfCpp = static_cast<RShapeCast *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mScale;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_RMat44_t * JoltC_RShapeCast_mCenterOfMassStart_Get(
  JoltC_RShapeCast_t * self
) {
  RShapeCast * selfCpp = static_cast<RShapeCast *>(self->obj);
  RMat44 * resultPtr = new RMat44();
  *resultPtr = selfCpp->mCenterOfMassStart;
  JoltC_RMat44_t * result = new JoltC_RMat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_RShapeCast_mDirection_Get(
  JoltC_RShapeCast_t * self
) {
  RShapeCast * selfCpp = static_cast<RShapeCast *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mDirection;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

//endregion

#ifdef __cplusplus
}
#endif

