#include "JoltC/JoltC_ShapeCast.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `ShapeCast` instance.
 */
JoltC_ShapeCast_t * JoltC_ShapeCast_new(
  JoltC_Shape_t * inShape,
  JoltC_Vec3_t * inScale,
  JoltC_Mat44_t * inCenterOfMassStart,
  JoltC_Vec3_t * inDirection
) {
  const Shape * inShapeCpp = static_cast<const Shape *>(inShape->obj);
  const Vec3 * inScaleCpp = static_cast<const Vec3 *>(inScale->obj);
  const Mat44 * inCenterOfMassStartCpp = static_cast<const Mat44 *>(inCenterOfMassStart->obj);
  const Vec3 * inDirectionCpp = static_cast<const Vec3 *>(inDirection->obj);
  JoltC_ShapeCast_t * cInstance = new JoltC_ShapeCast_t();
  ShapeCast * cppInstance = new ShapeCast(
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

JoltC_Vec3_t * JoltC_ShapeCast_GetPointOnRay(
  JoltC_ShapeCast_t * self,
  float inFraction
) {
  ShapeCast * selfCpp = static_cast<ShapeCast *>(self->obj);
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

JoltC_Shape_t * JoltC_ShapeCast_mShape_Get(
  JoltC_ShapeCast_t * self
) {
  ShapeCast * selfCpp = static_cast<ShapeCast *>(self->obj);
  const Shape * resultPtr = selfCpp->mShape;
  JoltC_Shape_t * result = new JoltC_Shape_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_Vec3_t * JoltC_ShapeCast_mScale_Get(
  JoltC_ShapeCast_t * self
) {
  ShapeCast * selfCpp = static_cast<ShapeCast *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mScale;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Mat44_t * JoltC_ShapeCast_mCenterOfMassStart_Get(
  JoltC_ShapeCast_t * self
) {
  ShapeCast * selfCpp = static_cast<ShapeCast *>(self->obj);
  Mat44 * resultPtr = new Mat44();
  *resultPtr = selfCpp->mCenterOfMassStart;
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_ShapeCast_mDirection_Get(
  JoltC_ShapeCast_t * self
) {
  ShapeCast * selfCpp = static_cast<ShapeCast *>(self->obj);
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

